#ifndef STEAM_ISTEAMNETWORKING_H
#define STEAM_ISTEAMNETWORKING_H
#include "../common/types.h"
#include "EP2PSend.h"
#include "P2PSessionState_t.h"
#include "SNetListenSocket_t.h"
#include "SNetSocket_t.h"
#include "ESNetSocketConnectionType.h"
#include "CSteamID.h"

class ISteamNetworking {
public:
	virtual bool SendP2PPacket(CSteamID steamIDRemote, const void* pubData, u32 cubData, EP2PSend eP2PSendType, i32 nChannel = 0);
	virtual bool IsP2PPacketAvailable(u32* pcubMsgSize, i32 nChannel = 0);
	virtual bool ReadP2PPacket(void* pubDest, u32 cubDest, u32* pcubMsgSize, CSteamID* psteamIDRemote, i32 nChannel = 0);
	virtual bool AcceptP2PSessionWithUser(CSteamID steamIDRemote);
	virtual bool CloseP2PSessionWithUser(CSteamID steamIDRemote);
	virtual bool CloseP2PChannelWithUser(CSteamID steamIDRemote, i32 nChannel);
	virtual bool GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t* pConnectionState);
	virtual bool AllowP2PPacketRelay(bool bAllow);
	virtual SNetListenSocket_t CreateListenSocket(i32 nVirtualP2PPort, u32 nIP, u16 nPort, bool bAllowUseOfPacketRelay);
	virtual SNetSocket_t CreateP2PConnectionSocket(CSteamID steamIDTarget, i32 nVirtualPort, i32 nTimeoutSec, bool bAllowUseOfPacketRelay);
	virtual SNetSocket_t CreateConnectionSocket(u32 nIP, u16 nPort, i32 nTimeoutSec);
	virtual bool DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd);
	virtual bool DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd);
	virtual bool SendDataOnSocket(SNetSocket_t hSocket, void* pubData, u32 cubData, bool bReliable);
	virtual bool IsDataAvailableOnSocket(SNetSocket_t hSocket, u32* pcubMsgSize);
	virtual bool RetrieveDataFromSocket(SNetSocket_t hSocket, void* pubDest, u32 cubDest, u32* pcubMsgSize);
	virtual bool IsDataAvailable(SNetListenSocket_t hListenSocket, u32* pcubMsgSize, SNetSocket_t* phSocket);
	virtual bool RetrieveData(SNetListenSocket_t hListenSocket, void* pubDest, u32 cubDest, u32* pcubMsgSize, SNetSocket_t* phSocket);
	virtual bool GetSocketInfo(SNetSocket_t hSocket, CSteamID* pSteamIDRemote, i32* peSocketStatus, u32* punIPRemote, u16* punPortRemote);
	virtual bool GetListenSocketInfo(SNetListenSocket_t hListenSocket, u32* pnIP, u16* pnPort);
	virtual ESNetSocketConnectionType GetSocketConnectionType(SNetSocket_t hSocket);
	virtual i32 GetMaxPacketSize(SNetSocket_t hSocket);
};

#endif