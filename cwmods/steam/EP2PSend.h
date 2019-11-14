#ifndef STEAM_EP2PSEND_H
#define STEAM_EP2PSEND_H
#include "../common/types.h"

enum EP2PSend
{
	k_EP2PSendUnreliable = 0,
	k_EP2PSendUnreliableNoDelay = 1,
	k_EP2PSendReliable = 2,
	k_EP2PSendReliableWithBuffering = 3,
};

#endif