#include "ChatWidget.h"
#include "../cwmods.h"

void cube::ChatWidget::PrintMessage(wchar_t* message, FloatRGBA* color){
    msvc::wstring str(message);
    ((void(*)(cube::ChatWidget*, msvc::wstring*, FloatRGBA*))CWBase()+0x258660)(this, &str, color);
}

void cube::ChatWidget::PrintMessage(wchar_t* message) {
    this->PrintMessage(message, 255, 255, 255);
}

void cube::ChatWidget::PrintMessage(wchar_t* message, char red, char green, char blue){
    float f_red = (float)red / 255.0;
    float f_green = (float)green / 255.0;
    float f_blue = (float)blue / 255.0;
    FloatRGBA color(f_red, f_green, f_blue, 1.0);
    this->PrintMessage(message, &color);
}
