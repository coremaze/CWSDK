#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include "../IDA/types.h"
#include "../msvc/string.h"

namespace plasma {
    class Attribute {
        public:
            void *vtable;
            __int64 field_8;
            __int64 field_10;
            __int64 field_18;
            __int64 field_20;
            __int64 field_28;
            __int64 field_30;
            __int64 field_38;
            msvc::string name;
            __int64 field_60;
            __int64 field_68;
        };
}

#endif // ATTRIBUTE_H
