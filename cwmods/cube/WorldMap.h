#ifndef WORLDMAP_H
#define WORLDMAP_H

#include "../IDA/types.h"
#include <windows.h>

namespace cube {
class WorldMap {
    public:
        void *vtable;
        _BYTE gap8[408];
        CRITICAL_SECTION critical_section_0;
        CRITICAL_SECTION critical_section_1;
    };
}

#endif // WORLDMAP_H
