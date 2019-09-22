#ifndef STRING_H
#define STRING_H
#include <cstdint>

namespace msvc {
    union string_data_union {
        char sbo[16];
        void* ptr;
    };

    class string {
        public:
            string_data_union data;
            int64_t size;
            int64_t cap;
        };
}

#endif // STRING_H
