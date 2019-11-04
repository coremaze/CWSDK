#include "Game.h"
#include "../cwmods.h"


cube::Creature* cube::Game::GetPlayer(){
    return this->world->local_creature;
}

cube::Game* cube::GetGame() {
    return *(cube::Game**)(CWOffset(0x551A80));
}

void cube::Game::PrintMessage(const wchar_t* message, FloatRGBA* color) {
    this->gui.chat_widget->PrintMessage(message, color);
}
void cube::Game::PrintMessage(const wchar_t* message) {
    this->gui.chat_widget->PrintMessage(message);
}
void cube::Game::PrintMessage(const wchar_t* message, char red, char green, char blue) {
    this->gui.chat_widget->PrintMessage(message, red, green, blue);
}
