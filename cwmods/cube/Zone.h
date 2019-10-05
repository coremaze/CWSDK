#ifndef ZONE_H
#define ZONE_H

#include "../IDA/types.h"
#include "World.h"
#include "Field.h"
#include "../gfx/Chunk.h"

namespace cube {
class Zone {
    public:
        void *vtable;
        cube::World *world;
        int x;
        int y;
        _BYTE gap18[424];
        gfx::Chunk chunk;
        _BYTE gap448[208];
        cube::Field fields[4096];
    };
}

#endif // ZONE_H
