#ifndef CREATURE_H
#define CREATURE_H

#include "../IDA/types.h"
#include "../common/LongVector3.h"
#include "../common/FloatVector3.h"
#include "../common/ByteRGBA.h"
#include "../msvc/vector.h"
#include "ItemStack.h"

namespace cube {
    class Creature {

        // cube::Creature::EntityData
        class EntityData {

            // cube::Creature::EntityData::Appearance
            class Appearance {
                public:
                __int16 field_78;
                ByteRGBA hair_color;
                char padding_7E;
                char padding_7F;
                unsigned int flags2;
                float graphics_scale;
                float hitbox_scale;
                float physics_scale;
                __int16 head_model;
                __int16 hair_model;
                __int16 hands_model;
                __int16 feet_model;
                __int16 chest_model;
                __int16 tail_model;
                __int16 shoulder_model;
                __int16 wings_model;
                float head_scale;
                float chest_scale;
                float hands_scale;
                float feet_scale;
                float unknown_scale;
                float weapon_scale;
                float tail_scale;
                float shoulder_scale;
                float wing_scale;
                float chest_rotation;
                FloatVector3 hands_rotation;
                float feet_rotation;
                float wings_rotation;
                float unknown_rotation;
                FloatVector3 chest_position;
                FloatVector3 head_position;
                FloatVector3 hands_position;
                FloatVector3 feet_position;
                FloatVector3 unknown_position;
                FloatVector3 wings_position;
            };


            public:
            LongVector3 position;
            float pitch;
            float roll;
            float yaw;
            FloatVector3 velocity;
            FloatVector3 acceleration;
            FloatVector3 retreat;
            float head_rotation;
            unsigned int flags;
            char hostility_type;
            char field_61;
            char field_62;
            char field_63;
            int race;
            BYTE current_ability;
            char field_59;
            char field_5A;
            char field_5B;
            float time_since_ability;
            int hit_combo;
            float time_since_hit;
            cube::Creature::EntityData::Appearance appearance;
            __int16 binary_toggles;
            char field_11A;
            char field_11B;
            float roll_time;
            float stun_time;
            float unknown_time;
            float slowed_time;
            float sprint_time;
            int field_140;
            unsigned int level;
            int XP;
            unsigned __int8 classType;
            char specialization;
            _BYTE gap13E[10];
            char charge;
            _BYTE gap149[27];
            FloatVector3 attack_rotation;
            float HP;
            float float_184;
            float MP;
            float stealth;
            _BYTE gap180[4];
            char field_184;
            _BYTE gap185[91];
            char field_1E0;
            _BYTE gap1E1[295];
            cube::Item amulet;
            cube::Item chest_armor;
            cube::Item feet_armor;
            cube::Item hands_armor;
            cube::Item shoulder_armor;
            cube::Item left_weapon;
            cube::Item right_weapon;
            cube::Item left_ring;
            cube::Item right_ring;
            cube::Item pet;
            char name[16];
            __int64 field_958;
            char field_960;
            char field_961;
            char field_962;
            char field_963;
            int field_964;
            __int64 field_968;
        };





        public:
            void *vtable;
            __int64 id;
            cube::Creature::EntityData entity_data;
            _BYTE gap968[112];
            msvc::vector<msvc::vector<cube::ItemStack>> inventory_tabs;
            _BYTE gapA08[164];
            int gold;
            _BYTE gapAB0[172];
            int climbing_speed;
            int swimming_speed;
            int diving_skill;
            int riding_speed;
            int hang_gliding_speed;
            int sailing_speed;
            int lamp_diameter;
            _BYTE gapB78[2687];
            char end;

            static cube::Creature* Create(__int64 id);
            cube::Creature* ctor(__int64* id);
    };
}

#endif // CREATURE_H
