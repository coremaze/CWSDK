#include "CSteamID.h"

CSteamID::CSteamID() {
}

CSteamID::CSteamID(u64 value) {
	SetU64(value);
}

u64 CSteamID::AsU64() const {
	return *(u64*)this;
}

void CSteamID::SetU64(u64 value) {
	*(u64*)this = value;
}