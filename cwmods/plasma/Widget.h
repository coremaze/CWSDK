#ifndef WIDGET_H
#define WIDGET_H

#include "../IDA/types.h"
#include "NamedObject.h"

namespace plasma {
    class Widget : public plasma::NamedObject {
        public:
            void *vtable;
            float scale;
            _BYTE gap44[20];
            __int64 d3d11_render_surface_ptr;
            float float_60;
            float float_64;
            _BYTE gap68[8];
            float float_70;
            float float_74;
            _BYTE gap78[8];
            float float_80;
            float float_84;
            _BYTE gap88[8];
            float width;
            float height;
            _BYTE gap98[271];
            char end;
        };
}

#endif // WIDGET_H
