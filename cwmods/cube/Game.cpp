#include "Game.h"
#include "../cwmods.h"


cube::Creature* cube::Game::GetPlayer(){
    return this->world->local_creature;
}

cube::Game* cube::GetGame() {
    return *(cube::Game**)(CWBase() + 0x5215E0);
}
