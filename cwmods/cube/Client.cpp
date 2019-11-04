#include "Client.h"
#include "../cwmods.h"

void cube::Client::JoinSteamID(long long steamID) {
    ((void(*)(cube::Client*, long long))CWOffset(0x3D820))(this, steamID);
}
