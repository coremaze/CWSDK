#ifndef WORLDMAP_H
#define WORLDMAP_H

#include "../IDA/types.h"
#include "../common/LongVector3.h"
#include <windows.h>

namespace cube {
class WorldMap {
    public:
        void *vtable;
        _BYTE gap8[248];
        LongVector3 cursor_position;
        _BYTE gap9[136];
        CRITICAL_SECTION critical_section_0;
        CRITICAL_SECTION critical_section_1;
    };
}

#endif // WORLDMAP_H
