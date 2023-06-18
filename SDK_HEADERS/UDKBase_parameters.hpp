/*
#############################################################################################
# Outlast2 (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: UDKBase_parameters.hpp
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

// Function UDKBase.MobileHUDExt.FlashSticks
// [0x00020002] 
struct AMobileHUDExt_execFlashSticks_Params
{
};

// Function UDKBase.MobileHUDExt.DrawMobileZone_Joystick
// [0x00820002] 
struct AMobileHUDExt_execDrawMobileZone_Joystick_Params
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            X;                                                		// 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                            Y;                                                		// 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                            Width;                                            		// 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                            Height;                                           		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FColor                                      LineColor;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
	// float                                              ClampedX;                                         		// 0x001C (0x0004) [0x0000000000000000]               
	// float                                              ClampedY;                                         		// 0x0020 (0x0004) [0x0000000000000000]               
	// float                                              Scale;                                            		// 0x0024 (0x0004) [0x0000000000000000]               
	// struct FColor                                      TempColor;                                        		// 0x0028 (0x0004) [0x0000000000000000]               
	// float                                              FlashScale;                                       		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function UDKBase.MobileHUDExt.DrawMobileZone_Slider
// [0x00820002] 
struct AMobileHUDExt_execDrawMobileZone_Slider_Params
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// struct FTextureUVs                                 UVs;                                              		// 0x0008 (0x0010) [0x0000000000000000]               
	// class UTexture2D*                                  Tex;                                              		// 0x0018 (0x0008) [0x0000000000000000]               
	// float                                              Ofs;                                              		// 0x0020 (0x0004) [0x0000000000000000]               
	// float                                              Scale;                                            		// 0x0024 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.MobileHUDExt.PostRender
// [0x00020000] 
struct AMobileHUDExt_execPostRender_Params
{
};

// Function UDKBase.MobileHUDExt.ShowMobileHud
// [0x00020002] 
struct AMobileHUDExt_execShowMobileHud_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.MobileHUDExt.ConditionallyDrawTapToMoveEffect
// [0x00020002] 
struct AMobileHUDExt_execConditionallyDrawTapToMoveEffect_Params
{
	// float                                              EffectDuration;                                   		// 0x0000 (0x0004) [0x0000000000000000]               
	// float                                              EffectSize;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
	// float                                              EffectOpacity;                                    		// 0x0008 (0x0004) [0x0000000000000000]               
	// float                                              FadeInPercent;                                    		// 0x000C (0x0004) [0x0000000000000000]               
	// float                                              FadeOutPercent;                                   		// 0x0010 (0x0004) [0x0000000000000000]               
	// float                                              EffectProgress;                                   		// 0x0014 (0x0004) [0x0000000000000000]               
	// float                                              AnimatedSize;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// float                                              AnimatedOpacity;                                  		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function UDKBase.MobileHUDExt.StartTapToMoveEffect
// [0x00020002] 
struct AMobileHUDExt_execStartTapToMoveEffect_Params
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.MobileHUDExt.UpdateBenchmarkInformation
// [0x00020400] 
struct AMobileHUDExt_execUpdateBenchmarkInformation_Params
{
};

// Function UDKBase.SimpleGame.SetGameType
// [0x00022802] 
struct ASimpleGame_eventSetGameType_Params
{
	class FString                                      MapName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Options;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Portal;                                           		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      ReturnValue;                                      		// 0x0030 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class FString                                      NewMapName;                                       		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      GameTypeName;                                     		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      ThisMapPrefix;                                    		// 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      GameOption;                                       		// 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            PrefixIndex;                                      		// 0x0078 (0x0004) [0x0000000000000000]               
	// int32_t                                            MapPrefixPos;                                     		// 0x007C (0x0004) [0x0000000000000000]               
	// int32_t                                            GameTypePrefixPos;                                		// 0x0080 (0x0004) [0x0000000000000000]               
	// class UClass*                                      UTGameType;                                       		// 0x0084 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.SimpleGame.StripPlayOnPrefix
// [0x00022002] 
struct ASimpleGame_execStripPlayOnPrefix_Params
{
	class FString                                      MapName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function UDKBase.UDKBot.DelayedLeaveVehicle
// [0x00020800] 
struct AUDKBot_eventDelayedLeaveVehicle_Params
{
};

// Function UDKBase.UDKBot.DelayedWarning
// [0x00020800] 
struct AUDKBot_eventDelayedWarning_Params
{
};

// Function UDKBase.UDKBot.MissedDodge
// [0x00020800] 
struct AUDKBot_eventMissedDodge_Params
{
};

// Function UDKBase.UDKBot.AdjustAimError
// [0x00020800] 
struct AUDKBot_eventAdjustAimError_Params
{
	float                                              TargetDist;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInstantProj : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKBot.SuperDesireability
// [0x00020800] 
struct AUDKBot_eventSuperDesireability_Params
{
	class APickupFactory*                              P;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKBot.SpecialJumpCost
// [0x00420800] 
struct AUDKBot_eventSpecialJumpCost_Params
{
	float                                              RequiredJumpZ;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Cost;                                             		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKBot.MayDodgeToMoveTarget
// [0x00020800] 
struct AUDKBot_eventMayDodgeToMoveTarget_Params
{
};

// Function UDKBase.UDKBot.TimeDJReset
// [0x00020800] 
struct AUDKBot_eventTimeDJReset_Params
{
};

// Function UDKBase.UDKBot.MonitoredPawnAlert
// [0x00020800] 
struct AUDKBot_eventMonitoredPawnAlert_Params
{
};

// Function UDKBase.UDKBot.WhatToDoNext
// [0x00020800] 
struct AUDKBot_eventWhatToDoNext_Params
{
};

// Function UDKBase.UDKBot.FindBestSuperPickup
// [0x00020400] 
struct AUDKBot_execFindBestSuperPickup_Params
{
	float                                              MaxDist;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKBot.BuildSquadRoute
// [0x00020401] 
struct AUDKBot_execBuildSquadRoute_Params
{
};

// Function UDKBase.UDKBot.FindPathToSquadRoute
// [0x00024401] 
struct AUDKBot_execFindPathToSquadRoute_Params
{
	uint32_t                                           bWeightDetours : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKBot.FindBestInventoryPath
// [0x00420401] 
struct AUDKBot_execFindBestInventoryPath_Params
{
	float                                              MinWeight;                                        		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKBot.CanMakePathTo
// [0x00020401] 
struct AUDKBot_execCanMakePathTo_Params
{
	class AActor*                                      A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKBot.LatentWhatToDoNext
// [0x00020409] 
struct AUDKBot_execLatentWhatToDoNext_Params
{
};

// Function UDKBase.UDKBot.WaitToSeeEnemy
// [0x00020409] 
struct AUDKBot_execWaitToSeeEnemy_Params
{
};

// Function UDKBase.UDKBot.ReceiveRunOverWarning
// [0x00020800] 
struct AUDKBot_eventReceiveRunOverWarning_Params
{
	class AUDKVehicle*                                 V;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              projSpeed;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     VehicleDir;                                       		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKBot.ExecuteWhatToDoNext
// [0x00080800] 
struct AUDKBot_eventExecuteWhatToDoNext_Params
{
};

// Function UDKBase.UDKBot.FaceActor
// [0x00020000] 
struct AUDKBot_execFaceActor_Params
{
	float                                              StrafingModifier;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKCarriedObject.GetTeamNum
// [0x00020500] 
struct AUDKCarriedObject_execGetTeamNum_Params
{
	uint8_t                                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKCarriedObject.OnBaseChainChanged
// [0x00020900] 
struct AUDKCarriedObject_eventOnBaseChainChanged_Params
{
};

// Function UDKBase.UDKCarriedObject.NotReachableBy
// [0x00020800] 
struct AUDKCarriedObject_eventNotReachableBy_Params
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKCarriedObject.SetHUDLocation
// [0x00020500] 
struct AUDKCarriedObject_execSetHUDLocation_Params
{
	struct FVector                                     NewHUDLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKDataStore_GameSearchBase.HasExistingSearchResults
// [0x00020002] 
struct UUDKDataStore_GameSearchBase_execHasExistingSearchResults_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bQueryCompleted : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function UDKBase.UDKDataStore_GameSearchBase.HasOutstandingQueries
// [0x00024002] 
struct UUDKDataStore_GameSearchBase_execHasOutstandingQueries_Params
{
	uint32_t                                           bRestrictCheckToSelf : 1;                         		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            I;                                                		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function UDKBase.UDKDataStore_GameSearchBase.OnSearchComplete
// [0x00020002] 
struct UUDKDataStore_GameSearchBase_execOnSearchComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.UDKDataStore_GameSearchBase.SubmitGameSearch
// [0x00024802] 
struct UUDKDataStore_GameSearchBase_eventSubmitGameSearch_Params
{
	uint8_t                                            ControllerIndex;                                  		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInvalidateExistingSearchResults : 1;             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function UDKBase.UDKDataStore_GameSearchBase.Init
// [0x00020802] 
struct UUDKDataStore_GameSearchBase_eventInit_Params
{
};

// Function UDKBase.UDKEmitCameraEffect.UpdateLocation
// [0x00420400] 
struct AUDKEmitCameraEffect_execUpdateLocation_Params
{
	struct FVector                                     CamLoc;                                           		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FRotator                                    CamRot;                                           		// 0x000C (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              CamFOVDeg;                                        		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKEmitCameraEffect.RegisterCamera
// [0x00020002] 
struct AUDKEmitCameraEffect_execRegisterCamera_Params
{
	class AUDKPlayerController*                        inCam;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKEmitCameraEffect.Destroyed
// [0x00020002] 
struct AUDKEmitCameraEffect_execDestroyed_Params
{
};

// Function UDKBase.UDKEmitCameraEffect.PostBeginPlay
// [0x00020902] 
struct AUDKEmitCameraEffect_eventPostBeginPlay_Params
{
};

// Function UDKBase.UDKEmitterPool.SpawnExplosionLight
// [0x00024002] 
struct AUDKEmitterPool_execSpawnExplosionLight_Params
{
	class UClass*                                      LightClass;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SpawnLocation;                                    		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      AttachToActor;                                    		// 0x0014 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UUDKExplosionLight*                          ReturnValue;                                      		// 0x001C (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
	// class UUDKExplosionLight*                          Light;                                            		// 0x0024 (0x0008) [0x0000000004000000] (CPF_EditInline)
	// int32_t                                            I;                                                		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function UDKBase.UDKEmitterPool.OnExplosionLightFinished
// [0x00020002] 
struct AUDKEmitterPool_execOnExplosionLightFinished_Params
{
	class UUDKExplosionLight*                          Light;                                            		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	// int32_t                                            I;                                                		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.UDKEmitterPool.SpawnEmitter
// [0x00024002] 
struct AUDKEmitterPool_execSpawnEmitter_Params
{
	class UParticleSystem*                             EmitterTemplate;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SpawnLocation;                                    		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    SpawnRotation;                                    		// 0x0014 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      AttachToActor;                                    		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      InInstigator;                                     		// 0x0028 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            MaxDLEPooledReuses;                               		// 0x0030 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bInheritScaleFromBase : 1;                        		// 0x0034 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class UParticleSystemComponent*                    ReturnValue;                                      		// 0x0038 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
	// class APlayerController*                           PC;                                               		// 0x0040 (0x0008) [0x0000000000000000]               
	// int32_t                                            LODLevel;                                         		// 0x0048 (0x0004) [0x0000000000000000]               
	// class UParticleSystemComponent*                    PSC;                                              		// 0x004C (0x0008) [0x0000000004000000] (CPF_EditInline)
};

// Function UDKBase.UDKExplosionLight.OnLightFinished
// [0x00120000] 
struct UUDKExplosionLight_execOnLightFinished_Params
{
	class UUDKExplosionLight*                          Light;                                            		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function UDKBase.UDKExplosionLight.ResetLight
// [0x00020401] 
struct UUDKExplosionLight_execResetLight_Params
{
};

// Function UDKBase.UDKForcedDirectionVolume.StopsProjectile
// [0x00020102] 
struct AUDKForcedDirectionVolume_execStopsProjectile_Params
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKForcedDirectionVolume.UnTouch
// [0x00020902] 
struct AUDKForcedDirectionVolume_eventUnTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// uint32_t                                           bInAnotherVolume : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AUDKForcedDirectionVolume*                   AnotherVolume;                                    		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKForcedDirectionVolume.Touch
// [0x00020902] 
struct AUDKForcedDirectionVolume_eventTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
	// class AUDKVehicle*                                 V;                                                		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKForcedDirectionVolume.ActorEnteredVolume
// [0x00020802] 
struct AUDKForcedDirectionVolume_eventActorEnteredVolume_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKForcedDirectionVolume.PostBeginPlay
// [0x00020102] 
struct AUDKForcedDirectionVolume_execPostBeginPlay_Params
{
};

// Function UDKBase.UDKGameInteraction.NotifyGameSessionEnded
// [0x00020002] 
struct UUDKGameInteraction_execNotifyGameSessionEnded_Params
{
};

// Function UDKBase.UDKGameInteraction.BlockUIInput
// [0x00020802] 
struct UUDKGameInteraction_eventBlockUIInput_Params
{
	uint32_t                                           bBlock : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.UDKGameInteraction.ClearUIInputBlocks
// [0x00020802] 
struct UUDKGameInteraction_eventClearUIInputBlocks_Params
{
};

// Function UDKBase.UDKGameInteraction.ShouldProcessUIInput
// [0x00020401] 
struct UUDKGameInteraction_execShouldProcessUIInput_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKGameObjective.GetTeamNum
// [0x00020500] 
struct AUDKGameObjective_execGetTeamNum_Params
{
	uint8_t                                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKGameObjective.DrawIcon
// [0x00020500] 
struct AUDKGameObjective_execDrawIcon_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     IconLocation;                                     		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              IconWidth;                                        		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              IconAlpha;                                        		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AUDKPlayerController*                        PlayerOwner;                                      		// 0x001C (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FLinearColor                                DrawColor;                                        		// 0x0024 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKGameObjective.SetHUDLocation
// [0x00020500] 
struct AUDKGameObjective_execSetHUDLocation_Params
{
	struct FVector                                     NewHUDLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKGameObjective.TriggerFlagEvent
// [0x00020000] 
struct AUDKGameObjective_execTriggerFlagEvent_Params
{
	struct FName                                       EventType;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 EventInstigator;                                  		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKGameObjective.BotNearObjective
// [0x00020000] 
struct AUDKGameObjective_execBotNearObjective_Params
{
	class AAIController*                               C;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKGameObjective.GetBestViewTarget
// [0x00020802] 
struct AUDKGameObjective_eventGetBestViewTarget_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKGameObjective.ObjectiveChanged
// [0x00020000] 
struct AUDKGameObjective_execObjectiveChanged_Params
{
};

// Function UDKBase.UDKGameSettingsCommon.BlobToString
// [0x00422400] 
struct UUDKGameSettingsCommon_execBlobToString_Params
{
	class FString                                      InBlob;                                           		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function UDKBase.UDKGameSettingsCommon.StringToBlob
// [0x00422400] 
struct UUDKGameSettingsCommon_execStringToBlob_Params
{
	class FString                                      InString;                                         		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      OutBlob;                                          		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKGameViewportClient.LoadRandomLocalizedHintMessage
// [0x00020401] 
struct UUDKGameViewportClient_execLoadRandomLocalizedHintMessage_Params
{
	class FString                                      Category1Name;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Category2Name;                                    		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function UDKBase.UDKHUD.TranslateBindToFont
// [0x00422400] 
struct AUDKHUD_execTranslateBindToFont_Params
{
	class FString                                      InBindStr;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UFont*                                       DrawFont;                                         		// 0x0010 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class FString                                      OutBindStr;                                       		// 0x0018 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.UDKHUD.DrawGlowText
// [0x00024400] 
struct AUDKHUD_execDrawGlowText_Params
{
	class FString                                      Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              X;                                                		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Y;                                                		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              MaxHeightInPixels;                                		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              PulseTime;                                        		// 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bRightJustified : 1;                              		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function UDKBase.UDKJumpPad.SuggestMovePreparation
// [0x00020802] 
struct AUDKJumpPad_eventSuggestMovePreparation_Params
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AVehicle*                                    V;                                                		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKJumpPad.PostTouch
// [0x00020802] 
struct AUDKJumpPad_eventPostTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class AUDKPawn*                                    P;                                                		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKJumpPad.Touch
// [0x00020802] 
struct AUDKJumpPad_eventTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKKActorBreakable.ReplicatedEvent
// [0x00020902] 
struct AUDKKActorBreakable_eventReplicatedEvent_Params
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKKActorBreakable.BreakApart
// [0x00020002] 
struct AUDKKActorBreakable_execBreakApart_Params
{
};

// Function UDKBase.UDKKActorBreakable.EncroachingOn
// [0x00020002] 
struct AUDKKActorBreakable_execEncroachingOn_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKKActorBreakable.TakeDamage
// [0x00024802] 
struct AUDKKActorBreakable_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function UDKBase.UDKKActorBreakable.OnEncroach
// [0x00120000] 
struct AUDKKActorBreakable_execOnEncroach_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKKActorBreakable.OnBreakApart
// [0x00120000] 
struct AUDKKActorBreakable_execOnBreakApart_Params
{
};

// Function UDKBase.UDKOnlineEventTracker.RaiseEvent
// [0x00020C00] 
struct UUDKOnlineEventTracker_eventRaiseEvent_Params
{
	class FString                                      EventName;                                        		// 0x0000 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              EventParams;                                      		// 0x0010 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKOnlineEventTracker.ShutDown
// [0x00020C00] 
struct UUDKOnlineEventTracker_eventShutDown_Params
{
};

// Function UDKBase.UDKOnlineEventTracker.Init
// [0x00020C00] 
struct UUDKOnlineEventTracker_eventInit_Params
{
};

// Function UDKBase.UDKParticleSystemComponent.SetFOV
// [0x00020401] 
struct UUDKParticleSystemComponent_execSetFOV_Params
{
	float                                              NewFOV;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKPawn.StuckFalling
// [0x00020800] 
struct AUDKPawn_eventStuckFalling_Params
{
};

// Function UDKBase.UDKPawn.UpdateEyeHeight
// [0x00020800] 
struct AUDKPawn_eventUpdateEyeHeight_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKPawn.TakeHitBlendedOut
// [0x00020900] 
struct AUDKPawn_eventTakeHitBlendedOut_Params
{
};

// Function UDKBase.UDKPawn.StartFeignDeathRecoveryAnim
// [0x00020900] 
struct AUDKPawn_eventStartFeignDeathRecoveryAnim_Params
{
};

// Function UDKBase.UDKPawn.SetHandIKEnabled
// [0x00020100] 
struct AUDKPawn_execSetHandIKEnabled_Params
{
	uint32_t                                           bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.UDKPawn.SetWeaponAttachmentVisibility
// [0x00020100] 
struct AUDKPawn_execSetWeaponAttachmentVisibility_Params
{
	uint32_t                                           bAttachmentVisible : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.UDKPawn.NativePostRenderFor
// [0x00020500] 
struct AUDKPawn_execNativePostRenderFor_Params
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UCanvas*                                     Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CameraPosition;                                   		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CameraDir;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKPawn.SetHUDLocation
// [0x00020500] 
struct AUDKPawn_execSetHUDLocation_Params
{
	struct FVector                                     NewHUDLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKPawn.SuggestJumpVelocity
// [0x00424400] 
struct AUDKPawn_execSuggestJumpVelocity_Params
{
	struct FVector                                     JumpVelocity;                                     		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     Destination;                                      		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Start;                                            		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bRequireFallLanding : 1;                          		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKPawn.StartCrouch
// [0x00020902] 
struct AUDKPawn_eventStartCrouch_Params
{
	float                                              HeightAdjust;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKPawn.EndCrouch
// [0x00020902] 
struct AUDKPawn_eventEndCrouch_Params
{
	float                                              HeightAdjust;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKPawn.StoppedFalling
// [0x00020802] 
struct AUDKPawn_eventStoppedFalling_Params
{
};

// Function UDKBase.UDKPawn.HoldGameObject
// [0x00020900] 
struct AUDKPawn_eventHoldGameObject_Params
{
	class AUDKCarriedObject*                           UDKGameObj;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKPawn.IsInvisible
// [0x00020400] 
struct AUDKPawn_execIsInvisible_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKPawn.GetTargetLocation
// [0x00024500] 
struct AUDKPawn_execGetTargetLocation_Params
{
	class AActor*                                      RequestedBy;                                      		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bRequestAlternateLoc : 1;                         		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKPawn.EnsureOverlayComponentLast
// [0x00020400] 
struct AUDKPawn_execEnsureOverlayComponentLast_Params
{
};

// Function UDKBase.UDKPawn.RestorePreRagdollCollisionComponent
// [0x00020400] 
struct AUDKPawn_execRestorePreRagdollCollisionComponent_Params
{
};

// Function UDKBase.UDKPawn.GetBoundingCylinder
// [0x00420400] 
struct AUDKPawn_execGetBoundingCylinder_Params
{
	float                                              CollisionRadius;                                  		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              CollisionHeight;                                  		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function UDKBase.UDKPickupFactory.SetPickupHidden
// [0x00020102] 
struct AUDKPickupFactory_execSetPickupHidden_Params
{
};

// Function UDKBase.UDKPickupFactory.SetPickupVisible
// [0x00020102] 
struct AUDKPickupFactory_execSetPickupVisible_Params
{
};

// Function UDKBase.UDKPlayerController.GetTargetAdhesionFrictionTarget
// [0x00420400] 
struct AUDKPlayerController_execGetTargetAdhesionFrictionTarget_Params
{
	float                                              MaxDistance;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CamLoc;                                           		// 0x0004 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FRotator                                    CamRot;                                           		// 0x0010 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class APawn*                                       ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKPlayerController.ClearCameraEffect
// [0x00020002] 
struct AUDKPlayerController_execClearCameraEffect_Params
{
};

// Function UDKBase.UDKPlayerController.ClientSpawnCameraEffect
// [0xFFFF000001820142] 
struct AUDKPlayerController_execClientSpawnCameraEffect_Params
{
	class UClass*                                      CameraEffectClass;                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// struct FVector                                     CamLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]               
	// struct FRotator                                    CamRot;                                           		// 0x0014 (0x000C) [0x0000000000000000]               
};

// Function UDKBase.UDKPlayerController.RemoveCameraEffect
// [0x00020002] 
struct AUDKPlayerController_execRemoveCameraEffect_Params
{
	class AUDKEmitCameraEffect*                        CamEmitter;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKPlayerController.IsMouseAvailable
// [0x00020500] 
struct AUDKPlayerController_execIsMouseAvailable_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKPlayerController.IsKeyboardAvailable
// [0x00020500] 
struct AUDKPlayerController_execIsKeyboardAvailable_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKPlayerController.SetHardwarePhysicsEnabled
// [0x00020400] 
struct AUDKPlayerController_execSetHardwarePhysicsEnabled_Params
{
	uint32_t                                           bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.UDKPlayerController.SetGamma
// [0x00020400] 
struct AUDKPlayerController_execSetGamma_Params
{
	float                                              GammaValue;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKPlayerInput.GetUDKBindNameFromCommand
// [0x00020400] 
struct UUDKPlayerInput_execGetUDKBindNameFromCommand_Params
{
	class FString                                      BindCommand;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function UDKBase.UDKProfileSettings.ResetKeysToDefault
// [0x00026400] 
struct UUDKProfileSettings_execResetKeysToDefault_Params
{
	class ULocalPlayer*                                InPlayerOwner;                                    		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function UDKBase.UDKProfileSettings.ResetToDefault
// [0x00020400] 
struct UUDKProfileSettings_execResetToDefault_Params
{
	int32_t                                            ProfileId;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKProjectile.CreateProjectileLight
// [0x00020900] 
struct AUDKProjectile_eventCreateProjectileLight_Params
{
};

// Function UDKBase.UDKProjectile.GetTerminalVelocity
// [0x00020400] 
struct AUDKProjectile_execGetTerminalVelocity_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKScout.SuggestJumpVelocity
// [0x00424400] 
struct AUDKScout_execSuggestJumpVelocity_Params
{
	struct FVector                                     JumpVelocity;                                     		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     Destination;                                      		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Start;                                            		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bRequireFallLanding : 1;                          		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKScriptedNavigationPoint.NotifyAnchorFindingResult
// [0x00020800] 
struct AUDKScriptedNavigationPoint_eventNotifyAnchorFindingResult_Params
{
	class ANavigationPoint*                            EndAnchor;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class APawn*                                       RouteFinder;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKScriptedNavigationPoint.SpecifyEndAnchor
// [0x00020800] 
struct AUDKScriptedNavigationPoint_eventSpecifyEndAnchor_Params
{
	class APawn*                                       RouteFinder;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKSkeletalMeshComponent.SetFOV
// [0x00020401] 
struct UUDKSkeletalMeshComponent_execSetFOV_Params
{
	float                                              NewFOV;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKSkeletalMeshComponent.PreloadTextures
// [0x00020902] 
struct UUDKSkeletalMeshComponent_eventPreloadTextures_Params
{
	uint32_t                                           bForcePreload : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              ClearTime;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.UDKTeamOwnedInfo.GetTeamNum
// [0x00020500] 
struct AUDKTeamOwnedInfo_execGetTeamNum_Params
{
	uint8_t                                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKTeleporterBase.Accept
// [0x00020902] 
struct AUDKTeleporterBase_eventAccept_Params
{
	class AActor*                                      Incoming;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      Source;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKTeleporterBase.InitializePortalEffect
// [0x00020102] 
struct AUDKTeleporterBase_execInitializePortalEffect_Params
{
	class AActor*                                      Dest;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// uint32_t                                           bStaticCapture : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function UDKBase.UDKTeleporterBase.PostBeginPlay
// [0x00020902] 
struct AUDKTeleporterBase_eventPostBeginPlay_Params
{
	// class ATeleporter*                                 Dest;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKUIDataProvider_SearchResult.IsPrivateServer
// [0x00020400] 
struct UUDKUIDataProvider_SearchResult_execIsPrivateServer_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKUIDataStore_MenuItems.AddListElementProvidersKey
// [0x00020400] 
struct UUDKUIDataStore_MenuItems_execAddListElementProvidersKey_Params
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UUDKUIResourceDataProvider*                  Provider;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKUIDataStore_MenuItems.RemoveListElementProvidersKey
// [0x00020400] 
struct UUDKUIDataStore_MenuItems_execRemoveListElementProvidersKey_Params
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKUIDataStore_MenuItems.InitializeListElementProviders
// [0x00020802] 
struct UUDKUIDataStore_MenuItems_eventInitializeListElementProviders_Params
{
	// TArray<class UUDKUIResourceDataProvider*>          WeaponProviders;                                  		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UUDKUIResourceDataProvider*                  Provider;                                         		// 0x0010 (0x0008) [0x0000000000000000]               
	// int32_t                                            WeaponIdx;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.UDKUIDataStore_MenuItems.GetProviderSet
// [0x00420400] 
struct UUDKUIDataStore_MenuItems_execGetProviderSet_Params
{
	struct FName                                       ProviderFieldName;                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<class UUDKUIResourceDataProvider*>          OutProviders;                                     		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKUIDataStore_MenuItems.GetAllResourceDataProviders
// [0x00422401] 
struct UUDKUIDataStore_MenuItems_execGetAllResourceDataProviders_Params
{
	class UClass*                                      ProviderClass;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<class UUDKUIResourceDataProvider*>          Providers;                                        		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.ClearBoundKeyCache
// [0x00020401] 
struct UUDKUIDataStore_StringAliasBindingMap_execClearBoundKeyCache_Params
{
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.AddMappingToBoundKeyCache
// [0x00080401] 
struct UUDKUIDataStore_StringAliasBindingMap_execAddMappingToBoundKeyCache_Params
{
	class FString                                      Command;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      MappingStr;                                       		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            FieldIndex;                                       		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.FindMappingInBoundKeyCache
// [0x00480401] 
struct UUDKUIDataStore_StringAliasBindingMap_execFindMappingInBoundKeyCache_Params
{
	class FString                                      Command;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      MappingStr;                                       		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            FieldIndex;                                       		// 0x0020 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetBoundStringWithFieldName
// [0x00424400] 
struct UUDKUIDataStore_StringAliasBindingMap_execGetBoundStringWithFieldName_Params
{
	class FString                                      FieldName;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      MappedString;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            StartIndex;                                       		// 0x0020 (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	class FString                                      BindString;                                       		// 0x0024 (0x0010) [0x0000000000400190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0034 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetStringWithFieldName
// [0x00420400] 
struct UUDKUIDataStore_StringAliasBindingMap_execGetStringWithFieldName_Params
{
	class FString                                      FieldName;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      MappedString;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringAliasMap.GetStringWithFieldName
// [0x00420400] 
struct UUDKUIDataStore_StringAliasMap_execGetStringWithFieldName_Params
{
	class FString                                      FieldName;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      MappedString;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringList.Num
// [0x00020802] 
struct UUDKUIDataStore_StringList_eventNum_Params
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            FieldIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function UDKBase.UDKUIDataStore_StringList.SetCurrentValueIndex
// [0x00020802] 
struct UUDKUIDataStore_StringList_eventSetCurrentValueIndex_Params
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NewValueIndex;                                    		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Result;                                           		// 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                            FieldIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValueIndex
// [0x00020802] 
struct UUDKUIDataStore_StringList_eventGetCurrentValueIndex_Params
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Result;                                           		// 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                            FieldIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValue
// [0x00420802] 
struct UUDKUIDataStore_StringList_eventGetCurrentValue_Params
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      out_Value;                                        		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           Result : 1;                                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            FieldIndex;                                       		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.UDKUIDataStore_StringList.GetStr
// [0x00020400] 
struct UUDKUIDataStore_StringList_execGetStr_Params
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StrIndex;                                         		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x000C (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function UDKBase.UDKUIDataStore_StringList.FindStr
// [0x00020400] 
struct UUDKUIDataStore_StringList_execFindStr_Params
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      SearchString;                                     		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringList.Empty
// [0x00024400] 
struct UUDKUIDataStore_StringList_execEmpty_Params
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bBatchOp : 1;                                     		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function UDKBase.UDKUIDataStore_StringList.RemoveStrByIndex
// [0x00024400] 
struct UUDKUIDataStore_StringList_execRemoveStrByIndex_Params
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Count;                                            		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bBatchOp : 1;                                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function UDKBase.UDKUIDataStore_StringList.RemoveStr
// [0x00024400] 
struct UUDKUIDataStore_StringList_execRemoveStr_Params
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      StringToRemove;                                   		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bBatchOp : 1;                                     		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function UDKBase.UDKUIDataStore_StringList.GetFieldIndex
// [0x00020400] 
struct UUDKUIDataStore_StringList_execGetFieldIndex_Params
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringList.Registered
// [0x00020802] 
struct UUDKUIDataStore_StringList_eventRegistered_Params
{
	class ULocalPlayer*                                PlayerOwner;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            FieldIdx;                                         		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.UDKUIResourceDataProvider.ShouldBeFiltered
// [0x00020802] 
struct UUDKUIResourceDataProvider_eventShouldBeFiltered_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AWorldInfo*                                  WorldI;                                           		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKVehicleBase.HandleDeadVehicleDriver
// [0x00020002] 
struct AUDKVehicleBase_execHandleDeadVehicleDriver_Params
{
	// class APawn*                                       OldDriver;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AUDKVehicle*                                 VehicleBase;                                      		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKVehicleBase.DriverLeft
// [0x00020002] 
struct AUDKVehicleBase_execDriverLeft_Params
{
	// class AAIController*                               C;                                                		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKVehicleBase.StopFiringWeapon
// [0x00020100] 
struct AUDKVehicleBase_execStopFiringWeapon_Params
{
};

// Function UDKBase.UDKVehicleBase.BotFire
// [0x00020002] 
struct AUDKVehicleBase_execBotFire_Params
{
	uint32_t                                           bFinished : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AUDKBot*                                     Bot;                                              		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKVehicleBase.ChooseFireMode
// [0x00020002] 
struct AUDKVehicleBase_execChooseFireMode_Params
{
	uint8_t                                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicleBase.DetachDriver
// [0x00020102] 
struct AUDKVehicleBase_execDetachDriver_Params
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class AUDKPawn*                                    UTP;                                              		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKVehicleBase.EjectDriver
// [0x00820002] 
struct AUDKVehicleBase_execEjectDriver_Params
{
	// float                                              Speed;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	// struct FRotator                                    ExitRotation;                                     		// 0x0004 (0x000C) [0x0000000000000000]               
};

// Function UDKBase.UDKVehicleBase.GetVehicleDrivingStatName
// [0x00020002] 
struct AUDKVehicleBase_execGetVehicleDrivingStatName_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FName                                       VehicleStatName;                                  		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKVehicleBase.ApplyWeaponEffects
// [0x00024100] 
struct AUDKVehicleBase_execApplyWeaponEffects_Params
{
	int32_t                                            OverlayFlags;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SeatIndex;                                        		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function UDKBase.UDKVehicleBase.DriverEnter
// [0x00020002] 
struct AUDKVehicleBase_execDriverEnter_Params
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AAIController*                               C;                                                		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKVehicleBase.DrivingStatusChanged
// [0x00020102] 
struct AUDKVehicleBase_execDrivingStatusChanged_Params
{
};

// Function UDKBase.UDKVehicleBase.NeedToTurn
// [0x00020002] 
struct AUDKVehicleBase_execNeedToTurn_Params
{
	struct FVector                                     targ;                                             		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicleBase.GetDamageScaling
// [0x00020002] 
struct AUDKVehicleBase_execGetDamageScaling_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicleBase.ServerChangeSeat
// [0xFFFF0000002200C0] 
struct AUDKVehicleBase_execServerChangeSeat_Params
{
	int32_t                                            RequestedSeat;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicleBase.ServerAdjacentSeat
// [0xFFFF0000002200C0] 
struct AUDKVehicleBase_execServerAdjacentSeat_Params
{
	int32_t                                            Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 C;                                                		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicleBase.AdjacentSeat
// [0x00020102] 
struct AUDKVehicleBase_execAdjacentSeat_Params
{
	int32_t                                            Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 C;                                                		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicleBase.SwitchWeapon
// [0x00020102] 
struct AUDKVehicleBase_execSwitchWeapon_Params
{
	uint8_t                                            NewGroup;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicleBase.HoldGameObject
// [0x00020900] 
struct AUDKVehicleBase_eventHoldGameObject_Params
{
	class AUDKCarriedObject*                           GameObj;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicle.UpdateHoverboardDustEffect
// [0x00020800] 
struct AUDKVehicle_eventUpdateHoverboardDustEffect_Params
{
	float                                              DustHeight;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicle.PostInitRigidBody
// [0x00020800] 
struct AUDKVehicle_eventPostInitRigidBody_Params
{
	class UPrimitiveComponent*                         PrimComp;                                         		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function UDKBase.UDKVehicle.TakeFireDamage
// [0x00020800] 
struct AUDKVehicle_eventTakeFireDamage_Params
{
};

// Function UDKBase.UDKVehicle.CheckReset
// [0x00020802] 
struct AUDKVehicle_eventCheckReset_Params
{
};

// Function UDKBase.UDKVehicle.TakeWaterDamage
// [0x00020800] 
struct AUDKVehicle_eventTakeWaterDamage_Params
{
};

// Function UDKBase.UDKVehicle.RBPenetrationDestroy
// [0x00020802] 
struct AUDKVehicle_eventRBPenetrationDestroy_Params
{
};

// Function UDKBase.UDKVehicle.MorphTargetDestroyed
// [0x00020900] 
struct AUDKVehicle_eventMorphTargetDestroyed_Params
{
	int32_t                                            MorphNodeIndex;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicle.ApplyMorphDamage
// [0x00020400] 
struct AUDKVehicle_execApplyMorphDamage_Params
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Damage;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicle.UpdateDamageMaterial
// [0x00020500] 
struct AUDKVehicle_execUpdateDamageMaterial_Params
{
};

// Function UDKBase.UDKVehicle.InitDamageSkel
// [0x00020500] 
struct AUDKVehicle_execInitDamageSkel_Params
{
};

// Function UDKBase.UDKVehicle.SetHUDLocation
// [0x00020500] 
struct AUDKVehicle_execSetHUDLocation_Params
{
	struct FVector                                     NewHUDLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicle.InUseableRange
// [0x00020500] 
struct AUDKVehicle_execInUseableRange_Params
{
	class AUDKPlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Dist;                                             		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.NativePostRenderFor
// [0x00020500] 
struct AUDKVehicle_execNativePostRenderFor_Params
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UCanvas*                                     Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CameraPosition;                                   		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CameraDir;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicle.GetTeamNum
// [0x00020500] 
struct AUDKVehicle_execGetTeamNum_Params
{
	uint8_t                                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.SelfDestruct
// [0x00020800] 
struct AUDKVehicle_eventSelfDestruct_Params
{
	class AActor*                                      ImpactedActor;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicle.CheckAutoDestruct
// [0x00020500] 
struct AUDKVehicle_execCheckAutoDestruct_Params
{
	class ATeamInfo*                                   InstigatorTeam;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              CheckRadius;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.GetMaxRiseForce
// [0x00020400] 
struct AUDKVehicle_execGetMaxRiseForce_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.JumpOutCheck
// [0x00020800] 
struct AUDKVehicle_eventJumpOutCheck_Params
{
};

// Function UDKBase.UDKVehicle.ReceivedHealthChange
// [0x00020900] 
struct AUDKVehicle_eventReceivedHealthChange_Params
{
};

// Function UDKBase.UDKVehicle.PlayTakeHitEffects
// [0x00020900] 
struct AUDKVehicle_eventPlayTakeHitEffects_Params
{
};

// Function UDKBase.UDKVehicle.OnTouchForcedDirVolume
// [0x00020002] 
struct AUDKVehicle_execOnTouchForcedDirVolume_Params
{
	class AUDKForcedDirectionVolume*                   Vol;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.GetGravityZ
// [0x00020400] 
struct AUDKVehicle_execGetGravityZ_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.OnPropertyChange
// [0x00020800] 
struct AUDKVehicle_eventOnPropertyChange_Params
{
	struct FName                                       PropName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicle.LockOnWarning
// [0x00020900] 
struct AUDKVehicle_eventLockOnWarning_Params
{
	class AUDKProjectile*                              IncomingMissile;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicle.GetRanOverDamageType
// [0x00020002] 
struct AUDKVehicle_execGetRanOverDamageType_Params
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.IsSeatControllerReplicationViewer
// [0x3E700020401] 
struct AUDKVehicle_execIsSeatControllerReplicationViewer_Params
{
	int32_t                                            SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.GetBarrelIndex
// [0x00020500] 
struct AUDKVehicle_execGetBarrelIndex_Params
{
	int32_t                                            SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.GetSeatPivotPoint
// [0x00020500] 
struct AUDKVehicle_execGetSeatPivotPoint_Params
{
	int32_t                                            SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.ForceWeaponRotation
// [0x00020500] 
struct AUDKVehicle_execForceWeaponRotation_Params
{
	int32_t                                            SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    NewRotation;                                      		// 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicle.SeatFiringMode
// [0x00024500] 
struct AUDKVehicle_execSeatFiringMode_Params
{
	int32_t                                            SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            NewFireMode;                                      		// 0x0004 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bReadValue : 1;                                   		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.SeatFlashCount
// [0x00024500] 
struct AUDKVehicle_execSeatFlashCount_Params
{
	int32_t                                            SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            NewCount;                                         		// 0x0004 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bReadValue : 1;                                   		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.SeatFlashLocation
// [0x00024500] 
struct AUDKVehicle_execSeatFlashLocation_Params
{
	int32_t                                            SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     NewLoc;                                           		// 0x0004 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bReadValue : 1;                                   		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicle.SeatWeaponRotation
// [0x00024500] 
struct AUDKVehicle_execSeatWeaponRotation_Params
{
	int32_t                                            SeatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    NewRot;                                           		// 0x0004 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bReadValue : 1;                                   		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKWeaponPawn.GetTargetLocation
// [0x00024500] 
struct AUDKWeaponPawn_execGetTargetLocation_Params
{
	class AActor*                                      RequestedBy;                                      		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bRequestAlternateLoc : 1;                         		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicleFactory.GetTeamNum
// [0x00020500] 
struct AUDKVehicleFactory_execGetTeamNum_Params
{
	uint8_t                                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKVehicleFactory.SetHUDLocation
// [0x00020500] 
struct AUDKVehicleFactory_execSetHUDLocation_Params
{
	struct FVector                                     NewHUDLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicleFactory.SpawnVehicle
// [0x00020800] 
struct AUDKVehicleFactory_eventSpawnVehicle_Params
{
};

// Function UDKBase.UDKVehicleSimHoverboard.UpdateLeanConstraint
// [0x00020400] 
struct UUDKVehicleSimHoverboard_execUpdateLeanConstraint_Params
{
	class URB_ConstraintInstance*                      LeanUprightConstraintInstance;                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     LeanY;                                            		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     LeanZ;                                            		// 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicleSimHoverboard.InitWheels
// [0x00020400] 
struct UUDKVehicleSimHoverboard_execInitWheels_Params
{
	class AUDKVehicle*                                 Vehicle;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKVehicleWheel.OldEffectFinished
// [0x00020002] 
struct UUDKVehicleWheel_execOldEffectFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                          		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function UDKBase.UDKVehicleWheel.SetParticleEffect
// [0x00020802] 
struct UUDKVehicleWheel_eventSetParticleEffect_Params
{
	class AUDKVehicle*                                 OwnerVehicle;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UParticleSystem*                             NewTemplate;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKWeapon.SetPosition
// [0x00020900] 
struct AUDKWeapon_eventSetPosition_Params
{
	class AUDKPawn*                                    Holder;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKWeapon.EnsureWeaponOverlayComponentLast
// [0x00020400] 
struct AUDKWeapon_execEnsureWeaponOverlayComponentLast_Params
{
};

// Function UDKBase.UDKWeapon.BestMode
// [0x00020000] 
struct AUDKWeapon_execBestMode_Params
{
	uint8_t                                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKWeapon.IsAimCorrect
// [0x00020900] 
struct AUDKWeapon_eventIsAimCorrect_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKWeapon.PostBeginPlay
// [0x00020102] 
struct AUDKWeapon_execPostBeginPlay_Params
{
};

// Function UDKBase.UDKAnimBlendBase.TickAnim
// [0x00020800] 
struct UUDKAnimBlendBase_eventTickAnim_Params
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKAnimBlendBase.GetAnimDuration
// [0x00020401] 
struct UUDKAnimBlendBase_execGetAnimDuration_Params
{
	int32_t                                            ChildIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKAnimBlendBase.GetBlendTime
// [0x00024401] 
struct UUDKAnimBlendBase_execGetBlendTime_Params
{
	int32_t                                            ChildIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bGetDefault : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKAnimBlendByFlying.UpdateFlyingState
// [0x00020400] 
struct UUDKAnimBlendByFlying_execUpdateFlyingState_Params
{
};

// Function UDKBase.UDKAnimBlendByPhysicsVolume.PhysicsVolumeChanged
// [0x00020802] 
struct UUDKAnimBlendByPhysicsVolume_eventPhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            I;                                                		// 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                            DesiredChild;                                     		// 0x000C (0x0004) [0x0000000000000000]               
	// float                                              GravityZ;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.UDKAnimBlendByVehicle.UpdateVehicleState
// [0x00020400] 
struct UUDKAnimBlendByVehicle_execUpdateVehicleState_Params
{
};

// Function UDKBase.UDKAnimBlendByDriving.UpdateDrivingState
// [0x00020400] 
struct UUDKAnimBlendByDriving_execUpdateDrivingState_Params
{
};

// Function UDKBase.UDKAnimBlendByWeapon.AnimStopFire
// [0x00024802] 
struct UUDKAnimBlendByWeapon_eventAnimStopFire_Params
{
	float                                              SpecialBlendTime;                                 		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	// class UAnimNodeSequence*                           FireNode;                                         		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKAnimBlendByWeapon.AnimFire
// [0x00024002] 
struct UUDKAnimBlendByWeapon_execAnimFire_Params
{
	struct FName                                       FireSequence;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAutoFire : 1;                                    		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              AnimRate;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              SpecialBlendTime;                                 		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FName                                       LoopSequence;                                     		// 0x0014 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	// class UAnimNodeSequence*                           FireNode;                                         		// 0x001C (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimPosition
// [0x00020400] 
struct UUDKAnimNodeFramePlayer_execSetAnimPosition_Params
{
	float                                              Perc;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimation
// [0x00020400] 
struct UUDKAnimNodeFramePlayer_execSetAnimation_Params
{
	struct FName                                       Sequence;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              RateScale;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKAnimNodeJumpLeanOffset.SetLeanWeight
// [0x00020401] 
struct UUDKAnimNodeJumpLeanOffset_execSetLeanWeight_Params
{
	float                                              WeightTarget;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendTime;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKAnimNodeSequence.OnInit
// [0x00020802] 
struct UUDKAnimNodeSequence_eventOnInit_Params
{
};

// Function UDKBase.UDKAnimNodeSequence.PlayAnimationSet
// [0x00020400] 
struct UUDKAnimNodeSequence_execPlayAnimationSet_Params
{
	TArray<struct FName>                               Sequences;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              SeqRate;                                          		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLoopLast : 1;                                    		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.UDKAnimNodeSequence.PlayAnimation
// [0x00020400] 
struct UUDKAnimNodeSequence_execPlayAnimation_Params
{
	struct FName                                       Sequence;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              SeqRate;                                          		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bSeqLoop : 1;                                     		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.UDKSkelControl_CantileverBeam.EntireBeamVelocity
// [0x00120002] 
struct UUDKSkelControl_CantileverBeam_execEntireBeamVelocity_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKSkelControl_Damage.RestorePart
// [0x00020902] 
struct UUDKSkelControl_Damage_eventRestorePart_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKSkelControl_Damage.BreakApartOnDeath
// [0x00020902] 
struct UUDKSkelControl_Damage_eventBreakApartOnDeath_Params
{
	struct FVector                                     PartLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsVisible : 1;                                   		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.UDKSkelControl_Damage.BreakApart
// [0x00020902] 
struct UUDKSkelControl_Damage_eventBreakApart_Params
{
	struct FVector                                     PartLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsVisible : 1;                                   		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.UDKSkelControl_MassBoneScaling.GetBoneScale
// [0x00020401] 
struct UUDKSkelControl_MassBoneScaling_execGetBoneScale_Params
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKSkelControl_MassBoneScaling.SetBoneScale
// [0x00020401] 
struct UUDKSkelControl_MassBoneScaling_execSetBoneScale_Params
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKSkelControl_TurretConstrained.WouldConstrainPitch
// [0x00020401] 
struct UUDKSkelControl_TurretConstrained_execWouldConstrainPitch_Params
{
	int32_t                                            TestPitch;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0004 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.UDKSkelControl_TurretConstrained.InitTurret
// [0x00020401] 
struct UUDKSkelControl_TurretConstrained_execInitTurret_Params
{
	struct FRotator                                    InitRot;                                          		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x000C (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function UDKBase.UDKSkelControl_TurretConstrained.OnTurretStatusChange
// [0x00120000] 
struct UUDKSkelControl_TurretConstrained_execOnTurretStatusChange_Params
{
	uint32_t                                           bIsMoving : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.SimplePawn.GetPawnViewLocation
// [0x00020102] 
struct ASimplePawn_execGetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.SimplePawn.TickSpecial
// [0x00820802] 
struct ASimplePawn_eventTickSpecial_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// uint32_t                                           bAllowBob : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                              smooth;                                           		// 0x0008 (0x0004) [0x0000000000000000]               
	// float                                              Speed2D;                                          		// 0x000C (0x0004) [0x0000000000000000]               
	// struct FVector                                     X;                                                		// 0x0010 (0x000C) [0x0000000000000000]               
	// struct FVector                                     Y;                                                		// 0x001C (0x000C) [0x0000000000000000]               
	// struct FVector                                     Z;                                                		// 0x0028 (0x000C) [0x0000000000000000]               
};

// Function UDKBase.SimplePawn.CalcCamera
// [0x00420102] 
struct ASimplePawn_execCalcCamera_Params
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// float                                              Radius;                                           		// 0x0024 (0x0004) [0x0000000000000000]               
	// float                                              Height;                                           		// 0x0028 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.SimplePawn.FixedView
// [0x00020202] 
struct ASimplePawn_execFixedView_Params
{
};

// Function UDKBase.SimplePawn.PostBeginPlay
// [0x00020102] 
struct ASimplePawn_execPostBeginPlay_Params
{
};

// Function UDKBase.SimplePC.SetFootstepsToSnow
// [0x00020200] 
struct ASimplePC_execSetFootstepsToSnow_Params
{
};

// Function UDKBase.SimplePC.SetFootstepsToStone
// [0x00020200] 
struct ASimplePC_execSetFootstepsToStone_Params
{
};

// Function UDKBase.SimplePC.PlayerTick
// [0x00020000] 
struct ASimplePC_execPlayerTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.SimplePC.GetPlayerViewPoint
// [0x00420902] 
struct ASimplePC_eventGetPlayerViewPoint_Params
{
	struct FVector                                     out_Location;                                     		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    out_Rotation;                                     		// 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function UDKBase.SimplePC.NotifyDirectorControl
// [0x00020802] 
struct ASimplePC_eventNotifyDirectorControl_Params
{
	uint32_t                                           bNowControlling : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class USeqAct_Interp*                              CurrentMatinee;                                   		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.SimplePC.OffsetMatineeTouch
// [0x00020002] 
struct ASimplePC_execOffsetMatineeTouch_Params
{
	int32_t                                            Handle;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Type;                                             		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   TouchLocation;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              DeviceTimestamp;                                  		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TouchpadIndex;                                    		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.SimplePC.ActivateControlGroup
// [0x00020002] 
struct ASimplePC_execActivateControlGroup_Params
{
};

// Function UDKBase.SimplePC.UpdateCameraBreathing
// [0x00820102] 
struct ASimplePC_execUpdateCameraBreathing_Params
{
	// struct FVector                                     PawnX;                                            		// 0x0000 (0x000C) [0x0000000000000000]               
	// struct FVector                                     PawnY;                                            		// 0x000C (0x000C) [0x0000000000000000]               
	// struct FVector                                     PawnZ;                                            		// 0x0018 (0x000C) [0x0000000000000000]               
	// float                                              DegreeDelta;                                      		// 0x0024 (0x0004) [0x0000000000000000]               
	// float                                              YawSign;                                          		// 0x0028 (0x0004) [0x0000000000000000]               
	// float                                              PitchDegrees;                                     		// 0x002C (0x0004) [0x0000000000000000]               
	// float                                              YawDegrees;                                       		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.SimplePC.CheckDistanceToDestination
// [0x00020100] 
struct ASimplePC_execCheckDistanceToDestination_Params
{
	float                                              DistToDestination;                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.SimplePC.ProcessViewRotation
// [0x00C20002] 
struct ASimplePC_execProcessViewRotation_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    DeltaRot;                                         		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	// float                                              DistToDestination;                                		// 0x001C (0x0004) [0x0000000000000000]               
	// struct FVector2D                                   MaxVelocityScalar;                                		// 0x0020 (0x0008) [0x0000000000000000]               
	// float                                              YawRotationSign;                                  		// 0x0028 (0x0004) [0x0000000000000000]               
	// float                                              PitchRotationSign;                                		// 0x002C (0x0004) [0x0000000000000000]               
	// float                                              FinalYawAccelRate;                                		// 0x0030 (0x0004) [0x0000000000000000]               
	// float                                              FinalPitchAccelRate;                              		// 0x0034 (0x0004) [0x0000000000000000]               
	// struct FVector                                     VectorToTarget;                                   		// 0x0038 (0x000C) [0x0000000000000000]               
	// struct FVector                                     TargetDirection;                                  		// 0x0044 (0x000C) [0x0000000000000000]               
	// struct FRotator                                    NewRotation;                                      		// 0x0050 (0x000C) [0x0000000000000000]               
	// struct FRotator                                    CameraRotationYawOnly;                            		// 0x005C (0x000C) [0x0000000000000000]               
	// struct FRotator                                    CameraRotationPitchOnly;                          		// 0x0068 (0x000C) [0x0000000000000000]               
	// struct FRotator                                    TargetRotationYawOnly;                            		// 0x0074 (0x000C) [0x0000000000000000]               
	// struct FRotator                                    TargetRotationPitchOnly;                          		// 0x0080 (0x000C) [0x0000000000000000]               
	// float                                              RotationAccelRate;                                		// 0x008C (0x0004) [0x0000000000000000]               
	// float                                              RotationBreakDecelRate;                           		// 0x0090 (0x0004) [0x0000000000000000]               
	// float                                              MaxRotationVelocity;                              		// 0x0094 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.SimplePC.UpdateRotation
// [0x00020002] 
struct ASimplePC_execUpdateRotation_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// float                                              smooth;                                           		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.SimplePC.PlayerMove
// [0x00020002] 
struct ASimplePC_execPlayerMove_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.SimplePC.SetNextFootstepDistance
// [0x00020002] 
struct ASimplePC_execSetNextFootstepDistance_Params
{
};

// Function UDKBase.SimplePC.IsStickMoveActive
// [0x00020002] 
struct ASimplePC_execIsStickMoveActive_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.SimplePC.PostBeginPlay
// [0x00020102] 
struct ASimplePC_execPostBeginPlay_Params
{
};

// Function UDKBase.SimplePC.SetupZones
// [0x00020002] 
struct ASimplePC_execSetupZones_Params
{
};

// Function UDKBase.SimplePC.ReceivedGameClass
// [0x00020102] 
struct ASimplePC_execReceivedGameClass_Params
{
	class UClass*                                      GameClass;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.SimplePC.OnConsoleCommand
// [0x00020002] 
struct ASimplePC_execOnConsoleCommand_Params
{
	class USeqAct_ConsoleCommand*                      inAction;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      Command;                                          		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function UDKBase.SimplePC.InitInputSystem
// [0x00020802] 
struct ASimplePC_eventInitInputSystem_Params
{
};

// Function UDKBase.CastleGame.SetGameType
// [0x00022802] 
struct ACastleGame_eventSetGameType_Params
{
	class FString                                      MapName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Options;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Portal;                                           		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      ReturnValue;                                      		// 0x0030 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.CastleGame.PreventDeath
// [0x00020002] 
struct ACastleGame_execPreventDeath_Params
{
	class APawn*                                       KilledPawn;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 Killer;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.CastleGame.OnEngineHasLoaded
// [0x00020800] 
struct ACastleGame_eventOnEngineHasLoaded_Params
{
};

// Function UDKBase.CastlePC.SetFootstepsToSnow
// [0x00020200] 
struct ACastlePC_execSetFootstepsToSnow_Params
{
};

// Function UDKBase.CastlePC.SetFootstepsToStone
// [0x00020200] 
struct ACastlePC_execSetFootstepsToStone_Params
{
};

// Function UDKBase.CastlePC.StartTutorials
// [0x00020002] 
struct ACastlePC_execStartTutorials_Params
{
};

// Function UDKBase.CastlePC.FlashHelp
// [0x00020202] 
struct ACastlePC_execFlashHelp_Params
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.CastlePC.ShowSplash
// [0x00020202] 
struct ACastlePC_execShowSplash_Params
{
};

// Function UDKBase.CastlePC.PlayerTick
// [0x00020002] 
struct ACastlePC_execPlayerTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            SettingsLocationX;                                		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.CastlePC.ProcessMenuSlide
// [0x00020002] 
struct ACastlePC_execProcessMenuSlide_Params
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            EventType;                                        		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SlideValue;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   ViewportSizes;                                    		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.CastlePC.MenuSliderTap
// [0x00020002] 
struct ACastlePC_execMenuSliderTap_Params
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            EventType;                                        		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   TouchLocation;                                    		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.CastlePC.OpenMenu
// [0x00020002] 
struct ACastlePC_execOpenMenu_Params
{
};

// Function UDKBase.CastlePC.ResetMenu
// [0x00020002] 
struct ACastlePC_execResetMenu_Params
{
};

// Function UDKBase.CastlePC.AutoSlide
// [0x00020002] 
struct ACastlePC_execAutoSlide_Params
{
	float                                              Destination;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.CastlePC.ExitAttractTap
// [0x00020002] 
struct ACastlePC_execExitAttractTap_Params
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            EventType;                                        		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   TouchLocation;                                    		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.CastlePC.ExitAttractMode
// [0x00020202] 
struct ACastlePC_execExitAttractMode_Params
{
};

// Function UDKBase.CastlePC.OnFlyThroughLoopCompleted
// [0x00020202] 
struct ACastlePC_execOnFlyThroughLoopCompleted_Params
{
};

// Function UDKBase.CastlePC.EnterAttractMode
// [0x00024202] 
struct ACastlePC_execEnterAttractMode_Params
{
	uint32_t                                           BeginBenchmarking : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function UDKBase.CastlePC.NotifyDirectorControl
// [0x00020802] 
struct ACastlePC_eventNotifyDirectorControl_Params
{
	uint32_t                                           bNowControlling : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class USeqAct_Interp*                              CurrentMatinee;                                   		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.CastlePC.CheckDistanceToDestination
// [0x00020102] 
struct ACastlePC_execCheckDistanceToDestination_Params
{
	float                                              DistToDestination;                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.CastlePC.ProcessViewRotation
// [0x00C20002] 
struct ACastlePC_execProcessViewRotation_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    DeltaRot;                                         		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	// float                                              AnimProgress;                                     		// 0x001C (0x0004) [0x0000000000000000]               
	// struct FVector                                     NewDrawScale;                                     		// 0x0020 (0x000C) [0x0000000000000000]               
};

// Function UDKBase.CastlePC.PlayerLookAtDestination
// [0x00020002] 
struct ACastlePC_execPlayerLookAtDestination_Params
{
};

// Function UDKBase.CastlePC.DoTapToMove
// [0x00020002] 
struct ACastlePC_execDoTapToMove_Params
{
	struct FVector                                     NewDestination;                                   		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bShouldLookAtDestination : 1;                     		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.CastlePC.TapToMoveTap
// [0x00820002] 
struct ACastlePC_execTapToMoveTap_Params
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            EventType;                                        		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   TouchLocation;                                    		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FVector2D                                   RelLocation;                                      		// 0x0018 (0x0008) [0x0000000000000000]               
	// struct FVector                                     Origin;                                           		// 0x0020 (0x000C) [0x0000000000000000]               
	// struct FVector                                     Direction;                                        		// 0x002C (0x000C) [0x0000000000000000]               
	// struct FVector                                     Destination;                                      		// 0x0038 (0x000C) [0x0000000000000000]               
	// struct FVector                                     HitLocation;                                      		// 0x0044 (0x000C) [0x0000000000000000]               
	// struct FVector                                     HitNormal;                                        		// 0x0050 (0x000C) [0x0000000000000000]               
	// class AActor*                                      HitActor;                                         		// 0x005C (0x0008) [0x0000000000000000]               
	// uint32_t                                           bWantReverse : 1;                                 		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bValidDestination : 1;                            		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function UDKBase.CastlePC.TraceForTapToMove
// [0x00C20102] 
struct ACastlePC_execTraceForTapToMove_Params
{
	class APawn*                                       TraceOwner;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     End;                                              		// 0x0020 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Start;                                            		// 0x002C (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ReturnValue;                                      		// 0x0038 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AActor*                                      HitActor;                                         		// 0x0040 (0x0008) [0x0000000000000000]               
	// struct FVector                                     HitLoc;                                           		// 0x0048 (0x000C) [0x0000000000000000]               
	// struct FVector                                     HitNorm;                                          		// 0x0054 (0x000C) [0x0000000000000000]               
	// struct FTraceHitInfo                               HitInfo;                                          		// 0x0060 (0x0028) [0x0000000000000000]               
};

// Function UDKBase.CastlePC.CheckInactivity
// [0x00020002] 
struct ACastlePC_execCheckInactivity_Params
{
};

// Function UDKBase.CastlePC.SaveControllerStats
// [0x00020002] 
struct ACastlePC_execSaveControllerStats_Params
{
};

// Function UDKBase.CastlePC.SetupZones
// [0x00020002] 
struct ACastlePC_execSetupZones_Params
{
	// class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
	// float                                              Ratio;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.CastlePC.OnEngineInitialTick
// [0x00020802] 
struct ACastlePC_eventOnEngineInitialTick_Params
{
};

// Function UDKBase.CastlePC.Destroyed
// [0x00020802] 
struct ACastlePC_eventDestroyed_Params
{
};

// Function UDKBase.CastlePC.PostBeginPlay
// [0x00020102] 
struct ACastlePC_execPostBeginPlay_Params
{
};

// Function UDKBase.MobileMenuControls.RenderScene
// [0x00020002] 
struct UMobileMenuControls_execRenderScene_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              RenderDelta;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// float                                              Alpha;                                            		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function UDKBase.MobileMenuControls.Setup
// [0x00020002] 
struct UMobileMenuControls_execSetup_Params
{
	uint32_t                                           bTap : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.MobileMenuControls.FadeOut
// [0x00020002] 
struct UMobileMenuControls_execFadeOut_Params
{
};

// Function UDKBase.MobileMenuDebug.OnTouch
// [0x00020802] 
struct UMobileMenuDebug_eventOnTouch_Params
{
	class UMobileMenuObject*                           Sender;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            EventType;                                        		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              TouchX;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              TouchY;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.MobileMenuBase.RenderScene
// [0x00020002] 
struct UMobileMenuBase_execRenderScene_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              RenderDelta;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.MobileMenuBase.Fade
// [0x00020002] 
struct UMobileMenuBase_execFade_Params
{
	uint32_t                                           bIsFadeOut : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              FadeDur;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            I;                                                		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.MobileMenuPause.SetDefaultUI
// [0x00020002] 
struct UMobileMenuPause_execSetDefaultUI_Params
{
};

// Function UDKBase.MobileMenuPause.SetAttractModeUI
// [0x00020002] 
struct UMobileMenuPause_execSetAttractModeUI_Params
{
	uint32_t                                           bIsInBenchmarkMode : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.MobileMenuPause.ReleaseHelp
// [0x00020002] 
struct UMobileMenuPause_execReleaseHelp_Params
{
};

// Function UDKBase.MobileMenuPause.FlashHelp
// [0x00020002] 
struct UMobileMenuPause_execFlashHelp_Params
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.MobileMenuPause.OnSceneTouch
// [0x00020002] 
struct UMobileMenuPause_execOnSceneTouch_Params
{
	uint8_t                                            EventType;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInside : 1;                                      		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class ACastlePC*                                   PC;                                               		// 0x0014 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.MobileMenuPause.RenderScene
// [0x00020002] 
struct UMobileMenuPause_execRenderScene_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              RenderDelta;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.MobileMenuPause.HackInactiveAlpha
// [0x00020002] 
struct UMobileMenuPause_execHackInactiveAlpha_Params
{
	float                                              NewValue;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UMobileInputZone*                            Zone;                                             		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.MobileMenuPause.OnResetMenu
// [0x00020000] 
struct UMobileMenuPause_execOnResetMenu_Params
{
};

// Function UDKBase.MobileMenuPause.OnTouch
// [0x00020802] 
struct UMobileMenuPause_eventOnTouch_Params
{
	class UMobileMenuObject*                           Sender;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            EventType;                                        		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              TouchX;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              TouchY;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class ACastlePC*                                   PC;                                               		// 0x0014 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.MobileMenuPause.InitMenuScene
// [0x00020802] 
struct UMobileMenuPause_eventInitMenuScene_Params
{
	class UMobilePlayerInput*                          PlayerInput;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ScreenWidth;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ScreenHeight;                                     		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsFirstInitialization : 1;                       		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            I;                                                		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.MobileMenuSplash.Closed
// [0x00020002] 
struct UMobileMenuSplash_execClosed_Params
{
};

// Function UDKBase.MobileMenuSplash.OnTouch
// [0x00020802] 
struct UMobileMenuSplash_eventOnTouch_Params
{
	class UMobileMenuObject*                           Sender;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            EventType;                                        		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              TouchX;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              TouchY;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class ACastlePC*                                   PC;                                               		// 0x0014 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.MobileMenuSplash.InitMenuScene
// [0x00020802] 
struct UMobileMenuSplash_eventInitMenuScene_Params
{
	class UMobilePlayerInput*                          PlayerInput;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ScreenWidth;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ScreenHeight;                                     		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsFirstInitialization : 1;                       		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// float                                              Scale;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.CloudHUD.PostRender
// [0x00020002] 
struct ACloudHUD_execPostRender_Params
{
	// class ACloudPC*                                    PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UFacebookIntegration*                        Facebook;                                         		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.CloudPC.OnTwitterAuthorizeComplete
// [0x00420002] 
struct ACloudPC_execOnTwitterAuthorizeComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// TArray<class FString>                              KeyValues;                                        		// 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0050 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.CloudPC.OnTwitterRequestComplete
// [0x00420002] 
struct ACloudPC_execOnTwitterRequestComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.OnTweetComplete
// [0x00420002] 
struct ACloudPC_execOnTweetComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.CloudGameTwitter
// [0x00020202] 
struct ACloudPC_execCloudGameTwitter_Params
{
};

// Function UDKBase.CloudPC.CloudGameBuyConsumable
// [0x00020202] 
struct ACloudPC_execCloudGameBuyConsumable_Params
{
};

// Function UDKBase.CloudPC.MicroQueryProducts
// [0x00020202] 
struct ACloudPC_execMicroQueryProducts_Params
{
};

// Function UDKBase.CloudPC.OnProductPurchaseComplete
// [0x00420002] 
struct ACloudPC_execOnProductPurchaseComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.OnProductQueryComplete
// [0x00420000] 
struct ACloudPC_execOnProductQueryComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.CloudGameFacebook
// [0x00020202] 
struct ACloudPC_execCloudGameFacebook_Params
{
	// TArray<class FString>                              Params;                                           		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.CloudPC.OnFBDialogComplete
// [0x00420002] 
struct ACloudPC_execOnFBDialogComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.OnFBFriendsListComplete
// [0x00420002] 
struct ACloudPC_execOnFBFriendsListComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.OnFBRequestComplete
// [0x00420000] 
struct ACloudPC_execOnFBRequestComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.OnFBAuthComplete
// [0x00420002] 
struct ACloudPC_execOnFBAuthComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.OnUserClosedAdvertisement
// [0x00420802] 
struct ACloudPC_eventOnUserClosedAdvertisement_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.OnUserClickedAdvertisement
// [0x00420002] 
struct ACloudPC_execOnUserClickedAdvertisement_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.CloudGameToggleAd
// [0x00020202] 
struct ACloudPC_execCloudGameToggleAd_Params
{
};

// Function UDKBase.CloudPC.CloudGetDocs
// [0x00020002] 
struct ACloudPC_execCloudGetDocs_Params
{
};

// Function UDKBase.CloudPC.CloudConflictDetected
// [0x00420002] 
struct ACloudPC_execCloudConflictDetected_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.CloudReadDocument
// [0x00420002] 
struct ACloudPC_execCloudReadDocument_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            DocumentIndex;                                    		// 0x0040 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.CloudPC.CloudGotDocuments
// [0x00420002] 
struct ACloudPC_execCloudGotDocuments_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            NumDocs;                                          		// 0x0040 (0x0004) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0044 (0x0004) [0x0000000000000000]               
	// int32_t                                            SlotNum;                                          		// 0x0048 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.CloudPC.CloudGetAndIncrement
// [0x00820202] 
struct ACloudPC_execCloudGetAndIncrement_Params
{
	// struct FPlatformInterfaceDelegateResult            ImmediateResult;                                  		// 0x0000 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.CloudIncrementValue
// [0x00C20002] 
struct ACloudPC_execCloudIncrementValue_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// struct FPlatformInterfaceData                      WriteData;                                        		// 0x0040 (0x003C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.CloudValueChanged
// [0x00C20002] 
struct ACloudPC_execCloudValueChanged_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// struct FPlatformInterfaceDelegateResult            ImmediateResult;                                  		// 0x0040 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.CloudLogValue
// [0x00420002] 
struct ACloudPC_execCloudLogValue_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudPC.CloudGameLoad
// [0x00020202] 
struct ACloudPC_execCloudGameLoad_Params
{
	int32_t                                            Slot;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            DocIndex;                                         		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.CloudPC.CloudGameSave
// [0x00020202] 
struct ACloudPC_execCloudGameSave_Params
{
	int32_t                                            Slot;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            DocIndex;                                         		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function UDKBase.CloudPC.CloudGameFight
// [0x00020202] 
struct ACloudPC_execCloudGameFight_Params
{
};

// Function UDKBase.CloudPC.Destroyed
// [0x00020802] 
struct ACloudPC_eventDestroyed_Params
{
};

// Function UDKBase.CloudPC.PostBeginPlay
// [0x00020102] 
struct ACloudPC_execPostBeginPlay_Params
{
};

// Function UDKBase.CloudMenuMicroTrans.OnProductPurchaseComplete
// [0x00420002] 
struct UCloudMenuMicroTrans_execOnProductPurchaseComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function UDKBase.CloudMenuMicroTrans.OnProductQueryComplete
// [0x00C20002] 
struct UCloudMenuMicroTrans_execOnProductQueryComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                           		// 0x0000 (0x0040) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            Index;                                            		// 0x0040 (0x0004) [0x0000000000000000]               
	// struct FPurchaseInfo                               Info;                                             		// 0x0044 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function UDKBase.CloudMenuMicroTrans.Closed
// [0x00020002] 
struct UCloudMenuMicroTrans_execClosed_Params
{
};

// Function UDKBase.CloudMenuMicroTrans.OnTouch
// [0x00020802] 
struct UCloudMenuMicroTrans_eventOnTouch_Params
{
	class UMobileMenuObject*                           Sender;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            EventType;                                        		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              TouchX;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              TouchY;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.CloudMenuMicroTrans.InitMenuScene
// [0x00020802] 
struct UCloudMenuMicroTrans_eventInitMenuScene_Params
{
	class UMobilePlayerInput*                          PlayerInput;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ScreenWidth;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ScreenHeight;                                     		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsFirstInitialization : 1;                       		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function UDKBase.MobileGameCrowdAgent.OnSetMaterial
// [0x00020002] 
struct AMobileGameCrowdAgent_execOnSetMaterial_Params
{
	class USeqAct_SetMaterial*                         Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.MobileGameCrowdAgent.PlayDeath
// [0x00020002] 
struct AMobileGameCrowdAgent_execPlayDeath_Params
{
	struct FVector                                     KillMomentum;                                     		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.MobilePlaceablePawn.GetPawnViewLocation
// [0x00020102] 
struct AMobilePlaceablePawn_execGetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.MobilePlaceablePawn.CalcCamera
// [0x00420102] 
struct AMobilePlaceablePawn_execCalcCamera_Params
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.MobilePlaceablePawn.RestoreAnimSetsToDefault
// [0x00020902] 
struct AMobilePlaceablePawn_eventRestoreAnimSetsToDefault_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.MobilePlaceablePawn.FixedView
// [0x00020202] 
struct AMobilePlaceablePawn_execFixedView_Params
{
};

// Function UDKBase.MobileProjectile.GetPawnOwner
// [0x00020100] 
struct AMobileProjectile_execGetPawnOwner_Params
{
	class APawn*                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.MobileProjectile.CalcCamera
// [0x00420102] 
struct AMobileProjectile_execCalcCamera_Params
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function UDKBase.MobileProjectile.MyOnParticleSystemFinished
// [0x00020102] 
struct AMobileProjectile_execMyOnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function UDKBase.MobileProjectile.Destroyed
// [0x00020102] 
struct AMobileProjectile_execDestroyed_Params
{
};

// Function UDKBase.MobileProjectile.HideProjectile
// [0x00020102] 
struct AMobileProjectile_execHideProjectile_Params
{
	// class UMeshComponent*                              ComponentIt;                                      		// 0x0000 (0x0008) [0x0000000004000000] (CPF_EditInline)
};

// Function UDKBase.MobileProjectile.TornOff
// [0x00020802] 
struct AMobileProjectile_eventTornOff_Params
{
};

// Function UDKBase.MobileProjectile.ShutDown
// [0x00820102] 
struct AMobileProjectile_execShutDown_Params
{
	// struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]               
	// struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]               
};

// Function UDKBase.MobileProjectile.SpawnExplosionEffects
// [0x00020102] 
struct AMobileProjectile_execSpawnExplosionEffects_Params
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	// class UParticleSystemComponent*                    ProjExplosion;                                    		// 0x0018 (0x0008) [0x0000000004000000] (CPF_EditInline)
	// class AActor*                                      EffectAttachActor;                                		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.MobileProjectile.SetExplosionEffectParameters
// [0x00020100] 
struct AMobileProjectile_execSetExplosionEffectParameters_Params
{
	class UParticleSystemComponent*                    ProjExplosion;                                    		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function UDKBase.MobileProjectile.SpawnFlightEffects
// [0x00020102] 
struct AMobileProjectile_execSpawnFlightEffects_Params
{
};

// Function UDKBase.MobileProjectile.Explode
// [0x00020102] 
struct AMobileProjectile_execExplode_Params
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.MobileProjectile.ProcessTouch
// [0x00020100] 
struct AMobileProjectile_execProcessTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.MobileProjectile.Init
// [0x00020002] 
struct AMobileProjectile_execInit_Params
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.MobileProjectile.SetInitialState
// [0x00020902] 
struct AMobileProjectile_eventSetInitialState_Params
{
};

// Function UDKBase.MobileProjectile.PostBeginPlay
// [0x00020102] 
struct AMobileProjectile_execPostBeginPlay_Params
{
};

// Function UDKBase.MobileProjectile.Landed
// [0x00020902] 
struct AMobileProjectile_eventLanded_Params
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      FloorActor;                                       		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function UDKBase.UDKAnimNodeSequenceByBoneRotation.OnBecomeRelevant
// [0x00820802] 
struct UUDKAnimNodeSequenceByBoneRotation_eventOnBecomeRelevant_Params
{
	// struct FVector                                     BoneDirection;                                    		// 0x0000 (0x000C) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x000C (0x0004) [0x0000000000000000]               
	// float                                              Diff;                                             		// 0x0010 (0x0004) [0x0000000000000000]               
	// float                                              BestDiff;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
	// struct FName                                       BestAnim;                                         		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function UDKBase.UDKMobileInputZone.ProcessGameplayInput
// [0x00820002] 
struct UUDKMobileInputZone_execProcessGameplayInput_Params
{
	class UMobileInputZone*                            Zone;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Handle;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            EventType;                                        		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   TouchLocation;                                    		// 0x0014 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FVector2D                                   RelLocation;                                      		// 0x0020 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   ViewportSize;                                     		// 0x0028 (0x0008) [0x0000000000000000]               
	// class AActor*                                      TraceHitActor;                                    		// 0x0030 (0x0008) [0x0000000000000000]               
	// int32_t                                            PressIndex;                                       		// 0x0038 (0x0004) [0x0000000000000000]               
	// uint32_t                                           bRedundantInput : 1;                              		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function UDKBase.UDKMobileInputZone.TraceFromScreenToWorld
// [0x00C24002] 
struct UUDKMobileInputZone_execTraceFromScreenToWorld_Params
{
	struct FVector2D                                   ScreenPos;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      outHitActor;                                      		// 0x0008 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     OutHitLocation;                                   		// 0x0010 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     Extent;                                           		// 0x001C (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	// class AActor*                                      HitActor;                                         		// 0x0028 (0x0008) [0x0000000000000000]               
	// class AActor*                                      TestHitActor;                                     		// 0x0030 (0x0008) [0x0000000000000000]               
	// struct FVector                                     CameraLoc;                                        		// 0x0038 (0x000C) [0x0000000000000000]               
	// struct FVector                                     CameraDir;                                        		// 0x0044 (0x000C) [0x0000000000000000]               
	// struct FVector                                     HitLocation;                                      		// 0x0050 (0x000C) [0x0000000000000000]               
	// struct FVector                                     TestHitLocation;                                  		// 0x005C (0x000C) [0x0000000000000000]               
	// struct FVector                                     HitNormal;                                        		// 0x0068 (0x000C) [0x0000000000000000]               
};

// Function UDKBase.UDKMobileInputZone.IsTouchingPlayerPawn
// [0x00020002] 
struct UUDKMobileInputZone_execIsTouchingPlayerPawn_Params
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
