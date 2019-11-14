#ifndef CUBE_OPTIONSWIDGET_H
#define CUBE_OPTIONSWIDGET_H

#include "BaseWidget.h"
#include "../plasma/Node.h"

namespace cube {
class Game;
class OptionsWidget : public cube::BaseWidget {
    public:
		__int64 field_1E8;
		__int64 field_1F0;
		__int64 field_1F8;
		cube::Game* game;
		plasma::Node* mode_left_button;
		plasma::Node* mode_right_button;
		plasma::Node* resolution_left_button;
		plasma::Node* resolution_right_button;
		plasma::Node* refresh_rate_left_button;
		plasma::Node* refresh_rate_right_button;
		plasma::Node* vsync_left_button;
		plasma::Node* vsync_right_button;
		plasma::Node* render_distance_left_button;
		plasma::Node* render_distance_right_button;
		plasma::Node* cpu_usage_left_button;
		plasma::Node* cpu_usage_right_button;
		plasma::Node* sound_fx_volume_left_button;
		plasma::Node* sound_fx_volume_right_button;
		plasma::Node* music_volume_left_button;
		plasma::Node* music_volume_right_button;
		plasma::Node* loop_music_left_button;
		plasma::Node* loop_music_right_button;
		plasma::Node* camera_speed_left_button;
		plasma::Node* camera_speed_right_button;
		plasma::Node* camera_smoothnesss_left_button;
		plasma::Node* camera_smoothnesss_right_button;
		plasma::Node* invert_y_axis_left_button;
		plasma::Node* invert_y_axis_right_button;
		plasma::Node* fps_limit_left_button;
		plasma::Node* fps_limit_right_button;
		plasma::Node* language_left_button;
		plasma::Node* language_right_button;
		plasma::Node* rarity_left_button;
		plasma::Node* rarity_right_button;
		plasma::Node* apply_button;
		plasma::Node* ok_button;
		plasma::Node* cancel_button;
		int mode;
		int resolution_x;
		int resolution_y;
		int refresh_rate;
		int field_320;
		int render_distance;
		int cpu_usage;
		int sound_fx_volume;
		int music_volume;
		int camera_speed;
		int camera_smoothness;
		int invert_y_axis;
		int language;
		int min_time_step;
		int field_348;
		int vsync;
		int rarity;
		int field_354;
		int field_358;
		int loop_music;
		int field_360;
		int field_364;
    };
}

static_assert(sizeof(cube::OptionsWidget) == 0x368, "cube::OptionsWidget is not the correct size.");

#endif // CUBE_OPTIONSWIDGET_H
