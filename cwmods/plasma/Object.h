#ifndef OBJECT_H
#define OBJECT_H

#include "../IDA/types.h"
#include "D3D11Engine.h"

namespace plasma {
    class Object {
        public:
            void *vtable;
            plasma::D3D11Engine *d3d11_engine;
            __int64 field_10;
        };
}

#endif // OBJECT_H
