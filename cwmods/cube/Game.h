#ifndef GAME_H
#define GAME_H

#include "../IDA/types.h"

#include "../msvc/_Thrd_t.h"

#include "Speech.h"
#include "World.h"
#include "Host.h"
#include "ChatWidget.h"
#include "WorldMap.h"
#include "../gfx/D3D11Renderer.h"
#include "Creature.h"
#include "Client.h"
#include "Controls.h"
#include "Database.h"
#include "Options.h"
#include "GUI.h"
#include "../common/DoubleVector3.h"
#include "../common/FloatVector2.h"
#include "../common/Matrix4.h"
#include "Block.h"
#include "TextFX.h"

#include <string>
#include <map>

namespace cube {
    class Game {
        public:
            class CCallbackInternal_onP2PSessionRequest {
                public:
                    void *vtable;
                    __int64 field_8;
            };
			class KeyNames {
				public:
					std::map<uint32_t, std::wstring> key_full_names;
					std::map<uint32_t, std::wstring> key_abbreviated_names;
			};
			
			virtual ~Game();

			cube::World* world;
			cube::WorldMap* worldmap;
			gfx::D3D11Renderer* renderer;
			plasma::D3D11Engine* plasma_engine;
			__int64 xaudio2_engine;
			cube::Game::KeyNames key_info;
			cube::Speech speech;
			cube::GUI gui;
			cube::Host host;
			cube::Client client;
			__int64 field_1770;
			std::vector<cube::Creature*> saved_characters;
			__int64 field_1790;
			__int64 field_1798;
			__int64 field_17A0;
			std::vector<std::vector<cube::ItemStack>> crafting_menu_tabs;
			__int64 field_17C0;
			_BYTE gap17C8[408];
			cube::Game::CCallbackInternal_onP2PSessionRequest onP2PSessionRequest_callback;
			_BYTE gap1970[256];
			bool control_states[23];
			bool vk_states[256];
			char field_1B87;
			cube::Options options;
			cube::Controls controls;
			int pad_1C94;
			CRITICAL_SECTION critical_section_0;
			CRITICAL_SECTION critical_section_1;
			CRITICAL_SECTION critical_section_2;
			CRITICAL_SECTION critical_section_3;
			CRITICAL_SECTION critical_section_4;
			int width;
			int height;
			_BYTE gap1D68[24];
			DoubleVector3 camera_angle;
			DoubleVector3 target_camera_angle;
			int field_1DB0;
			float camera_distance;
			float target_camera_distance;
			int field_1DBC;
			LongVector3 global_camera_position;
			LongVector3 global_camera_focus_position;
			__int64 negative_camera_focus_x;
			__int64 negative_camera_focus_y;
			float screen_shake;
			int map_zoom;
			LongVector3 map_position_weird;
			LongVector3 map_position;
			bool map_zoom_has_changed;
			char field_1E39;
			char field_1E3A;
			char field_1E3B;
			char field_1E3C;
			char field_1E3D;
			char field_1E3E;
			char field_1E3F;
			__int64 field_1E40;
			FloatVector2 map_overlay_position;
			float map_overlay_scale;
			_BYTE gap1E54[28];
			int usually_max_int_0;
			int usually_max_int_1;
			int usually_max_int_2;
			int usually_max_int_3;
			int usually_max_int_4;
			int field_1E84;
			bool looking_at_creature;
			char field_1E89;
			char field_1E8A;
			char field_1E8B;
			int field_1E8C;
			int field_1E90;
			int field_1E94;
			int field_1E98;
			int field_1E9C;
			int field_1EA0;
			Matrix4 some_camera_matrix_0;
			Matrix4 some_camera_matrix_1;
			Matrix4 some_camera_matrix_2;
			Matrix4 some_camera_matrix_3;
			int field_1FA4;
			msvc::_Thrd_t generation_thread;
			msvc::_Thrd_t chunk_thread;
			msvc::_Thrd_t map_thread;
			msvc::_Thrd_t ai_thread;
			msvc::_Thrd_t music_thread;
			msvc::_Thrd_t receive_thread;
			msvc::_Thrd_t send_thread;
			msvc::_Thrd_t host_thread;
			std::string* current_music_file;
			_BYTE gap2010[60];
			int seed;
			std::string world_name;
			__int16 gap2070;
			_BYTE gap2092[30];
			std::list<cube::TextFX> textfx_list;
			_BYTE gap20C0[420];
			int current_character_slot;
			cube::Database characters_db;
			cube::Database database_1;


            cube::Creature* GetPlayer();
			bool cube::Game::TraceCrosshairToBlock(float reach_in_blocks_from_camera, bool want_face_block, LongVector3* result, bool pass_through_water=false);
            void PrintMessage(const wchar_t* message, FloatRGBA* color);
            void PrintMessage(const wchar_t* message);
            void PrintMessage(const wchar_t* message, char red, char green, char blue);
        };
}

static_assert(sizeof(cube::Game) == 0x2288, "cube::Game is not the correct size.");

#endif // GAME_H
