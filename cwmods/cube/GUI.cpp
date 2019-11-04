#include "GUI.h"
#include "../cwmods.h"

void cube::GUI::UpdateResolution(signed int width, signed int height) {
	((void(*)(cube::GUI*, signed int, signed int))CWOffset(0x101BD0))(this, width, height);
}