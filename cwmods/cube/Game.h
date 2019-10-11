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
#include "Client.h"
#include "Database.h"

#include "GUI.h"

namespace cube {
    class Game {
        public:
            class CCallbackInternal_onP2PSessionRequest {
                public:
                    void *vtable;
                    __int64 field_8;
            };
            void *vtable;
            cube::World *world;
            cube::WorldMap *worldmap;
            gfx::D3D11Renderer *renderer;
            __int64 plasma_engine;
            __int64 xaudio2_engine;
            _BYTE gap30[32];
            cube::Speech speech;
            cube::GUI gui;
            cube::Host host;
            cube::Client client;
            _BYTE gap1770[512];
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
            _BYTE gap1BCC[204];
            CRITICAL_SECTION critical_section_0;
            CRITICAL_SECTION critical_section_1;
            CRITICAL_SECTION critical_section_2;
            CRITICAL_SECTION critical_section_3;
            CRITICAL_SECTION critical_section_4;
            _BYTE gap1D60[712];
            msvc::string *current_music_file;
            _BYTE gap2010[60];
            int seed;
            msvc::string world_name;
            __int16 gap2070;
            _BYTE gap2092[470];
            cube::Database database_0;
            cube::Database database_1;

            cube::Creature* GetPlayer();
            void PrintMessage(const wchar_t* message, FloatRGBA* color);
            void PrintMessage(const wchar_t* message);
            void PrintMessage(const wchar_t* message, char red, char green, char blue);
        };
    Game* GetGame();
}

#endif // GAME_H
