#ifndef WORLD_H
#define WORLD_H

#include "../msvc/string.h"
#include "Creature.h"
#include "../IDA/types.h"

namespace cube {
class World {
    public:
        void *vtable;
        int day;
        float time;
        _BYTE gap10[400];
        cube::World *self_ptr;
        _BYTE gap1A8[72];
        msvc::string world_name;
        int seed;
        _BYTE gap214[548];
        cube::Creature *local_creature;
        _BYTE gap440[247];
        char end;
    };
}

#endif // WORLD_H
