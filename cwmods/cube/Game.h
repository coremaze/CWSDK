#ifndef GAME_H
#define GAME_H

#include "../IDA/types.h"

#include "Speech.h"
#include "World.h"
#include "Host.h"
#include "ChatWidget.h"
#include "WorldMap.h"
#include "../gfx/D3D11Renderer.h"
#include "Creature.h"



namespace cube {
    class Game {
        public:
            void *vtable;
            cube::World *world;
            cube::WorldMap *worldmap;
            gfx::D3D11Renderer *renderer;
            __int64 plasma_engine;
            __int64 xaudio2_engine;
            _BYTE gap30[32];
            cube::Speech speech;
            __int64 plasma_node_1;
            __int64 plasma_node_2;
            __int64 start_menu_widget;
            __int64 plasma_node_3;
            _BYTE gap138[24];
            __int64 plasma_node_4;
            __int64 plasma_node_5;
            __int64 plasma_node_6;
            __int64 plasma_node_7;
            _BYTE gap170[552];
            cube::ChatWidget *chat_widget;
            _BYTE gap3A0[696];
            void *controlswidget_ptr;
            _BYTE gap660[136];
            cube::Host host;
            _BYTE gapCFA[3158];
            void *onP2PSessionRequest;
            char gap1960[536];
            int fullscreen;
            int width;
            int height;
            int refresh_rate;
            int field_1B88;
            int render_distance;
            int cpu_performance;
            int sound_fx_volume;
            int music_volume;
            int camera_speed;
            int camera_smoothness;
            int invert_y_axis;
            int language;
            int min_timestep;
            int field_1BB0;
            int field_1BB4;
            int rarity_coding;
            _BYTE gap1BBC[1108];
            msvc::string *current_music_file;
            _BYTE gap2010[60];
            int seed;
            msvc::string world_name;
            _BYTE gap2070[503];
            char end;

            cube::Creature* GetPlayer();
        };
    Game* GetGame();
}

#endif // GAME_H
