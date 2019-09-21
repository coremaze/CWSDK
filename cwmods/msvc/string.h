#ifndef STRING_H
#define STRING_H
#include <cstdint>

namespace msvc {
    union data_union {
        char sbo[16];
        void* ptr;
    };

    class string {
        public:
            data_union optional_char_ptr;
            int64_t size;
            int64_t cap;
        };
}

#endif // STRING_H
