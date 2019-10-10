#ifndef SPRITEMANAGER_H
#define SPRITEMANAGER_H

#include "../IDA/types.h"
#include <windows.h>
#include "../gfx/D3D11Graphics.h"

namespace cube {
    class SpriteManager {
        public:
            void *vtable;
            gfx::D3D11Graphics *graphics;
            void *sprite_map;
            __int64 field_18;
            __int64 field_20;
            __int64 field_28;
            __int64 field_30;
            __int64 field_38;
            __int64 field_40;
            __int64 field_48;
            __int64 field_50;
            __int64 field_58;
            __int64 field_60;
            __int64 field_68;
            __int64 field_70;
            __int64 field_78;
        };
}

#endif // SPRITEMANAGER_H
