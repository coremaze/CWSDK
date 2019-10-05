#ifndef WORLD_H
#define WORLD_H

#include "../msvc/string.h"
#include "Creature.h"
#include "Database.h"
#include <windows.h>
#include "../IDA/types.h"

namespace cube {
class World {
    public:
      void *vtable;
      int day;
      float time;
      _BYTE gap10[416];
      cube::World *self_ptr;
      _BYTE gap1A8[72];
      msvc::string world_name;
      int seed;
      _BYTE gap224[404];
      cube::Database database;
      CRITICAL_SECTION critical_section_0;
      CRITICAL_SECTION critical_section_1;
      CRITICAL_SECTION critical_section_2;
      _BYTE gap440[8];
      cube::Creature *local_creature;
      _BYTE gap450[16];
      BYTE zone_list[24];
      _BYTE gap478[207];
      char end;
    };
}

#endif // WORLD_H
