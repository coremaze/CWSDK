#ifndef GAME_H
#define GAME_H

#include "Speech.h"
#include "World.h"
#include "Host.h"
#include "ChatWidget.h"



namespace cube {
class Game {
    public:
        void *vtable;
        cube::World *world;
        void *worldmap;
        void *renderer;
        void *plasma_engine;
        void *xaudio2_engine;
        char gap30[32];
        cube::Speech speech;
        char gapF0[40];
        void *plasma_node_1;
        void *plasma_node_2;
        void *start_menu_widget;
        void *plasma_node_3;
        char gap138[24];
        void *plasma_node_4;
        void *plasma_node_5;
        void *plasma_node_6;
        void *plasma_node_7;
        char gap170[552];
        cube::ChatWidget *chat_widget;
        char gap3A0[696];
        void *controlswidget_ptr;
        char gap660[136];
        cube::Host host;
        char gapCFA[3158];
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
        char gap1BBC[1100];
        msvc::string *current_music_file;
        char gap2010[60];
        int seed;
        msvc::string world_name;
        char gap2070[503];
        char end;
};
Game* GetGame();
}

#endif // GAME_H
