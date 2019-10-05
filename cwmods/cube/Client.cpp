#include "Client.h"
#include "../cwmods.h"

void cube::Client::JoinSteamID(long long steamID) {
    ((void(*)(cube::Client*, long long))CWBase()+0x3D820)(this, steamID);
}
