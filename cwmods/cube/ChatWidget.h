#ifndef CHATWIDGET_H
#define CHATWIDGET_H
#include "../common/FloatRGBA.h"
#include "../msvc/wstring.h"
#include "../plasma/Widget.h"
namespace cube {
class ChatWidget : public plasma::Widget {
    public:
        _BYTE gap1A8[24];
        msvc::wstring typebox_text;
        _BYTE gap1E0[15];
        char end;


        void PrintMessage(const wchar_t* message, FloatRGBA* color);
        void PrintMessage(const wchar_t* message);
        void PrintMessage(const wchar_t* message, char red, char green, char blue);
    };
}

#endif // CHATWIDGET_H
