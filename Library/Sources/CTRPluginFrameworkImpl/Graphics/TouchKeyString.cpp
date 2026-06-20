#include <Headers.hpp>

namespace CTRPluginFramework {
    TouchKeyString::TouchKeyString(IntRect ui, bool isEnabled) {
        _uiProperties = ui;
        _posY = _uiProperties.leftTop.y;
        _enabled = isEnabled;
        _isPressed = false;
        _wasPressed = false;
        _isForcePressed = false;
        _execute = false;
    }

    TouchKeyString::TouchKeyString(const string &content, IntRect ui, bool isEnabled)
        : TouchKeyString(ui, isEnabled)

        {
            _content = content;
            _isIcon = false;
            _fullContent = content; // keep the original so the marquee can reveal the rest
            _fullWidth = Renderer::GetTextSize(content.c_str());
            _contentLength = Renderer::GetTextSize(_content.c_str());

            while ((int)(_contentLength) > ui.size.x) {
                if (_content.size() < 1)
                    break;

                _content.pop_back();
                _contentLength = Renderer::GetTextSize(_content.c_str());
            }

            _posX = ((_uiProperties.size.x - (int)_contentLength) >> 1) + _uiProperties.leftTop.x;
        }

    TouchKeyString::TouchKeyString(const CustomIcon &icon, IntRect ui, bool isEnabled)
        : TouchKeyString(ui, isEnabled)

        {
            _icon = icon;
            _isIcon = true;
            _posX = _uiProperties.leftTop.x;
        }

    void TouchKeyString::Enable(bool isEnabled) {
        _enabled = isEnabled;
    }

    void TouchKeyString::ForcePressed(bool force) {
        _isForcePressed = force;
    }

    bool TouchKeyString::CanUse(void) {
        return !(!_enabled || (_isIcon && !_icon.isEnabled) || (!_isIcon && _content.empty()));
    }

    // Pixels of the full text that don't fit the visible box (left-aligned with a small padding).
    // The PAD here must match the left padding used by the marquee draw below.
    float TouchKeyString::Overflow(void) const {
        const float PAD = 6.f;
        return _fullWidth - ((float)_uiProperties.size.x - 1.f - PAD);
    }

    void TouchKeyString::Draw(float marquee) {
        // If key is disabled
        if (!CanUse())
            return;

        const auto &theme = Preferences::Settings.CustomKeyboard;
        const Color &background = (_isPressed || _isForcePressed) ? theme.KeyBackgroundPressed : theme.KeyBackground;
        const Color &text = (_isPressed || _isForcePressed) ? theme.KeyTextPressed : theme.KeyText;

        // Background
        Renderer::DrawRect(_uiProperties, background);

        if (!_isIcon) {
            int posY = ((_uiProperties.size.y - 16) >> 1) + _uiProperties.leftTop.y;
            int maxX = _uiProperties.leftTop.x + _uiProperties.size.x - 1;

            // Selected row whose name overflows: slide the FULL text to reveal the rest.
            if (marquee >= 0.f && _isForcePressed && Overflow() > 0.f) {
                int left = _uiProperties.leftTop.x + 6; // PAD (matches Overflow)
                Renderer::DrawSysString(_fullContent.c_str(), left, posY, maxX, text, marquee);
            }

            else {
                int posX = _posX;
                Renderer::DrawSysString(_content.c_str(), posX, posY, maxX, text);
            }
        }

        else Icon::DrawCustomIcon(_icon, _posX, _posY);
    }

    void TouchKeyString::Update(const bool isTouchDown, const IntVector &touchPos) {
        if (!CanUse())
            return;

        bool isTouched = _uiProperties.Contains(touchPos);

        if (_isPressed && !isTouchDown) {
            _isPressed = false;
            _execute = true;
            return;
        }

        _wasPressed = _isPressed;
        _isPressed = isTouchDown && isTouched;
    }

    void TouchKeyString::Scroll(float amount) {
        _posY += amount;
        int &posY = _uiProperties.leftTop.y;
        posY = _posY;
    }

    void TouchKeyString::GetPosition(u16 &posX, float& posY) {
        posX = _posX;
        posY = _posY;
    }

    void TouchKeyString::SetPosition(u16 posX, float posY) {
        if (posX != 0xFFFF)
            _posX = posX;

        _posY = posY;
    }

    int TouchKeyString::operator()(void) {
        if (CanUse() && _execute) {
            _execute = false;
            _wasPressed = _isPressed;
            return (1);
        }

        return (-1);
    }
}