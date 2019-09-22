#ifndef CREATURE_H
#define CREATURE_H

#include "../IDA/types.h"
#include "../common/LongVector3.h"
#include "../common/FloatVector3.h"
#include "../common/ByteRGBA.h"

namespace cube {
    class Creature {
        public:
            void *vtable;
            __int64 id;
            LongVector3 position;
            float pitch;
            float roll;
            float yaw;
            FloatVector3 velocity;
            FloatVector3 acceleration;
            FloatVector3 retreat;
            float head_rotation;
            unsigned int flags;
            char stats_based_on_level;
            __declspec(align(8)) unsigned int current_ability;
            float time_since_ability;
            int hit_combo;
            float time_since_hit;
            __int16 field_78;
            ByteRGBA hair_color;
            _BYTE gap7E[198];
            unsigned int level;
            _BYTE gap148[4];
            char classType;
            _BYTE gap14D[2575];
            int climbing_speed;
            int swimming_speed;
            int diving_skill;
            int riding_speed;
            int hang_gliding_speed;
            int sailing_speed;
            int lamp_diameter;
            _BYTE gapB78[2687];
            char end;
    };
}

#endif // CREATURE_H
