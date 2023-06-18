/*
#############################################################################################
# Outlast2 (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: AkAudio_classes.hpp
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

// Enum AkAudio.InterpTrackAkEvent.EPlayingDirectionConditional
enum class EPlayingDirectionConditional : uint8_t
{
	EPDC_BothSide                                      = 0,
	EPDC_Forward                                       = 1,
	EPDC_Backward                                      = 2,
	EPDC_END                                           = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0008 OR 0x00AC (0x00AC - 0x00A4)
// 8 OR 172 (172 - 164)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                  // 0x00A4 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAmbientSound
// 0x000C OR 0x025C (0x025C - 0x0250)
// 12 OR 604 (604 - 592)
class AAkAmbientSound : public AKeypoint
{
public:
	uint32_t                                           bAutoPlay : 1;                                 // 0x0250 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bStopPending : 1;                              // 0x0250 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           StopWhenOwnerIsDestroyed : 1;                  // 0x0250 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bIsPlaying : 1;                                // 0x0250 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	class UAkEvent*                                    PlayEvent;                                     // 0x0254 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAudioDevice
// 0x0038 OR 0x00A8 (0x00A8 - 0x0070)
// 56 OR 168 (168 - 112)
class UAkAudioDevice : public USubsystem
{
public:
	uint8_t                                           UnknownData00[0x38];                           // 0x0070 (0x0038) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAudioDevice");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkComponent
// 0x0017 OR 0x00A4 (0x00A4 - 0x008D)
// 23 OR 164 (164 - 141)
class UAkComponent : public UActorComponent
{
public:
	struct FName                                       BoneName;                                      // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    AutoPlayEvent;                                 // 0x0098 (0x0008) [0x0000000000000000]               
	uint32_t                                           bStopWhenOwnerDestroyed : 1;                   // 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkComponent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.Interface_AkEventHandler
// 0x0000 OR 0x0068 (0x0068 - 0x0068)
// 0 OR 104 (104 - 104)
class UInterface_AkEventHandler : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.Interface_AkEventHandler");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackAkEvent
// 0x001C OR 0x00E4 (0x00E4 - 0x00C8)
// 28 OR 228 (228 - 200)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	struct FName                                       BoneName;                                      // 0x00C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	EPlayingDirectionConditional                       ConditionalSide;                               // 0x00D0 (0x0001) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FAkEventTrackKey>                    AkEvents;                                      // 0x00D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackAkRTPC
// 0x0010 OR 0x00F0 (0x00F0 - 0x00E0)
// 16 OR 240 (240 - 224)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	class FString                                      Param;                                         // 0x00E0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkRTPC");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 OR 0x006C (0x006C - 0x0068)
// 4 OR 108 (108 - 104)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                            // 0x0068 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 OR 0x0068 (0x0068 - 0x0068)
// 0 OR 104 (104 - 104)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkRTPC");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 OR 0x0158 (0x0158 - 0x0158)
// 0 OR 344 (344 - 344)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkClearBanks");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkLoadBank
// 0x0010 OR 0x0184 (0x0184 - 0x0174)
// 16 OR 388 (388 - 372)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	uint32_t                                           Async : 1;                                     // 0x0174 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bWaitingCallback : 1;                          // 0x0174 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UAkBank*                                     Bank;                                          // 0x0178 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Signal;                                        // 0x0180 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkLoadBank");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkPostEvent
// 0x0018 OR 0x018C (0x018C - 0x0174)
// 24 OR 396 (396 - 372)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	struct FName                                       BoneName;                                      // 0x0174 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIgnoreVOSystem : 1;                           // 0x017C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            Signal;                                        // 0x0180 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UAkEvent*                                    Event;                                         // 0x0184 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkPostEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkPostTrigger
// 0x0018 OR 0x0170 (0x0170 - 0x0158)
// 24 OR 368 (368 - 344)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FName                                       BoneName;                                      // 0x0158 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      Trigger;                                       // 0x0160 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkPostTrigger");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0018 OR 0x018C (0x018C - 0x0174)
// 24 OR 396 (396 - 372)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	class FString                                      Param;                                         // 0x0174 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              Value;                                         // 0x0184 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           Running : 1;                                   // 0x0188 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetRTPCValue");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetState
// 0x0020 OR 0x0178 (0x0178 - 0x0158)
// 32 OR 376 (376 - 344)
class USeqAct_AkSetState : public USequenceAction
{
public:
	class FString                                      StateGroup;                                    // 0x0158 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      State;                                         // 0x0168 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetState");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0020 OR 0x0178 (0x0178 - 0x0158)
// 32 OR 376 (376 - 344)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	class FString                                      SwitchGroup;                                   // 0x0158 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Switch;                                        // 0x0168 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetSwitch");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 OR 0x0158 (0x0158 - 0x0158)
// 0 OR 344 (344 - 344)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkStartAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 OR 0x0158 (0x0158 - 0x0158)
// 0 OR 344 (344 - 344)
class USeqAct_AkStopAll : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkStopAll");
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
