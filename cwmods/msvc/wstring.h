#ifndef MSVC_WSTRING_H
#define MSVC_WSTRING_H
#include <cstdint>

namespace msvc {
    union wstring_data_union {
        wchar_t sbo[8];
        wchar_t *ptr;
    };
    class wstring {
        public:
            wstring_data_union data;
            int64_t size;
            int64_t cap;

            wstring(const wchar_t* str);
            ~wstring();
    };
};


#endif // MSVC_WSTRING_H
