/*
#############################################################################################
# Outlast2 (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_parameters.hpp
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
# Parameters
# ========================================================================================= #
*/

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x00420400] 
struct UOnlineAuthInterfaceSteamworks_execGetServerAddr_Params
{
	struct FIpAddr                                     OutServerIP;                                      		// 0x0000 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            OutServerPort;                                    		// 0x0014 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x00420400] 
struct UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Params
{
	struct FUniqueNetId                                OutServerUID;                                     		// 0x0000 (0x0010) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x00020400] 
struct UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FIpAddr                                     ServerIP;                                         		// 0x0010 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    		// 0x0024 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x00420400] 
struct UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FIpAddr                                     ClientIP;                                         		// 0x0010 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientPort;                                       		// 0x0024 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            OutAuthTicketUID;                                 		// 0x0028 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x00020400] 
struct UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FIpAddr                                     ClientIP;                                         		// 0x0010 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ClientPort;                                       		// 0x0024 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AuthTicketUID;                                    		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x00420400] 
struct UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FIpAddr                                     ServerIP;                                         		// 0x0010 (0x0014) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ServerPort;                                       		// 0x0024 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bSecure : 1;                                      		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            OutAuthTicketUID;                                 		// 0x002C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x00020400] 
struct UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x00020400] 
struct UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                ClientUID;                                        		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Params
{
	int32_t                                            StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x00020400] 
struct UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x00020400] 
struct UOnlineGameInterfaceSteamworks_execRegisterPlayer_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasInvited : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x00020400] 
struct UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execClearGameInviteAcceptedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execAddGameInviteAcceptedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x00024400] 
struct UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bShouldRefreshOnlineData : 1;                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMet_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      GameDescription;                                  		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InGamePost
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execInGamePost_Params
{
	class FString                                      InNameID;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearAllDelegates_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteSharedFileCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteSharedFileCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execWriteSharedFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    Contents;                                         		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SharedHandle;                                     		// 0x0024 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadSharedFileCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadSharedFileCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execReadSharedFile_Params
{
	class FString                                      SharedHandle;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      SharedHandle;                                     		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execClearSharedFile_Params
{
	class FString                                      SharedHandle;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execClearSharedFiles_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execGetSharedFileContents_Params
{
	class FString                                      SharedHandle;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execDeleteUserFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bShouldCloudDelete : 1;                           		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bShouldLocallyDelete : 1;                         		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execWriteUserFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execReadUserFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execGetUserFileList_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FEmsFile>                            UserFiles;                                        		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execEnumerateUserFiles_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      UserId;                                           		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execClearFile_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execClearFiles_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execGetFileContents_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] 
struct UOnlineSubsystemSteamworks_execWriteUserFileInternal_Params
{
	class FString                                      UserId;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Filename;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execGetFriendJoinURL_Params
{
	struct FUniqueNetId                                FriendUID;                                        		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ServerURL;                                        		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ServerUID;                                        		// 0x0020 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Params
{
	uint32_t                                           bMarkAsJoined : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      ServerURL;                                        		// 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ServerUID;                                        		// 0x0014 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Params
{
	class FString                                      UIDString;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                OutUID;                                           		// 0x0010 (0x0010) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Params
{
	struct FUniqueNetId                                Uid;                                              		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             VOIPAudioComponent;                               		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             AC;                                               		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execShowProfileUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      SubURL;                                           		// 0x0004 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerUID;                                        		// 0x0014 (0x0010) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Params
{
	struct FUniqueNetId                                Uid;                                              		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Params
{
	int32_t                                            AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ProgressCount;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MaxProgress;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execCreateLeaderboard_Params
{
	class FString                                      LeaderboardName;                                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            SortType;                                         		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            DisplayFormat;                                    		// 0x0011 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execResetStats_Params
{
	uint32_t                                           bResetAchievements : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execShowCustomMessageUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Recipients;                                       		// 0x0004 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      MessageTitle;                                     		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      NonEditableMessage;                               		// 0x0024 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      EditableMessage;                                  		// 0x0034 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execUnlockAvatarAward_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AvatarItemId;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execGetSteamClanData_Params
{
	TArray<struct FSteamPlayerClanData>                Results;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Params
{
	int32_t                                            TotalPlayers;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execReadOnlineAvatar_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	int32_t                                            Size;                                             		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class UTexture2D*                                  Avatar;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0004 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      Title;                                            		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Description;                                      		// 0x0024 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424400] 
struct UOnlineSubsystemSteamworks_execGetAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FAchievementDetails>                 Achievements;                                     		// 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            TitleId;                                          		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	EOnlineEnumerationReadState                        ReturnValue;                                      		// 0x0018 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params
{
	int32_t                                            TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execReadAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldReadText : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldReadImages : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execShowPlayersUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execShowFriendsUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnProfileDataChanged_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execUnlockGamerPicture_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            PictureId;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execUnlockAchievement_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PercentComplete;                                  		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execIsDeviceValid_Params
{
	int32_t                                            DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      DeviceName;                                       		// 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bManageStorage : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            CategoryMask;                                     		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            OfferId;                                          		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execShowInviteUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      InviteText;                                       		// 0x0004 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execShowAchievementsUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execShowMessagesUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execShowGamerCardUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execShowFeedbackUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execDeleteMessage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execUnmuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execMuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAllowFriends : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execCalcAggregateSkill_Params
{
	TArray<struct FDouble>                             Mus;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<struct FDouble>                             Sigmas;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FDouble                                     OutAggregateMu;                                   		// 0x0020 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FDouble                                     OutAggregateSigma;                                		// 0x0028 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execRegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ClientStatGuid;                                   		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetClientStatGuid_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Params
{
	class FString                                      HostStatGuid;                                     		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetHostStatGuid_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                SendingPlayer;                                    		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      SendingNick;                                      		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0024 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420002] 
struct UOnlineSubsystemSteamworks_execGetFriendMessages_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                   		// 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execJoinFriendGame_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      InviterName;                                      		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FUniqueNetId>                        Friends;                                          		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Text;                                             		// 0x0014 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Text;                                             		// 0x0014 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execSendMessageToFriendW_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Message;                                          		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      RequestingNick;                                   		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0024 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execDenyFriendInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execAcceptFriendInvite_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execRemoveFriend_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                FormerFriend;                                     		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execAddFriendByName_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      FriendName;                                       		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0014 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execAddFriend_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NewFriend;                                        		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Message;                                          		// 0x0014 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Params
{
	uint8_t                                            bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class FString                                      ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execShowKeyboardUI_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      TitleText;                                        		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DescriptionText;                                  		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsPassword : 1;                                  		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldValidate : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      DefaultText;                                      		// 0x002C (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            MaxResultLength;                                  		// 0x003C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execSetOnlineStatus_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StatusId;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FLocalizedStringSetting>             LocalizedStringSettings;                          		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FSettingsProperty>                   Properties;                                       		// 0x0018 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	EOnlineEnumerationReadState                        ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<uint8_t>                                    FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execReadTitleFile_Params
{
	class FString                                      FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetLocale_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execGetNATType_Params
{
	ENATType                                           ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Params
{
	uint8_t                                            ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsControllerConnected_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnControllerChange_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Params
{
	uint8_t                                            NewPos;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Params
{
	ENetworkNotificationPosition                       ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnExternalUIChange_Params
{
	uint32_t                                           bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params
{
	uint32_t                                           bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execHasLinkConnection_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] 
struct UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Params
{
	int32_t                                            UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            LeaderboardId;                                    		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                     		// 0x000C (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execFlushOnlineStats_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execWriteOnlineStats_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Player;                                           		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsWrite*                           StatsWrite;                                       		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execFreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumRows;                                          		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Params
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StartIndex;                                       		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            NumToRead;                                        		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execReadOnlineStats_Params
{
	TArray<struct FUniqueNetId>                        Players;                                          		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class USpeechRecognition*                          SpeechRecogObj;                                   		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execSelectVocabulary_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            VocabularyId;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnRecognitionComplete_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execGetRecognitionResults_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FSpeechRecognizedWord>               Words;                                            		// 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execStopSpeechRecognition_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execStartSpeechRecognition_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execStopNetworkedVoice_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execStartNetworkedVoice_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsTalking : 1;                                   		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsSystemWide : 1;                                		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execMuteRemoteTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsSystemWide : 1;                                		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Priority;                                         		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execIsHeadsetPresent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execRegisterLocalTalker_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424400] 
struct UOnlineSubsystemSteamworks_execGetFriendsList_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOnlineFriend>                       Friends;                                          		// 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            Count;                                            		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartingAt;                                       		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	EOnlineEnumerationReadState                        ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execReadFriendsList_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Count;                                            		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execWritePlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DeviceID;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetPlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NetId;                                            		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0014 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execReadPlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DeviceID;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execWriteProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execReadProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params
{
	uint8_t                                            NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsMuted_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420400] 
struct UOnlineSubsystemSteamworks_execAreAnyFriends_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FFriendsQuery>                       Query;                                            		// 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execIsFriend_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execCanPurchaseContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execCanDownloadUserContent_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execCanCommunicate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execCanPlayOnline_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	EFeaturePrivilegeLevel                             ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetPlayerNickname_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420002] 
struct UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0010) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsLocalLogin_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsGuestLogin_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execGetLoginStatus_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	ELoginStatus                                       ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLogoutCompleted_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execLogout_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LoginFailedDelegate;                              		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LoginFailedDelegate;                              		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginFailed_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020400] 
struct UOnlineSubsystemSteamworks_execAutoLogin_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024400] 
struct UOnlineSubsystemSteamworks_execLogin_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      LoginName;                                        		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         		// 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWantsLocalOnly : 1;                              		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execShowLoginUI_Params
{
	uint32_t                                           bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFriendsChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnMutingChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginCancelled_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginChange_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] 
struct UOnlineSubsystemSteamworks_eventExit_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00] 
struct UOnlineSubsystemSteamworks_eventInit_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
