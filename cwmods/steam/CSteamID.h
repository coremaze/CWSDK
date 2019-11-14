#ifndef STEAM_CSTEAMID_H
#define STEAM_CSTEAMID_H
#include "../common/types.h"

class CSteamID {
	//This class must be structured this way to get the correct padding in the map in cube::Host
public:
	u8 b0;
	u8 b1;
	u8 b2;
	u8 b3;
	u8 b4; 
	u8 b5;
	u8 b6;
	u8 b7;


	CSteamID();
	CSteamID(u64 value);
	u64 AsU64() const;
	void SetU64(u64 value);
};

static_assert(sizeof(CSteamID) == 8, "CSteamID is not the correct size.");

#endif