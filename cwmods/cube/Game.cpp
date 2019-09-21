#include "Game.h"
#include "../cwmods.h"
cube::Game* cube::GetGame() {
    return *(cube::Game**)(CWBase() + 0x5215E0);
}
