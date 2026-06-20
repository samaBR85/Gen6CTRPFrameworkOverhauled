#ifndef CTRPLUGINFRAMEWORKIMPL_TOUCHKEYSTRING_KEYBOARD_HPP
#define CTRPLUGINFRAMEWORKIMPL_TOUCHKEYSTRING_KEYBOARD_HPP

#include <Headers.h>
#include "CTRPluginFrameworkImpl/Graphics.hpp"
#include "CTRPluginFrameworkImpl/Graphics/Drawable.hpp"

namespace CTRPluginFramework {
    class TouchKeyString {
        public:
            TouchKeyString(const string &content, IntRect ui, bool enabled = true);
            TouchKeyString(const CustomIcon &icon, IntRect ui, bool isEnabled);
            ~TouchKeyString() {}

            void Enable(bool enable = true);
            void ForcePressed(bool force);
            bool CanUse(void);
            // How many pixels of the (untruncated) text overflow the visible box (>0 = needs marquee).
            float Overflow(void) const;
            // marquee >= 0 slides the FULL text by that many pixels (only when this row is selected
            // and overflows). marquee < 0 (default) keeps the normal truncated/centered draw.
            void Draw(float marquee = -1.f);
            void Update(const bool touchIsDown, const IntVector &touchPos);
            void Scroll(float amount);
            void GetPosition(u16 &posX, float& posY);
            void SetPosition(u16 posX, float posY);
            int operator()(void);

        private:
            string _content;       // truncated to fit the box (normal draw)
            string _fullContent;   // original, untruncated text (used by the marquee)
            float _fullWidth = 0.f; // pixel width of _fullContent
            CustomIcon _icon;
            IntRect _uiProperties;

            bool _isPressed;
            bool _wasPressed;
            bool _isForcePressed;
            bool _isIcon;
            bool _execute;
            bool _enabled;
            u16 _posX;
            float _contentLength;
            float _posY;

            TouchKeyString(IntRect ui, bool isEnabled);
    };
}

#endif