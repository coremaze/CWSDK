#ifndef STEAM_ESNETSOCKETCONNECTIONTYPE_T_H
#define STEAM_ESNETSOCKETCONNECTIONTYPE_T_H
#include "../common/types.h"

enum ESNetSocketConnectionType
{
	k_ESNetSocketConnectionTypeNotConnected = 0,
	k_ESNetSocketConnectionTypeUDP = 1,
	k_ESNetSocketConnectionTypeUDPRelay = 2,
};

#endif