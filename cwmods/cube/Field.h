#ifndef FIELD_H
#define FIELD_H

#include "../IDA/types.h"

namespace cube {
class Field {
    public:
        void *vtable;
        _BYTE gap8[52];
        int base_z;
        __int64 field_40;
        __int64 field_48;
        __int64 field_50;
    };
}

#endif // FIELD_H
