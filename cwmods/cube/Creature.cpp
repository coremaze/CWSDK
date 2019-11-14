#include "Creature.h"
#include "../cwsdk.h"

cube::Creature* cube::Creature::Create(__int64 id) {
    cube::Creature* newCreature = (cube::Creature*)new char[sizeof(cube::Creature)];
    newCreature->ctor(&id);
    return newCreature;
}

cube::Creature* cube::Creature::ctor(__int64* id) {
    return ((cube::Creature*(*)(cube::Creature*, __int64*))CWOffset(0x4CE80))(this, id);
}
