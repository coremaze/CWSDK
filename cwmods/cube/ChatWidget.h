#ifndef CHATWIDGET_H
#define CHATWIDGET_H
#include "FloatColor.h"
#include "../msvc/wstring.h"
namespace cube {
class ChatWidget {
    public:
        void PrintMessage(wchar_t* message, FloatColor* color);
        void PrintMessage(wchar_t* message);
        void PrintMessage(wchar_t* message, char red, char green, char blue);
    };
}

#endif // CHATWIDGET_H
