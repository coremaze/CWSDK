#ifndef HOST_H
#define HOST_H

#include "../msvc/string.h"
#include "World.h"
namespace cube {
class Host {
    public:
      void *vtable;
      cube::World world;
      _BYTE gap550[144];
      CRITICAL_SECTION critical_section_0;
      CRITICAL_SECTION critical_section_1;
    };
}

#endif // HOST_H
