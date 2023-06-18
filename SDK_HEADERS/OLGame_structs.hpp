/*
#############################################################################################
# Outlast2 (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OLGame_structs.hpp
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
# Structs
# ========================================================================================= #
*/

// ScriptStruct OLGame.OLTypes.DamageTypeParams
// 0x001D
struct FDamageTypeParams
{
	uint8_t                                            DamageType;                                    // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bBloodParticles : 1;                           // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCameraShake : 1;                              // 0x0004 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bBlur : 1;                                     // 0x0004 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bSoundEffect : 1;                              // 0x0004 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bBladeDamage : 1;                              // 0x0004 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bNonLethal : 1;                                // 0x0004 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bForceBleeding : 1;                            // 0x0004 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bNoBleeding : 1;                               // 0x0004 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bShowBloodColumn : 1;                          // 0x0004 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	float                                              BloodColumnTime;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ForcedDamageAngle;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CameraShakeDamageOverride;                     // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpeedPenaltyPctOnDamage;                       // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpeedPenaltyDuration;                          // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            DamagedFFWaveform;                             // 0x001C (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLTypes.GameTime
// 0x000C
struct FGameTime
{
	int32_t                                            Hours;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Minutes;                                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Seconds;                                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLTypes.BlendSpaceNode
// 0x0010
struct FBlendSpaceNode
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   Coords;                                        // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLTypes.StruggleConfig
// 0x007C
struct FStruggleConfig
{
	struct FName                                       InitIdleAnimEnemy;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       EntryAnimPlayer;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       EntryAnimEnemy;                                // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       CycleAnimPlayer;                               // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       CycleAnimEnemy;                                // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ExitAnimPlayer;                                // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ExitAnimEnemy;                                 // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       KilledAnimPlayer;                              // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       KillAnimEnemy;                                 // 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              EntryPlayerBlendInTime;                        // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ExitPlayerBlendOutTime;                        // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CycleTime;                                     // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bNoFail : 1;                                   // 0x0054 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              MinRate;                                       // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRateStart;                                  // 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRateEnd;                                    // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SuccessPctForMinRate;                          // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SuccessPctForMaxRate;                          // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class UAnimSet*>                            HeroAnimSets;                                  // 0x006C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLPawn.GameplayParams
// 0x0040
struct FGameplayParams
{
	uint8_t                                            RMM;                                           // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            CameraMode;                                    // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bAllowSpringForMouse : 1;                      // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              MinYaw;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxYaw;                                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinPitchWS;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxPitchWS;                                    // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinPitchCS;                                    // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxPitchCS;                                    // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ViewLimitsApproachCoeff;                       // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FOVOverride;                                   // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           DisableCollisions : 1;                         // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           IgnorePawnCollisions : 1;                      // 0x0028 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bEnablePawnRepulsion : 1;                      // 0x0028 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bSupportsCrouching : 1;                        // 0x0028 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bKeepsPhysics : 1;                             // 0x0028 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	float                                              CollisionHeight;                               // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CollisionRadius;                               // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Physics;                                       // 0x0034 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bDisablePhysFalling : 1;                       // 0x0038 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bNoZVelocityClear : 1;                         // 0x0038 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           BothHandsNeeded : 1;                           // 0x0038 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              MaxStepHeight;                                 // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLPawn.SpecialMoveParameters
// 0x0078
struct FSpecialMoveParameters
{
	struct FGameplayParams                             GP;                                            // 0x0000 (0x0040) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            NextLocomotionMode;                            // 0x0040 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName;                                      // 0x0044 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimPlayRate;                                  // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bNoAnim : 1;                                   // 0x0050 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bUpperBodyAnim : 1;                            // 0x0050 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              AnimBlendInTime;                               // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimBlendOutTime;                              // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCancelMoveOnInterruption : 1;                 // 0x005C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bExitOnBlendOut : 1;                           // 0x005C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bPlayAnimWhenPositioned : 1;                   // 0x005C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bTargettedYawSmoothing : 1;                    // 0x005C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bTargettedPitchSmoothing : 1;                  // 0x005C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bAlwaysInterruptible : 1;                      // 0x005C (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bInterruptibleAfterTrigger : 1;                // 0x005C (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bCollisionChangeOnTrigger : 1;                 // 0x005C (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           PlayerInputEnabled : 1;                        // 0x005C (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           KeepLocomotionMode : 1;                        // 0x005C (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           AdjustPosition : 1;                            // 0x005C (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           AdjustOrientation : 1;                         // 0x005C (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           UseAnimTimeForPositionAdjustment : 1;          // 0x005C (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           bUsePawnVelocityForPositionning : 1;           // 0x005C (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	float                                              PositionningLinearVelocity;                    // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PositionningCrouchedLinearVelocity;            // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PositionningCrawledLinearVelocity;             // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PositionningAngularVelocity;                   // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StaminaConsumption;                            // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseDarkLight : 1;                             // 0x0074 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bNoCamcorderTransition : 1;                    // 0x0074 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct OLGame.OLPawn.AdjustPositionData
// 0x0038
struct FAdjustPositionData
{
	uint32_t                                           Active : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           Done : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     PositionError;                                 // 0x0004 (0x000C) [0x0000000000000000]               
	float                                              HeadingError;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            TargetType;                                    // 0x0014 (0x0001) [0x0000000000000000]               
	struct FVector                                     OriginalPosition;                              // 0x0018 (0x000C) [0x0000000000000000]               
	struct FRotator                                    OriginalRotation;                              // 0x0024 (0x000C) [0x0000000000000000]               
	float                                              CorrectionTime;                                // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              ElapsedTime;                                   // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLPawn.ProceduralAnimData
// 0x0049
struct FProceduralAnimData
{
	struct FVector                                     PositionDelta;                                 // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              HeadingDelta;                                  // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            InterpType;                                    // 0x0010 (0x0001) [0x0000000000000000]               
	float                                              ConstantSpeedContrib;                          // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              DelayTimeLeft;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              TotalTime;                                     // 0x001C (0x0004) [0x0000000000000000]               
	float                                              ElapsedTime;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWaitForNotify : 1;                            // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRecomputeDataAfterNotify : 1;                 // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     RecomputeDesiredPosition;                      // 0x0028 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RecomputeDesiredOrientation;                   // 0x0034 (0x000C) [0x0000000000000000]               
	uint32_t                                           bIndependentRotationControl : 1;               // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              IndependentRotationDuration;                   // 0x0044 (0x0004) [0x0000000000000000]               
	uint8_t                                            RotationInterpType;                            // 0x0048 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLPawn.MovementBlockedData
// 0x001C
struct FMovementBlockedData
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Direction;                                     // 0x000C (0x000C) [0x0000000000000000]               
	float                                              TimeStamp;                                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLPawn.DelayedEventInfo
// 0x0014
struct FDelayedEventInfo
{
	class UAkEvent*                                    SoundEvent;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              DueTime;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	struct FName                                       BoneName;                                      // 0x000C (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLAIAnimConfig.LocomotionAnimConfig
// 0x0128
struct FLocomotionAnimConfig
{
	float                                              LocoMinSpeed;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LocoMedSpeed;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LocoMaxSpeed;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LocoRunSpeed;                                  // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BwdMinSpeed;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BwdMedSpeed;                                   // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BwdMaxSpeed;                                   // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BwdRunSpeed;                                   // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArmedMinSpeed;                                 // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArmedMedSpeed;                                 // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArmedMaxSpeed;                                 // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArmedRunSpeed;                                 // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArmedBwdMinSpeed;                              // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArmedBwdMedSpeed;                              // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArmedBwdMaxSpeed;                              // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ArmedBwdRunSpeed;                              // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertMinSpeed;                                 // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertMedSpeed;                                 // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertMaxSpeed;                                 // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertRunSpeed;                                 // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertBwdMinSpeed;                              // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertBwdMedSpeed;                              // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertBwdMaxSpeed;                              // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertBwdRunSpeed;                              // 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertArmedMinSpeed;                            // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertArmedMedSpeed;                            // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertArmedMaxSpeed;                            // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertArmedRunSpeed;                            // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertArmedBwdMinSpeed;                         // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertArmedBwdMedSpeed;                         // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertArmedBwdMaxSpeed;                         // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlertArmedBwdRunSpeed;                         // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartUnawareSlowSpeed;                         // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartUnawareFastSpeed;                         // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartAlertSlowSpeed;                           // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartAlertFastSpeed;                           // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StopUnawareSlowSpeed;                          // 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StopUnawareFastSpeed;                          // 0x0094 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StopAlertSlowSpeed;                            // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StopAlertFastSpeed;                            // 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartSpeedThreshold;                           // 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StopSpeedThreshold;                            // 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ImmediateStopSpeedThreshold;                   // 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TurnMinMovingContribUnder90;                   // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TurnMinMovingContribOver90;                    // 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TurnBlendTimePct;                              // 0x00B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopUnawareSlowFwd;                     // 0x00B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopAlertSlowFwd;                       // 0x00BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopUnawareSlow90L;                     // 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopAlertSlow90L;                       // 0x00C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopUnawareSlow90R;                     // 0x00C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopAlertSlow90R;                       // 0x00CC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopUnawareSlow180L;                    // 0x00D0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopAlertSlow180L;                      // 0x00D4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopUnawareSlow180R;                    // 0x00D8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopAlertSlow180R;                      // 0x00DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopUnawareFastFwd;                     // 0x00E0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopAlertFastFwd;                       // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopUnawareFast90L;                     // 0x00E8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopAlertFast90L;                       // 0x00EC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopUnawareFast90R;                     // 0x00F0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopAlertFast90R;                       // 0x00F4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopUnawareFast180L;                    // 0x00F8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopAlertFast180L;                      // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopUnawareFast180R;                    // 0x0100 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistForStopAlertFast180R;                      // 0x0104 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StairsEntryDistBottomL;                        // 0x0108 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StairsEntryDistBottomR;                        // 0x010C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StairsEntryDistBottomRunL;                     // 0x0110 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StairsEntryDistBottomRunR;                     // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StairsEntryDistTopL;                           // 0x0118 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StairsEntryDistTopR;                           // 0x011C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StairsEntryDistTopRunL;                        // 0x0120 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StairsEntryDistTopRunR;                        // 0x0124 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLDifficultyConfig.FloatByDifficulty
// 0x0034
struct FFloatByDifficulty
{
	float                                              DefaultValue;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_EasyValue : 1;                       // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              EasyValue;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_NormalValue : 1;                     // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NormalValue;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_NormalPlusValue : 1;                 // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NormalPlusValue;                               // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_HardValue : 1;                       // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              HardValue;                                     // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_HardPlusValue : 1;                   // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              HardPlusValue;                                 // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_NightmareValue : 1;                  // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NightmareValue;                                // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.ArrowParameters
// 0x0080
struct FArrowParameters
{
	uint32_t                                           bOverride_bEnableForNormalAttack : 1;          // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableForNormalAttack : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bAlwaysAiming : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bAlwaysAiming : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bShootWheneverPossible : 1;          // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bShootWheneverPossible : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_Speed : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              Speed;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinAttackDistance : 1;               // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinAttackDistance;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxAttackDistance : 1;               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxAttackDistance;                             // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinRepeatDelay : 1;                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinRepeatDelay;                                // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bFollowTarget : 1;                   // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFollowTarget : 1;                             // 0x0020 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_MinDistForFollowTarget : 1;          // 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              MinDistForFollowTarget;                        // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bFollowTargetOnlyWithLoS : 1;        // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFollowTargetOnlyWithLoS : 1;                  // 0x0028 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_VelocityPredictionFactor : 1;        // 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              VelocityPredictionFactor;                      // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxInaccuracy : 1;                   // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxInaccuracy;                                 // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_HitDamage : 1;                       // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          HitDamage;                                     // 0x003C (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bArrowsOnFire : 1;                   // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bArrowsOnFire : 1;                             // 0x0070 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_FireStopDuration : 1;                // 0x0070 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              FireStopDuration;                              // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bNoPlayerHit : 1;                    // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNoPlayerHit : 1;                              // 0x0078 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_MinDistToTargetToDisableCollisions : 1;// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              MinDistToTargetToDisableCollisions;            // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.SpeedConfig
// 0x0328
struct FSpeedConfig
{
	uint32_t                                           bOverride_BaseSpeedByDifficulty : 1;           // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          BaseSpeedByDifficulty;                         // 0x0004 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_InvestigationSpeedByDifficulty : 1;  // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          InvestigationSpeedByDifficulty;                // 0x003C (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ChaseSpeedByDifficulty : 1;          // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          ChaseSpeedByDifficulty;                        // 0x0074 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CrawlSpeedByDifficulty : 1;          // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          CrawlSpeedByDifficulty;                        // 0x00AC (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CrouchSpeedByDifficulty : 1;         // 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          CrouchSpeedByDifficulty;                       // 0x00E4 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BeamSpeedByDifficulty : 1;           // 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          BeamSpeedByDifficulty;                         // 0x011C (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BushChaseSpeedByDifficulty : 1;      // 0x0150 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          BushChaseSpeedByDifficulty;                    // 0x0154 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_WaterSpeedMultiplier : 1;            // 0x0188 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WaterSpeedMultiplier;                          // 0x018C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BehaviorAccelRate : 1;               // 0x0190 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BehaviorAccelRate;                             // 0x0194 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BehaviorDecelRate : 1;               // 0x0198 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BehaviorDecelRate;                             // 0x019C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DarknessFactorByDifficulty : 1;      // 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          DarknessFactorByDifficulty;                    // 0x01A4 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackMercyFactor : 1;               // 0x01D8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          AttackMercyFactor;                             // 0x01DC (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackMercyDuration : 1;             // 0x0210 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackMercyDuration;                           // 0x0214 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ChaseNoVisibilityFactorByDifficulty : 1;// 0x0218 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          ChaseNoVisibilityFactorByDifficulty;           // 0x021C (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bNoVisibleRubberBandingSlowDown : 1; // 0x0250 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNoVisibleRubberBandingSlowDown : 1;           // 0x0250 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bRubberBandingRequiresPlayerRun : 1; // 0x0250 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bRubberBandingRequiresPlayerRun : 1;           // 0x0250 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_RubberBandingDelay : 1;              // 0x0250 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              RubberBandingDelay;                            // 0x0254 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_RubberBandingMinDist : 1;            // 0x0258 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RubberBandingMinDist;                          // 0x025C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_RubberBandingMaxDist : 1;            // 0x0260 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RubberBandingMaxDist;                          // 0x0264 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_RubberBandingFactorMinDistByDifficulty : 1;// 0x0268 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          RubberBandingFactorMinDistByDifficulty;        // 0x026C (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_RubberBandingFactorMaxDistByDifficulty : 1;// 0x02A0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          RubberBandingFactorMaxDistByDifficulty;        // 0x02A4 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bEnableCrouchCrawlRubberBanding : 1; // 0x02D8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableCrouchCrawlRubberBanding : 1;           // 0x02D8 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_CrouchCrawlRubberBandingMinDist : 1; // 0x02D8 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              CrouchCrawlRubberBandingMinDist;               // 0x02DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CrouchCrawlRubberBandingMaxDist : 1; // 0x02E0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CrouchCrawlRubberBandingMaxDist;               // 0x02E4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CrouchCrawlRubberBandingFactorMinDist : 1;// 0x02E8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CrouchCrawlRubberBandingFactorMinDist;         // 0x02EC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CrouchCrawlRubberBandingFactorMaxDist : 1;// 0x02F0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CrouchCrawlRubberBandingFactorMaxDist;         // 0x02F4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_SightlessChaseSlowdownDuration : 1;  // 0x02F8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SightlessChaseSlowdownDuration;                // 0x02FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bExponentialAccel : 1;               // 0x0300 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bExponentialAccel : 1;                         // 0x0300 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_ExponentialAccelStartDelay : 1;      // 0x0300 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              ExponentialAccelStartDelay;                    // 0x0304 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ExponentialAccelDuration : 1;        // 0x0308 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ExponentialAccelDuration;                      // 0x030C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ExponentialAccelPower : 1;           // 0x0310 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ExponentialAccelPower;                         // 0x0314 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bNoAdjustmentForSlopes : 1;          // 0x0318 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNoAdjustmentForSlopes : 1;                    // 0x0318 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_MaxSpeedPenaltyForUpSlope : 1;       // 0x0318 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              MaxSpeedPenaltyForUpSlope;                     // 0x031C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxSpeedGainForDownSlope : 1;        // 0x0320 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxSpeedGainForDownSlope;                      // 0x0324 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLDifficultyConfig.IntByDifficulty
// 0x0034
struct FIntByDifficulty
{
	int32_t                                            DefaultValue;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_EasyValue : 1;                       // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            EasyValue;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_NormalValue : 1;                     // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            NormalValue;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_NormalPlusValue : 1;                 // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            NormalPlusValue;                               // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_HardValue : 1;                       // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            HardValue;                                     // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_HardPlusValue : 1;                   // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            HardPlusValue;                                 // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_NightmareValue : 1;                  // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            NightmareValue;                                // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.VisionCone
// 0x00E0
struct FVisionCone
{
	uint32_t                                           bOverride_DistanceByDifficulty : 1;            // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          DistanceByDifficulty;                          // 0x0004 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_PeekingDistanceByDifficulty : 1;     // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          PeekingDistanceByDifficulty;                   // 0x003C (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_HorizontalAngleByDifficulty : 1;     // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          HorizontalAngleByDifficulty;                   // 0x0074 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VerticalAngleByDifficulty : 1;       // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          VerticalAngleByDifficulty;                     // 0x00AC (0x0034) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.VisionParameters
// 0x0228
struct FVisionParameters
{
	uint32_t                                           bOverride_LoseTargetTimeByDifficulty : 1;      // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          LoseTargetTimeByDifficulty;                    // 0x0004 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CloseDistanceStand : 1;              // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CloseDistanceStand;                            // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CloseDistanceCrouch : 1;             // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CloseDistanceCrouch;                           // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CloseDistanceCrawl : 1;              // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CloseDistanceCrawl;                            // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CrouchMultiplier : 1;                // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CrouchMultiplier;                              // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CrawlMultiplier : 1;                 // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CrawlMultiplier;                               // 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CloseFacingDistance : 1;             // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CloseFacingDistance;                           // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVisionCone                                 NarrowCone;                                    // 0x0068 (0x00E0) [0x0000000000000001] (CPF_Edit)    
	struct FVisionCone                                 WideCone;                                      // 0x0148 (0x00E0) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.FaceOffParameters
// 0x0030
struct FFaceOffParameters
{
	uint32_t                                           bOverride_bEnabled : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_MinRangeForEnter : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              MinRangeForEnter;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxRangeForEnter : 1;                // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxRangeForEnter;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinRangeForExit : 1;                 // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinRangeForExit;                               // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxRangeForExit : 1;                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxRangeForExit;                               // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_EnterDelay : 1;                      // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              EnterDelay;                                    // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CancelDelay : 1;                     // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CancelDelay;                                   // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.DeathGripParameters
// 0x00D0
struct FDeathGripParameters
{
	uint32_t                                           bOverride_bEnabled : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bAlwaysQTE : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bAlwaysQTE : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bAlwaysShake : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bAlwaysShake : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_bCanBeJoinedForMultiKill : 1;        // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bCanBeJoinedForMultiKill : 1;                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bOverride_bCanJoinForMultiKill : 1;            // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bCanJoinForMultiKill : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bOverride_bAlwaysUseWhenInRange : 1;           // 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bAlwaysUseWhenInRange : 1;                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           bOverride_ForceVariantId : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	int32_t                                            ForceVariantId;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bConsiderProbabilityForAlwaysUse : 1;// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bConsiderProbabilityForAlwaysUse : 1;          // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bInactiveAnimAfterEscape : 1;        // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bInactiveAnimAfterEscape : 1;                  // 0x0008 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bReturnToSpawnLocationAfterEscape : 1;// 0x0008 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bReturnToSpawnLocationAfterEscape : 1;         // 0x0008 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_MaxRangeFwd : 1;                     // 0x0008 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              MaxRangeFwd;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxRangeSide : 1;                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxRangeSide;                                  // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_Probability : 1;                     // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Probability;                                   // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_RetryDelay : 1;                      // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RetryDelay;                                    // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ReEnterDelay : 1;                    // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ReEnterDelay;                                  // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxDuration : 1;                     // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDuration;                                   // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinChasingTimeForActivation : 1;     // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinChasingTimeForActivation;                   // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_FastInputCoeff : 1;                  // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FastInputCoeff;                                // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_SlowInputWinCoeff : 1;               // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SlowInputWinCoeff;                             // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_SlowInputLoseCoeff : 1;              // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SlowInputLoseCoeff;                            // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_NoInputCoeff : 1;                    // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NoInputCoeff;                                  // 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_TooLateCoeff : 1;                    // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TooLateCoeff;                                  // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_SlowInputTargetRatio : 1;            // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SlowInputTargetRatio;                          // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_PlayerRampUpTime : 1;                // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PlayerRampUpTime;                              // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_NPCRampUpTime : 1;                   // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NPCRampUpTime;                                 // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_SafeDuration : 1;                    // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SafeDuration;                                  // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_QTEInputWindow : 1;                  // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          QTEInputWindow;                                // 0x008C (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_QTEKillRate : 1;                     // 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              QTEKillRate;                                   // 0x00C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_QTEWinRate : 1;                      // 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              QTEWinRate;                                    // 0x00CC (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.FlashlightParameters
// 0x0044
struct FFlashlightParameters
{
	uint32_t                                           bOverride_bHasFlashlight : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasFlashlight : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bFlashlightActive : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bFlashlightActive : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bSmartActivation : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bSmartActivation : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_SmartActivationDist : 1;             // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              SmartActivationDist;                           // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bAutoEquip : 1;                      // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAutoEquip : 1;                                // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_AutoEquipDelay : 1;                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              AutoEquipDelay;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualDistance : 1;                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualDistance;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_LogicalDistance : 1;                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LogicalDistance;                               // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualConeAngle : 1;                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualConeAngle;                               // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_LogicalConeAngle : 1;                // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LogicalConeAngle;                              // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_OverriddenMaxDrawDistance : 1;       // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              OverriddenMaxDrawDistance;                     // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_OverriddenVolumetricsIntensity : 1;  // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              OverriddenVolumetricsIntensity;                // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bNoCastShadow : 1;                   // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNoCastShadow : 1;                             // 0x0040 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct OLGame.OLAIConfig.RepulsionParameters
// 0x0050
struct FRepulsionParameters
{
	uint32_t                                           bOverride_bDisableRepulsion : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisableRepulsion : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bDisableSynchronizedAvoidance : 1;   // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDisableSynchronizedAvoidance : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_MagneticRepulsionDistance : 1;       // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              MagneticRepulsionDistance;                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_LinearRepulsionDistance : 1;         // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LinearRepulsionDistance;                       // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_RepulsionForce : 1;                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RepulsionForce;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinRelativeVelocity : 1;             // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinRelativeVelocity;                           // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxRelativeVelocity : 1;             // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxRelativeVelocity;                           // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_RelativeVelocityRepulsionScale : 1;  // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RelativeVelocityRepulsionScale;                // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxRelVelForMovingRepulsion : 1;     // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxRelVelForMovingRepulsion;                   // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinVelForMovingRepulsion : 1;        // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinVelForMovingRepulsion;                      // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MovingRepulsionMaxSlowdown : 1;      // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MovingRepulsionMaxSlowdown;                    // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxMovingRepulsionDist : 1;          // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxMovingRepulsionDist;                        // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.SpecialParameters
// 0x0014
struct FSpecialParameters
{
	uint32_t                                           bOverride_bInvisible : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bInvisible : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bNoFootsteps : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bNoFootsteps : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bShadowScare : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bShadowScare : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_bNVEyes : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bNVEyes : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bOverride_bNoSimplePhysics : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bNoSimplePhysics : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bOverride_MarthaMaceGlowSpeedThreshold : 1;    // 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	float                                              MarthaMaceGlowSpeedThreshold;                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bAlwaysCrawling : 1;                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAlwaysCrawling : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bAlwaysFaceHero : 1;                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bAlwaysFaceHero : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_FoliageExtraWidth : 1;               // 0x0008 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              FoliageExtraWidth;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bHurtingPregnantLynn : 1;            // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHurtingPregnantLynn : 1;                      // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bPregnantLynn : 1;                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bPregnantLynn : 1;                             // 0x0010 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bAllowCrawlNoFlashlight : 1;         // 0x0010 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bAllowCrawlNoFlashlight : 1;                   // 0x0010 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
};

// ScriptStruct OLGame.OLAIConfig.PerceptionParameters
// 0x0708
struct FPerceptionParameters
{
	uint32_t                                           bOverride_bCanSeePlayer : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanSeePlayer : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bCanHearPlayer : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCanHearPlayer : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bAlwaysSeePlayer : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bAlwaysSeePlayer : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_bNoDisturbed : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bNoDisturbed : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bOverride_bIgnoreDarkness : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bIgnoreDarkness : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bOverride_HearingThreshold : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	struct FFloatByDifficulty                          HearingThreshold;                              // 0x0004 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinDistanceForReactionNormal : 1;    // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinDistanceForReactionNormal;                  // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinDistanceForReactionDarkness : 1;  // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinDistanceForReactionDarkness;                // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinDisturbanceForReaction : 1;       // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinDisturbanceForReaction;                     // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinDisturbanceForStop : 1;           // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinDisturbanceForStop;                         // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinDisturbanceForGoto : 1;           // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinDisturbanceForGoto;                         // 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinResidualVisualForGoto : 1;        // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinResidualVisualForGoto;                      // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinResidualAudioForGoto : 1;         // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinResidualAudioForGoto;                       // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinVisualForChaseUnaware : 1;        // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinVisualForChaseUnaware;                      // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinVisualForChaseAware : 1;          // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinVisualForChaseAware;                        // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinAudioForChaseUnaware : 1;         // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinAudioForChaseUnaware;                       // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinAudioForChaseAware : 1;           // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinAudioForChaseAware;                         // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinSightClearanceForAudioDisturbance : 1;// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinSightClearanceForAudioDisturbance;          // 0x0094 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxDistToInvestigateDisturbance : 1; // 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDistToInvestigateDisturbance;               // 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinDelayBetweenDisturbances : 1;     // 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinDelayBetweenDisturbances;                   // 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinDelayBetweenIgnoredDist : 1;      // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinDelayBetweenIgnoredDist;                    // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DisturbanceWaitTime : 1;             // 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DisturbanceWaitTime;                           // 0x00B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AudioPerceptionScalingByDifficulty : 1;// 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          AudioPerceptionScalingByDifficulty;            // 0x00BC (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualPerceptionScalingByDifficulty : 1;// 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          VisualPerceptionScalingByDifficulty;           // 0x00F4 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AudioCooldownSpeedByDifficulty : 1;  // 0x0128 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          AudioCooldownSpeedByDifficulty;                // 0x012C (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualCooldownSpeedByDifficulty : 1; // 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          VisualCooldownSpeedByDifficulty;               // 0x0164 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualVeryCloseStartDist : 1;        // 0x0198 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualVeryCloseStartDist;                      // 0x019C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualVeryCloseEndDist : 1;          // 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualVeryCloseEndDist;                        // 0x01A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualVeryCloseMultiplier : 1;       // 0x01A8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualVeryCloseMultiplier;                     // 0x01AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualCrouchMultiplier : 1;          // 0x01B0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualCrouchMultiplier;                        // 0x01B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualCrawlMultiplier : 1;           // 0x01B8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualCrawlMultiplier;                         // 0x01BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualOnlyWideConeMultiplier : 1;    // 0x01C0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualOnlyWideConeMultiplier;                  // 0x01C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualBarelyVisibleInDarknessMultiplier : 1;// 0x01C8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualBarelyVisibleInDarknessMultiplier;       // 0x01CC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualThroughWindowMultiplier : 1;   // 0x01D0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualThroughWindowMultiplier;                 // 0x01D4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualLitByFlashlightMultiplier : 1; // 0x01D8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualLitByFlashlightMultiplier;               // 0x01DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualPeekFromSpecialLocationMultiplier : 1;// 0x01E0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualPeekFromSpecialLocationMultiplier;       // 0x01E4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualPeekingUnderwaterMultiplier : 1;// 0x01E8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualPeekingUnderwaterMultiplier;             // 0x01EC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisualCloseFacingMultiplier : 1;     // 0x01F0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisualCloseFacingMultiplier;                   // 0x01F4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BushesVisualMaxDistanceByDifficulty : 1;// 0x01F8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          BushesVisualMaxDistanceByDifficulty;           // 0x01FC (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BushesVisualMultiplier : 1;          // 0x0230 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BushesVisualMultiplier;                        // 0x0234 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BushesAudioMultiplier : 1;           // 0x0238 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BushesAudioMultiplier;                         // 0x023C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BushesMaxDistanceForChase : 1;       // 0x0240 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BushesMaxDistanceForChase;                     // 0x0244 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_UnderwaterVisualMaxDistanceByDifficulty : 1;// 0x0248 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          UnderwaterVisualMaxDistanceByDifficulty;       // 0x024C (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_UnderwaterVisualMultiplier : 1;      // 0x0280 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              UnderwaterVisualMultiplier;                    // 0x0284 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AudioImprecisionDist : 1;            // 0x0288 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AudioImprecisionDist;                          // 0x028C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinAudioImprecisionDist : 1;         // 0x0290 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinAudioImprecisionDist;                       // 0x0294 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AudioImprecisionAngle : 1;           // 0x0298 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AudioImprecisionAngle;                         // 0x029C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BarelyVisibleNarrowRangeFactor : 1;  // 0x02A0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BarelyVisibleNarrowRangeFactor;                // 0x02A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BarelyVisibleWideRangeFactor : 1;    // 0x02A8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BarelyVisibleWideRangeFactor;                  // 0x02AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinVisualForEnterHidingAwareness : 1;// 0x02B0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinVisualForEnterHidingAwareness;              // 0x02B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVisionParameters                           NormalVisionParameters;                        // 0x02B8 (0x0228) [0x0000000000000001] (CPF_Edit)    
	struct FVisionParameters                           DarknessVisionParameters;                      // 0x04E0 (0x0228) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.InvestigationParameters
// 0x0100
struct FInvestigationParameters
{
	uint32_t                                           bOverride_bNoInvestigation : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNoInvestigation : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bInvestigateOnIdleFallback : 1;      // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bInvestigateOnIdleFallback : 1;                // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bInvestigateLockers : 1;             // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bInvestigateLockers : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_bInvestigateBeds : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bInvestigateBeds : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bOverride_bInvestigateCrawlSpaces : 1;         // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bInvestigateCrawlSpaces : 1;                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bOverride_bInvestigateWindows : 1;             // 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bInvestigateWindows : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           bOverride_bInvestigateBarrels : 1;             // 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bInvestigateBarrels : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	uint32_t                                           bOverride_bInvestigateWardrobes : 1;           // 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bInvestigateWardrobes : 1;                     // 0x0000 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	uint32_t                                           bOverride_NumPointsToCheckAware : 1;           // 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	int32_t                                            NumPointsToCheckAware;                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_NumPointsToCheckUnaware : 1;         // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            NumPointsToCheckUnaware;                       // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinPointsToGenerate : 1;             // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            MinPointsToGenerate;                           // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_GeneratedPointsMinRadius : 1;        // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GeneratedPointsMinRadius;                      // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_GeneratedPointsMaxRadius : 1;        // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GeneratedPointsMaxRadius;                      // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxPointSearchDistance : 1;          // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxPointSearchDistance;                        // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxPathDistance : 1;                 // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxPathDistance;                               // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_LockerWeight : 1;                    // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LockerWeight;                                  // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BedWeight : 1;                       // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BedWeight;                                     // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_WindowWeight : 1;                    // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WindowWeight;                                  // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CrawlWeight : 1;                     // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CrawlWeight;                                   // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BarrelWeight : 1;                    // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BarrelWeight;                                  // 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_WardrobeWeight : 1;                  // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WardrobeWeight;                                // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_PointWeight : 1;                     // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PointWeight;                                   // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DoorOpenedByPlayerWeight : 1;        // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DoorOpenedByPlayerWeight;                      // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_WindowOpenedByPlayerWeight : 1;      // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WindowOpenedByPlayerWeight;                    // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AutoGeneratedWeight : 1;             // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AutoGeneratedWeight;                           // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_InvestigateBedAlternateChance : 1;   // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              InvestigateBedAlternateChance;                 // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_FindHiddenPlayerProbability : 1;     // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FindHiddenPlayerProbability;                   // 0x0094 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasTowardsPlayerContrib : 1;        // 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasTowardsPlayerContrib;                      // 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasTowardsLastPlayerDirectionContrib : 1;// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasTowardsLastPlayerDirectionContrib;         // 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasNearPlayerDistance : 1;          // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasNearPlayerDistance;                        // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasNearPlayerContrib : 1;           // 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasNearPlayerContrib;                         // 0x00B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasIdealDistanceFromBot : 1;        // 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasIdealDistanceFromBot;                      // 0x00BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasIdealDistanceFromBotContrib : 1; // 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasIdealDistanceFromBotContrib;               // 0x00C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasHorizontalityContrib : 1;        // 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasHorizontalityContrib;                      // 0x00CC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasSameVolumeContrib : 1;           // 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasSameVolumeContrib;                         // 0x00D4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasInSearchDistanceContrib : 1;     // 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasInSearchDistanceContrib;                   // 0x00DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasSeparationFromOthersDistance : 1;// 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasSeparationFromOthersDistance;              // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasSeparationFromOthersContrib : 1; // 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasSeparationFromOthersContrib;               // 0x00EC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasRandomContrib : 1;               // 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasRandomContrib;                             // 0x00F4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BiasCleanPathContrib : 1;            // 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BiasCleanPathContrib;                          // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.AttackParameters
// 0x01A8
struct FAttackParameters
{
	uint32_t                                           bOverride_AttackRange : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackRange;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_GrabUnderAttackRange : 1;            // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GrabUnderAttackRange;                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bNoFail : 1;                         // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNoFail : 1;                                   // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bShowWeaponOnDemand : 1;             // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bShowWeaponOnDemand : 1;                       // 0x0010 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_AttackStandardDamage : 1;            // 0x0010 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FFloatByDifficulty                          AttackStandardDamage;                          // 0x0014 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackSpecialDamage : 1;             // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          AttackSpecialDamage;                           // 0x004C (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackCrawlDamage : 1;               // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          AttackCrawlDamage;                             // 0x0084 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackStandardRecovery : 1;          // 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          AttackStandardRecovery;                        // 0x00BC (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackDeathGripRecovery : 1;         // 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackDeathGripRecovery;                       // 0x00F4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackNormalKnockbackPower : 1;      // 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackNormalKnockbackPower;                    // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackPushKnockbackPower : 1;        // 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackPushKnockbackPower;                      // 0x0104 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DoorBashDamage : 1;                  // 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DoorBashDamage;                                // 0x010C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DoorBashKnockbackPower : 1;          // 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DoorBashKnockbackPower;                        // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VaultDamage : 1;                     // 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VaultDamage;                                   // 0x011C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VaultKnockbackPower : 1;             // 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VaultKnockbackPower;                           // 0x0124 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackSqueezeInsideRange : 1;        // 0x0128 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackSqueezeInsideRange;                      // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackSqueezeRetryDelay : 1;         // 0x0130 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackSqueezeRetryDelay;                       // 0x0134 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackIdleTimeAfterGrab : 1;         // 0x0138 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackIdleTimeAfterGrab;                       // 0x013C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AnticipationDistance : 1;            // 0x0140 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AnticipationDistance;                          // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AnticipationDistanceSecondary : 1;   // 0x0148 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AnticipationDistanceSecondary;                 // 0x014C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinAnticipationVelocity : 1;         // 0x0150 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinAnticipationVelocity;                       // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bAlwaysAnticipate : 1;               // 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAlwaysAnticipate : 1;                         // 0x0158 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bAttackUseQuickAttack : 1;           // 0x0158 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bAttackUseQuickAttack : 1;                     // 0x0158 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_AttackQuickSpeedThreshold : 1;       // 0x0158 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              AttackQuickSpeedThreshold;                     // 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackQuickAngleThreshold : 1;       // 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackQuickAngleThreshold;                     // 0x0164 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackQuickDistanceThreshold : 1;    // 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackQuickDistanceThreshold;                  // 0x016C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bNoGrabCrawlingPlayer : 1;           // 0x0170 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNoGrabCrawlingPlayer : 1;                     // 0x0170 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bNoGrabFromUnder : 1;                // 0x0170 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bNoGrabFromUnder : 1;                          // 0x0170 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bTryPuntHero : 1;                    // 0x0170 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bTryPuntHero : 1;                              // 0x0170 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_PuntDesiredDistance : 1;             // 0x0170 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              PuntDesiredDistance;                           // 0x0174 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_PuntDesiredAirDuration : 1;          // 0x0178 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PuntDesiredAirDuration;                        // 0x017C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_PuntGroundDuration : 1;              // 0x0180 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PuntGroundDuration;                            // 0x0184 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_PuntDizzinessDuration : 1;           // 0x0188 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PuntDizzinessDuration;                         // 0x018C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AfterPuntSlowWalkDuration : 1;       // 0x0190 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AfterPuntSlowWalkDuration;                     // 0x0194 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AfterPuntSlowWalkSpeed : 1;          // 0x0198 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AfterPuntSlowWalkSpeed;                        // 0x019C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxPlayerPushBeforeKill : 1;         // 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            MaxPlayerPushBeforeKill;                       // 0x01A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.VOParameters
// 0x0038
struct FVOParameters
{
	uint32_t                                           bOverride_bPlayContinuousSound : 1;            // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPlayContinuousSound : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bPlayContinuousSoundMicrophoneOnly : 1;// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bPlayContinuousSoundMicrophoneOnly : 1;        // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_ConversationRange : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              ConversationRange;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_PatrolMinTimeForRandomVO : 1;        // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PatrolMinTimeForRandomVO;                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_PatrolMaxTimeForRandomVO : 1;        // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PatrolMaxTimeForRandomVO;                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_InvestigateMinTimeForRandomVO : 1;   // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              InvestigateMinTimeForRandomVO;                 // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_InvestigateMaxTimeForRandomVO : 1;   // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              InvestigateMaxTimeForRandomVO;                 // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ChaseMinTimeForRandomVO : 1;         // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ChaseMinTimeForRandomVO;                       // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ChaseMaxTimeForRandomVO : 1;         // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ChaseMaxTimeForRandomVO;                       // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.PathfindingParameters
// 0x0088
struct FPathfindingParameters
{
	uint32_t                                           bOverride_bCanOpenDoors : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanOpenDoors : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bCanBashDoors : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCanBashDoors : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bCanTraverseWindows : 1;             // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bCanTraverseWindows : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_bCanPathThroughCrawl : 1;            // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bCanPathThroughCrawl : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bOverride_OpenDoorCostMultiplier : 1;          // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	float                                              OpenDoorCostMultiplier;                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ClosedDoorCostMultiplier : 1;        // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ClosedDoorCostMultiplier;                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MustUnlockDoorCostMultiplier : 1;    // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MustUnlockDoorCostMultiplier;                  // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MustBashDoorCostMultiplier : 1;      // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MustBashDoorCostMultiplier;                    // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DoorExtraBotCostMultiplier : 1;      // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DoorExtraBotCostMultiplier;                    // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_OpenWindowCostMultiplier : 1;        // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              OpenWindowCostMultiplier;                      // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_OpenableWindowCostMultiplier : 1;    // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              OpenableWindowCostMultiplier;                  // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_BreakingWindowCostMultiplier : 1;    // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BreakingWindowCostMultiplier;                  // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_WindowExtraBotCostMultiplier : 1;    // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WindowExtraBotCostMultiplier;                  // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_WindowUnawareAdditionalCost : 1;     // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WindowUnawareAdditionalCost;                   // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VaultNormalCostMultiplier : 1;       // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VaultNormalCostMultiplier;                     // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VaultChaseCostMultiplier : 1;        // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VaultChaseCostMultiplier;                      // 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_JumpNormalCostMultiplier : 1;        // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              JumpNormalCostMultiplier;                      // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_JumpChaseCostMultiplier : 1;         // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              JumpChaseCostMultiplier;                       // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_LedgeNormalCostMultiplier : 1;       // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LedgeNormalCostMultiplier;                     // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_LedgeChaseCostMultiplier : 1;        // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LedgeChaseCostMultiplier;                      // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bSpawnWithNavMeshObstacle : 1;       // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSpawnWithNavMeshObstacle : 1;                 // 0x0080 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_PathEdgeSpacing : 1;                 // 0x0080 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              PathEdgeSpacing;                               // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.AnimationParameters
// 0x000C
struct FAnimationParameters
{
	uint32_t                                           bOverride_bForceUnawareAnimStyle : 1;          // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForceUnawareAnimStyle : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bForceAlertAnimStyle : 1;            // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bForceAlertAnimStyle : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bCanReturnToUnaware : 1;             // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bCanReturnToUnaware : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_MinLocomotionIdleBlendTime : 1;      // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              MinLocomotionIdleBlendTime;                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bUseSkullFixer : 1;                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUseSkullFixer : 1;                            // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bUseIdleBreakers : 1;                // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bUseIdleBreakers : 1;                          // 0x0008 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bUseCycleBreakers : 1;               // 0x0008 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bUseCycleBreakers : 1;                         // 0x0008 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_bNoAnimLOD : 1;                      // 0x0008 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bNoAnimLOD : 1;                                // 0x0008 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bOverride_bEnableProceduralEyeLookAt : 1;      // 0x0008 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bEnableProceduralEyeLookAt : 1;                // 0x0008 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bOverride_bNoFootstepEffects : 1;              // 0x0008 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bNoFootstepEffects : 1;                        // 0x0008 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
};

// ScriptStruct OLGame.OLAIConfig.IndirectWalkParameters
// 0x0030
struct FIndirectWalkParameters
{
	uint32_t                                           bOverride_bEnableWhenInvestigating : 1;        // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableWhenInvestigating : 1;                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_MinRandomizeTime : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              MinRandomizeTime;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxRandomizeTime : 1;                // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxRandomizeTime;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinSpeedPct : 1;                     // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinSpeedPct;                                   // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxSpeedPct : 1;                     // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxSpeedPct;                                   // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_SpeedApproachCoeff : 1;              // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SpeedApproachCoeff;                            // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxDeviationRatio : 1;               // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDeviationRatio;                             // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.InnerDemonParameters
// 0x00FC
struct FInnerDemonParameters
{
	uint32_t                                           bOverride_bDemonic : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDemonic : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_DemonicBackEnterDistance : 1;        // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              DemonicBackEnterDistance;                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DemonicLookBackEnterDistance : 1;    // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DemonicLookBackEnterDistance;                  // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DemonicFrontAttackDistance : 1;      // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DemonicFrontAttackDistance;                    // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DemonicAttackYawThresh : 1;          // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DemonicAttackYawThresh;                        // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DemonicMinRunningSpeed : 1;          // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DemonicMinRunningSpeed;                        // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DemonicPosOffset : 1;                // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DemonicPosOffset;                              // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DemonicLookbackOffset : 1;           // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DemonicLookbackOffset;                         // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DemonicYawCorrectionRate : 1;        // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DemonicYawCorrectionRate;                      // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bDemonicForceField : 1;              // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDemonicForceField : 1;                        // 0x0040 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_DemonicForceFieldStrength : 1;       // 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              DemonicForceFieldStrength;                     // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DemonicForceFieldRadius : 1;         // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DemonicForceFieldRadius;                       // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bDemonicNoKill : 1;                  // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDemonicNoKill : 1;                            // 0x0050 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bChargePlayerIfLooking : 1;          // 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bChargePlayerIfLooking : 1;                    // 0x0050 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bPauseBeforeCharge : 1;              // 0x0050 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bPauseBeforeCharge : 1;                        // 0x0050 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_ChargeSpeed : 1;                     // 0x0050 (0x0004) [0x0000000000000000] [0x00000040] 
	struct FFloatByDifficulty                          ChargeSpeed;                                   // 0x0054 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisibleDurationBeforeCharge : 1;     // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FFloatByDifficulty                          VisibleDurationBeforeCharge;                   // 0x008C (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisibleMeterCooldownRate : 1;        // 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisibleMeterCooldownRate;                      // 0x00C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ChargeMinimumDuration : 1;           // 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ChargeMinimumDuration;                         // 0x00CC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bEnableMagnetLook : 1;               // 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableMagnetLook : 1;                         // 0x00D0 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_MagnetLookInnerDist : 1;             // 0x00D0 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              MagnetLookInnerDist;                           // 0x00D4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MagnetLookOuterDist : 1;             // 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MagnetLookOuterDist;                           // 0x00DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MagnetLookInnerMaxRate : 1;          // 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MagnetLookInnerMaxRate;                        // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MagnetLookOuterMaxRate : 1;          // 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MagnetLookOuterMaxRate;                        // 0x00EC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MagnetLookSmoothingRange : 1;        // 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MagnetLookSmoothingRange;                      // 0x00F4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bMagnetLookRequiresLineCheck : 1;    // 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMagnetLookRequiresLineCheck : 1;              // 0x00F8 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct OLGame.OLAIConfig.CrawlingSyphiliticsParameters
// 0x007C
struct FCrawlingSyphiliticsParameters
{
	uint32_t                                           bOverride_AttackRangeFacing : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackRangeFacing;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_AttackRangeBack : 1;                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AttackRangeBack;                               // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_FollowDistanceSeen : 1;              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FollowDistanceSeen;                            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_FollowDistanceUnseen : 1;            // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FollowDistanceUnseen;                          // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CrawlSpeedUnseen : 1;                // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CrawlSpeedUnseen;                              // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CrawlSpeedRunningPlayer : 1;         // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CrawlSpeedRunningPlayer;                       // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinDistanceForStop : 1;              // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinDistanceForStop;                            // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxPlayerDistanceForBackOff : 1;     // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxPlayerDistanceForBackOff;                   // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxBackOffDistance : 1;              // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxBackOffDistance;                            // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_VisibleWaitTimeBeforeChase : 1;      // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              VisibleWaitTimeBeforeChase;                    // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ClosingInDuration : 1;               // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ClosingInDuration;                             // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinClosingInDistRatio : 1;           // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinClosingInDistRatio;                         // 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ChaseTime : 1;                       // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ChaseTime;                                     // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MinNumProximityCrawlersForAttack : 1;// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            MinNumProximityCrawlersForAttack;              // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_PlayerProximityRange : 1;            // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PlayerProximityRange;                          // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bForceAlertStance : 1;               // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForceAlertStance : 1;                         // 0x0078 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bForceCrawlStance : 1;               // 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bForceCrawlStance : 1;                         // 0x0078 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bDeathGripRunningPlayer : 1;         // 0x0078 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bDeathGripRunningPlayer : 1;                   // 0x0078 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
};

// ScriptStruct OLGame.OLAIConfig.LookAtNoiseConfig
// 0x0014
struct FLookAtNoiseConfig
{
	uint8_t                                            NoiseType;                                     // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              MinCycleDuration;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxCycleDuration;                              // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinDriftSpeed;                                 // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxDriftSpeed;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.LookAtParameters
// 0x00C0
struct FLookAtParameters
{
	uint32_t                                           bOverride_EyesOnlyLookAtNoisePreset : 1;       // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            EyesOnlyLookAtNoisePreset;                     // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_EyesOnlyLookAtCustomNoise : 1;       // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLookAtNoiseConfig                          EyesOnlyLookAtCustomNoise;                     // 0x000C (0x0014) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_EyesOnlyIdleNoisePreset : 1;         // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            EyesOnlyIdleNoisePreset;                       // 0x0024 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_EyesOnlyIdleCustomNoise : 1;         // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLookAtNoiseConfig                          EyesOnlyIdleCustomNoise;                       // 0x002C (0x0014) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_FlashlightLookAtNoisePreset : 1;     // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            FlashlightLookAtNoisePreset;                   // 0x0044 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_FlashlightLookAtCustomNoise : 1;     // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLookAtNoiseConfig                          FlashlightLookAtCustomNoise;                   // 0x004C (0x0014) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_FlashlightIdleNoisePreset : 1;       // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            FlashlightIdleNoisePreset;                     // 0x0064 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_FlashlightIdleCustomNoise : 1;       // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLookAtNoiseConfig                          FlashlightIdleCustomNoise;                     // 0x006C (0x0014) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_EyesOnlyMinYaw : 1;                  // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              EyesOnlyMinYaw;                                // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_EyesOnlyMaxYaw : 1;                  // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              EyesOnlyMaxYaw;                                // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_EyesOnlyMinPitch : 1;                // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              EyesOnlyMinPitch;                              // 0x0094 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_EyesOnlyMaxPitch : 1;                // 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              EyesOnlyMaxPitch;                              // 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_FlashlightMinYaw : 1;                // 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FlashlightMinYaw;                              // 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_FlashlightMaxYaw : 1;                // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FlashlightMaxYaw;                              // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_FlashlightMinPitch : 1;              // 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FlashlightMinPitch;                            // 0x00B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_FlashlightMaxPitch : 1;              // 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FlashlightMaxPitch;                            // 0x00BC (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAIConfig.AIConfigData
// 0x12A4
struct FAIConfigData
{
	uint32_t                                           bOverride_bIgnorePlayer : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIgnorePlayer : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bChasePlayer : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bChasePlayer : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bAttackPlayer : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bAttackPlayer : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_bAlwaysChase : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bAlwaysChase : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bOverride_bNoReaction : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bNoReaction : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bOverride_WeaponToUse : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	uint8_t                                            WeaponToUse;                                   // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FSpeedConfig                                MovementSpeed;                                 // 0x0008 (0x0328) [0x0000000000000001] (CPF_Edit)    
	struct FPerceptionParameters                       Perception;                                    // 0x0330 (0x0708) [0x0000000000000001] (CPF_Edit)    
	struct FInvestigationParameters                    Investigation;                                 // 0x0A38 (0x0100) [0x0000000000000001] (CPF_Edit)    
	struct FAttackParameters                           Attack;                                        // 0x0B38 (0x01A8) [0x0000000000000001] (CPF_Edit)    
	struct FFaceOffParameters                          FaceOffParams;                                 // 0x0CE0 (0x0030) [0x0000000000000001] (CPF_Edit)    
	struct FDeathGripParameters                        DeathGripParams;                               // 0x0D10 (0x00D0) [0x0000000000000001] (CPF_Edit)    
	struct FFlashlightParameters                       FlashlightParams;                              // 0x0DE0 (0x0044) [0x0000000000000001] (CPF_Edit)    
	struct FSpecialParameters                          Special;                                       // 0x0E24 (0x0014) [0x0000000000000001] (CPF_Edit)    
	struct FVOParameters                               VO;                                            // 0x0E38 (0x0038) [0x0000000000000001] (CPF_Edit)    
	struct FPathfindingParameters                      Pathfinding;                                   // 0x0E70 (0x0088) [0x0000000000000001] (CPF_Edit)    
	struct FAnimationParameters                        Animation;                                     // 0x0EF8 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FIndirectWalkParameters                     IndirectWalk;                                  // 0x0F04 (0x0030) [0x0000000000000001] (CPF_Edit)    
	struct FInnerDemonParameters                       InnerDemon;                                    // 0x0F34 (0x00FC) [0x0000000000000001] (CPF_Edit)    
	struct FCrawlingSyphiliticsParameters              CrawlingSyphilitics;                           // 0x1030 (0x007C) [0x0000000000000001] (CPF_Edit)    
	struct FRepulsionParameters                        Repulsion;                                     // 0x10AC (0x0050) [0x0000000000000001] (CPF_Edit)    
	struct FArrowParameters                            Arrow;                                         // 0x10FC (0x0080) [0x0000000000000001] (CPF_Edit)    
	struct FLookAtParameters                           LookAt;                                        // 0x117C (0x00C0) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_bAlwaysLookAtPlayer : 1;             // 0x123C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAlwaysLookAtPlayer : 1;                       // 0x123C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_bMonitorSeenByPlayer : 1;            // 0x123C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bMonitorSeenByPlayer : 1;                      // 0x123C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_bDisableKnockbackFromPlayer : 1;     // 0x123C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bDisableKnockbackFromPlayer : 1;               // 0x123C (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_bUseForMusic : 1;                    // 0x123C (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bUseForMusic : 1;                              // 0x123C (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bOverride_bInterruptVOOnDisturbance : 1;       // 0x123C (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bInterruptVOOnDisturbance : 1;                 // 0x123C (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bOverride_bForceUseForStressBreath : 1;        // 0x123C (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bForceUseForStressBreath : 1;                  // 0x123C (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           bOverride_bHighQualitySoundObstruction : 1;    // 0x123C (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bHighQualitySoundObstruction : 1;              // 0x123C (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	uint32_t                                           bOverride_MaxDistanceToPlayerForFirstChase : 1;// 0x123C (0x0004) [0x0000000000000000] [0x00004000] 
	float                                              MaxDistanceToPlayerForFirstChase;              // 0x1240 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxDistanceForAlarmByOther : 1;      // 0x1244 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDistanceForAlarmByOther;                    // 0x1248 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_MaxDistanceToAlarmOthers : 1;        // 0x124C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDistanceToAlarmOthers;                      // 0x1250 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_NumOfDoorBashLoopsByDifficulty : 1;  // 0x1254 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FIntByDifficulty                            NumOfDoorBashLoopsByDifficulty;                // 0x1258 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DoorClosingBehavior : 1;             // 0x128C (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            DoorClosingBehavior;                           // 0x1290 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ProbabilityCloseDoorBehind : 1;      // 0x1294 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ProbabilityCloseDoorBehind;                    // 0x1298 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ProbabilityCloseOpenDoors : 1;       // 0x129C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ProbabilityCloseOpenDoors;                     // 0x12A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyAnimNodes
// 0x0130
struct FEnemyAnimNodes
{
	class UOLAnimCustomBlend*                          TopHalfBlend;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class USkelControlLookAt*                          HeadTrackingLookAt;                            // 0x0008 (0x0008) [0x0000000000000000]               
	class USkelControlLookAt*                          HeadTrackingLookAtNic;                         // 0x0010 (0x0008) [0x0000000000000000]               
	class UOLAnimEyeLookAt*                            EyeLookAt;                                     // 0x0018 (0x0008) [0x0000000000000000]               
	class UOLAnimLocomotion*                           LocomotionAnim;                                // 0x0020 (0x0008) [0x0000000000000000]               
	class UOLAnimFaceOff*                              FaceOffAnim;                                   // 0x0028 (0x0008) [0x0000000000000000]               
	class UOLAnimPoseFreeze*                           PoseFreezeAnim;                                // 0x0030 (0x0008) [0x0000000000000000]               
	class UOLAnimScrubbable*                           DeathGripAnim;                                 // 0x0038 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           DeathGripShake;                                // 0x0040 (0x0008) [0x0000000000000000]               
	class UOLAnimScrubbableBlend*                      DemonicAnim;                                   // 0x0048 (0x0008) [0x0000000000000000]               
	class UOLAnimAIStairs*                             StairsAnim;                                    // 0x0050 (0x0008) [0x0000000000000000]               
	class UOLAnimDisturbed*                            DisturbedAnim;                                 // 0x0058 (0x0008) [0x0000000000000000]               
	class UAnimNodeSlot*                               FacialAnimSlot;                                // 0x0060 (0x0008) [0x0000000000000000]               
	class UAnimNodeAdditiveBlending*                   BreathingControl;                              // 0x0068 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           Breathing;                                     // 0x0070 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlend*                              AnticipateAttack;                              // 0x0078 (0x0008) [0x0000000000000000]               
	class UOLAnimDirectionalAttack*                    DirectionalAttack;                             // 0x0080 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           Ambush;                                        // 0x0088 (0x0008) [0x0000000000000000]               
	class UOLAnimPairedWalk*                           PairedWalk;                                    // 0x0090 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlend*                              InnerDemonArmsControl;                         // 0x0098 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlend*                              InnerDemonArms;                                // 0x00A0 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlend*                              CrawlerState;                                  // 0x00A8 (0x0008) [0x0000000000000000]               
	class UOLAnimCustomBlend*                          LairdCustomBlend;                              // 0x00B0 (0x0008) [0x0000000000000000]               
	class UOLAnimSelectByAILocoMode*                   SelectByLocoMode;                              // 0x00B8 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       HereticTorchHand;                              // 0x00C0 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       ClosedWeaponHand;                              // 0x00C8 (0x0008) [0x0000000000000000]               
	class UOLAnimGenericPoseBlend*                     GenericPoseBlend;                              // 0x00D0 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           ConstrainedCrouch;                             // 0x00D8 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlend*                              SkullFixer;                                    // 0x00E0 (0x0008) [0x0000000000000000]               
	class UOLAnimPoseKeeper*                           PoseKeeper;                                    // 0x00E8 (0x0008) [0x0000000000000000]               
	class USkelControlLimb*                            LeftHandIK;                                    // 0x00F0 (0x0008) [0x0000000000000000]               
	class USkelControlSingleBone*                      LeftShoulderIK;                                // 0x00F8 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            LeftForeTwistControl;                          // 0x0100 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            LeftForeTwist1Control;                         // 0x0108 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            LeftUpArmTwistControl;                         // 0x0110 (0x0008) [0x0000000000000000]               
	class USkelControlLookAt*                          LeftEyeLookAtControl;                          // 0x0118 (0x0008) [0x0000000000000000]               
	class USkelControlLookAt*                          RightEyeLookAtControl;                         // 0x0120 (0x0008) [0x0000000000000000]               
	class USkelControlSingleBone*                      RightHandIK;                                   // 0x0128 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.AttackData
// 0x0038
struct FAttackData
{
	float                                              AttackStartedTime;                             // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     StartLocation;                                 // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     StartRotation;                                 // 0x0010 (0x000C) [0x0000000000000000]               
	uint32_t                                           bForceKill : 1;                                // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUseQuickAttack : 1;                           // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bStationary : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bForcePush : 1;                                // 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDealtDamage : 1;                              // 0x001C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bAttackCycling : 1;                            // 0x001C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bPunchRH : 1;                                  // 0x001C (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bPunchLH : 1;                                  // 0x001C (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bKickRight : 1;                                // 0x001C (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bHeadButt : 1;                                 // 0x001C (0x0004) [0x0000000000000000] [0x00000200] 
	float                                              SmoothedAttackAngle;                           // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              AttackPlayrate;                                // 0x0024 (0x0004) [0x0000000000000000]               
	struct FVector                                     AttackNudgeVelocity;                           // 0x0028 (0x000C) [0x0000000000000000]               
	float                                              AttackRotationCorrectionVel;                   // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.WeaponData
// 0x0018
struct FWeaponData
{
	uint8_t                                            CurrentWeapon;                                 // 0x0000 (0x0001) [0x0000000000000000]               
	uint32_t                                           bAnimated : 1;                                 // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bVisible : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              HiddenUntilTime;                               // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              ShownUntilTime;                                // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bTemporarilyHidden : 1;                        // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverrideAttachType : 1;                       // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverrideAttachedToBone : 1;                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverrideDetachedFromPawn : 1;                 // 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              OverrideEndTime;                               // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.MiscTuningData
// 0x0020
struct FMiscTuningData
{
	float                                              AdjustDurationBD;                              // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              EarlyBlendOutBD;                               // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LateBlendOutBD;                                // 0x0008 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ForwardNudgeMinDist;                           // 0x000C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ForwardNudgeMaxDist;                           // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ForwardNudgeMaxVel;                            // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AttackDirectionalShortDist;                    // 0x0018 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              AttackDirectionalFarDist;                      // 0x001C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OLGame.OLEnemyPawn.DeathGripAnimSet
// 0x0030
struct FDeathGripAnimSet
{
	struct FName                                       Enter;                                         // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Kill;                                          // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Escape;                                        // 0x0010 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Struggle;                                      // 0x0018 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Shake;                                         // 0x0020 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Inactive;                                      // 0x0028 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OLGame.OLEnemyPawn.InvestigationAnimData
// 0x0014
struct FInvestigationAnimData
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0008 (0x0001) [0x0000000000000000]               
	float                                              MinRequiredClearance;                          // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bRequiresFlashlight : 1;                       // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRequiresAlert : 1;                            // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyCapabilities
// 0x0008
struct FEnemyCapabilities
{
	uint32_t                                           bCanPlayStartAndStop : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0xFFFFFFFF80000000] 
	uint32_t                                           bCanBeDisturbed : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanVault : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCanJump : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCanBeam : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bCanCrawl : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bCanCrouch : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bCanDeathgrip : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bCanFaceOff : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bCanBeKnockedback : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bCanOpenDoors : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bCanCloseDoors : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bCanBashDoors : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bCanBashWindows : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bCanAnticipateAttack : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bCanUseQuickAttack : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bCanUseBlendedDirectionalAttack : 1;           // 0x0000 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bCanSlamDoors : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bCanGrabFromBarrel : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bCanGrabFromWardrobe : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           bCanGrabFromSqueeze : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bCanGrabUnderwater : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           bCanGrabFromLocker : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bCanInvestigate : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bCanInvestigateLockers : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bCanInvestigateBeds : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bCanInvestigateCrawlSpaces : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           bCanInvestigateWindows : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x04000000] 
	uint32_t                                           bCanInvestigateBarrels : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x08000000] 
	uint32_t                                           bCanInvestigateWardrobes : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x10000000] 
	uint32_t                                           bCanUseStairAnims : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x20000000] 
	uint32_t                                           bCanShootArrows : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x40000000] 
	uint32_t                                           bCanPlayTurningMove : 1;                       // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanPlayBanks : 1;                             // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCanEyeLookAt : 1;                             // 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCanEyeLookAtProcedural : 1;                   // 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bCanAttackCrawlingPlayer : 1;                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct OLGame.OLEnemyPawn.ShoulderIKData
// 0x0018
struct FShoulderIKData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              IKStrength;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              StartedTime;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              BlendInTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BlendOutTime;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyHandIKData
// 0x0008
struct FEnemyHandIKData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              IKStrength;                                    // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.IKParamsData
// 0x0054
struct FIKParamsData
{
	float                                              IKTargetLeftOffsetLeft;                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IKTargetLeftOffsetFwd;                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IKTargetLeftOffsetRight;                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IKTargetFwdOffsetLeft;                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IKTargetFwdOffsetFwd;                          // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IKTargetFwdOffsetRight;                        // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IKTargetDirectionalOffsetLeft;                 // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IKTargetDirectionalOffsetFwd;                  // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IKTargetDirectionalOffsetRight;                // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IKTargetHeightLeft;                            // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IKTargetHeightFwd;                             // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IKTargetHeightRight;                           // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JointTargetBackOffsetLeft;                     // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JointTargetBackOffsetFwd;                      // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JointTargetBackOffsetRight;                    // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JointTargetLeftOffsetLeft;                     // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JointTargetLeftOffsetFwd;                      // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JointTargetLeftOffsetRight;                    // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JointTargetHeightLeft;                         // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JointTargetHeightFwd;                          // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JointTargetHeightRight;                        // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLEnemyPawn.LookAtNoiseData
// 0x0040
struct FLookAtNoiseData
{
	uint32_t                                           bNoiseActive : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CycleStartTime;                                // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              CycleEndTime;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              PrevYaw;                                       // 0x000C (0x0004) [0x0000000000000000]               
	float                                              PrevPitch;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              CurrentYaw;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              CurrentPitch;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              CurrentYawMicroOffset;                         // 0x001C (0x0004) [0x0000000000000000]               
	float                                              TargetYawMicroOffset;                          // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              CurrentPitchMicroOffset;                       // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              TargetPitchMicroOffset;                        // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              MicroOffsetNextChangeTime;                     // 0x002C (0x0004) [0x0000000000000000]               
	float                                              YawDriftTargetSpeed;                           // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              YawDriftCurrentSpeed;                          // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              PitchDriftTargetSpeed;                         // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              PitchDriftCurrentSpeed;                        // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.LookAtData
// 0x00B0
struct FLookAtData
{
	uint32_t                                           bHasValidTarget : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasValidEyesTarget : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     LookAtLocation;                                // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     EyesLookAtLocation;                            // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              FlashlightBaseYaw;                             // 0x001C (0x0004) [0x0000000000000000]               
	float                                              FlashlightBasePitch;                           // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              FlashlightNoiseYaw;                            // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              FlashlightNoisePitch;                          // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              DisabledUntilTime;                             // 0x002C (0x0004) [0x0000000000000000]               
	uint32_t                                           PatrolInterestActive : 1;                      // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     PatrolInterestPoint;                           // 0x0034 (0x000C) [0x0000000000000000]               
	float                                              DisturbanceInterestLastTime;                   // 0x0040 (0x0004) [0x0000000000000000]               
	struct FVector                                     DisturbanceInterestLocation;                   // 0x0044 (0x000C) [0x0000000000000000]               
	uint32_t                                           ScriptedLookAtActive : 1;                      // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	class UOLSeqAct_AILookAt*                          LookAtSeqAct;                                  // 0x0054 (0x0008) [0x0000000000000000]               
	class AActor*                                      ScriptedLookAtTarget;                          // 0x005C (0x0008) [0x0000000000000000]               
	uint32_t                                           ScriptedLookAtFullBody : 1;                    // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           ScriptedLookAtEyesOnly : 1;                    // 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              ScriptedLookAtMaxDistance;                     // 0x0068 (0x0004) [0x0000000000000000]               
	uint32_t                                           bScriptedLookTurnTowardsTarget : 1;            // 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLookAtNoiseData                            Noise;                                         // 0x0070 (0x0040) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.ConversationData
// 0x0024
struct FConversationData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAnswerPending : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              TimeActivated;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	class AOLEnemyPawn*                                OtherPawn;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            CurrentContext;                                // 0x0010 (0x0001) [0x0000000000000000]               
	class UAkEvent*                                    CurrentLine;                                   // 0x0014 (0x0008) [0x0000000000000000]               
	int32_t                                            QuestionIdx;                                   // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bAnswering : 1;                                // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLEnemyPawn.DelayedVO
// 0x0005
struct FDelayedVO
{
	float                                              TimeRemaining;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            VOContext;                                     // 0x0004 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.ContextualVOConfig
// 0x0028
struct FContextualVOConfig
{
	class UAkEvent*                                    Line;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UOLBotCondition*>                     Conditions;                                    // 0x0008 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	float                                              MinDelayBeforeRepeatOnPawn;                    // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinDelayBeforeRepeatGlobal;                    // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ProbabilityWeight;                             // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastTimePlayed;                                // 0x0024 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct OLGame.OLEnemyPawn.VOMapping
// 0x001C
struct FVOMapping
{
	uint8_t                                            VOContext;                                     // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FContextualVOConfig>                 VOOptions;                                     // 0x0004 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MinDelayAfterAnySimilarVO;                     // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinDelayAfterAnyVO;                            // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLEnemyPawn.TurnOnSpotData
// 0x0010
struct FTurnOnSpotData
{
	float                                              AnimTargetYaw;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              AppliedExtraCorrection;                        // 0x0004 (0x0004) [0x0000000000000000]               
	class AActor*                                      LookAtActor;                                   // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.FollowGroundData
// 0x001C
struct FFollowGroundData
{
	uint32_t                                           bFollowGroundRotation : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForceCheck : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     LastCheckPosition;                             // 0x0004 (0x000C) [0x0000000000000000]               
	float                                              LastCheckYaw;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              LastPitch;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              LastRoll;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyRandomSpeedData
// 0x000C
struct FEnemyRandomSpeedData
{
	float                                              CurrentSpeedTargetPct;                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              CurrentSpeedPct;                               // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              NextShuffleTime;                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyPairedWalkData
// 0x006C
struct FEnemyPairedWalkData
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	uint32_t                                           bBotIsDriving : 1;                             // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BotTargetSpeedOverride;                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              BotTargetSpeedBlendBase;                       // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BotTargetSpeedBlendStartTime;                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              BotTargetSpeedBlendDuration;                   // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              HeroDesiredSpeed;                              // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              TargetBotSideOffset;                           // 0x001C (0x0004) [0x0000000000000000]               
	float                                              TargetHeroSideOffset;                          // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector                                     TargetHeroPos;                                 // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetHeroDir;                                 // 0x0030 (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetHandIKPos;                               // 0x003C (0x000C) [0x0000000000000000]               
	struct FRotator                                    TargetHandIKRot;                               // 0x0048 (0x000C) [0x0000000000000000]               
	uint32_t                                           bHeroDataInitialized : 1;                      // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bInitialSynching : 1;                          // 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     InitialNPCPos;                                 // 0x0058 (0x000C) [0x0000000000000000]               
	float                                              InitialSyncAlpha;                              // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              InitalHeroSideOffset;                          // 0x0068 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyJumpData
// 0x0028
struct FEnemyJumpData
{
	struct FVector                                     Destination;                                   // 0x0000 (0x000C) [0x0000000000000000]               
	uint32_t                                           bInAir : 1;                                    // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bToBeam : 1;                                   // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bFast : 1;                                     // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              StartTime;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              HorzDist;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              InitialVelZ;                                   // 0x001C (0x0004) [0x0000000000000000]               
	class UOLSeqAct_AIJump*                            JumpSeqAct;                                    // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyBeamData
// 0x0008
struct FEnemyBeamData
{
	class UOLSeqAct_AIBeam*                            BeamSeqAct;                                    // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyCrawlData
// 0x008C
struct FEnemyCrawlData
{
	uint32_t                                           bCrouchStance : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bScramble : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCrawlEngaged : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            NextMarkerIdx;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bValidNextIntersectionPrediction : 1;          // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            NextIntersectionIdx;                           // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bNextIntersectionForward : 1;                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bValidPrevIntersection : 1;                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            PrevIntersectionIdx;                           // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPrevIntersectionForward : 1;                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     AdjustedLocation;                              // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     AdjustedForward;                               // 0x0028 (0x000C) [0x0000000000000000]               
	uint32_t                                           bValidAdjustedData : 1;                        // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bExitInvestigatingToLocation : 1;              // 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     ExitInvestigationLocation;                     // 0x0038 (0x000C) [0x0000000000000000]               
	class AActor*                                      ExitInvestigationActor;                        // 0x0044 (0x0008) [0x0000000000000000]               
	uint32_t                                           bExitToScriptedPatrol : 1;                     // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForceGroundCheck : 1;                         // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              LastGroundPitch;                               // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              LastGroundRoll;                                // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              LastGroundCheckYaw;                            // 0x0058 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastGroundCheckPosition;                       // 0x005C (0x000C) [0x0000000000000000]               
	struct FVector                                     LastGroundPosFeet;                             // 0x0068 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastGroundPosLeft;                             // 0x0074 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastGroundPosRight;                            // 0x0080 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.EnemySplineData
// 0x0010
struct FEnemySplineData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bGoingForward : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bStayInPlace : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bExiting : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              SplineEnteredTime;                             // 0x0004 (0x0004) [0x0000000000000000]               
	class AOLSplineGameplayMarker*                     CurrentMarker;                                 // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.StairsData
// 0x0024
struct FStairsData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class AOLStairsMarker*                             BottomMarker;                                  // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            Style;                                         // 0x000C (0x0001) [0x0000000000000000]               
	uint32_t                                           bGoingUp : 1;                                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSmallStairs : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              AnimRate;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            NumberOfSteps;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              EntryAnimDistance;                             // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bEntryBlendingIn : 1;                          // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEntering : 1;                                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bExitBlendingOut : 1;                          // 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOffPhaseTransition : 1;                       // 0x0020 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct OLGame.OLEnemyPawn.StopTransitionData
// 0x0018
struct FStopTransitionData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartTime;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bStopCompleted : 1;                            // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bImmediateStop : 1;                            // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     CompletedStopPosition;                         // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.StartTransitionData
// 0x0010
struct FStartTransitionData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartTime;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              DeltaYaw;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              InitialTargetYaw;                              // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.TurningMoveData
// 0x002C
struct FTurningMoveData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartTime;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              StartYaw;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              StartSpeed;                                    // 0x000C (0x0004) [0x0000000000000000]               
	float                                              InitialDeltaYaw;                               // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              SmoothedTargetYaw;                             // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              CurrentDesiredYaw;                             // 0x001C (0x0004) [0x0000000000000000]               
	struct FVector                                     FocalPoint;                                    // 0x0020 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.LocoModeParameters
// 0x0040
struct FLocoModeParameters
{
	struct FGameplayParams                             GP;                                            // 0x0000 (0x0040) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.CatmullRomPathData
// 0x002C
struct FCatmullRomPathData
{
	TArray<struct FVector2D>                           CRPathSegments;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector2D>                           CRPathSubSegments;                             // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              CRPathSubSegmentsLength;                       // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              CRBendApproxFactor;                            // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            CRPathLastIndex;                               // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.FlashlightData
// 0x005C
struct FFlashlightData
{
	uint32_t                                           bFlashlightEquipped : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     FlashlightDirection;                           // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     FlashlightPosition;                            // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              SmoothedLocalYaw;                              // 0x001C (0x0004) [0x0000000000000000]               
	float                                              SmoothedLocalPitch;                            // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              SwayTargetYaw;                                 // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              SwayTargetPitch;                               // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              SwayStartedTime;                               // 0x002C (0x0004) [0x0000000000000000]               
	float                                              SwayNextRndTime;                               // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              FlashlightDisabledEndTime;                     // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              SmartActivationExpirationTime;                 // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAttachedToAuxBone : 1;                        // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bTransitionningAttachPoint : 1;                // 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              TransitionStartTime;                           // 0x0040 (0x0004) [0x0000000000000000]               
	struct FVector                                     TransitionStartLoc;                            // 0x0044 (0x000C) [0x0000000000000000]               
	struct FVector                                     TransitionStartDir;                            // 0x0050 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEnemyPawn.WeaponTypeData
// 0x0014
struct FWeaponTypeData
{
	class UStaticMesh*                                 Mesh;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               SkelMesh;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              WeaponRange;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLAIAnimMapping.AIAnimMapping
// 0x0040
struct FAIAnimMapping
{
	struct FName                                       Idle;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       FacialUnaware;                                 // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       FacialAware;                                   // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       FacialChase;                                   // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       FacialSurprised;                               // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       FacialInvestigate;                             // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       EyesLookLeftRight;                             // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       EyesLookUpDown;                                // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.ActorFactoryOLAI.RenderingOverrideFlags
// 0x0068
struct FRenderingOverrideFlags
{
	class USkeletalMesh*                               MeshOverride;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               HeadMeshOverride;                              // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPhysicsAsset*                               PhysAssetOverride;                             // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_CastStaticShadow : 1;                // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCastStaticShadow : 1;                         // 0x0018 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_CastDynamicShadow : 1;               // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCastDynamicShadow : 1;                        // 0x0018 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOverride_SelfShadowOnly : 1;                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bSelfShadowOnly : 1;                           // 0x0018 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOverride_CastShadowInNightVision : 1;         // 0x0018 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bCastShadowInNightVision : 1;                  // 0x0018 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bOverride_UniformColor : 1;                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000100] 
	struct FLinearColor                                UniformColor;                                  // 0x001C (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       UniformColorName;                              // 0x002C (0x0008) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bOverride_LightingChannels : 1;                // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLightingChannelContainer                   LightingChannelsOverride;                      // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_LightEnvEnabled : 1;                 // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           LightEnvEnabledOverride : 1;                   // 0x003C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_LightEnvIntensity : 1;               // 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              LightEnvStaticIntensityOverride;               // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_LightEnvCastShadow : 1;              // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           LightEnvCastShadow : 1;                        // 0x0044 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverride_ReflectionDistanceFactorOverride : 1;// 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              ReflectionDistanceFactorOverride;              // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ForcedLodModel : 1;                  // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ForcedLodModel;                                // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_DisableApexClothing : 1;             // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisableApexClothing : 1;                      // 0x0054 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	TArray<class UMaterialInstance*>                   MaterialOverrides;                             // 0x0058 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLBot.MovingStateVars
// 0x0020
struct FMovingStateVars
{
	struct FVector                                     MoveTempDest;                                  // 0x0000 (0x000C) [0x0000000000000000]               
	TArray<struct FVector>                             MoveTempPath;                                  // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bMoveCancelled : 1;                            // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLAICoordinator.BotCollisionInfo
// 0x0028
struct FBotCollisionInfo
{
	uint8_t                                            CollisionType;                                 // 0x0000 (0x0001) [0x0000000000000000]               
	class AOLBot*                                      Collider;                                      // 0x0004 (0x0008) [0x0000000000000000]               
	class AOLBot*                                      Collidee;                                      // 0x000C (0x0008) [0x0000000000000000]               
	class AOLBot*                                      ExtraParticipant;                              // 0x0014 (0x0008) [0x0000000000000000]               
	float                                              DistToImpact;                                  // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bHeadToHeadPassRight : 1;                      // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bValidated : 1;                                // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CreatedTime;                                   // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLAnimCustomBlend.AngleBlendAnimDesc
// 0x0010
struct FAngleBlendAnimDesc
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              AnimAngle;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCCWOnly : 1;                                  // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCWOnly : 1;                                   // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct OLGame.OLAnimCycleBreaker.CycleBreaker
// 0x004C
struct FCycleBreaker
{
	float                                              MinWeight;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxWeight;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPlayStartToEnd : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              MinDuration;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxDuration;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinRate;                                       // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRate;                                       // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInSpeed;                                  // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutSpeed;                                 // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Probability;                                   // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LayerProbability;                              // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIsAPause : 1;                                 // 0x002C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	TArray<class UClass*>                              SpecificClasses;                               // 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              CurrentWeight;                                 // 0x0040 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TargetWeight;                                  // 0x0044 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LocalRate;                                     // 0x0048 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct OLGame.OLAnimFeatheredBlend.FeatheredBlendBone
// 0x000C
struct FFeatheredBlendBone
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              BoneWeigth;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAnimLocomotion.AnimStoppingData
// 0x0024
struct FAnimStoppingData
{
	uint32_t                                           bImmediate : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            AnimIdxOne;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            AnimIdxTwo;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              WeightRatio;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              InitialRate;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              BaseRateOne;                                   // 0x001C (0x0004) [0x0000000000000000]               
	float                                              BaseRateTwo;                                   // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLAnimLocomotion.AnimStartingData
// 0x0028
struct FAnimStartingData
{
	uint32_t                                           bPhaseTwoActive : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFast : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAlert : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            AnimIdxOne;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            AnimIdxTwo;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              WeightRatio;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              PhaseTwoStartTime;                             // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              PhaseOneUnscaledDuration;                      // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              PhaseTwoUnscaledDuration;                      // 0x001C (0x0004) [0x0000000000000000]               
	float                                              PhaseOneRateOne;                               // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              PhaseOneRateTwo;                               // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLAnimLocomotion.AnimTurningData
// 0x001C
struct FAnimTurningData
{
	int32_t                                            AnimIdxOne;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            AnimIdxTwo;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              WeightRatio;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              InitialDeltaYaw;                               // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TurningWeight;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.LookatObjectData
// 0x001C
struct FLookatObjectData
{
	uint32_t                                           bShouldTriggerCameraState : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShouldLowerCameraOnExit : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bShouldHaveNightVisionOnExit : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              WaitingForSnapshot;                            // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              PutdownWaitTime;                               // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     CameraOffsetDir;                               // 0x000C (0x000C) [0x0000000000000000]               
	float                                              CameraOffsetLength;                            // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.GameplayItemDefinition
// 0x0015
struct FGameplayItemDefinition
{
	struct FName                                       ItemName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ItemMeshIndex;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	struct FName                                       AttachSocketName;                              // 0x000C (0x0008) [0x0000000000000000]               
	uint8_t                                            Shape;                                         // 0x0014 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.QTEMatineeData
// 0x0018
struct FQTEMatineeData
{
	class UOLSeqAct_QTEDrivenMatinee*                  ActiveQTEMatineeSeq;                           // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              QTEInitialDurationLeft;                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              QTEInputForce;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              DesiredQTEValue;                               // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              CurrentQTEValue;                               // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.InventoryData
// 0x001C
struct FInventoryData
{
	uint32_t                                           bLookingAtBatteries : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TriedUsingBatteryUnsuccesfulTime;              // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLookingAtBandages : 1;                        // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TriedUsingBandageUnsuccesfulTime;              // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bLookingAtCamcorder : 1;                       // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShowCameraAfterBandage : 1;                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWantsToOpenInventory : 1;                     // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              WantsToOpenInventoryTimeStamp;                 // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bInCamcorderHUD : 1;                           // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bInCameraSpaceCamcorderHUD : 1;                // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWaitingForMovementRelease : 1;                // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bQuickRecordedMomentView : 1;                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct OLGame.OLHero.SwimmingParticlesData
// 0x0018
struct FSwimmingParticlesData
{
	uint32_t                                           bLeftHandOverWater : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLeftElbowOverWater : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bRightHandOverWater : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bRightElbowOverWater : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            CurrentLeftHandIdx;                            // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentLeftElbowIdx;                           // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentRightHandIdx;                           // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentRightElbowIdx;                          // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWaterEntryLeftLegOverWater : 1;               // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWaterEntryRightLegOverWater : 1;              // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWaterEntryLeftKneeOverWater : 1;              // 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWaterEntryRightKneeOverWater : 1;             // 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bWaterEntryLeftHandOverWater : 1;              // 0x0014 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bWaterEntryRightHandOverWater : 1;             // 0x0014 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bWaterEntryHeadOverWater : 1;                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000040] 
};

// ScriptStruct OLGame.OLHero.UnderwaterData
// 0x0014
struct FUnderwaterData
{
	uint32_t                                           bUnderwaterExitEffectDesired : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUnderwaterBloodExitEffectDesired : 1;         // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              LastUnderwaterExitEffectActiveTime;            // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasUnderwater : 1;                            // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsUnderwater : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            UnderwaterHidingType;                          // 0x000C (0x0001) [0x0000000000000000]               
	float                                              PeekRatio;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.WaveAnimatedData
// 0x0018
struct FWaveAnimatedData
{
	float                                              ValueAmplification;                            // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TimeAmplification;                             // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              LastTime;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              NextTime;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              CurrentValue;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              NextValue;                                     // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.RaftData
// 0x0160
struct FRaftData
{
	class AOLRiverMarker*                              ActiveRiverMarker;                             // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              RiverSpeed;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class AOLRaftLimitSplineMarker*                    ActiveRaftLimitMarker;                         // 0x000C (0x0008) [0x0000000000000000]               
	class UOLSeqAct_HeroPlayRiverAnim*                 ActivePlayAnim;                                // 0x0014 (0x0008) [0x0000000000000000]               
	uint32_t                                           bAttachmentAttached : 1;                       // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     CurrentRaftAttachmentOffset;                   // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     StartRaftAttachmentOffset;                     // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     DesiredRaftAttachmentOffset;                   // 0x0038 (0x000C) [0x0000000000000000]               
	float                                              RaftAttachmentOffsetDuration;                  // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              RaftAttachmentOffsetTimeLeft;                  // 0x0048 (0x0004) [0x0000000000000000]               
	struct FVector                                     DesiredRotationForward;                        // 0x004C (0x000C) [0x0000000000000000]               
	float                                              RotationCorrectionRate;                        // 0x0058 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIgnoreAccelerationForCamcorder : 1;           // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIgnoreCamcorderForAcceleration : 1;           // 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     IgnoreCamcorderAcceleration;                   // 0x0060 (0x000C) [0x0000000000000000]               
	float                                              NoInputDuration;                               // 0x006C (0x0004) [0x0000000000000000]               
	float                                              YawVelocity;                                   // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              LastYawVelocityInputTime;                      // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              VelocityRotation;                              // 0x0078 (0x0004) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x007C (0x000C) [0x0000000000000000]               
	uint32_t                                           bMovementDisallowed : 1;                       // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MovementEnabledRatio;                          // 0x008C (0x0004) [0x0000000000000000]               
	class ASkeletalMeshActor*                          ActiveRaft;                                    // 0x0090 (0x0008) [0x0000000000000000]               
	class ADynamicSMActor*                             ActivePaddle;                                  // 0x0098 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsCloseToScraping : 1;                        // 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsScraping : 1;                               // 0x00A0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsScrapingRight : 1;                          // 0x00A0 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     CollisionPosition;                             // 0x00A4 (0x000C) [0x0000000000000000]               
	struct FVector                                     ScrapingPosition;                              // 0x00B0 (0x000C) [0x0000000000000000]               
	float                                              ScrapingVelocity;                              // 0x00BC (0x0004) [0x0000000000000000]               
	uint8_t                                            RaftAnimationType;                             // 0x00C0 (0x0001) [0x0000000000000000]               
	float                                              BaseValueAmplification;                        // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              BaseTimeAmplification;                         // 0x00C8 (0x0004) [0x0000000000000000]               
	float                                              AnimatedBaseValueAmplification;                // 0x00CC (0x0004) [0x0000000000000000]               
	struct FWaveAnimatedData                           AnimatedZOffset;                               // 0x00D0 (0x0018) [0x0000000000000000]               
	struct FWaveAnimatedData                           AnimatedRoll;                                  // 0x00E8 (0x0018) [0x0000000000000000]               
	struct FWaveAnimatedData                           AnimatedPitch;                                 // 0x0100 (0x0018) [0x0000000000000000]               
	struct FWaveAnimatedData                           RaftAnimatedZOffset;                           // 0x0118 (0x0018) [0x0000000000000000]               
	struct FWaveAnimatedData                           RaftAnimatedRoll;                              // 0x0130 (0x0018) [0x0000000000000000]               
	struct FWaveAnimatedData                           RaftAnimatedPitch;                             // 0x0148 (0x0018) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.RaftCollisionData
// 0x002C
struct FRaftCollisionData
{
	struct FVector                                     CollisionPoint;                                // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     PotentialContactPoint;                         // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     PotentialContactNormal;                        // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              DistToContactPoint;                            // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHit : 1;                                      // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHitAffectsYaw : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bScraping : 1;                                 // 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCloseToScraping : 1;                          // 0x0028 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bCanHitAffectYaw : 1;                          // 0x0028 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct OLGame.OLHero.HeroDeathGripData
// 0x006C
struct FHeroDeathGripData
{
	uint8_t                                            VariantType;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	uint32_t                                           bHasGoodQTEInput : 1;                          // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasBadQTEInput : 1;                           // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bReadyForQTEInput : 1;                         // 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            QTEKey;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFastInput : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSlowInput : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              ImmediateInput;                                // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AccInput;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            LastShakeDirection;                            // 0x0018 (0x0001) [0x0000000000000000]               
	float                                              LastShakeEventTime;                            // 0x001C (0x0004) [0x0000000000000000]               
	float                                              LastShakeDuration;                             // 0x0020 (0x0004) [0x0000000000000000]               
	struct FName                                       AnimEnter;                                     // 0x0024 (0x0008) [0x0000000000000000]               
	struct FName                                       AnimStruggle;                                  // 0x002C (0x0008) [0x0000000000000000]               
	struct FName                                       AnimShake;                                     // 0x0034 (0x0008) [0x0000000000000000]               
	struct FName                                       AnimDeath;                                     // 0x003C (0x0008) [0x0000000000000000]               
	struct FName                                       AnimEscape;                                    // 0x0044 (0x0008) [0x0000000000000000]               
	uint32_t                                           bBlendEnterAnims : 1;                          // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       AnimEnterA;                                    // 0x0050 (0x0008) [0x0000000000000000]               
	struct FName                                       AnimEnterB;                                    // 0x0058 (0x0008) [0x0000000000000000]               
	float                                              BlendWeigthEnterA;                             // 0x0060 (0x0004) [0x0000000000000000]               
	class AOLBot*                                      Attacker;                                      // 0x0064 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.WaveAnimatedDataConfig
// 0x0048
struct FWaveAnimatedDataConfig
{
	float                                              AnimatedRaftMinZOffsetTime;                    // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftMaxZOffsetTime;                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftNegativeMinZOffsetRange;           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftNegativeMaxZOffsetRange;           // 0x000C (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftPositiveMinZOffsetRange;           // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftPositiveMaxZOffsetRange;           // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftMinPitchOffsetTime;                // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftMaxPitchOffsetTime;                // 0x001C (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftNegativeMinPitchOffsetRange;       // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftNegativeMaxPitchOffsetRange;       // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftPositiveMinPitchOffsetRange;       // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftPositiveMaxPitchOffsetRange;       // 0x002C (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftMinRollOffsetTime;                 // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftMaxRollOffsetTime;                 // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftNegativeMinRollOffsetRange;        // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftNegativeMaxRollOffsetRange;        // 0x003C (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftPositiveMinRollOffsetRange;        // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              AnimatedRaftPositiveMaxRollOffsetRange;        // 0x0044 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.CamcorderLostPromptRangeData
// 0x0010
struct FCamcorderLostPromptRangeData
{
	struct FName                                       CheckpointStart;                               // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       CheckpointEnd;                                 // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.SqueezeLimitsParams
// 0x0004
struct FSqueezeLimitsParams
{
	uint32_t                                           bLimitSqueeze : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLimitMvmtLeft : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bLimitMvmtRight : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bLimitViewLeft : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bLimitViewRight : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct OLGame.OLHero.SpeedLimitParams
// 0x0014
struct FSpeedLimitParams
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentMaxSpeed;                               // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              BaseMaxSpeed;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              LimitDuration;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LimitStartedTime;                              // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.LocomotionModeParameters
// 0x004C
struct FLocomotionModeParameters
{
	struct FGameplayParams                             GP;                                            // 0x0000 (0x0040) [0x0000000000000001] (CPF_Edit)    
	float                                              NeckOffsetSide;                                // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NeckOffsetFwd;                                 // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bAllowsCameraReloading : 1;                    // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowsUsingBandages : 1;                      // 0x0048 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bLeftHandIsFree : 1;                           // 0x0048 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bAllowsProceduralLookback : 1;                 // 0x0048 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bAllowsProceduralLookbackQuickSupport : 1;     // 0x0048 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bDisableBaseSupport : 1;                       // 0x0048 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bAllowsCamcorderHUD : 1;                       // 0x0048 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
};

// ScriptStruct OLGame.OLHero.NVGlitchData
// 0x001C
struct FNVGlitchData
{
	uint32_t                                           bGlitching : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentLevel;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              NextGlitchTime;                                // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            GlitchType;                                    // 0x0010 (0x0001) [0x0000000000000000]               
	float                                              TargetLevel;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.CameraEffectData
// 0x001C
struct FCameraEffectData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              BlendOutDuration;                              // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              PlaneDist;                                     // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bNoRotation : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDeactivateOnCamcorderTransition : 1;          // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              StartedTime;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              BlendOutStartedTime;                           // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.NVLightSettings
// 0x0030
struct FNVLightSettings
{
	float                                              InnerConeAngleZoomedOut;                       // 0x0000 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              InnerConeAngleZoomedIn;                        // 0x0004 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              OuterConeAngleZoomedOut;                       // 0x0008 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              OuterConeAngleZoomedIn;                        // 0x000C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              RadiusZoomedOut;                               // 0x0010 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              RadiusZoomedIn;                                // 0x0014 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              BrightnessEVZoomedOut;                         // 0x0018 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              BrightnessEVZoomedIn;                          // 0x001C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DepthOfFieldFocusInnerRadiusZoomedOut;         // 0x0020 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DepthOfFieldFocusInnerRadiusZoomedIn;          // 0x0024 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DepthOfFieldFocusDistanceZoomedOut;            // 0x0028 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DepthOfFieldFocusDistanceZoomedIn;             // 0x002C (0x0004) [0x0000000000004000] (CPF_Config)  
};

// ScriptStruct OLGame.OLHero.WindData
// 0x0038
struct FWindData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     WindDirection;                                 // 0x0004 (0x000C) [0x0000000000000000]               
	uint32_t                                           bBurstActive : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BurstDuration;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              BurstIntensity;                                // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              BurstAlphaThresh;                              // 0x001C (0x0004) [0x0000000000000000]               
	struct FVector                                     MovementImpulse;                               // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              CurrentIntensity;                              // 0x002C (0x0004) [0x0000000000000000]               
	float                                              BurstStartedTime;                              // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              NextBurstTime;                                 // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.DizzinessIdleDriftConfig
// 0x0044
struct FDizzinessIdleDriftConfig
{
	float                                              YawDriftAmpl;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchDriftAmpl;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RollDriftAmpl;                                 // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DriftPeriod;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinSpeedMultiplierDuration;                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxSpeedMultiplierDuration;                    // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinSpeedMultiplier;                            // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxSpeedMultiplier;                            // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpeedMultiplierApproach;                       // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinAmpMultiplier;                              // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxAmpMultiplier;                              // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxAutoRoll;                                   // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxTotalRoll;                                  // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AutoRollForFullWeight;                         // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AutoRollApproach;                              // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PlayerRotSpdThresh;                            // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PlayerRotSpdForMaxAutoRoll;                    // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLHero.DizzinessInertialDriftConfig
// 0x0040
struct FDizzinessInertialDriftConfig
{
	float                                              YawDriftInertialFactor;                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              YawDriftInertialFactorLimit;                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              YawNonLinearSpringAngleStart;                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              YawMaxInertialDrift;                           // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              YawInertialDamping;                            // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              YawInertialFriction;                           // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bYawDampingOnVelocity : 1;                     // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              PitchDriftInertialFactor;                      // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchDriftInertialFactorLimit;                 // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchNonLinearSpringAngleStart;                // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchMaxInertialDrift;                         // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchInertialDamping;                          // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchInertialFriction;                         // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPitchDampingOnVelocity : 1;                   // 0x0034 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              IdleDriftWeightApproachDown;                   // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IdleDriftWeightApproachUp;                     // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLHero.DizzinessMovementConfig
// 0x0018
struct FDizzinessMovementConfig
{
	float                                              MinDelayForAngleChange;                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxDelayForAngleChange;                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxAngleOffset;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinApproachCoeff;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxApproachCoeff;                              // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RandomMotion;                                  // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLHero.DizzinessThrobbingConfig
// 0x0014
struct FDizzinessThrobbingConfig
{
	float                                              Freq;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SineExp;                                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EnvelopeExp;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Phase;                                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ConstantRatio;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLHero.DizzinessConfig
// 0x00D0
struct FDizzinessConfig
{
	float                                              Intensity;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInTime;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bBlur : 1;                                     // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bInertialCameraDrift : 1;                      // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bIdleCameraDrift : 1;                          // 0x0010 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bAffectMovementHeading : 1;                    // 0x0010 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bDisableJump : 1;                              // 0x0010 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bCapPlayerSpeed : 1;                           // 0x0010 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bThrobbing : 1;                                // 0x0010 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	float                                              BlurAmount;                                    // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxPlayerSpeed;                                // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxCameraRotationSpeed;                        // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDizzinessIdleDriftConfig                   IdleDrift;                                     // 0x0020 (0x0044) [0x0000000000000001] (CPF_Edit)    
	struct FDizzinessInertialDriftConfig               InertialDrift;                                 // 0x0064 (0x0040) [0x0000000000000001] (CPF_Edit)    
	struct FDizzinessMovementConfig                    Movement;                                      // 0x00A4 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FDizzinessThrobbingConfig                   Throbbing;                                     // 0x00BC (0x0014) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLHero.DizzinessData
// 0x0140
struct FDizzinessData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFadingOut : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              StartedTime;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              StoppedTime;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              CurrentIntensity;                              // 0x000C (0x0004) [0x0000000000000000]               
	float                                              CurrentIntensityNoContext;                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              YawVel;                                        // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              PitchVel;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              CurrentPhase;                                  // 0x001C (0x0004) [0x0000000000000000]               
	float                                              CurrentSpeedMultiplier;                        // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              SpeedMultiplierTarget;                         // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              NextSpeedMultiplierChange;                     // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              PitchAmpMultiplier;                            // 0x002C (0x0004) [0x0000000000000000]               
	float                                              YawAmpMultiplier;                              // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              CurrentAutoRoll;                               // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              YawDriftVelocity;                              // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              YawInertialDrift;                              // 0x003C (0x0004) [0x0000000000000000]               
	float                                              PitchDriftVelocity;                            // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              PitchInertialDrift;                            // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              IdleDriftWeight;                               // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              TotalYawDrift;                                 // 0x004C (0x0004) [0x0000000000000000]               
	float                                              TotalPitchDrift;                               // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              YawDriftDelta;                                 // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              PitchDriftDelta;                               // 0x0058 (0x0004) [0x0000000000000000]               
	float                                              MovementAngleOffset;                           // 0x005C (0x0004) [0x0000000000000000]               
	float                                              TargetMovementOffset;                          // 0x0060 (0x0004) [0x0000000000000000]               
	float                                              AngleOffsetApproachCoeff;                      // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              NextAngleChangeTime;                           // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              CurrentRandomMotion;                           // 0x006C (0x0004) [0x0000000000000000]               
	struct FDizzinessConfig                            Config;                                        // 0x0070 (0x00D0) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.ScriptedDOFData
// 0x0020
struct FScriptedDOFData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartedTime;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Intensity;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BlendInTime;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              BlendOutTime;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              FocusDist;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              TransitionDist;                                // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.RotationRateLimitParams
// 0x0014
struct FRotationRateLimitParams
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFromInnerDemonMagnet : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CurrentMaxRotationRate;                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              BaseMaxRotationRate;                           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              LimitDuration;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LimitStartedTime;                              // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.CameraParameters
// 0x0018
struct FCameraParameters
{
	float                                              MinYaw;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxYaw;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MinPitchWS;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxPitchWS;                                    // 0x000C (0x0004) [0x0000000000000000]               
	float                                              MinPitchCS;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              MaxPitchCS;                                    // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.CornerPeekConfigData
// 0x008C
struct FCornerPeekConfigData
{
	float                                              DistForMaxStrength;                            // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              DistForExpectStrength;                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              DistForNoStrength;                             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              ExpectStrength;                                // 0x000C (0x0004) [0x0000000000000000]               
	float                                              DistOutsideSoftThresh;                         // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              DistOutsideHardThresh;                         // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              DistInsideFromLeftSoftThresh;                  // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              DistInsideFromLeftHardThresh;                  // 0x001C (0x0004) [0x0000000000000000]               
	float                                              DistInsideFromRightSoftThresh;                 // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              DistInsideFromRightHardThresh;                 // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              DistMinFwdSoftThresh;                          // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              DistMinFwdHardThresh;                          // 0x002C (0x0004) [0x0000000000000000]               
	float                                              DistMaxFwdSoftThresh;                          // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              DistMaxFwdHardThresh;                          // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              AngleDownSoftThresh;                           // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              AngleDownHardThresh;                           // 0x003C (0x0004) [0x0000000000000000]               
	float                                              AngleInSoftThresh;                             // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              AngleInHardThresh;                             // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              AngleOutSoftThresh;                            // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              AngleOutHardThresh;                            // 0x004C (0x0004) [0x0000000000000000]               
	float                                              ShoulderDist;                                  // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              MaxScrewingAroundTime;                         // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              MinDisconnectedTime;                           // 0x0058 (0x0004) [0x0000000000000000]               
	float                                              CriticalArmDistLow;                            // 0x005C (0x0004) [0x0000000000000000]               
	float                                              CriticalArmDistMed;                            // 0x0060 (0x0004) [0x0000000000000000]               
	float                                              CriticalArmDistHigh;                           // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              CriticalDownPitchLow;                          // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              CriticalDownPitchMed;                          // 0x006C (0x0004) [0x0000000000000000]               
	float                                              CriticalDownPitchHigh;                         // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              StrengthApproachCoeffCrouchUncrouch;           // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              StrengthApproachCoeffIn;                       // 0x0078 (0x0004) [0x0000000000000000]               
	float                                              StrengthApproachCoeffTransition;               // 0x007C (0x0004) [0x0000000000000000]               
	float                                              StrengthApproachCoeffOutNormal;                // 0x0080 (0x0004) [0x0000000000000000]               
	float                                              StrengthApproachCoeffOutFast;                  // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              StrengthApproachCoeffOutIdling;                // 0x0088 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.PuntData
// 0x0014
struct FPuntData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLanded : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              LandedTime;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              GettingUpStartTime;                            // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              GroundDuration;                                // 0x000C (0x0004) [0x0000000000000000]               
	float                                              DizzinessDuration;                             // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.PairedWalkData
// 0x0044
struct FPairedWalkData
{
	class AOLBot*                                      PairedNPC;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            Scenario;                                      // 0x0009 (0x0001) [0x0000000000000000]               
	uint8_t                                            AnimStyle;                                     // 0x000A (0x0001) [0x0000000000000000]               
	float                                              WalkSpeed;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              RunSpeed;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              StartedTime;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bTurningOnSpot : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastMouseToSIntentTime;                        // 0x001C (0x0004) [0x0000000000000000]               
	uint8_t                                            PregLynnState;                                 // 0x0020 (0x0001) [0x0000000000000000]               
	float                                              StateStartedTime;                              // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              HurtMeter;                                     // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              HurtDuration;                                  // 0x002C (0x0004) [0x0000000000000000]               
	float                                              BaseWalkSpeed;                                 // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              BaseRunSpeed;                                  // 0x0034 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastWalkTargetDirection;                       // 0x0038 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.PushableData
// 0x0064
struct FPushableData
{
	class AOLPushableObject*                           PromptedPushable;                              // 0x0000 (0x0008) [0x0000000000000000]               
	class AOLPushableObject*                           ActivePushable;                                // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            PushActionSide;                                // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            PushObjectType;                                // 0x0011 (0x0001) [0x0000000000000000]               
	struct FVector                                     PushEntryInitialDisplacement;                  // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     PushEntryPushableLocalDelta;                   // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     PushLocalOffset;                               // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     PushLocalOrientation;                          // 0x0038 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastPushPullLocalDirection;                    // 0x0044 (0x000C) [0x0000000000000000]               
	struct FVector                                     CameraOffsetDir;                               // 0x0050 (0x000C) [0x0000000000000000]               
	float                                              CameraOffsetLength;                            // 0x005C (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasPushing : 1;                               // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWasPulling : 1;                               // 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWasSlidingLeft : 1;                           // 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWasSlidingRight : 1;                          // 0x0060 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bPlayerPushedOnce : 1;                         // 0x0060 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct OLGame.OLHero.HidingBarrelData
// 0x0040
struct FHidingBarrelData
{
	struct FVector                                     AnimationDirection;                            // 0x0000 (0x000C) [0x0000000000000000]               
	class AOLHidingBarrel*                             ActiveBarrel;                                  // 0x000C (0x0008) [0x0000000000000000]               
	uint32_t                                           bCoverAttached : 1;                            // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPeeking : 1;                                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     PeekStopDir;                                   // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              HighestPeekRatio;                              // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              LastPeekRatio;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              PeekRatio;                                     // 0x002C (0x0004) [0x0000000000000000]               
	struct FVector                                     SlidingDirection;                              // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              SlidingRatio;                                  // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.LedgeHangData
// 0x0018
struct FLedgeHangData
{
	float                                              IdleStartTime;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              PeekOutRatio;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              PeekOutDuration;                               // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              PeekExhaustDuration;                           // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bPlayedPeekingOutSound : 1;                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPlayedPeekingInSound : 1;                     // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              PeekOutBreathSndTriggerTimestamp;              // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.SlidingSlopeData
// 0x0010
struct FSlidingSlopeData
{
	float                                              EntrySpeedMultiplier;                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              CurrentSpeed;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	struct FName                                       EntryAnim;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.CrawlData
// 0x0088
struct FCrawlData
{
	uint32_t                                           bAirvent : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bScramble : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bInIntersection : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	class AOLCrawlMarker*                              IntersectionEntryMarker;                       // 0x0004 (0x0008) [0x0000000000000000]               
	class AOLCrawlMarker*                              CurrentIntersectionTargetMarker;               // 0x000C (0x0008) [0x0000000000000000]               
	uint32_t                                           bEnteringIntersectionBwd : 1;                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     CurrentIntersectionDirection;                  // 0x0018 (0x000C) [0x0000000000000000]               
	uint32_t                                           bStopAtIntersection : 1;                       // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLookingBack : 1;                              // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              LookbackIntent;                                // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bTurningOnSpot : 1;                            // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastMouseToSIntentTime;                        // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              PendingProceduralRotationDelta;                // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           bExtremityBlockedTowardsPrev : 1;              // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bExtremityBlockedTowardsNext : 1;              // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bForceGroundCheck : 1;                         // 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              LastGroundPitch;                               // 0x003C (0x0004) [0x0000000000000000]               
	float                                              LastGroundRoll;                                // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              LastGroundCheckYaw;                            // 0x0044 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastGroundCheckPosition;                       // 0x0048 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastUpdatedFloorMaterialPosition;              // 0x0054 (0x000C) [0x0000000000000000]               
	int32_t                                            CurrentExitCrawlDivision;                      // 0x0060 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastGroundPosFeet;                             // 0x0064 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastGroundPosLeft;                             // 0x0070 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastGroundPosRight;                            // 0x007C (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.AttachmentData
// 0x0060
struct FAttachmentData
{
	class UPrimitiveComponent*                         AttachedComp;                                  // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bNoUpdateLocOffset : 1;                        // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHideWhenDone : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              BlendInTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BlendOutTime;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	struct FVector                                     PositionOffset;                                // 0x0018 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RotationOffset;                                // 0x0024 (0x000C) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAttached : 1;                                 // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              StartTimestamp;                                // 0x0034 (0x0004) [0x0000000000000000]               
	struct FVector                                     BlendStartPos;                                 // 0x0038 (0x000C) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0xC];                               		// 0x0044 (0x000C) MISSED OFFSET
	struct FQuat                                       BlendStartRot;                                 // 0x0050 (0x0010) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.CornerData
// 0x0038
struct FCornerData
{
	uint32_t                                           bDisabled : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bSkipSpatialCheck : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	class AActor*                                      BaseActor;                                     // 0x0004 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    Rotation;                                      // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           b3Sided : 1;                                   // 0x0024 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bRoundedCorner : 1;                            // 0x0024 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bIgnorePreciseHeightForIK : 1;                 // 0x0024 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              AllowedMinRangeUp;                             // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AllowedMaxRangeUp;                             // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WallThickness;                                 // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCanPeekFromLeft : 1;                          // 0x0034 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCanPeekFromRight : 1;                         // 0x0034 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bCanPeekFromLeftValid : 1;                     // 0x0034 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bCanPeekFromRightValid : 1;                    // 0x0034 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
};

// ScriptStruct OLGame.OLHero.CornerPeekData
// 0x00AC
struct FCornerPeekData
{
	struct FCornerData                                 CornerMarker;                                  // 0x0000 (0x0038) [0x0000000000000000]               
	uint8_t                                            PeekPosition;                                  // 0x0038 (0x0001) [0x0000000000000000]               
	uint32_t                                           bCrouched : 1;                                 // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     CornerLocation;                                // 0x0040 (0x000C) [0x0000000000000000]               
	struct FVector                                     FwdDir;                                        // 0x004C (0x000C) [0x0000000000000000]               
	struct FVector                                     SideDir;                                       // 0x0058 (0x000C) [0x0000000000000000]               
	uint32_t                                           bRoundedCorner : 1;                            // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              IKStrength;                                    // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              LastInterpActivatedTime;                       // 0x006C (0x0004) [0x0000000000000000]               
	float                                              LastDisconnectTime;                            // 0x0070 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisconnecting : 1;                            // 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bScrewedAround : 1;                            // 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     AnchorPos;                                     // 0x0078 (0x000C) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0xC];                               		// 0x0084 (0x000C) MISSED OFFSET
	struct FQuat                                       AnchorRot;                                     // 0x0090 (0x0010) [0x0000000000000000]               
	struct FVector                                     JointTargetPos;                                // 0x00A0 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.HandPlantedIKData
// 0x0024
struct FHandPlantedIKData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Strength;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              DesiredStrength;                               // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     EffectorOffset;                                // 0x000C (0x000C) [0x0000000000000000]               
	struct FRotator                                    EffectorRotation;                              // 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.HandIKData
// 0x0030
struct FHandIKData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            IKTarget;                                      // 0x0004 (0x0001) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              FadeInTime;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              FadeOutTime;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	struct FVector                                     EffectorOffset;                                // 0x0018 (0x000C) [0x0000000000000000]               
	struct FRotator                                    EffectorRotationOffset;                        // 0x0024 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.EnvironmentReactionData
// 0x0020
struct FEnvironmentReactionData
{
	class AActor*                                      LeftSideObstacle;                              // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              LeftSideObstacleFreeTime;                      // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLeftArmEnvironmentDodge : 1;                  // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      RightSideObstacle;                             // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              RightSideObstacleFreeTime;                     // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bRightArmEnvironmentDodge : 1;                 // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLHero.HeroAnimNodes
// 0x01D8
struct FHeroAnimNodes
{
	class UOLAnimCameraSpace*                          UpperBodyCamSpace;                             // 0x0000 (0x0008) [0x0000000000000000]               
	class UOLAnimCustomBlend*                          UpperBodyBlendNode;                            // 0x0008 (0x0008) [0x0000000000000000]               
	class UAnimNodeSlot*                               RightArmAnimSlot;                              // 0x0010 (0x0008) [0x0000000000000000]               
	class UAnimNodeSlot*                               RightArmNoCamSpaceAnimSlot;                    // 0x0018 (0x0008) [0x0000000000000000]               
	class UAnimNodeSlot*                               LeftArmAnimSlot;                               // 0x0020 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendByPosture*                       BlendByPostureWalkingAnimNode;                 // 0x0028 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendByPosture*                       BlendByPostureFallingAnimNode;                 // 0x0030 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendBySpeed*                         BlendBySpeedCrouchFallingAnimNode;             // 0x0038 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendBySpeed*                         BlendBySpeedCrawlFallingAnimNode;              // 0x0040 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendByLocomotionMode*                LocomotionAnimNode;                            // 0x0048 (0x0008) [0x0000000000000000]               
	class UOLAnimConstrainedMovement*                  LedgeHangAnimNode;                             // 0x0050 (0x0008) [0x0000000000000000]               
	class UOLAnimConstrainedMovement*                  LedgeWalkAnimNode;                             // 0x0058 (0x0008) [0x0000000000000000]               
	class UOLAnimConstrainedMovement*                  SqueezeAnimNode;                               // 0x0060 (0x0008) [0x0000000000000000]               
	class UOLAnimMultiCycleConstrainedMovement*        LadderAnimNode;                                // 0x0068 (0x0008) [0x0000000000000000]               
	class UOLAnimDoorInteraction*                      DoorAnimNode;                                  // 0x0070 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       LeftArmWallContactFilterNode;                  // 0x0078 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       CrouchedLeftArmWallContactFilterNode;          // 0x0080 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           LeftArmWallContactAnimSequence;                // 0x0088 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           CrouchedLeftArmWallContactAnimSequence;        // 0x0090 (0x0008) [0x0000000000000000]               
	class UOLAnimPeeking*                              PeekingAnimNode;                               // 0x0098 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           BedAnimNode;                                   // 0x00A0 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendDirectionalRM*                   FreeCrawlAnimNode;                             // 0x00A8 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendDirectionalRM*                   ConstrainedCrawlAnimNode;                      // 0x00B0 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendList*                          CrawlModeAnimNode;                             // 0x00B8 (0x0008) [0x0000000000000000]               
	class UOLAnimScrubbable*                           CrawlLookScrubAnimNode;                        // 0x00C0 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendList*                          CrawlTurnAnimNode;                             // 0x00C8 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       LeftFootPlacementNode;                         // 0x00D0 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       RightFootPlacementNode;                        // 0x00D8 (0x0008) [0x0000000000000000]               
	class UOLAnimCrouchedTurnOnSpot*                   CrouchTurnOnSpotAnimNode;                      // 0x00E0 (0x0008) [0x0000000000000000]               
	class UOLAnimParrying*                             ParryingAnimNode;                              // 0x00E8 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendByLeaning*                       LeanStandingAnimNode;                          // 0x00F0 (0x0008) [0x0000000000000000]               
	class UOLAnimBlendByLeaning*                       LeanCrouchedAnimNode;                          // 0x00F8 (0x0008) [0x0000000000000000]               
	class UOLAnimScrubbable*                           DeathGripAnimNode;                             // 0x0100 (0x0008) [0x0000000000000000]               
	class UAnimNodeSequence*                           DeathGripShake;                                // 0x0108 (0x0008) [0x0000000000000000]               
	class UOLAnimWardrobe*                             WardrobeAnimNode;                              // 0x0110 (0x0008) [0x0000000000000000]               
	class UOLAnimSlidingSlope*                         SlidingSlopeAnimNode;                          // 0x0118 (0x0008) [0x0000000000000000]               
	class UOLAnimSelectByWaterDepth*                   HiddenInWaterAnimNode;                         // 0x0120 (0x0008) [0x0000000000000000]               
	class UOLAnimRiver*                                RiverAnimNode;                                 // 0x0128 (0x0008) [0x0000000000000000]               
	class UOLAnimPairedWalk*                           PairedWalkAnimNode;                            // 0x0130 (0x0008) [0x0000000000000000]               
	class UAnimNodeAdditiveBlending*                   CrawlIdleAnimNode;                             // 0x0138 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       GameplayItemLeftArmAnimNode;                   // 0x0140 (0x0008) [0x0000000000000000]               
	class UOLAnimGenericPoseBlend*                     GenericPoseBlend;                              // 0x0148 (0x0008) [0x0000000000000000]               
	TArray<class UAnimNodeSequence*>                   FlySwattingNodes;                              // 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAnimNodeAdditiveBlending*                   BabyHoldingIdleAdditiveAnimNode;               // 0x0160 (0x0008) [0x0000000000000000]               
	class UAnimNodeAdditiveBlending*                   StandIdleAdditiveAnimNode;                     // 0x0168 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendPerBone*                       LookLeftToRightFilter;                         // 0x0170 (0x0008) [0x0000000000000000]               
	class UOLAnimPoseKeeper*                           PoseKeeper;                                    // 0x0178 (0x0008) [0x0000000000000000]               
	class USkelControlLimb*                            LeftHandIK;                                    // 0x0180 (0x0008) [0x0000000000000000]               
	class USkelControlLimb*                            RightHandIK;                                   // 0x0188 (0x0008) [0x0000000000000000]               
	class USkelControlSingleBone*                      LeftHandFix;                                   // 0x0190 (0x0008) [0x0000000000000000]               
	class USkelControlSingleBone*                      HiddenRightArmControl;                         // 0x0198 (0x0008) [0x0000000000000000]               
	class USkelControlSingleBone*                      HiddenLeftArmControl;                          // 0x01A0 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            LeftForeTwistControl;                          // 0x01A8 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            LeftForeTwist1Control;                         // 0x01B0 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            LeftUpArmTwistControl;                         // 0x01B8 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            RightForeTwistControl;                         // 0x01C0 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            RightForeTwist1Control;                        // 0x01C8 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            RightUpArmTwistControl;                        // 0x01D0 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHero.SkinMaterials
// 0x01FC
struct FSkinMaterials
{
	uint8_t                                            BaseSkinType;                                  // 0x0000 (0x0001) [0x0000000000000000]               
	class UMaterialInterface*                          NM[0x14];                                      // 0x0004 (0x00A0) [0x0000000000000000]               
	class UMaterialInterface*                          IM[0x14];                                      // 0x00A4 (0x00A0) [0x0000000000000000]               
	class UMaterialInterface*                          BM[0x14];                                      // 0x0144 (0x00A0) [0x0000000000000000]               
	class UMaterialInterface*                          WM[0x3];                                       // 0x01E4 (0x0018) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHeroCamera.CameraWaveData
// 0x000C
struct FCameraWaveData
{
	float                                              Amplitude;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Frequency;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartPhase;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLHeroCamera.CameraShakeData
// 0x0098
struct FCameraShakeData
{
	float                                              Intensity;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInTime;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutTime;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxShakeDistance;                              // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistanceExponent;                              // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPositionless : 1;                             // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bOverrideForceFeedbackIntensity : 1;           // 0x0018 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              OveriddenForceFeedbackIntensity;               // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bDynamicForceFeedbackIntensity : 1;            // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DynamicForceFeedbackMultiplier;                // 0x0024 (0x0004) [0x0000000000000000]               
	struct FCameraWaveData                             YawWaveA;                                      // 0x0028 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FCameraWaveData                             YawWaveB;                                      // 0x0034 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FCameraWaveData                             PitchWaveA;                                    // 0x0040 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FCameraWaveData                             PitchWaveB;                                    // 0x004C (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FCameraWaveData                             RollWaveA;                                     // 0x0058 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FCameraWaveData                             RollWaveB;                                     // 0x0064 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	uint32_t                                           bActive : 1;                                   // 0x0070 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              StartedTime;                                   // 0x0074 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     SourceLocation;                                // 0x0078 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              YawOffset;                                     // 0x0084 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PitchOffset;                                   // 0x0088 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              RollOffset;                                    // 0x008C (0x0004) [0x0000000000002000] (CPF_Transient)
	class UObject*                                     Owner;                                         // 0x0090 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct OLGame.OLHeroCamera.TargettedSmoothingData
// 0x0014
struct FTargettedSmoothingData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TargetAngleWS;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              StartAngleWS;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLAnimRelativeBranch.BranchRelativeBone
// 0x0010
struct FBranchRelativeBone
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       VirtualParent;                                 // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLAnimRiver.RowingAnimData
// 0x0014
struct FRowingAnimData
{
	int32_t                                            IntroAnimIdx;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            LoopAnimIdx;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLoopOnce : 1;                                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            OutroAnimIdx;                                  // 0x000C (0x0004) [0x0000000000000000]               
	float                                              OutroRate;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLArrow.ArrowStuckDoorData
// 0x0054
struct FArrowStuckDoorData
{
	class AOLDoor*                                     TheDoor;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0x8];                               		// 0x0008 (0x0008) MISSED OFFSET
	struct FMatrix                                     InitialRelativeXform;                          // 0x0010 (0x0040) [0x0000000000000000]               
	float                                              LastDoorOpenRatio;                             // 0x0050 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLArrow.ArrowWobbleData
// 0x0014
struct FArrowWobbleData
{
	float                                              CurrentOffsetSide;                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              CurrentOffsetUp;                               // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TargetOffsetSide;                              // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              TargetOffsetUp;                                // 0x000C (0x0004) [0x0000000000000000]               
	float                                              NextOffsetChangeTime;                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLArrow.ArrowLandingData
// 0x0040
struct FArrowLandingData
{
	uint32_t                                           bLanding : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LandedTime;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     InitialPos;                                    // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     FinalPos;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	struct FQuat                                       InitialRot;                                    // 0x0020 (0x0010) [0x0000000000000000]               
	struct FQuat                                       FinalRot;                                      // 0x0030 (0x0010) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLArrow.ArrowShakeData
// 0x0014
struct FArrowShakeData
{
	uint32_t                                           bShaking : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartTime;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	struct FRotator                                    BaseRotation;                                  // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLArrow.ArrowPreciseTravelData
// 0x0034
struct FArrowPreciseTravelData
{
	float                                              TotalAirDuration;                              // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              InitialVelZ;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     StartPos;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetPos;                                     // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     Inaccuracy;                                    // 0x0020 (0x000C) [0x0000000000000000]               
	class AActor*                                      TargetActor;                                   // 0x002C (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLArrow.ArrowSettings
// 0x0064
struct FArrowSettings
{
	float                                              ArrowSpeed;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bNoPlayerHit : 1;                              // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bGuaranteedPlayerHit : 1;                      // 0x0004 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bFollowTarget : 1;                             // 0x0004 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              MinDistForFollowTarget;                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStopAtTarget : 1;                             // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bEnableWobble : 1;                             // 0x000C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              MaxWobbleOffset;                               // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WobbleOffsetInterval;                          // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableShake : 1;                              // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              MinPenetration;                                // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxPenetration;                                // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            HitDamage;                                     // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCanStickInLandscape : 1;                      // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FName                                       NPCAttachSocketName;                           // 0x002C (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableRandomInaccuracy : 1;                   // 0x0034 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              DistanceForAccurate;                           // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistanceForMaxInaccuracy;                      // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxInaccuracy;                                 // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VelocityPredictionFactor;                      // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableFixedInaccuracy : 1;                    // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     FixedInaccuracyWS;                             // 0x004C (0x000C) [0x0000000000000000]               
	float                                              MinDistToTargetToDisableCollisions;            // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOnFire : 1;                                   // 0x005C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              FireStopDuration;                              // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLBashableObject.BashableTriggerData
// 0x000C
struct FBashableTriggerData
{
	float                                              MaxAngleInFrontOfPlayer;                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AVolume*                                     TriggerVolume;                                 // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLHeroCamera.CameraShakeList
// 0x0010
struct FCameraShakeList
{
	TArray<struct FCameraShakeData>                    List;                                          // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLHeroCamera.ViewLimits
// 0x0010
struct FViewLimits
{
	float                                              MinYaw;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxYaw;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MinPitch;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxPitch;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHeroCamera.CamView
// 0x0018
struct FCamView
{
	struct FVector                                     Loc;                                           // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Yaw;                                           // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Pitch;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Roll;                                          // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHeroCamera.SmoothingData
// 0x0024
struct FSmoothingData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FCamView                                    ViewWS;                                        // 0x0004 (0x0018) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x001C (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLSplineGameplayMarker.SplinePositionDescriptor
// 0x0010
struct FSplinePositionDescriptor
{
	class AOLSplineGameplayMarker*                     SegmentStartMarker;                            // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              SegmentRatio;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OutsideOffset;                                 // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLSplineGameplayMarker.SplineDescriptor
// 0x0014
struct FSplineDescriptor
{
	TArray<class AOLSplineGameplayMarker*>             SegmentMarkers;                                // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           bLooping : 1;                                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLBot.DebugConditionResult
// 0x0018
struct FDebugConditionResult
{
	class FString                                      Desc;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bResult : 1;                                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Time;                                          // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.ErrorInfo
// 0x001C
struct FErrorInfo
{
	uint8_t                                            ErrorType;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Desc;                                          // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Time;                                          // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            RepeatCount;                                   // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.EventInfo
// 0x0028
struct FEventInfo
{
	class FString                                      ShortDesc;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LongDesc;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Time;                                          // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            RepeatCount;                                   // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.AILogInfo
// 0x0014
struct FAILogInfo
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Time;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.AnimationData
// 0x003C
struct FAnimationData
{
	struct FName                                       AnimationName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bLoop : 1;                                     // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOnWaypoint : 1;                               // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              Rate;                                          // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BlendInTime;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              BlendOutTime;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              EndTime;                                       // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bAlign : 1;                                    // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     AlignLocation;                                 // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     AlignRotation;                                 // 0x0030 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.MovementData
// 0x0035
struct FMovementData
{
	class AActor*                                      DestinationActor;                              // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     DestinationPoint;                              // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     ValidatedMovePoint;                            // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              DestinationBuffer;                             // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsInvestigation : 1;                          // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFocusOnActor : 1;                             // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWillStopAtDestination : 1;                    // 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bTurnOnStop : 1;                               // 0x0024 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bReachOnZeroAnimPhase : 1;                     // 0x0024 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bEarlyReachOnEnterZone : 1;                    // 0x0024 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bEarlyBlendOutOfStop : 1;                      // 0x0024 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bPreciseDestination : 1;                       // 0x0024 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bAllowIndirectWalk : 1;                        // 0x0024 (0x0004) [0x0000000000000000] [0x00000100] 
	float                                              TargetEndSpeed;                                // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              DestinationYaw;                                // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            NumUnstucks;                                   // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0034 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.InvestigationPoint
// 0x00B4
struct FInvestigationPoint
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	struct FVector                                     SimpleLocation;                                // 0x0004 (0x000C) [0x0000000000000000]               
	class AOLAIInvestigationPoint*                     InvPoint;                                      // 0x0010 (0x0008) [0x0000000000000000]               
	class AOLHidingSpot*                               Locker;                                        // 0x0018 (0x0008) [0x0000000000000000]               
	class AOLBed*                                      Bed;                                           // 0x0020 (0x0008) [0x0000000000000000]               
	class AOLWindow*                                   Window;                                        // 0x0028 (0x0008) [0x0000000000000000]               
	class AOLDoor*                                     door;                                          // 0x0030 (0x0008) [0x0000000000000000]               
	class AOLCrawlMarker*                              CrawlMarker;                                   // 0x0038 (0x0008) [0x0000000000000000]               
	class AOLHidingBarrel*                             Barrel;                                        // 0x0040 (0x0008) [0x0000000000000000]               
	class AOLWardrobe*                                 Wardrobe;                                      // 0x0048 (0x0008) [0x0000000000000000]               
	float                                              WeightOverride;                                // 0x0050 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasPathObstacles : 1;                         // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     CachedLocation;                                // 0x0058 (0x000C) [0x0000000000000000]               
	struct FVector                                     CachedDirection;                               // 0x0064 (0x000C) [0x0000000000000000]               
	uint32_t                                           bCacheValid : 1;                               // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	class AOLAIInvestigationVolume*                    InvVolume;                                     // 0x0074 (0x0008) [0x0000000000000000]               
	uint32_t                                           bRelevant : 1;                                 // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            IrrelevanceReason;                             // 0x0080 (0x0001) [0x0000000000000000]               
	float                                              SearchDistancePoints;                          // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              SeparationFromOthersPoints;                    // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              TowardsPlayerPoints;                           // 0x008C (0x0004) [0x0000000000000000]               
	float                                              NearPlayerPoints;                              // 0x0090 (0x0004) [0x0000000000000000]               
	float                                              TowardsLastPlayerDirPoints;                    // 0x0094 (0x0004) [0x0000000000000000]               
	float                                              IdealDistancePoints;                           // 0x0098 (0x0004) [0x0000000000000000]               
	float                                              HorizontalityPoints;                           // 0x009C (0x0004) [0x0000000000000000]               
	float                                              SameVolumePoints;                              // 0x00A0 (0x0004) [0x0000000000000000]               
	float                                              RandomPoints;                                  // 0x00A4 (0x0004) [0x0000000000000000]               
	float                                              CleanPathPoints;                               // 0x00A8 (0x0004) [0x0000000000000000]               
	float                                              CurrentPointWeight;                            // 0x00AC (0x0004) [0x0000000000000000]               
	float                                              UnweightedScore;                               // 0x00B0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.InvestigationData
// 0x0130
struct FInvestigationData
{
	uint32_t                                           bValid : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UOLSeqAct_AIInvestigatePoint*                InvestigationSeqAct;                           // 0x0004 (0x0008) [0x0000000000000000]               
	uint32_t                                           bAwareOfPlayer : 1;                            // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsIdleFallback : 1;                           // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              StartedTime;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector                                     InvestigationOrigin;                           // 0x0014 (0x000C) [0x0000000000000000]               
	int32_t                                            NbPointsToCheck;                               // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAtInvestigationPoint : 1;                     // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       AnimName;                                      // 0x0028 (0x0008) [0x0000000000000000]               
	uint32_t                                           bPlayingAnim : 1;                              // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLoopingAnim : 1;                              // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              InvestigationWaitEndTime;                      // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            NbPointsChecked;                               // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           bInvestigatingObject : 1;                      // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     InvestigateStartLocation;                      // 0x0040 (0x000C) [0x0000000000000000]               
	struct FVector                                     InvestigateStartRotation;                      // 0x004C (0x000C) [0x0000000000000000]               
	struct FInvestigationPoint                         CurrentInvestigationPoint;                     // 0x0058 (0x00B4) [0x0000000000000000]               
	TArray<struct FInvestigationPoint>                 InvestigationPoints;                           // 0x010C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeLeftUntilNextRandomVO;                     // 0x011C (0x0004) [0x0000000000000000]               
	uint32_t                                           bInvestigatingDisturbance : 1;                 // 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastPointSelectionTime;                        // 0x0124 (0x0004) [0x0000000000000000]               
	class AOLAIInvestigationVolume*                    CurrentInvestigationVolume;                    // 0x0128 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.AIPerceptionRules
// 0x0070
struct FAIPerceptionRules
{
	TArray<class UOLBotCondition*>                     AlwaysSeePlayer;                               // 0x0000 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	TArray<class UOLBotCondition*>                     NeverSeePlayer;                                // 0x0010 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	TArray<class UOLBotCondition*>                     OnlySeePlayer;                                 // 0x0020 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	TArray<class UOLBotCondition*>                     AlwaysHearPlayer;                              // 0x0030 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	TArray<class UOLBotCondition*>                     NeverHearPlayer;                               // 0x0040 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	TArray<class UOLBotCondition*>                     OnlyHearPlayer;                                // 0x0050 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	TArray<class UOLBotCondition*>                     IgnorePlayer;                                  // 0x0060 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct OLGame.OLBot.AIEventCondition
// 0x0024
struct FAIEventCondition
{
	uint8_t                                            EventType;                                     // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      RelevantActor;                                 // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UOLBotCondition*>                     Conditions;                                    // 0x000C (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	float                                              DebugLastCheckTime;                            // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           DebugLastCheckResult : 1;                      // 0x0020 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct OLGame.OLBot.ScriptedDisturbanceData
// 0x001C
struct FScriptedDisturbanceData
{
	uint32_t                                           bValid : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TriggeredTime;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            ForcedReaction;                                // 0x0009 (0x0001) [0x0000000000000000]               
	float                                              DisturbanceValue;                              // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.DisturbanceData
// 0x0048
struct FDisturbanceData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            Type;                                          // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            ReactionType;                                  // 0x0005 (0x0001) [0x0000000000000000]               
	uint8_t                                            ReactionPhase;                                 // 0x0006 (0x0001) [0x0000000000000000]               
	struct FVector                                     DisturbanceLocation;                           // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              RegistrationTime;                              // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              ActivationTime;                                // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              WaitStartedTime;                               // 0x001C (0x0004) [0x0000000000000000]               
	float                                              ExitStartedTime;                               // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bShootArrowWhenDone : 1;                       // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReactingBeforeChase : 1;                      // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              SlowDownFactor;                                // 0x0028 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastAudioDisturbanceTraceBotLocation;          // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     LastAudioDisturbanceTraceSoundLocation;        // 0x0038 (0x000C) [0x0000000000000000]               
	uint32_t                                           LastAudioDisturbanceTraceClear : 1;            // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLBot.DisturbanceSource
// 0x0020
struct FDisturbanceSource
{
	struct FVector                                     LastLocation;                                  // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastPerceivedLocation;                         // 0x000C (0x000C) [0x0000000000000000]               
	float                                              LastTimeTriggered;                             // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              AccumulatedValue;                              // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.DelayedNoise
// 0x001C
struct FDelayedNoise
{
	uint8_t                                            ChannelType;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              Loudness;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MaxLoudness;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x000C (0x000C) [0x0000000000000000]               
	float                                              NoiseTriggerTime;                              // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.MemoryData
// 0x00B8
struct FMemoryData
{
	struct FVector                                     SpawnLocation;                                 // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              LastPlayerSightTime;                           // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LastPlayerClearlyVisibleTime;                  // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastPlayerSightPos;                            // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastPlayerSeenVelocity;                        // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              LastKnownPosUpdateTime;                        // 0x002C (0x0004) [0x0000000000000000]               
	struct FVector                                     LastKnownPos;                                  // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              LastAlertTime;                                 // 0x003C (0x0004) [0x0000000000000000]               
	struct FVector                                     LastAlertLocation;                             // 0x0040 (0x000C) [0x0000000000000000]               
	float                                              LastAttackActiveTime;                          // 0x004C (0x0004) [0x0000000000000000]               
	float                                              LastDealtDamageTime;                           // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              LastChaseActiveTime;                           // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              LastDeathGripActiveTime;                       // 0x0058 (0x0004) [0x0000000000000000]               
	float                                              LastDisturbanceTime;                           // 0x005C (0x0004) [0x0000000000000000]               
	float                                              LastIgnoredDisturbanceTime;                    // 0x0060 (0x0004) [0x0000000000000000]               
	float                                              LastSeenByPlayerTime;                          // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              CurrentActivityStartedTime;                    // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              LastDarknessStateChangedTime;                  // 0x006C (0x0004) [0x0000000000000000]               
	float                                              LastPlayerSeenInSpecialLocationTime;           // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              LastFailedSqueezeAttackTime;                   // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              LastLostSightAfterChaseTime;                   // 0x0078 (0x0004) [0x0000000000000000]               
	float                                              LastStoppedChasingTime;                        // 0x007C (0x0004) [0x0000000000000000]               
	float                                              LastArrowAttackTime;                           // 0x0080 (0x0004) [0x0000000000000000]               
	float                                              LastPuntTime;                                  // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              LastConsideredDeathGripTime;                   // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              LastPlayerContactTime;                         // 0x008C (0x0004) [0x0000000000000000]               
	float                                              LastStartedIdleTime;                           // 0x0090 (0x0004) [0x0000000000000000]               
	float                                              LastTriedArrowShootTime;                       // 0x0094 (0x0004) [0x0000000000000000]               
	float                                              LastLKPUnreacheableTime;                       // 0x0098 (0x0004) [0x0000000000000000]               
	float                                              LastChaseDestUnreacheableTime;                 // 0x009C (0x0004) [0x0000000000000000]               
	float                                              LastUpdatedDestWithDisturbanceInfo;            // 0x00A0 (0x0004) [0x0000000000000000]               
	float                                              LastTargetNotOnNavmeshTime;                    // 0x00A4 (0x0004) [0x0000000000000000]               
	float                                              LastStartedFollowActorMoveTime;                // 0x00A8 (0x0004) [0x0000000000000000]               
	float                                              ChaseLastRepathedFromIdleTime;                 // 0x00AC (0x0004) [0x0000000000000000]               
	float                                              LastTriedPushingOutPlayerTime;                 // 0x00B0 (0x0004) [0x0000000000000000]               
	int32_t                                            NumRepeatPlayerPush;                           // 0x00B4 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.BotPairedWalkData
// 0x0014
struct FBotPairedWalkData
{
	class UOLSeqAct_AIGotoPoint*                       GotoPointSeqAct;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class UOLSeqAct_AIStartPatrol*                     PatrolSeqAct;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            PatrolRouteIndex;                              // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.InnerDemonData
// 0x000C
struct FInnerDemonData
{
	uint32_t                                           bCharging : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PlayerLookMeter;                               // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              ChargeStartedTime;                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.CrawlerData
// 0x0048
struct FCrawlerData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            State;                                         // 0x0004 (0x0001) [0x0000000000000000]               
	uint32_t                                           bFollowingUnseen : 1;                          // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     BackOffStartPos;                               // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     LastPlayerPos;                                 // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              GradualChaseStartedTime;                       // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              VisibleWaitStartedTime;                        // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              WaitStartedTime;                               // 0x002C (0x0004) [0x0000000000000000]               
	float                                              ClosingInStartedTime;                          // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              BackOffStartedTime;                            // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBackOffNoClearance : 1;                       // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ChaseStartedTime;                              // 0x003C (0x0004) [0x0000000000000000]               
	float                                              LastVisibilityTime;                            // 0x0040 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLastVisibilityResult : 1;                     // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLBot.ScriptedBehaviorData
// 0x0058
struct FScriptedBehaviorData
{
	uint8_t                                            ScriptedState;                                 // 0x0000 (0x0001) [0x0000000000000000]               
	uint32_t                                           bDisableCollision : 1;                         // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisablePhysics : 1;                           // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDisableRootMotion : 1;                        // 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              MoveSpeedOverride;                             // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           AmbiantLookingActive : 1;                      // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           AmbiantLookingOffside : 1;                     // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           AmbiantLookingExited : 1;                      // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           AmbiantLookingForcedActive : 1;                // 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              AmbiantLookingSmoothedTargetAngle;             // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           AmbiantAntiLookActive : 1;                     // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           AmbiantAntiLookWasActivated : 1;               // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           AmbiantAntiLookForcedActive : 1;               // 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           AmbiantAntiLookLeftSide : 1;                   // 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	uint8_t                                            WaitAndReactState;                             // 0x0018 (0x0001) [0x0000000000000000]               
	float                                              WaitAndReactLastReactionTime;                  // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            WaitAndReactBackToUnawareCount;                // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector                                     WaitAndReactDisturbanceLocation;               // 0x0024 (0x000C) [0x0000000000000000]               
	uint8_t                                            GuardState;                                    // 0x0030 (0x0001) [0x0000000000000000]               
	struct FVector                                     GuardOriginalPos;                              // 0x0034 (0x000C) [0x0000000000000000]               
	struct FRotator                                    GuardOriginalRot;                              // 0x0040 (0x000C) [0x0000000000000000]               
	float                                              GuardSmoothedTargetAngle;                      // 0x004C (0x0004) [0x0000000000000000]               
	class AActor*                                      ArrowTarget;                                   // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.ScriptedConfigData
// 0x0058
struct FScriptedConfigData
{
	uint32_t                                           bScriptedActionPendingResume : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UOLSeqAct_AIPlayAnim*                        ScriptedAnimSeqAct;                            // 0x0004 (0x0008) [0x0000000000000000]               
	class UOLSeqAct_AIAmbiantLooking*                  AmbiantLookingSeqAct;                          // 0x000C (0x0008) [0x0000000000000000]               
	class UOLSeqAct_AIAmbiantAntiLook*                 AmbiantAntiLookSeqAct;                         // 0x0014 (0x0008) [0x0000000000000000]               
	class UOLSeqAct_WaitAndReact*                      WaitAndReactSeqAct;                            // 0x001C (0x0008) [0x0000000000000000]               
	class USequenceAction*                             CommandSeqAct;                                 // 0x0024 (0x0008) [0x0000000000000000]               
	class UOLSeqAct_AIPlayerContact*                   PlayerContactSeqAct;                           // 0x002C (0x0008) [0x0000000000000000]               
	class UOLSeqAct_AIGuard*                           GuardSeqAct;                                   // 0x0034 (0x0008) [0x0000000000000000]               
	class UOLSeqAct_Arrow*                             ArrowSeqAct;                                   // 0x003C (0x0008) [0x0000000000000000]               
	uint32_t                                           bForcedChasedActive : 1;                       // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ForcedChaseEndTime;                            // 0x0048 (0x0004) [0x0000000000000000]               
	uint32_t                                           ForcedChaseSkipReaction : 1;                   // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanLoseSightAfterChasing : 1;                 // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	class AActor*                                      StageMark;                                     // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.InvestigationConfigData
// 0x000C
struct FInvestigationConfigData
{
	class UOLSeqAct_AIInvestigatePoint*                PendingInvestigationSeqAct;                    // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              MinResumeInvestigationTime;                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.PatrolConfigData
// 0x0084
struct FPatrolConfigData
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              SpeedOverride;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bGroupMove : 1;                                // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForced : 1;                                   // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	class ARoute*                                      PatrolRoute;                                   // 0x000C (0x0008) [0x0000000000000000]               
	int32_t                                            PatrolRouteIndex;                              // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bReversePatrolRoute : 1;                       // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRouteCompleted : 1;                           // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	class UOLSeqAct_AIStartPatrol*                     StartPatrolSeqAct;                             // 0x001C (0x0008) [0x0000000000000000]               
	class AOLWaypoint*                                 DestinationWaypoint;                           // 0x0024 (0x0008) [0x0000000000000000]               
	struct FVector                                     DestinationPoint;                              // 0x002C (0x000C) [0x0000000000000000]               
	uint32_t                                           bTurnToRotation : 1;                           // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPreciseDestination : 1;                       // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              DestinationHeading;                            // 0x003C (0x0004) [0x0000000000000000]               
	float                                              DestinationBuffer;                             // 0x0040 (0x0004) [0x0000000000000000]               
	class UOLSeqAct_AIGotoPoint*                       GotoPointSeqAct;                               // 0x0044 (0x0008) [0x0000000000000000]               
	class AActor*                                      MovingTarget;                                  // 0x004C (0x0008) [0x0000000000000000]               
	float                                              FollowDistance;                                // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              FollowBufferZone;                              // 0x0058 (0x0004) [0x0000000000000000]               
	class UOLSeqAct_AIFollowActor*                     FollowActorSeqAct;                             // 0x005C (0x0008) [0x0000000000000000]               
	class UOLSeqAct_AIGroupMove*                       GroupMoveSeqAct;                               // 0x0064 (0x0008) [0x0000000000000000]               
	class AOLAmbushMarker*                             SelectedAmbushMarker;                          // 0x006C (0x0008) [0x0000000000000000]               
	class UOLSeqAct_AIUnspawnAtLocation*               UnspawnAtLocSeqAct;                            // 0x0074 (0x0008) [0x0000000000000000]               
	class AActor*                                      SelectedUnspawnMarker;                         // 0x007C (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.PatrolData
// 0x0038
struct FPatrolData
{
	uint32_t                                           bAtWaypoint : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            WaypointActionIdx;                             // 0x0004 (0x0004) [0x0000000000000000]               
	struct FName                                       WaypointAnimName;                              // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bPlayingWaypointAnim : 1;                      // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLoopingWaypointAnim : 1;                      // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              WaypointWaitEndTime;                           // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bInFormation : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWaitingForUnspawnConditions : 1;              // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWaitForMoveAbilityCancellation : 1;           // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     DynamicTargetLastLocation;                     // 0x001C (0x000C) [0x0000000000000000]               
	float                                              DynamicTargetLastUpdateTime;                   // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              TargetSlowDown;                                // 0x002C (0x0004) [0x0000000000000000]               
	float                                              SlowDownFactor;                                // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              TimeLeftUntilNextRandomVO;                     // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.ChaseData
// 0x0040
struct FChaseData
{
	uint8_t                                            MoveDest;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            AttackStrategy;                                // 0x0001 (0x0001) [0x0000000000000000]               
	float                                              OutsideLeashStartTime;                         // 0x0004 (0x0004) [0x0000000000000000]               
	class AOLSqueezeMarker*                            TargetSqueeze;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              TimeLeftUntilNextRandomVO;                     // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPlayerUnreacheable : 1;                       // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPlayerNotOnNavmesh : 1;                       // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     PlayerUnreacheableLastLocation;                // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              PlayerUnreacheableLastTime;                    // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            PlayerUnreacheableLoops;                       // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              EnteredIdleStateTime;                          // 0x002C (0x0004) [0x0000000000000000]               
	uint32_t                                           bOtherDestUnreacheable : 1;                    // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOtherDestNotOnNavmesh : 1;                    // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              OtherDestUnreacheableLastTime;                 // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              OtherDestUnreacheableNextCheck;                // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           bToCrawlForCrouchedPlayer : 1;                 // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bToCrawlForFreeCrawlingPlayer : 1;             // 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct OLGame.OLBot.AttackStrategyData
// 0x0020
struct FAttackStrategyData
{
	uint8_t                                            Strategy;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	struct FVector                                     DestPoint;                                     // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     DestOffsetFromPlayer;                          // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              SpeedRatio;                                    // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBot.FaceOffData
// 0x000C
struct FFaceOffData
{
	float                                              ActivateTime;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              DeactivateTime;                                // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAttackOnRight : 1;                            // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSteppedRight : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSteppedLeft : 1;                              // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct OLGame.OLBot.DeathGripData
// 0x0030
struct FDeathGripData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bQuickTime : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            VariantType;                                   // 0x0004 (0x0001) [0x0000000000000000]               
	float                                              StruggleStartedTime;                           // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            CurrentPhase;                                  // 0x000C (0x0001) [0x0000000000000000]               
	float                                              CurrentKillRatio;                              // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AvgPlayerInput;                                // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              PlayerEscapeProgress;                          // 0x0018 (0x0004) [0x0000000000000000]               
	class UOLSeqAct_AIGuard*                           GuardSeqAct;                                   // 0x001C (0x0008) [0x0000000000000000]               
	class AActor*                                      GuardStageMark;                                // 0x0024 (0x0008) [0x0000000000000000]               
	uint32_t                                           bStartedNearSpawnPos : 1;                      // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLBot.AIEnvironment
// 0x001C
struct FAIEnvironment
{
	uint32_t                                           bInDarkness : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class AOLStairsMarker*                             StairsMarker;                                  // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              LastVisibleByPlayerUpdateTime;                 // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bVisibleByPlayer : 1;                          // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMonitorSeenByPlayer : 1;                      // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	class AOLBushesVolume*                             BushesVolume;                                  // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLDifficultyConfig.BoolByDifficulty
// 0x0004
struct FBoolByDifficulty
{
	uint32_t                                           DefaultValue : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bOverride_EasyValue : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           EasyValue : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bOverride_NormalValue : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           NormalValue : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bOverride_NormalPlusValue : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           NormalPlusValue : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bOverride_HardValue : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           HardValue : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           bOverride_HardPlusValue : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           HardPlusValue : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           bOverride_NightmareValue : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           NightmareValue : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
};

// ScriptStruct OLGame.OLGame.GameplayDataLocation
// 0x0038
struct FGameplayDataLocation
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EyeDirection;                                  // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Speed;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bNVOn : 1;                                     // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            LocomotionMode;                                // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            NumberOfBatteries;                             // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            NumberOfBandages;                              // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsBleeding : 1;                               // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Stamina;                                       // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              Health;                                        // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLGame.GameplayData
// 0x0044
struct FGameplayData
{
	uint8_t                                            DataType;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	struct FName                                       LevelName;                                     // 0x0004 (0x0008) [0x0000000000000000]               
	struct FName                                       CheckpointName;                                // 0x000C (0x0008) [0x0000000000000000]               
	int32_t                                            DataSequenceForCheckpoint;                     // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              TimeInCheckpoint;                              // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            NumberOfBatteries;                             // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            SubType;                                       // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector                                     SubLocation;                                   // 0x0024 (0x000C) [0x0000000000000000]               
	TArray<struct FGameplayDataLocation>               DataLocations;                                 // 0x0030 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           Written : 1;                                   // 0x0040 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct OLGame.OLGame.ChapterDefinition
// 0x000C
struct FChapterDefinition
{
	int32_t                                            SectionIndex;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       CPName;                                        // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLBugTracker.OLBugTrackerBinding
// 0x0018
struct FOLBugTrackerBinding
{
	struct FName                                       PCName;                                        // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	class FString                                      BugTrackerRealName;                            // 0x0008 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLCamcorderFilesHud.CamcorderRecord
// 0x007C
struct FCamcorderRecord
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsVideo : 1;                                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Order;                                         // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            CatOrder;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            Category;                                      // 0x0014 (0x0001) [0x0000000000000000]               
	class FString                                      VOSndPath;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bNoEmptyFile : 1;                              // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       RecordGroup;                                   // 0x002C (0x0008) [0x0000000000000000]               
	class UTexture*                                    StaticRecordedThumbnail;                       // 0x0034 (0x0008) [0x0000000000000000]               
	class UTexture*                                    StaticRecordedImage;                           // 0x003C (0x0008) [0x0000000000000000]               
	struct FName                                       StaticRecordedVideoFilename;                   // 0x0044 (0x0008) [0x0000000000000000]               
	class FString                                      StaticSndStartPath;                            // 0x004C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      StaticSndEndPath;                              // 0x005C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAkBank*                                     StaticSndRequiredBank;                         // 0x006C (0x0008) [0x0000000000000000]               
	float                                              FixedMovieDuration;                            // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              DelayBeforeVO;                                 // 0x0078 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLCamcorderFilesHud.CachedNamedTexture
// 0x0010
struct FCachedNamedTexture
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UTexture*                                    Texture;                                       // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLCamcorderFilesHud.CachedThumbnailData
// 0x0020
struct FCachedThumbnailData
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<uint8_t>                                    TextureData;                                   // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            SizeX;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            SizeY;                                         // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLCamcorderHud.CamcorderHudState
// 0x0030
struct FCamcorderHudState
{
	int32_t                                            ZoomFactor;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            CamcorderMode;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            BatteryLeft;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            RecStatucState;                                // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MainOpacityState;                              // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            SoundLevelL;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            SoundLevelR;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            SoundGroupStatus;                              // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            MicStatus;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            CircularBarStatus;                             // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            CircularTimeStatus;                            // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            ApertureState;                                 // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLCamcorderHud.CamcorderHudObjects
// 0x0070
struct FCamcorderHudObjects
{
	class UGFxObject*                                  ZoomTrackerMC;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  NVStatusMC;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  BatteryBarMC;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  RecStatucMC;                                   // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  StbyStatucMC;                                  // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  MainOpacity;                                   // 0x0028 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  RecordingTimeLabel;                            // 0x0030 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  SoundBarL;                                     // 0x0038 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  SoundBarR;                                     // 0x0040 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  SoundBarGroup;                                 // 0x0048 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  MicStatus;                                     // 0x0050 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  CircularBar;                                   // 0x0058 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  CircularTime;                                  // 0x0060 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Aperture;                                      // 0x0068 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLCheatManager.DebugTrajectoryPoint
// 0x0018
struct FDebugTrajectoryPoint
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Speed;                                         // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            PointType;                                     // 0x0010 (0x0001) [0x0000000000000000]               
	float                                              TimeStamp;                                     // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLCheatManager.DebugClearanceCheck
// 0x0028
struct FDebugClearanceCheck
{
	struct FVector                                     StartPos;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EndPos;                                        // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Width;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bNavMesh : 1;                                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPassed : 1;                                   // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              TimeStamp;                                     // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLCheatManager.DebugNoiseData
// 0x0010
struct FDebugNoiseData
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            NoiseType;                                     // 0x0004 (0x0001) [0x0000000000000000]               
	float                                              Loudness;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxChannelLoudness;                            // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLCheatManager.DebugSoundMeterData
// 0x0030
struct FDebugSoundMeterData
{
	uint32_t                                           bHasFL : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasFR : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bHasFC : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bHasBL : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bHasBR : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bHasBC : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bHasSL : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bHasSR : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bHasLFE : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	float                                              VolumeFL;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              VolumeFR;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              VolumeFC;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              VolumeBL;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              VolumeBR;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              VolumeBC;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              VolumeSL;                                      // 0x001C (0x0004) [0x0000000000000000]               
	float                                              VolumeSR;                                      // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              VolumeLFE;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              TotalVolumeLeft;                               // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              TotalVolumeRight;                              // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLCheatManager.KismetLogData
// 0x0020
struct FKismetLogData
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       LevelName;                                     // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            EventType;                                     // 0x000C (0x0001) [0x0000000000000000]               
	class FString                                      DebugMsg;                                      // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLCheatManager.LineCheckLogData
// 0x000C
struct FLineCheckLogData
{
	int32_t                                            FrameId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0004 (0x0001) [0x0000000000000000]               
	float                                              DurationMS;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLCheckpoint.DynamicDifficulty
// 0x0010
struct FDynamicDifficulty
{
	uint32_t                                           ResetDynamicDifficulty : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           ParTimeCanIncreaseDifficulty : 1;              // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              LowParTime;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HighParTime;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           ParTimeCanLowerDifficulty : 1;                 // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLCheckpointList.CheckpointRedirectItem
// 0x0010
struct FCheckpointRedirectItem
{
	struct FName                                       OldName;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       NewName;                                       // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLEngine.CheckpointTime
// 0x0010
struct FCheckpointTime
{
	int32_t                                            SecondsSinceMidnight;                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Day;                                           // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Month;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Year;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLEngine.SaveFileInfo
// 0x002C
struct FSaveFileInfo
{
	class FString                                      Filename;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       CheckpointName;                                // 0x0010 (0x0008) [0x0000000000000000]               
	struct FCheckpointTime                             Time;                                          // 0x0018 (0x0010) [0x0000000000000000]               
	int32_t                                            Difficulty;                                    // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLDoor.DoorShakeData
// 0x0040
struct FDoorShakeData
{
	float                                              Rate;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RateVariation;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Intensity;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IntensityVariation;                            // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TotalDuration;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AmplitudeYaw;                                  // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AmplitudeTrans;                                // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FrequencyYaw;                                  // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FrequencyTrans;                                // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ShakeDuration;                                 // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeExp;                                       // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bShakeCamera : 1;                              // 0x002C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bActive : 1;                                   // 0x002C (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	float                                              GlobalStartedTime;                             // 0x0030 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ShakeStartedTime;                              // 0x0034 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              NextShakeStartTime;                            // 0x0038 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              OriginalTranslationX;                          // 0x003C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct OLGame.OLDoor.DoorAttachmentData
// 0x0050
struct FDoorAttachmentData
{
	class AActor*                                      AttachedActor;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0x8];                               		// 0x0008 (0x0008) MISSED OFFSET
	struct FMatrix                                     RelativeTransform;                             // 0x0010 (0x0040) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLDoor.GameFlowDoorRule
// 0x0014
struct FGameFlowDoorRule
{
	uint8_t                                            Action;                                        // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Condition;                                     // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ControlName;                                   // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       RangeEndCheckpoint;                            // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLDoorData.DoorSoundEvents
// 0x0038
struct FDoorSoundEvents
{
	class UAkEvent*                                    SndLocked;                                     // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndPush;                                       // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndInstantOpen;                                // 0x0010 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndStartOpening;                               // 0x0018 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndClosing;                                    // 0x0020 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndSlowClose;                                  // 0x0028 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAkEvent*                                    SndBash;                                       // 0x0030 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OLGame.OLDoorData.DoorMeshDirData
// 0x0028
struct FDoorMeshDirData
{
	class UStaticMesh*                                 MainMesh;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               ForwardBreakingMesh;                           // 0x0008 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               ForwardBrokenMesh;                             // 0x0010 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               BackwardBreakingMesh;                          // 0x0018 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               BackwardBrokenMesh;                            // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLDoorData.DoorMeshTypeData
// 0x0068
struct FDoorMeshTypeData
{
	struct FDoorMeshDirData                            NormalData;                                    // 0x0000 (0x0028) [0x0000000000000000]               
	struct FDoorMeshDirData                            ReversedData;                                  // 0x0028 (0x0028) [0x0000000000000000]               
	TArray<class UMaterialInstance*>                   Materials;                                     // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            DoorMaterialForSound;                          // 0x0060 (0x0001) [0x0000000000000000]               
	float                                              OcclusionFactor;                               // 0x0064 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLFloatingObjectBase.BobbingData
// 0x0014
struct FBobbingData
{
	float                                              CycleStartTime;                                // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              CycleEndTime;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              OffsetZ;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Pitch;                                         // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Roll;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLFloatingObjectBase.BobbingConfigData
// 0x0020
struct FBobbingConfigData
{
	float                                              MinFrequency;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxFrequency;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinZ;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxZ;                                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinPitch;                                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxPitch;                                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinRoll;                                       // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRoll;                                       // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLFXManager.DamageColumn
// 0x0010
struct FDamageColumn
{
	float                                              CurrentAmount;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              DesiredAmount;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeLeft;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Angle;                                         // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLFXManager.BlurData
// 0x001C
struct FBlurData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWasActive : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              Amount;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              BlendInTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BlendOutTime;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Desaturation;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLFXManager.GenericPPSData
// 0x0030
struct FGenericPPSData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFrozen : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              StartedTime;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              CancelledTime;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              CancelBlendOutTime;                            // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasAdditiveFOV : 1;                           // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentAdditiveFOV;                            // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              AdditiveFOVWhenCancelled;                      // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasAnimatedBlur : 1;                          // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentAnimatedBlur;                           // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              AnimatedBlurWhenCancelled;                     // 0x0024 (0x0004) [0x0000000000000000]               
	class UOLSeqAct_PostProcessEffect*                 PPSSeqAct;                                     // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLFXManager.PPSParamAnim
// 0x0020
struct FPPSParamAnim
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       RTPCName;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDistributionFloatConstantCurve*             IntensityInterpCurve;                          // 0x0010 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              InitialValue;                                  // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ValueWhenCancelled;                            // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct OLGame.OLFXManager.PPSEffectConfig
// 0x004C
struct FPPSEffectConfig
{
	struct FName                                       PresetName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInstanceConstant*                   EffectMaterial;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       EffectName;                                    // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    StartAkEvent;                                  // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    StopAkEvent;                                   // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPPSParamAnim>                       ParamAnims;                                    // 0x0028 (0x0010) [0x0000000000580001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	class UDistributionFloatConstantCurve*             AdditiveFOVInterpCurve;                        // 0x0038 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bAnimateBlur : 1;                              // 0x0040 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UDistributionFloatConstantCurve*             BlurAmountInterpCurve;                         // 0x0044 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct OLGame.OLFXManager.RandomHaarpEffectConfig
// 0x0028
struct FRandomHaarpEffectConfig
{
	uint32_t                                           bValid : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MinDelay;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxDelay;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinIntensity;                                  // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxIntensity;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MinNumKeys;                                    // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxNumKeys;                                    // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinKeyDuration;                                // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxKeyDuration;                                // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OffKeyProbability;                             // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLFXManager.HaarpEffectData
// 0x0014
struct FHaarpEffectData
{
	uint32_t                                           bKismetDriven : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSystemicActive : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bEffectVisible : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bSchoolEffectScheduled : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              CurrentEffectIntensity;                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              KismetEffectIntensity;                         // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              EffectStartedTime;                             // 0x000C (0x0004) [0x0000000000000000]               
	float                                              NextEffectStartTime;                           // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLFXManager.RandomHaarpEffectKey
// 0x0008
struct FRandomHaarpEffectKey
{
	float                                              Intensity;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartTime;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLFXManager.InnerDemonEffectSensitiveActor
// 0x0028
struct FInnerDemonEffectSensitiveActor
{
	class UPrimitiveComponent*                         Component;                                     // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              Intensity;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x000C (0x000C) [0x0000000000000000]               
	float                                              ActivationRadius;                              // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     SrcActivationLocation;                         // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLGameplayItemPickup.GameFlowRulePickup
// 0x0014
struct FGameFlowRulePickup
{
	uint8_t                                            Action;                                        // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Condition;                                     // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ControlName;                                   // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       RangeEndCheckpoint;                            // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLGameStateList.OLGameState
// 0x0014
struct FOLGameState
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AutoActivateOnCheckpointReached;               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPersistAfterDeath : 1;                        // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bActivated : 1;                                // 0x0010 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
};

// ScriptStruct OLGame.OLHints.OLHintList
// 0x0018
struct FOLHintList
{
	struct FName                                       CheckpointName;                                // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	TArray<struct FName>                               HintTextIdList;                                // 0x0008 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLHUD.SubtitleData
// 0x0034
struct FSubtitleData
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AActor*                                      Speaker;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    SoundEvent;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	float                                              SubtitleScore;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              TimeFired;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              TimeShown;                                     // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              MaxLifetime;                                   // 0x002C (0x0004) [0x0000000000000000]               
	struct FColor                                      TextColor;                                     // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHUD.GenericMessage
// 0x0016
struct FGenericMessage
{
	class FString                                      MessageText;                                   // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              RemainingTime;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            MessagePriority;                               // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MessageType;                                   // 0x0015 (0x0001) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLHUD.SubtitleColorOverrideData
// 0x0014
struct FSubtitleColorOverrideData
{
	class FString                                      Prefix;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      Color;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLInnerDemonEffectActor.InnerDemonEffectsData
// 0x0028
struct FInnerDemonEffectsData
{
	uint32_t                                           bEmitterActive : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDeformActive : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bPPSActive : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDecalsActive : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bUpdateDecals : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              DeformationIntensity;                          // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              PPSIntensity;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              DeformApproachCoeffUp;                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DeformApproachCoeffDown;                       // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PPSApproachCoeffUp;                            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PPSApproachCoeffDown;                          // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DecalApproachCoeffUp;                          // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DecalApproachCoeffDown;                        // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DecalActivationRadius;                         // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLInteractiveSkeletalFoliageActor.FolliageCollider
// 0x002C
struct FFolliageCollider
{
	class AOLPawn*                                     Owner;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              Height;                                        // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           bContinuousPush : 1;                           // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLLantern.HingeData
// 0x0004
struct FHingeData
{
	float                                              RelativeAngle;                                 // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLLantern.HandleData
// 0x0018
struct FHandleData
{
	struct FVector                                     PrevLocation;                                  // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              PrevLinearVel;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              AngularVel;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              CurrentAngle;                                  // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLMainHud.MainHudState
// 0x0004
struct FMainHudState
{
	uint32_t                                           bDocumentNotificationIconVisible : 1;          // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRecordingNotificationIconVisible : 1;         // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCheckpointNotificationIconVisible : 1;        // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct OLGame.OLMainHud.MainHudObjects
// 0x0018
struct FMainHudObjects
{
	class UGFxObject*                                  NotificationIcons;                             // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  NotificationIcons2;                            // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  SavingMessage;                                 // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLMartaStreetVolume.VolumeConnection
// 0x0010
struct FVolumeConnection
{
	class AOLMartaStreetVolume*                        OtherVolume;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AOLBashableObject*                           ConditionalWall;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLNavigationHandle.MovePoint
// 0x001C
struct FMovePoint
{
	struct FVector                                     Destination;                                   // 0x0000 (0x000C) [0x0000000000000000]               
	TArray<struct FPointer>                            RelevantEdges;                                 // 0x000C (0x0010) [0x0000000000101000] (CPF_Native)  
};

// ScriptStruct OLGame.OLPlayerController.ObjectiveData
// 0x0024
struct FObjectiveData
{
	struct FName                                       CheckpointStart;                               // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       CheckpointEnd;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	struct FName                                       TextId;                                        // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       VoiceOverEventPath;                            // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bKeepAfterDeath : 1;                           // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLPlayerController.DigitalInputs
// 0x0004
struct FDigitalInputs
{
	uint32_t                                           bPerformedUseAction : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPressedUseButton : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bReleasedUseButton : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bPressedToggleCamcorder : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bPressedToggleNightVision : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bPressedZoomIn : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bPressedZoomOut : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bPressedJump : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bPressedReloadBatteries : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bReleasedReloadBatteries : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bPressedUseBandage : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bStartedActiveZoom : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bPressedPrototypeActionA : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bPressedPrototypeActionB : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bPressedPrototypeActionC : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bPressedPrototypeActionD : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bPressedPrototypeActionE : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bPressedToggleCrawl : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bPressedToggleRun : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           bPressedToggleMicrophone : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bPressedToggleInventory : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00100000] 
};

// ScriptStruct OLGame.OLTutorialManager.ContextualTutorialsData
// 0x0004
struct FContextualTutorialsData
{
	uint32_t                                           bBattery : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bClimbUp : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDocument : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bSpikyPlant : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bStaminaDepletion : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bStaminaDepleted : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bSwimmingStaminaDepletion : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bHidingInFoliageStand : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bHidingInFoliageCrouch : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bHidingInFoliageCrawl : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bPeekingFromBarrel : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bPeekingFromDoor : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bPeekingFromWardrobe : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bPeekingFromLedgeHang : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bPeekingFromUnderwater : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bBandagePickedUp : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bBatteryPickedUp : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bRecordingGathered : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bBandagePocket : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           bBatteryPocket : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bRecordingShown : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           bEasyDeathQTEShown : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bHidingUnderBed : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bReadingDocument : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bOpenDoorSlowlyPrompt : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bOpenWardrobeDoorSlowlyPrompt : 1;             // 0x0000 (0x0004) [0x0000000000000000] [0x02000000] 
};

// ScriptStruct OLGame.OLPlayerController.PersistentCheckpointData
// 0x0044
struct FPersistentCheckpointData
{
	class FString                                      TimeStamp;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DifficultyMode;                                // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TotalPlayTime;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bStartedFromChapter : 1;                       // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            EasiestDifficulty;                             // 0x001C (0x0004) [0x0000000000000000]               
	struct FContextualTutorialsData                    CompletedContextualTutorials;                  // 0x0020 (0x0004) [0x0000000000000000]               
	TArray<struct FName>                               CompletedRecordingMoments;                     // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               UnreadRecordingMoments;                        // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLWorld.DoorCheckpointData
// 0x0018
struct FDoorCheckpointData
{
	struct FGuid                                       ObjectGuid;                                    // 0x0000 (0x0010) [0x0000000000000000]               
	float                                              OpenRatio;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBrokenFwd : 1;                                // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBrokenBack : 1;                               // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bLocked : 1;                                   // 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct OLGame.OLWorld.WindowCheckpointData
// 0x0014
struct FWindowCheckpointData
{
	struct FGuid                                       ObjectGuid;                                    // 0x0000 (0x0010) [0x0000000000000000]               
	uint32_t                                           bPartiallyOpened : 1;                          // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOpened : 1;                                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bBroken : 1;                                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct OLGame.OLWorld.PushableCheckpointData
// 0x001C
struct FPushableCheckpointData
{
	struct FGuid                                       ObjectGuid;                                    // 0x0000 (0x0010) [0x0000000000000000]               
	struct FVector                                     Displacement;                                  // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLWorld.WorldStateData
// 0x0030
struct FWorldStateData
{
	TArray<struct FDoorCheckpointData>                 DoorStates;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FWindowCheckpointData>               WindowStates;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPushableCheckpointData>             PushableStates;                                // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLPlayerController.VolatileCheckpointData
// 0x008C
struct FVolatileCheckpointData
{
	int32_t                                            NumBatteries;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBandages;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              BatteryEnergy;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              RecordingTimeSeconds;                          // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bUsedHidingSpot : 1;                           // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReloadedBatteries : 1;                        // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            NumUsedBandages;                               // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              TotalTimeUnderwater;                           // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              MicrophoneUsedTime;                            // 0x001C (0x0004) [0x0000000000000000]               
	float                                              TotalCrawlDistance;                            // 0x0020 (0x0004) [0x0000000000000000]               
	TArray<struct FVector>                             CollectedBatteries;                            // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             CollectedBandages;                             // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               ActivatedGameState;                            // 0x0044 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SegmentEndGameTime;                            // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              GameTimeTotalSeconds;                          // 0x0058 (0x0004) [0x0000000000000000]               
	struct FWorldStateData                             WorldState;                                    // 0x005C (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLPlayerController.CheckpointRecord
// 0x00D4
struct AOLPlayerController_FCheckpointRecord
{
	int32_t                                            CheckpointRecordVersion;                       // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPersistentCheckpointData                   PersistentData;                                // 0x0004 (0x0044) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVolatileCheckpointData                     VolatileData;                                  // 0x0048 (0x008C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLPlayerController.StruggleData
// 0x00CC
struct FStruggleData
{
	class UOLSeqAct_Struggle*                          StruggleAct;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class ASkeletalMeshActor*                          Enemy;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     RefLocation;                                   // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     RefDirection;                                  // 0x001C (0x000C) [0x0000000000000000]               
	struct FStruggleConfig                             Config;                                        // 0x0028 (0x007C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOLAnimEnemyStruggle*                        EnemyAnimNode;                                 // 0x00A4 (0x0008) [0x0000000000000000]               
	uint32_t                                           bActiveStrugging : 1;                          // 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSucceeded : 1;                                // 0x00AC (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CycleStartedTime;                              // 0x00B0 (0x0004) [0x0000000000000000]               
	float                                              NbShakes;                                      // 0x00B4 (0x0004) [0x0000000000000000]               
	uint8_t                                            CurrentInputDirection;                         // 0x00B8 (0x0001) [0x0000000000000000]               
	float                                              TotalDeltas;                                   // 0x00BC (0x0004) [0x0000000000000000]               
	float                                              LastMouseX;                                    // 0x00C0 (0x0004) [0x0000000000000000]               
	float                                              SmoothedDirection;                             // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              SmoothedAnimPlayRate;                          // 0x00C8 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLPlayerController.TouchZoomData
// 0x0014
struct FTouchZoomData
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SmoothedPosition;                              // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            CurrentDirection;                              // 0x0008 (0x0001) [0x0000000000000000]               
	float                                              LastPosition;                                  // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LastInputTime;                                 // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLPlayerController.CamcorderShot
// 0x0018
struct FCamcorderShot
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UTexture2D*                                  ThumbnailImage;                                // 0x0008 (0x0008) [0x0000000000000000]               
	class UTexture*                                    LargeImage;                                    // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLPushableObject.PushablePhysicsConfig
// 0x000C
struct FPushablePhysicsConfig
{
	uint32_t                                           bEnableGravity : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              TrackFriction;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxPhysicsSpeed;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLPushableObject.GameFlowPushableRule
// 0x0014
struct FGameFlowPushableRule
{
	uint8_t                                            Action;                                        // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Condition;                                     // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ControlName;                                   // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       RangeEndCheckpoint;                            // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLPushableObject.PushableAttachmentData
// 0x006C
struct FPushableAttachmentData
{
	class AActor*                                      AttachedActor;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0x8];                               		// 0x0008 (0x0008) MISSED OFFSET
	struct FMatrix                                     RelativeTransform;                             // 0x0010 (0x0040) [0x0000000000000000]               
	struct FVector                                     InitialPosition;                               // 0x0050 (0x000C) [0x0000000000000000]               
	uint32_t                                           bRestrictMovement : 1;                         // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     RestrictedAxis;                                // 0x0060 (0x000C) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLPushableObject.AlignmentData
// 0x0010
struct FAlignmentData
{
	struct FVector                                     Offset;                                        // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              Length;                                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLSeqAct_AIPlayerContact.PlayerContactInfo
// 0x0020
struct FPlayerContactInfo
{
	struct FName                                       AnimFacing;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimBack;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimBlendInTime;                               // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimBlendOutTime;                              // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimPositionningBlendTime;                     // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bDisableCollision : 1;                         // 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDisablePhysics : 1;                           // 0x001C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bDisableRootMotion : 1;                        // 0x001C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct OLGame.OLSeqAct_ConditionalAIConfig.ConditionalConfigData
// 0x12B8
struct FConditionalConfigData
{
	TArray<class UOLBotCondition*>                     Conditions;                                    // 0x0000 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	struct FAIConfigData                               ConfigOverrides;                               // 0x0010 (0x12A4) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStayActivated : 1;                            // 0x12B4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct OLGame.OLSeqAct_Dialogue.DialogueLine
// 0x001C
struct FDialogueLine
{
	uint8_t                                            Speaker;                                       // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    Event;                                         // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           WaitUntilFinished : 1;                         // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              StartDelay;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Delay;                                         // 0x0014 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PlayingID;                                     // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct OLGame.OLSeqAct_Dialogue.PlayingDialogue
// 0x000C
struct FPlayingDialogue
{
	class AActor*                                      Speaker;                                       // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PlayingID;                                     // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct OLGame.OLSeqAct_FishRecycler.FloaterData
// 0x000C
struct FFloaterData
{
	class AOLFloatingObjectBase*                       Floater;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSinking : 1;                                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLSeqAct_FlyingFish.RainingAnimalData
// 0x0010
struct FRainingAnimalData
{
	class ASkeletalMeshActor*                          Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TriggerDelay;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bTriggered : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLSeqAct_HaarpEffect.HaarpEffect_IntensityValue
// 0x0008
struct FHaarpEffect_IntensityValue
{
	float                                              Intensity;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLSeqAct_InvisibleFootsteps.InvisibleFootstepData
// 0x0010
struct FInvisibleFootstepData
{
	class UDecalComponent*                             DecalComp;                                     // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              SpawnedTime;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              SimulatedDepthPct;                             // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLSeqAct_MartaStreet.MartaStreetState
// 0x004C
struct FMartaStreetState
{
	uint32_t                                           bSpawned : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUnspawnReady : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUnspawnSemiReady : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bRespawnReady : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            PressureCount;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBashedWalls;                                // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBashingWalls : 1;                             // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartedTime;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              LastUnspawnedTime;                             // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              LastRespawnedTime;                             // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              PressureAppliedTime;                           // 0x001C (0x0004) [0x0000000000000000]               
	float                                              LastBashTime;                                  // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastUnspawnedLocation;                         // 0x0024 (0x000C) [0x0000000000000000]               
	class AOLMartaStreetVolume*                        LastUnspawnedMartaVolume;                      // 0x0030 (0x0008) [0x0000000000000000]               
	class AOLMartaStreetVolume*                        PlayerVol;                                     // 0x0038 (0x0008) [0x0000000000000000]               
	class AOLMartaStreetVolume*                        MartaVol;                                      // 0x0040 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDisconnectedVolumes : 1;                      // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OLGame.OLSeqAct_MartaStreet.MartaStreetRespawnConditions
// 0x0018
struct FMartaStreetRespawnConditions
{
	float                                              MinDelayAfterUnspawn;                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VolumeHeatDuration;                            // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class UOLBotCondition*>                     OtherConditions;                               // 0x0008 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct OLGame.OLSeqAct_MartaStreet.MartaStreetUnspawnConditions
// 0x0020
struct FMartaStreetUnspawnConditions
{
	float                                              MinDelayAfterSpawn;                            // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinDelayAfterPressure;                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinDelayAfterLastSeen;                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinTimeInInvestigate;                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class UOLBotCondition*>                     OtherConditions;                               // 0x0010 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct OLGame.OLSeqAct_OutOfSight.PendingOutOfSightOp
// 0x000C
struct FPendingOutOfSightOp
{
	uint8_t                                            Op;                                            // 0x0000 (0x0001) [0x0000000000000000]               
	class AActor*                                      Target;                                        // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLSeqAct_SkelMeshAnimControl.SkelMeshAnimParams
// 0x0018
struct FSkelMeshAnimParams
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bLooping : 1;                                  // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              BlendInTime;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPlayNextWhenDone : 1;                         // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct OLGame.OLThrowable.ThrowableSettings
// 0x004C
struct FThrowableSettings
{
	float                                              MeshScale;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Speed;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bNoPlayerHit : 1;                              // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bGuaranteedPlayerHit : 1;                      // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bFollowTarget : 1;                             // 0x0008 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              MinDistForFollowTarget;                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinRollVelocity;                               // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRollVelocity;                               // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinPitchVelocity;                              // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxPitchVelocity;                              // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinYawVelocity;                                // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxYawVelocity;                                // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HitDamage;                                     // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableRigidBody : 1;                          // 0x002C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UAkEvent*                                    WaterSplashSound;                              // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableRandomInaccuracy : 1;                   // 0x0038 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              DistanceForAccurate;                           // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistanceForMaxInaccuracy;                      // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxInaccuracy;                                 // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VelocityPredictionFactor;                      // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLSlidingSlopeMarker.GameFlowRuleSlidingSlope
// 0x0014
struct FGameFlowRuleSlidingSlope
{
	uint8_t                                            Action;                                        // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Condition;                                     // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ControlName;                                   // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       RangeEndCheckpoint;                            // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLSoundEmitter.SoundEnvVolumeData
// 0x001C
struct FSoundEnvVolumeData
{
	class AOLSoundEnvironmentVolume*                   SoundEnvVolume;                                // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bActive : 1;                                   // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFadeFromBorder : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     BorderPoint;                                   // 0x000C (0x000C) [0x0000000000000000]               
	float                                              LastActiveEnvContrib;                          // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLSoundEmitter.AuxBusInfo
// 0x0014
struct FAuxBusInfo
{
	class FString                                      BusName;                                       // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              BusValue;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLSoundEmitter.EmitterDebugInfo
// 0x0048
struct FEmitterDebugInfo
{
	class FString                                      ReverbA;                                       // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              ReverbAContrib;                                // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      ReverbB;                                       // 0x0014 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              ReverbBContrib;                                // 0x0024 (0x0004) [0x0000000000000000]               
	struct FVector                                     VirtualizationPivot;                           // 0x0028 (0x000C) [0x0000000000000000]               
	float                                              DirectDistToListener;                          // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              VirtualizedDist;                               // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              MicrophoneOcclusionMultiplier;                 // 0x003C (0x0004) [0x0000000000000000]               
	float                                              MicrophoneObstructionMultiplier;               // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              MicrophoneDistanceFactor;                      // 0x0044 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLSoundEmitter.VirtualizationNode
// 0x0014
struct FVirtualizationNode
{
	class UOLSoundConnectorComponent*                  Connector;                                     // 0x0000 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	float                                              VirtualizableDistance;                         // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              DistToListener;                                // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            Level;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLSoundEnvironmentManager.MultiPositionGroup
// 0x0020
struct FMultiPositionGroup
{
	class FString                                      EventName;                                     // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	TArray<class UOLSoundEmitter*>                     Members;                                       // 0x0010 (0x0010) [0x0000000000101000] (CPF_Native)  
};

// ScriptStruct OLGame.OLSoundEnvironmentManager.HQOcclusionSettingsData
// 0x0028
struct FHQOcclusionSettingsData
{
	float                                              MinAbsCollWidth;                               // 0x0000 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxAbsCollWidth;                               // 0x0004 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MinRelCollWidth;                               // 0x0008 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxRelCollWidth;                               // 0x000C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MinAbsDistToSrc;                               // 0x0010 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxAbsDistToSrc;                               // 0x0014 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MinRelDistToSrc;                               // 0x0018 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxRelDistToSrc;                               // 0x001C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ThinMaxOcclusion;                              // 0x0020 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MinOcclusion;                                  // 0x0024 (0x0004) [0x0000000000004000] (CPF_Config)  
};

// ScriptStruct OLGame.OLThrowable.ThrowablePreciseTravelData
// 0x0034
struct FThrowablePreciseTravelData
{
	float                                              TotalAirDuration;                              // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              InitialVelZ;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     StartPos;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     TargetPos;                                     // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     Inaccuracy;                                    // 0x0020 (0x000C) [0x0000000000000000]               
	class AActor*                                      TargetActor;                                   // 0x002C (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLUberPostProcessEffect.EyeAdaptationSettings
// 0x0014
struct FEyeAdaptationSettings
{
	float                                              AdaptationSpeedDown;                           // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              AdaptationSpeedUp;                             // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              ManualExposure;                                // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              AdaptationMin;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              AdaptationMax;                                 // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLUIFrontEnd.ViewInfo
// 0x0028
struct FViewInfo
{
	struct FName                                       ViewName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      SWFName;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               DependantViews;                                // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLUIFrontEnd_Options.OptionInfo
// 0x003C
struct FOptionInfo
{
	uint32_t                                           bInProfile : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ProfileSettingId;                              // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            NonProfileId;                                  // 0x0008 (0x0001) [0x0000000000000000]               
	struct FName                                       SettingDescriptionTextId;                      // 0x000C (0x0008) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0014 (0x0001) [0x0000000000000000]               
	uint32_t                                           bUsesRawValue : 1;                             // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Slider_Minimum;                                // 0x001C (0x0004) [0x0000000000000000]               
	float                                              Slider_Maximum;                                // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentValueInt;                               // 0x0024 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              CurrentValueFloat;                             // 0x0028 (0x0004) [0x0000000000002000] (CPF_Transient)
	class FString                                      CurrentValueString;                            // 0x002C (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLVoiceManager.VOLine
// 0x0038
struct FVOLine
{
	class UAkEvent*                                    Line;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       BoneName;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              TimeFired;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              ExpirationTime;                                // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              EndOfLineBuffer;                               // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            PlayingID;                                     // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bSkipForPaused : 1;                            // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            CallbackFlags;                                 // 0x0024 (0x0004) [0x0000000000000000]               
	struct FPointer                                    CallbackFunction;                              // 0x0028 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    CallbackCookie;                                // 0x0030 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct OLGame.OLVoiceManager.LineQueue
// 0x001C
struct FLineQueue
{
	class AActor*                                      Talker;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FVOLine>                             Lines;                                         // 0x0008 (0x0010) [0x0000000000101000] (CPF_Native)  
	uint32_t                                           IsPlaying : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsWaiting : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           CancelWait : 1;                                // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct OLGame.OLVoiceManager.QueueTimer
// 0x000C
struct FQueueTimer
{
	class AActor*                                      QueueActor;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TimeRemaining;                                 // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLVoiceManager.EndOfEventInfo
// 0x000C
struct FEndOfEventInfo
{
	class AActor*                                      QueueActor;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            PlayingID;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLVoiceManager.MarkerInfo
// 0x0018
struct FMarkerInfo
{
	class AActor*                                      QueueActor;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      MarkerText;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLVoiceManager.PlayedVOInfo
// 0x0014
struct FPlayedVOInfo
{
	class FString                                      EventName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastTimePlayed;                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLVoiceManager.VOEventData
// 0x0040
struct FVOEventData
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class AOLBot*                                      Bot;                                           // 0x0004 (0x0008) [0x0000000000000000]               
	struct FName                                       BotName;                                       // 0x000C (0x0008) [0x0000000000000000]               
	uint8_t                                            VOContext;                                     // 0x0014 (0x0001) [0x0000000000000000]               
	int32_t                                            ResultType;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bSkipBecauseInUse : 1;                         // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSkippedAlreadyActive : 1;                     // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSkippedExpired : 1;                           // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	class FString                                      AkEventName;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Subtitle;                                      // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OLGame.OLVoiceManager.DialogueData
// 0x0010
struct FDialogueData
{
	class UOLSeqAct_Dialogue*                          Dialog;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UOLVoiceManager*                             Manager;                                       // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OLGame.OLWaypoint.WaypointAction
// 0x0034
struct FWaypointAction
{
	float                                              Probability;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class UOLBotCondition*>                     Conditions;                                    // 0x0004 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	float                                              WaitTime;                                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimToPlay;                                    // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bLoopAnimation : 1;                            // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bTurnToRotation : 1;                           // 0x0020 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bAlignAnimToWaypoint : 1;                      // 0x0020 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	class AActor*                                      FocusActor;                                    // 0x0024 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              FocusInfluenceDist;                            // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SlowDownFactor;                                // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct OLGame.OLWindow.GameFlowWindowRule
// 0x0014
struct FGameFlowWindowRule
{
	uint8_t                                            Action;                                        // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Condition;                                     // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ControlName;                                   // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       RangeEndCheckpoint;                            // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
