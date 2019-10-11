#include "wstring.h"
#include <wchar.h>

msvc::wstring::wstring(const wchar_t* str) {
    int len = wcslen(str) + 1;
    wchar_t* data;
    if (len >= 8) {
        data = new wchar_t[len];
        this->data.ptr = data;
    }
    else {
        data = this->data.sbo;
    }
    memcpy(data, str, len * sizeof(wchar_t));
    this->size = len;
    this->cap = len;

}
msvc::wstring::~wstring() {
    if (this->size >= 8) {
        delete[] this->data.ptr;
    }
}
