#ifndef WORLD_H
#define WORLD_H

#include "../msvc/string.h"
namespace cube {
class World {
    public:
        void *vtable;
        int day;
        float time;
        char gap10[496];
        msvc::string world_name;
        int seed;
        char gap224[787];
        char _end;
    };
}

#endif // WORLD_H
