/*
#############################################################################################
# Outlast2 (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.hpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
enum class ESteamMatchmakingType : uint8_t
{
	SMT_Invalid                                        = 0,
	SMT_LAN                                            = 1,
	SMT_Internet                                       = 2,
	SMT_END                                            = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
enum class ELeaderboardSortType : uint8_t
{
	LST_Ascending                                      = 0,
	LST_Descending                                     = 1,
	LST_END                                            = 2
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
enum class ELeaderboardRequestType : uint8_t
{
	LRT_Global                                         = 0,
	LRT_Player                                         = 1,
	LRT_Friends                                        = 2,
	LRT_END                                            = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
enum class ELeaderboardFormat : uint8_t
{
	LF_Number                                          = 0,
	LF_Seconds                                         = 1,
	LF_Milliseconds                                    = 2,
	LF_END                                             = 3
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
enum class ELeaderboardUpdateType : uint8_t
{
	LUT_KeepBest                                       = 0,
	LUT_Force                                          = 1,
	LUT_END                                            = 2
};

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
enum class EMuteType : uint8_t
{
	MUTE_None                                          = 0,
	MUTE_AllButFriends                                 = 1,
	MUTE_All                                           = 2,
	MUTE_END                                           = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0000 OR 0x032C (0x032C - 0x032C)
// 0 OR 812 (812 - 812)
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks");
		}

		return uClassPointer;
	};

	bool GetServerAddr(struct FIpAddr& OutServerIP, int32_t& OutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId& OutServerUID);
	bool VerifyServerAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t AuthTicketUID);
	bool CreateServerAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort, int32_t& OutAuthTicketUID);
	bool VerifyClientAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort, int32_t AuthTicketUID);
	bool CreateClientAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t ServerPort, bool bSecure, int32_t& OutAuthTicketUID);
	bool SendServerAuthRequest(struct FUniqueNetId ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID);
};

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x018C OR 0x051C (0x051C - 0x0390)
// 396 OR 1308 (1308 - 912)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	struct FMatchmakingQueryState                      ServerBrowserSearchQuery;                      // 0x0390 (0x0074) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FMatchmakingQueryState                      InviteSearchQuery;                             // 0x0404 (0x0074) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              ServerBrowserTimeout;                          // 0x0478 (0x0004) [0x0000000000000000]               
	float                                              InviteTimeout;                                 // 0x047C (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                InviteServerUID;                               // 0x0480 (0x0010) [0x0000000000000002] (CPF_Const)   
	TArray<struct FScriptDelegate>                     GameInviteAcceptedDelegates;                   // 0x0490 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineGameSearch*                           InviteGameSearch;                              // 0x04A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      InviteLocationUrl;                             // 0x04A8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;               // 0x04B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;             // 0x04C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bFilterEngineBuild : 1;                        // 0x04D8 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FFilterKeyToSteamKeyMapping>         FilterKeyToSteamKeyMap;                        // 0x04DC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;              // 0x04EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;          // 0x04FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;        // 0x050C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks");
		}

		return uClassPointer;
	};

	bool QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery);
	void ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasSuccessful);
	bool UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID);
	void ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasSuccessful);
	bool RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, bool bWasInvited);
	bool AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult& InviteResult);
	void ClearGameInviteAcceptedDelegate(uint8_t LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(uint8_t LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate);
	bool UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool optionalBShouldRefreshOnlineData);
};

// Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks
// 0x0000 OR 0x0068 (0x0068 - 0x0068)
// 0 OR 104 (104 - 104)
class UOnlineLobbyInterfaceSteamworks : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks");
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x0694 OR 0x08AC (0x08AC - 0x0218)
// 1684 OR 2220 (2220 - 536)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	uint32_t                                           bStoringAchievement : 1;                       // 0x0218 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bClientStatsStorePending : 1;                  // 0x0218 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bGSStatsStoresSuccess : 1;                     // 0x0218 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bLastHasConnection : 1;                        // 0x0218 (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bIsStatsSessionOk : 1;                         // 0x0218 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bShouldUseMcp : 1;                             // 0x0218 (0x0004) [0x0000000000004002] [0x00000020] (CPF_Const | CPF_Config)
	int32_t                                            TotalGSStatsStoresPending;                     // 0x021C (0x0004) [0x0000000000000000]               
	EOnlineEnumerationReadState                        UserStatsReceivedState;                        // 0x0220 (0x0001) [0x0000000000000000]               
	ELoginStatus                                       LoggedInStatus;                                // 0x0221 (0x0001) [0x0000000000000002] (CPF_Const)   
	ENetworkNotificationPosition                       CurrentNotificationPosition;                   // 0x0222 (0x0001) [0x0000000000004000] (CPF_Config)  
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                 // 0x0224 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      LocalProfileName;                              // 0x022C (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      LoggedInPlayerName;                            // 0x023C (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerId;                              // 0x024C (0x0010) [0x0000000000000002] (CPF_Const)   
	int32_t                                            LoggedInPlayerNum;                             // 0x025C (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                 // 0x0260 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                 // 0x0270 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     LocalPlayerStorageReadDelegates;               // 0x0278 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageWriteDelegates;              // 0x0288 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RemotePlayerStorageReadDelegates;              // 0x0298 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;            // 0x02A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                          // 0x02B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                        // 0x02C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                         // 0x02D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                          // 0x02E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                          // 0x02F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     TalkingDelegates;                              // 0x0308 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadOnlineStatsCompleteDelegates;              // 0x0318 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FlushOnlineStatsDelegates;                     // 0x0328 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ConnectionStatusChangeDelegates;               // 0x0338 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LinkStatusDelegates;                           // 0x0348 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                // 0x0358 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                          // 0x0368 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                      // 0x0378 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     EnumerateUserFilesCompleteDelegates;           // 0x0388 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                 // 0x0398 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                // 0x03A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;               // 0x03B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SharedFileReadCompleteDelegates;               // 0x03C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SharedFileWriteCompleteDelegates;              // 0x03D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLocalTalkerSteam                           CurrentLocalTalker;                            // 0x03E8 (0x0008) [0x0000000000000000]               
	TArray<struct FRemoteTalker>                       RemoteTalkers;                                 // 0x03F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            AppID;                                         // 0x0400 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UOnlineStatsRead*                            CurrentStatsRead;                              // 0x0404 (0x0008) [0x0000000000000002] (CPF_Const)   
	TArray<struct FPendingPlayerStats>                 PendingStats;                                  // 0x040C (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendInviteReceivedDelegates;                 // 0x041C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendMessageReceivedDelegates;                // 0x042C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AddFriendByNameCompleteDelegates;              // 0x043C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FProfileSettingsCache                       ProfileCache;                                  // 0x044C (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorageCache;                            // 0x0484 (0x0008) [0x0000000000000000]               
	TArray<class FString>                              LocationUrlsForInvites;                        // 0x048C (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      LocationUrl;                                   // 0x049C (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                   // 0x04AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;               // 0x04BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     GetNumberOfCurrentPlayersCompleteDelegates;    // 0x04CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                          // 0x04DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineStatusMapping>                StatusMappings;                                // 0x04EC (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      DefaultStatus;                                 // 0x04FC (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      GameInviteMessage;                             // 0x050C (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	float                                              ConnectionPresenceTimeInterval;                // 0x051C (0x0004) [0x0000000000000000]               
	float                                              ConnectionPresenceElapsedTime;                 // 0x0520 (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<struct FUniqueNetId>                        MuteList;                                      // 0x0524 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FSteamUserCloud>                     UserCloudFiles;                                // 0x0534 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSteamUserCloudMetadata>             UserCloudMetadata;                             // 0x0544 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTitleFile>                          SharedFileCache;                               // 0x0554 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FQueuedAvatarRequest>                QueuedAvatarRequests;                          // 0x0564 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FAchievementMappingInfo>             AchievementMappings;                           // 0x0574 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FAchievementProgressStat>            PendingAchievementProgress;                    // 0x0584 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FLeaderboardTemplate>                LeaderboardList;                               // 0x0594 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FDeferredLeaderboardRead>            DeferredLeaderboardReads;                      // 0x05A4 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           DeferredLeaderboardWrites;                     // 0x05B4 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           PendingLeaderboardStats;                       // 0x05C4 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FViewIdToLeaderboardName>            LeaderboardNameMappings;                       // 0x05D4 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<int32_t>                                    GameServerStatsMappings;                       // 0x05E4 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UOnlineAuthInterfaceSteamworks*              CachedAuthInt;                                 // 0x05F4 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FScriptDelegate                             __OnLoginChange__Delegate;                     // 0x05FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                  // 0x060C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                    // 0x061C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                   // 0x062C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                     // 0x063C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                 // 0x064C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;               // 0x065C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;     // 0x066C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;    // 0x067C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;       // 0x068C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;// 0x069C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;      // 0x06AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;             // 0x06BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;        // 0x06CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;             // 0x06DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;         // 0x06EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;        // 0x06FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                // 0x070C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                // 0x071C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                // 0x072C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;          // 0x073C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;             // 0x074C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;           // 0x075C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;           // 0x076C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;         // 0x077C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;            // 0x078C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;              // 0x079C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;          // 0x07AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;           // 0x07BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;    // 0x07CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;         // 0x07DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;       // 0x07EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;              // 0x07FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;        // 0x080C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;        // 0x081C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;// 0x082C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;// 0x083C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;      // 0x084C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;            // 0x085C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;           // 0x086C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;          // 0x087C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadSharedFileComplete__Delegate;          // 0x088C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteSharedFileComplete__Delegate;         // 0x089C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		}

		return uClassPointer;
	};

	bool RecordPlayersRecentlyMet(uint8_t LocalUserNum, class FString GameDescription, TArray<struct FUniqueNetId>& Players);
	bool InGamePost(class FString InNameID);
	void ClearAllDelegates();
	void ClearWriteSharedFileCompleteDelegate(struct FScriptDelegate WriteSharedFileCompleteDelegate);
	void AddWriteSharedFileCompleteDelegate(struct FScriptDelegate WriteSharedFileCompleteDelegate);
	bool WriteSharedFile(class FString UserId, class FString Filename, TArray<uint8_t>& Contents);
	void OnWriteSharedFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename, class FString SharedHandle);
	void ClearReadSharedFileCompleteDelegate(struct FScriptDelegate ReadSharedFileCompleteDelegate);
	void AddReadSharedFileCompleteDelegate(struct FScriptDelegate ReadSharedFileCompleteDelegate);
	bool ReadSharedFile(class FString SharedHandle);
	void OnReadSharedFileComplete(bool bWasSuccessful, class FString SharedHandle);
	bool ClearSharedFile(class FString SharedHandle);
	bool ClearSharedFiles();
	bool GetSharedFileContents(class FString SharedHandle, TArray<uint8_t>& FileContents);
	void ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate);
	bool DeleteUserFile(class FString UserId, class FString Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void OnDeleteUserFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename);
	void ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate);
	bool WriteUserFile(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents);
	void OnWriteUserFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename);
	void ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate);
	bool ReadUserFile(class FString UserId, class FString Filename);
	void OnReadUserFileComplete(bool bWasSuccessful, class FString UserId, class FString Filename);
	void GetUserFileList(class FString UserId, TArray<struct FEmsFile>& UserFiles);
	void ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate);
	void EnumerateUserFiles(class FString UserId);
	void OnEnumerateUserFilesComplete(bool bWasSuccessful, class FString UserId);
	bool ClearFile(class FString UserId, class FString Filename);
	bool ClearFiles(class FString UserId);
	bool GetFileContents(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents);
	bool WriteUserFileInternal(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents);
	bool GetFriendJoinURL(struct FUniqueNetId FriendUID, class FString& ServerURL, class FString& ServerUID);
	bool GetCommandlineJoinURL(bool bMarkAsJoined, class FString& ServerURL, class FString& ServerUID);
	bool Int64ToUniqueNetId(class FString UIDString, struct FUniqueNetId& OutUID);
	class FString UniqueNetIdToInt64(struct FUniqueNetId& Uid);
	void NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent);
	void OnVOIPPlaybackFinished(class UAudioComponent* AC);
	bool ShowProfileUI(uint8_t LocalUserNum, class FString optionalSubURL, struct FUniqueNetId optionalPlayerUID);
	class FString UniqueNetIdToPlayerName(struct FUniqueNetId& Uid);
	bool DisplayAchievementProgress(int32_t AchievementId, int32_t ProgressCount, int32_t MaxProgress);
	bool CreateLeaderboard(class FString LeaderboardName, ELeaderboardSortType SortType, ELeaderboardFormat DisplayFormat);
	bool ResetStats(bool bResetAchievements);
	bool ShowCustomMessageUI(uint8_t LocalUserNum, class FString MessageTitle, class FString NonEditableMessage, class FString optionalEditableMessage, TArray<struct FUniqueNetId>& Recipients);
	void ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, bool bWasSuccessful);
	bool ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings);
	bool UnlockAvatarAward(uint8_t LocalUserNum, int32_t AvatarItemId);
	void GetSteamClanData(TArray<struct FSteamPlayerClanData>& Results);
	void ClearGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate);
	void AddGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate);
	void OnGetNumberOfCurrentPlayersComplete(int32_t TotalPlayers);
	bool GetNumberOfCurrentPlayers();
	void ReadOnlineAvatar(struct FUniqueNetId PlayerNetId, int32_t Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate);
	void OnReadOnlineAvatarComplete(struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar);
	bool ShowCustomPlayersUI(uint8_t LocalUserNum, class FString Title, class FString Description, TArray<struct FUniqueNetId>& Players);
	EOnlineEnumerationReadState GetAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, TArray<struct FAchievementDetails>& Achievements);
	void ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate);
	void AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate);
	void OnReadAchievementsComplete(int32_t TitleId);
	bool ReadAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, bool optionalBShouldReadText, bool optionalBShouldReadImages);
	bool ShowPlayersUI(uint8_t LocalUserNum);
	bool ShowFriendsInviteUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool ShowFriendsUI(uint8_t LocalUserNum);
	void ClearProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId);
	void ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate);
	void AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate);
	void OnUnlockAchievementComplete(bool bWasSuccessful);
	bool UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float optionalPercentComplete);
	bool IsDeviceValid(int32_t DeviceID, int32_t optionalSizeNeeded);
	int32_t GetDeviceSelectionResults(uint8_t LocalUserNum, class FString& DeviceName);
	void ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void OnDeviceSelectionComplete(bool bWasSuccessful);
	bool ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, bool optionalBManageStorage);
	bool ShowMembershipMarketplaceUI(uint8_t LocalUserNum);
	bool ShowContentMarketplaceUI(uint8_t LocalUserNum, int32_t optionalCategoryMask, int32_t optionalOfferId);
	bool ShowInviteUI(uint8_t LocalUserNum, class FString optionalInviteText);
	bool ShowAchievementsUI(uint8_t LocalUserNum);
	bool ShowMessagesUI(uint8_t LocalUserNum);
	bool ShowGamerCardUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool ShowFeedbackUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex);
	bool UnmuteAll(uint8_t LocalUserNum);
	bool MuteAll(uint8_t LocalUserNum, bool bAllowFriends);
	void CalcAggregateSkill(TArray<struct FDouble> Mus, TArray<struct FDouble> Sigmas, struct FDouble& OutAggregateMu, struct FDouble& OutAggregateSigma);
	bool RegisterStatGuid(struct FUniqueNetId PlayerID, class FString& ClientStatGuid);
	class FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(class FString& HostStatGuid);
	class FString GetHostStatGuid();
	void ClearFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate);
	void AddFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate);
	void OnFriendMessageReceived(uint8_t LocalUserNum, struct FUniqueNetId SendingPlayer, class FString SendingNick, class FString Message);
	void GetFriendMessages(uint8_t LocalUserNum, TArray<struct FOnlineFriendMessage>& FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(bool bWasSuccessful);
	bool JoinFriendGame(uint8_t LocalUserNum, struct FUniqueNetId Friend);
	void ClearReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(uint8_t LocalUserNum, class FString InviterName);
	bool SendGameInviteToFriends(uint8_t LocalUserNum, TArray<struct FUniqueNetId> Friends, class FString optionalText);
	bool SendGameInviteToFriend(uint8_t LocalUserNum, struct FUniqueNetId Friend, class FString optionalText);
	bool SendMessageToFriendW(uint8_t LocalUserNum, struct FUniqueNetId Friend, class FString Message);
	void ClearFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate);
	void AddFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate);
	void OnFriendInviteReceived(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer, class FString RequestingNick, class FString Message);
	bool DenyFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer);
	bool AcceptFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer);
	bool RemoveFriend(uint8_t LocalUserNum, struct FUniqueNetId FormerFriend);
	void ClearAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAddFriendByNameComplete(bool bWasSuccessful);
	bool AddFriendByName(uint8_t LocalUserNum, class FString FriendName, class FString optionalMessage);
	bool AddFriend(uint8_t LocalUserNum, struct FUniqueNetId NewFriend, class FString optionalMessage);
	class FString GetKeyboardInputResults(uint8_t& bWasCanceled);
	void ClearKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate);
	void AddKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate);
	void OnKeyboardInputComplete(bool bWasSuccessful);
	bool ShowKeyboardUI(uint8_t LocalUserNum, class FString TitleText, class FString DescriptionText, bool optionalBIsPassword, bool optionalBShouldValidate, class FString optionalDefaultText, int32_t optionalMaxResultLength);
	void SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, TArray<struct FSettingsProperty>& Properties);
	EOnlineEnumerationReadState GetTitleFileState(class FString Filename);
	bool GetTitleFileContents(class FString Filename, TArray<uint8_t>& FileContents);
	void ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(class FString FileToRead);
	void OnReadTitleFileComplete(bool bWasSuccessful, class FString Filename);
	void ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	int32_t GetLocale();
	ENATType GetNATType();
	void ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void OnConnectionStatusChange(EOnlineServerConnectionStatus ConnectionStatus);
	bool IsControllerConnected(int32_t ControllerId);
	void ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void OnControllerChange(int32_t ControllerId, bool bIsConnected);
	void SetNetworkNotificationPosition(ENetworkNotificationPosition NewPos);
	ENetworkNotificationPosition GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate);
	void AddExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate);
	void OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
	class FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
	bool WriteOnlinePlayerScores(struct FName SessionName, int32_t LeaderboardId, TArray<struct FOnlinePlayerScore>& PlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(struct FName SessionName, bool bWasSuccessful);
	bool FlushOnlineStats(struct FName SessionName);
	bool WriteOnlineStats(struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t optionalNumRows);
	bool ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int32_t optionalStartIndex, int32_t optionalNumToRead);
	bool ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players);
	bool SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId);
	void ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	void AddRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	void OnRecognitionComplete();
	bool GetRecognitionResults(uint8_t LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words);
	bool StopSpeechRecognition(uint8_t LocalUserNum);
	bool StartSpeechRecognition(uint8_t LocalUserNum);
	void StopNetworkedVoice(uint8_t LocalUserNum);
	void StartNetworkedVoice(uint8_t LocalUserNum);
	void ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	void AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	void OnPlayerTalkingStateChange(struct FUniqueNetId Player, bool bIsTalking);
	bool UnmuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, bool optionalBIsSystemWide);
	bool MuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, bool optionalBIsSystemWide);
	bool SetRemoteTalkerPriority(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, int32_t Priority);
	bool IsHeadsetPresent(uint8_t LocalUserNum);
	bool IsRemotePlayerTalking(struct FUniqueNetId PlayerID);
	bool IsLocalPlayerTalking(uint8_t LocalUserNum);
	bool UnregisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool RegisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool UnregisterLocalTalker(uint8_t LocalUserNum);
	bool RegisterLocalTalker(uint8_t LocalUserNum);
	EOnlineEnumerationReadState GetFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt, TArray<struct FOnlineFriend>& Friends);
	void ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(bool bWasSuccessful);
	bool ReadFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt);
	void ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate);
	void AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate);
	void OnWritePlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(uint8_t LocalUserNum);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate);
	void OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, bool bWasSuccessful);
	bool ReadPlayerStorageForNetId(uint8_t LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate);
	void AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate);
	void OnReadPlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID);
	void ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(uint8_t LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate);
	void AddFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate);
	void ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void ClearLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, uint8_t LocalUserNum);
	void AddLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, uint8_t LocalUserNum);
	void OnLoginStatusChange(ELoginStatus NewStatus, struct FUniqueNetId NewId);
	void ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	void AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	bool IsMuted(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool AreAnyFriends(uint8_t LocalUserNum, TArray<struct FFriendsQuery>& Query);
	bool IsFriend(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	EFeaturePrivilegeLevel CanShowPresenceInformation(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanViewPlayerProfiles(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanPurchaseContent(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanDownloadUserContent(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanCommunicate(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanPlayOnline(uint8_t LocalUserNum);
	class FString GetPlayerNickname(uint8_t LocalUserNum);
	bool GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& PlayerID);
	bool IsLocalLogin(uint8_t LocalUserNum);
	bool IsGuestLogin(uint8_t LocalUserNum);
	ELoginStatus GetLoginStatus(uint8_t LocalUserNum);
	void ClearLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void AddLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(uint8_t LocalUserNum);
	void ClearLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void AddLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void OnLoginFailed(uint8_t LocalUserNum, EOnlineServerConnectionStatus ErrorCode);
	bool AutoLogin();
	bool Login(uint8_t LocalUserNum, class FString LoginName, class FString Password, bool optionalBWantsLocalOnly);
	bool ShowLoginUI(bool optionalBShowOnlineOnly);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(uint8_t LocalUserNum);
	void eventExit();
	bool eventInit();
};

// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0014 OR 0x0230 (0x0230 - 0x021C)
// 20 OR 560 (560 - 540)
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:
	uint32_t                                           bSteamSocketsOnly : 1;                         // 0x021C (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint8_t                                           UnknownData00[0x10];                           // 0x0220 (0x0010) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetDriverSteamworks");
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000 OR 0xB104 (0xB104 - 0xB104)
// 0 OR 45316 (45316 - 45316)
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
