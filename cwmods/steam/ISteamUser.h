#ifndef STEAM_ISTEAMUSER_H
#define STEAM_ISTEAMUSER_H
#include "../common/types.h"
#include "EP2PSend.h"
#include "P2PSessionState_t.h"
#include "SNetListenSocket_t.h"
#include "SNetSocket_t.h"
#include "ESNetSocketConnectionType.h"
#include "CSteamID.h"
#include "EBeginAuthResult.h"
#include "EVoiceResult.h"
#include "EUserHasLicenseForAppResult.h"

typedef u32 HSteamUser;
typedef u64 CGameID; //Don't need a proper definition for this right now, but it might become important for padding at some point
typedef u32 HAuthTicket;
typedef u32 AppId_t;
typedef u64 SteamAPICall_t;

class ISteamUser {
public:
	virtual HSteamUser GetHSteamUser();
	virtual bool BLoggedOn();
	virtual CSteamID GetSteamID();
	virtual int InitiateGameConnection(void* pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, u32 unIPServer, u16 usPortServer, bool bSecure);
	virtual void TerminateGameConnection(u32 unIPServer, u16 usPortServer);
	virtual void TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent, const char* pchExtraInfo = "");
	virtual bool GetUserDataFolder(char* pchBuffer, int cubBuffer);
	virtual void StartVoiceRecording();
	virtual void StopVoiceRecording();
	virtual EVoiceResult GetAvailableVoice(u32* pcbCompressed, u32* pcbUncompressed_Deprecated = 0, u32 nUncompressedVoiceDesiredSampleRate_Deprecated = 0);
	virtual EVoiceResult GetVoice(bool bWantCompressed, void* pDestBuffer, u32 cbDestBufferSize, u32* nBytesWritten, bool bWantUncompressed_Deprecated = false, void* pUncompressedDestBuffer_Deprecated = 0, u32 cbUncompressedDestBufferSize_Deprecated = 0, u32* nUncompressBytesWritten_Deprecated = 0, u32 nUncompressedVoiceDesiredSampleRate_Deprecated = 0);
	virtual EVoiceResult DecompressVoice(const void* pCompressed, u32 cbCompressed, void* pDestBuffer, u32 cbDestBufferSize, u32* nBytesWritten, u32 nDesiredSampleRate);
	virtual u32 GetVoiceOptimalSampleRate();
	virtual HAuthTicket GetAuthSessionTicket(void* pTicket, int cbMaxTicket, u32* pcbTicket);
	virtual EBeginAuthSessionResult BeginAuthSession(const void* pAuthTicket, int cbAuthTicket, CSteamID steamID);
	virtual void EndAuthSession(CSteamID steamID);
	virtual void CancelAuthTicket(HAuthTicket hAuthTicket);
	virtual EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID);
	virtual bool BIsBehindNAT();
	virtual void AdvertiseGame(CSteamID steamIDGameServer, u32 unIPServer, u16 usPortServer);
	virtual SteamAPICall_t RequestEncryptedAppTicket(void* pDataToInclude, int cbDataToInclude);
	virtual bool GetEncryptedAppTicket(void* pTicket, int cbMaxTicket, u32* pcbTicket);
	virtual int GetGameBadgeLevel(int nSeries, bool bFoil);
	virtual int GetPlayerSteamLevel();
	virtual SteamAPICall_t RequestStoreAuthURL(const char* pchRedirectURL);
	virtual bool BIsPhoneVerified();
	virtual bool BIsTwoFactorEnabled();
	virtual bool BIsPhoneIdentifying();
	virtual bool BIsPhoneRequiringVerification();
	virtual SteamAPICall_t GetMarketEligibility();
	virtual SteamAPICall_t GetDurationControl();
};

#endif