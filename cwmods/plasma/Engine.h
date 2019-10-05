#ifndef ENGINE_H
#define ENGINE_H

#include "../IDA/types.h"
#include "ObjectManager.h"

namespace plasma {
    class Engine : public plasma::ObjectManager {
        public:
            char field_20[624];
        };
}

#endif // ENGINE_H
