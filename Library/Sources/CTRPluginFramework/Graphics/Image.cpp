#include <Headers.hpp>

namespace CTRPluginFramework {
    Image::Image(void) : _img(nullptr) {}

    Image::Image(const std::string &path) : _img(nullptr) {
        LoadFromFile(path);
    }

    Image::~Image(void) {
        Clear();
    }

    bool Image::LoadFromFile(const std::string &path) {
        Clear();

        _img = new BMPImage(path);

        // A failed load (missing file, wrong depth/size) leaves IsLoaded() false -> drop it so the
        // caller can fall back to an "IMAGE NOT AVAILABLE" placeholder.
        if (_img != nullptr && !_img->IsLoaded()) {
            delete _img;
            _img = nullptr;
        }

        return IsLoaded();
    }

    bool Image::IsLoaded(void) const {
        return _img != nullptr && _img->IsLoaded();
    }

    int Image::Width(void) const {
        return _img != nullptr ? static_cast<int>(_img->Width()) : 0;
    }

    int Image::Height(void) const {
        return _img != nullptr ? static_cast<int>(_img->Height()) : 0;
    }

    void Image::Clear(void) {
        if (_img != nullptr) {
            delete _img;
            _img = nullptr;
        }
    }

    void Image::Draw(const Screen &screen, int x, int y) const {
        if (!IsLoaded())
            return;

        Renderer::SetTarget(screen.IsTop ? TOP : BOTTOM);

        const int w = static_cast<int>(_img->Width());
        const int h = static_cast<int>(_img->Height());
        const int screenW = screen.IsTop ? 400 : 320;

        // BMPImage keeps rows top-down with no in-memory padding (_rowIncrement == width * 3) and each
        // pixel as [B, G, R] (BGR_Mode after a file load). Compute the row base off data() rather than
        // Row() (which is declared inline and only defined in BMPImage.cpp).
        const u8 *base = _img->data();
        if (base == nullptr)
            return;
        const int stride = w * 3;

        // Fast path: when the sprite is fully on-screen, compute the rotated framebuffer column pointer
        // ONCE per column (w calls) and walk it, instead of re-deriving the offset for every pixel via
        // DrawPixel (w*h calls). The 3DS framebuffer is column-major: the u16 at (sx, sy) is index
        // (239 - sy + sx*240), so a column is contiguous and increasing sy steps the pointer down by one.
        // We read BGR top-down and pack to RGB565 inline (same packing BMPImage::OptimiseForRendering
        // uses). The image is NOT mutated, so it always stays BGR and the slow path below is always valid
        // -> no format-cache hazard. Plugin sprites sit at fixed on-screen spots, so this is the live path.
        if (x >= 0 && y >= 0 && x + w <= screenW && y + h <= 240) {
            ScreenImpl *scr = Renderer::GetContext()->screen;
            if (scr != nullptr) {
                for (int col = 0; col < w; ++col) {
                    u16 *colptr = reinterpret_cast<u16*>(scr->GetLeftFrameBuffer(x + col, y));
                    const u8 *px = base + col * 3;   // BGR source (col, row 0); rows are `stride` apart
                    for (int row = 0; row < h; ++row) {
                        colptr[-row] = static_cast<u16>(((px[2] & 0xF8) << 8) | ((px[1] & 0xFC) << 3) | (px[0] >> 3));
                        px += stride;
                    }
                }
                return;
            }
        }

        // Slow path (sprite partially off-screen, or framebuffer unavailable): per-pixel via DrawPixel,
        // which clips each pixel against the screen. Image is always BGR, so [B, G, R] order is correct.
        for (int row = 0; row < h; ++row) {
            const u8 *px = base + row * stride;
            for (int col = 0; col < w; ++col, px += 3)
                Renderer::DrawPixel(x + col, y + row, Color(px[2], px[1], px[0]));
        }
    }
}
