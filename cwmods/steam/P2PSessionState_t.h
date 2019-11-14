#ifndef STEAM_P2PSessionState_T_H
#define STEAM_P2PSessionState_T_H
#include "../common/types.h"

class P2PSessionState_t
{
	u8 m_bConnectionActive;
	u8 m_bConnecting;
	u8 m_eP2PSessionError;
	u8 m_bUsingRelay;
	i32 m_nBytesQueuedForSend;
	i32 m_nPacketsQueuedForSend;
	u32 m_nRemoteIP;
	u16 m_nRemotePort;
};

#endif