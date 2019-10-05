#ifndef NODE_H
#define NODE_H

#include "../IDA/types.h"
#include "NamedObject.h"
#include "Display.h"

namespace plasma {
    class Node : public plasma::NamedObject {
        public:
            __int64 field_38;
            __int64 field_40;
            __int64 field_48;
            __int64 field_50;
            __int64 field_58;
            __int64 field_60;
            plasma::Display *display;
            __int64 field_70;
            __int64 field_78;
            __int64 field_80;
            __int64 field_88;
            __int64 field_90;
            __int64 field_98;
            __int64 field_A0;
            __int64 field_A8;
            __int64 field_B0;
            __int64 field_B8;
            __int64 field_C0;
        };
}

#endif // NODE_H
