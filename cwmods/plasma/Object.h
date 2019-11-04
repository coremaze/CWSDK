#ifndef OBJECT_H
#define OBJECT_H

#include "../IDA/types.h"

namespace plasma {
	class D3D11Engine;
    class Object {
        public:
            void *vtable;
            plasma::D3D11Engine *d3d11_engine;
            __int64 field_10;
        };
}

#endif // OBJECT_H
