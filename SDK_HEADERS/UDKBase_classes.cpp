/*
#############################################################################################
# Outlast2 (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: UDKBase_classes.cpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function UDKBase.MobileHUDExt.FlashSticks
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileHUDExt::FlashSticks()
{
	static UFunction* uFnFlashSticks = nullptr;

	if (!uFnFlashSticks)
	{
		uFnFlashSticks = UFunction::FindFunction("Function UDKBase.MobileHUDExt.FlashSticks");
	}

	AMobileHUDExt_execFlashSticks_Params FlashSticks_Params;
	memset(&FlashSticks_Params, 0, sizeof(FlashSticks_Params));

	this->ProcessEvent(uFnFlashSticks, &FlashSticks_Params, nullptr);
};

// Function UDKBase.MobileHUDExt.DrawMobileZone_Joystick
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUDExt::DrawMobileZone_Joystick(class UMobileInputZone* Zone)
{
	static UFunction* uFnDrawMobileZone_Joystick = nullptr;

	if (!uFnDrawMobileZone_Joystick)
	{
		uFnDrawMobileZone_Joystick = UFunction::FindFunction("Function UDKBase.MobileHUDExt.DrawMobileZone_Joystick");
	}

	AMobileHUDExt_execDrawMobileZone_Joystick_Params DrawMobileZone_Joystick_Params;
	memset(&DrawMobileZone_Joystick_Params, 0, sizeof(DrawMobileZone_Joystick_Params));
	memcpy_s(&DrawMobileZone_Joystick_Params.Zone, sizeof(DrawMobileZone_Joystick_Params.Zone), &Zone, sizeof(Zone));

	this->ProcessEvent(uFnDrawMobileZone_Joystick, &DrawMobileZone_Joystick_Params, nullptr);
};

// Function UDKBase.MobileHUDExt.DrawMobileZone_Slider
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUDExt::DrawMobileZone_Slider(class UMobileInputZone* Zone)
{
	static UFunction* uFnDrawMobileZone_Slider = nullptr;

	if (!uFnDrawMobileZone_Slider)
	{
		uFnDrawMobileZone_Slider = UFunction::FindFunction("Function UDKBase.MobileHUDExt.DrawMobileZone_Slider");
	}

	AMobileHUDExt_execDrawMobileZone_Slider_Params DrawMobileZone_Slider_Params;
	memset(&DrawMobileZone_Slider_Params, 0, sizeof(DrawMobileZone_Slider_Params));
	memcpy_s(&DrawMobileZone_Slider_Params.Zone, sizeof(DrawMobileZone_Slider_Params.Zone), &Zone, sizeof(Zone));

	this->ProcessEvent(uFnDrawMobileZone_Slider, &DrawMobileZone_Slider_Params, nullptr);
};

// Function UDKBase.MobileHUDExt.PostRender
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileHUDExt::PostRender()
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function UDKBase.MobileHUDExt.PostRender");
	}

	AMobileHUDExt_execPostRender_Params PostRender_Params;
	memset(&PostRender_Params, 0, sizeof(PostRender_Params));

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function UDKBase.MobileHUDExt.ShowMobileHud
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AMobileHUDExt::ShowMobileHud()
{
	static UFunction* uFnShowMobileHud = nullptr;

	if (!uFnShowMobileHud)
	{
		uFnShowMobileHud = UFunction::FindFunction("Function UDKBase.MobileHUDExt.ShowMobileHud");
	}

	AMobileHUDExt_execShowMobileHud_Params ShowMobileHud_Params;
	memset(&ShowMobileHud_Params, 0, sizeof(ShowMobileHud_Params));

	this->ProcessEvent(uFnShowMobileHud, &ShowMobileHud_Params, nullptr);

	return ShowMobileHud_Params.ReturnValue;
};

// Function UDKBase.MobileHUDExt.ConditionallyDrawTapToMoveEffect
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileHUDExt::ConditionallyDrawTapToMoveEffect()
{
	static UFunction* uFnConditionallyDrawTapToMoveEffect = nullptr;

	if (!uFnConditionallyDrawTapToMoveEffect)
	{
		uFnConditionallyDrawTapToMoveEffect = UFunction::FindFunction("Function UDKBase.MobileHUDExt.ConditionallyDrawTapToMoveEffect");
	}

	AMobileHUDExt_execConditionallyDrawTapToMoveEffect_Params ConditionallyDrawTapToMoveEffect_Params;
	memset(&ConditionallyDrawTapToMoveEffect_Params, 0, sizeof(ConditionallyDrawTapToMoveEffect_Params));

	this->ProcessEvent(uFnConditionallyDrawTapToMoveEffect, &ConditionallyDrawTapToMoveEffect_Params, nullptr);
};

// Function UDKBase.MobileHUDExt.StartTapToMoveEffect
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void AMobileHUDExt::StartTapToMoveEffect(float X, float Y)
{
	static UFunction* uFnStartTapToMoveEffect = nullptr;

	if (!uFnStartTapToMoveEffect)
	{
		uFnStartTapToMoveEffect = UFunction::FindFunction("Function UDKBase.MobileHUDExt.StartTapToMoveEffect");
	}

	AMobileHUDExt_execStartTapToMoveEffect_Params StartTapToMoveEffect_Params;
	memset(&StartTapToMoveEffect_Params, 0, sizeof(StartTapToMoveEffect_Params));
	memcpy_s(&StartTapToMoveEffect_Params.X, sizeof(StartTapToMoveEffect_Params.X), &X, sizeof(X));
	memcpy_s(&StartTapToMoveEffect_Params.Y, sizeof(StartTapToMoveEffect_Params.Y), &Y, sizeof(Y));

	this->ProcessEvent(uFnStartTapToMoveEffect, &StartTapToMoveEffect_Params, nullptr);
};

// Function UDKBase.MobileHUDExt.UpdateBenchmarkInformation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileHUDExt::UpdateBenchmarkInformation()
{
	static UFunction* uFnUpdateBenchmarkInformation = nullptr;

	if (!uFnUpdateBenchmarkInformation)
	{
		uFnUpdateBenchmarkInformation = UFunction::FindFunction("Function UDKBase.MobileHUDExt.UpdateBenchmarkInformation");
	}

	AMobileHUDExt_execUpdateBenchmarkInformation_Params UpdateBenchmarkInformation_Params;
	memset(&UpdateBenchmarkInformation_Params, 0, sizeof(UpdateBenchmarkInformation_Params));

	uFnUpdateBenchmarkInformation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateBenchmarkInformation, &UpdateBenchmarkInformation_Params, nullptr);
	uFnUpdateBenchmarkInformation->FunctionFlags |= 0x400;
};

// Function UDKBase.SimpleGame.SetGameType
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MapName                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Options                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Portal                         (CPF_Parm | CPF_NeedCtorLink)

class UClass* ASimpleGame::eventSetGameType(class FString MapName, class FString Options, class FString Portal)
{
	static UFunction* uFnSetGameType = nullptr;

	if (!uFnSetGameType)
	{
		uFnSetGameType = UFunction::FindFunction("Function UDKBase.SimpleGame.SetGameType");
	}

	ASimpleGame_eventSetGameType_Params SetGameType_Params;
	memset(&SetGameType_Params, 0, sizeof(SetGameType_Params));
	memcpy_s(&SetGameType_Params.MapName, sizeof(SetGameType_Params.MapName), &MapName, sizeof(MapName));
	memcpy_s(&SetGameType_Params.Options, sizeof(SetGameType_Params.Options), &Options, sizeof(Options));
	memcpy_s(&SetGameType_Params.Portal, sizeof(SetGameType_Params.Portal), &Portal, sizeof(Portal));

	ASimpleGame::StaticClass()->ProcessEvent(uFnSetGameType, &SetGameType_Params, nullptr);

	return SetGameType_Params.ReturnValue;
};

// Function UDKBase.SimpleGame.StripPlayOnPrefix
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  MapName                        (CPF_Parm | CPF_NeedCtorLink)

class FString ASimpleGame::StripPlayOnPrefix(class FString MapName)
{
	static UFunction* uFnStripPlayOnPrefix = nullptr;

	if (!uFnStripPlayOnPrefix)
	{
		uFnStripPlayOnPrefix = UFunction::FindFunction("Function UDKBase.SimpleGame.StripPlayOnPrefix");
	}

	ASimpleGame_execStripPlayOnPrefix_Params StripPlayOnPrefix_Params;
	memset(&StripPlayOnPrefix_Params, 0, sizeof(StripPlayOnPrefix_Params));
	memcpy_s(&StripPlayOnPrefix_Params.MapName, sizeof(StripPlayOnPrefix_Params.MapName), &MapName, sizeof(MapName));

	ASimpleGame::StaticClass()->ProcessEvent(uFnStripPlayOnPrefix, &StripPlayOnPrefix_Params, nullptr);

	return StripPlayOnPrefix_Params.ReturnValue;
};

// Function UDKBase.UDKBot.DelayedLeaveVehicle
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKBot::eventDelayedLeaveVehicle()
{
	static UFunction* uFnDelayedLeaveVehicle = nullptr;

	if (!uFnDelayedLeaveVehicle)
	{
		uFnDelayedLeaveVehicle = UFunction::FindFunction("Function UDKBase.UDKBot.DelayedLeaveVehicle");
	}

	AUDKBot_eventDelayedLeaveVehicle_Params DelayedLeaveVehicle_Params;
	memset(&DelayedLeaveVehicle_Params, 0, sizeof(DelayedLeaveVehicle_Params));

	this->ProcessEvent(uFnDelayedLeaveVehicle, &DelayedLeaveVehicle_Params, nullptr);
};

// Function UDKBase.UDKBot.DelayedWarning
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKBot::eventDelayedWarning()
{
	static UFunction* uFnDelayedWarning = nullptr;

	if (!uFnDelayedWarning)
	{
		uFnDelayedWarning = UFunction::FindFunction("Function UDKBase.UDKBot.DelayedWarning");
	}

	AUDKBot_eventDelayedWarning_Params DelayedWarning_Params;
	memset(&DelayedWarning_Params, 0, sizeof(DelayedWarning_Params));

	this->ProcessEvent(uFnDelayedWarning, &DelayedWarning_Params, nullptr);
};

// Function UDKBase.UDKBot.MissedDodge
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKBot::eventMissedDodge()
{
	static UFunction* uFnMissedDodge = nullptr;

	if (!uFnMissedDodge)
	{
		uFnMissedDodge = UFunction::FindFunction("Function UDKBase.UDKBot.MissedDodge");
	}

	AUDKBot_eventMissedDodge_Params MissedDodge_Params;
	memset(&MissedDodge_Params, 0, sizeof(MissedDodge_Params));

	this->ProcessEvent(uFnMissedDodge, &MissedDodge_Params, nullptr);
};

// Function UDKBase.UDKBot.AdjustAimError
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          TargetDist                     (CPF_Parm)
// bool                           bInstantProj                   (CPF_Parm)

float AUDKBot::eventAdjustAimError(float TargetDist, bool bInstantProj)
{
	static UFunction* uFnAdjustAimError = nullptr;

	if (!uFnAdjustAimError)
	{
		uFnAdjustAimError = UFunction::FindFunction("Function UDKBase.UDKBot.AdjustAimError");
	}

	AUDKBot_eventAdjustAimError_Params AdjustAimError_Params;
	memset(&AdjustAimError_Params, 0, sizeof(AdjustAimError_Params));
	memcpy_s(&AdjustAimError_Params.TargetDist, sizeof(AdjustAimError_Params.TargetDist), &TargetDist, sizeof(TargetDist));
	AdjustAimError_Params.bInstantProj = bInstantProj;

	this->ProcessEvent(uFnAdjustAimError, &AdjustAimError_Params, nullptr);

	return AdjustAimError_Params.ReturnValue;
};

// Function UDKBase.UDKBot.SuperDesireability
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APickupFactory*          P                              (CPF_Parm)

float AUDKBot::eventSuperDesireability(class APickupFactory* P)
{
	static UFunction* uFnSuperDesireability = nullptr;

	if (!uFnSuperDesireability)
	{
		uFnSuperDesireability = UFunction::FindFunction("Function UDKBase.UDKBot.SuperDesireability");
	}

	AUDKBot_eventSuperDesireability_Params SuperDesireability_Params;
	memset(&SuperDesireability_Params, 0, sizeof(SuperDesireability_Params));
	memcpy_s(&SuperDesireability_Params.P, sizeof(SuperDesireability_Params.P), &P, sizeof(P));

	this->ProcessEvent(uFnSuperDesireability, &SuperDesireability_Params, nullptr);

	return SuperDesireability_Params.ReturnValue;
};

// Function UDKBase.UDKBot.SpecialJumpCost
// [0x00420800] (FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          RequiredJumpZ                  (CPF_Parm)
// float                          Cost                           (CPF_Parm | CPF_OutParm)

bool AUDKBot::eventSpecialJumpCost(float RequiredJumpZ, float& Cost)
{
	static UFunction* uFnSpecialJumpCost = nullptr;

	if (!uFnSpecialJumpCost)
	{
		uFnSpecialJumpCost = UFunction::FindFunction("Function UDKBase.UDKBot.SpecialJumpCost");
	}

	AUDKBot_eventSpecialJumpCost_Params SpecialJumpCost_Params;
	memset(&SpecialJumpCost_Params, 0, sizeof(SpecialJumpCost_Params));
	memcpy_s(&SpecialJumpCost_Params.RequiredJumpZ, sizeof(SpecialJumpCost_Params.RequiredJumpZ), &RequiredJumpZ, sizeof(RequiredJumpZ));
	memcpy_s(&SpecialJumpCost_Params.Cost, sizeof(SpecialJumpCost_Params.Cost), &Cost, sizeof(Cost));

	this->ProcessEvent(uFnSpecialJumpCost, &SpecialJumpCost_Params, nullptr);

	memcpy_s(&Cost, sizeof(Cost), &SpecialJumpCost_Params.Cost, sizeof(SpecialJumpCost_Params.Cost));

	return SpecialJumpCost_Params.ReturnValue;
};

// Function UDKBase.UDKBot.MayDodgeToMoveTarget
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKBot::eventMayDodgeToMoveTarget()
{
	static UFunction* uFnMayDodgeToMoveTarget = nullptr;

	if (!uFnMayDodgeToMoveTarget)
	{
		uFnMayDodgeToMoveTarget = UFunction::FindFunction("Function UDKBase.UDKBot.MayDodgeToMoveTarget");
	}

	AUDKBot_eventMayDodgeToMoveTarget_Params MayDodgeToMoveTarget_Params;
	memset(&MayDodgeToMoveTarget_Params, 0, sizeof(MayDodgeToMoveTarget_Params));

	this->ProcessEvent(uFnMayDodgeToMoveTarget, &MayDodgeToMoveTarget_Params, nullptr);
};

// Function UDKBase.UDKBot.TimeDJReset
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKBot::eventTimeDJReset()
{
	static UFunction* uFnTimeDJReset = nullptr;

	if (!uFnTimeDJReset)
	{
		uFnTimeDJReset = UFunction::FindFunction("Function UDKBase.UDKBot.TimeDJReset");
	}

	AUDKBot_eventTimeDJReset_Params TimeDJReset_Params;
	memset(&TimeDJReset_Params, 0, sizeof(TimeDJReset_Params));

	this->ProcessEvent(uFnTimeDJReset, &TimeDJReset_Params, nullptr);
};

// Function UDKBase.UDKBot.MonitoredPawnAlert
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKBot::eventMonitoredPawnAlert()
{
	static UFunction* uFnMonitoredPawnAlert = nullptr;

	if (!uFnMonitoredPawnAlert)
	{
		uFnMonitoredPawnAlert = UFunction::FindFunction("Function UDKBase.UDKBot.MonitoredPawnAlert");
	}

	AUDKBot_eventMonitoredPawnAlert_Params MonitoredPawnAlert_Params;
	memset(&MonitoredPawnAlert_Params, 0, sizeof(MonitoredPawnAlert_Params));

	this->ProcessEvent(uFnMonitoredPawnAlert, &MonitoredPawnAlert_Params, nullptr);
};

// Function UDKBase.UDKBot.WhatToDoNext
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKBot::eventWhatToDoNext()
{
	static UFunction* uFnWhatToDoNext = nullptr;

	if (!uFnWhatToDoNext)
	{
		uFnWhatToDoNext = UFunction::FindFunction("Function UDKBase.UDKBot.WhatToDoNext");
	}

	AUDKBot_eventWhatToDoNext_Params WhatToDoNext_Params;
	memset(&WhatToDoNext_Params, 0, sizeof(WhatToDoNext_Params));

	this->ProcessEvent(uFnWhatToDoNext, &WhatToDoNext_Params, nullptr);
};

// Function UDKBase.UDKBot.FindBestSuperPickup
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          MaxDist                        (CPF_Parm)

class AActor* AUDKBot::FindBestSuperPickup(float MaxDist)
{
	static UFunction* uFnFindBestSuperPickup = nullptr;

	if (!uFnFindBestSuperPickup)
	{
		uFnFindBestSuperPickup = UFunction::FindFunction("Function UDKBase.UDKBot.FindBestSuperPickup");
	}

	AUDKBot_execFindBestSuperPickup_Params FindBestSuperPickup_Params;
	memset(&FindBestSuperPickup_Params, 0, sizeof(FindBestSuperPickup_Params));
	memcpy_s(&FindBestSuperPickup_Params.MaxDist, sizeof(FindBestSuperPickup_Params.MaxDist), &MaxDist, sizeof(MaxDist));

	uFnFindBestSuperPickup->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFindBestSuperPickup, &FindBestSuperPickup_Params, nullptr);
	uFnFindBestSuperPickup->FunctionFlags |= 0x400;

	return FindBestSuperPickup_Params.ReturnValue;
};

// Function UDKBase.UDKBot.BuildSquadRoute
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKBot::BuildSquadRoute()
{
	static UFunction* uFnBuildSquadRoute = nullptr;

	if (!uFnBuildSquadRoute)
	{
		uFnBuildSquadRoute = UFunction::FindFunction("Function UDKBase.UDKBot.BuildSquadRoute");
	}

	AUDKBot_execBuildSquadRoute_Params BuildSquadRoute_Params;
	memset(&BuildSquadRoute_Params, 0, sizeof(BuildSquadRoute_Params));

	uFnBuildSquadRoute->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnBuildSquadRoute, &BuildSquadRoute_Params, nullptr);
	uFnBuildSquadRoute->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKBot.FindPathToSquadRoute
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bWeightDetours                 (CPF_OptionalParm | CPF_Parm)

class AActor* AUDKBot::FindPathToSquadRoute(bool bWeightDetours)
{
	static UFunction* uFnFindPathToSquadRoute = nullptr;

	if (!uFnFindPathToSquadRoute)
	{
		uFnFindPathToSquadRoute = UFunction::FindFunction("Function UDKBase.UDKBot.FindPathToSquadRoute");
	}

	AUDKBot_execFindPathToSquadRoute_Params FindPathToSquadRoute_Params;
	memset(&FindPathToSquadRoute_Params, 0, sizeof(FindPathToSquadRoute_Params));
	FindPathToSquadRoute_Params.bWeightDetours = bWeightDetours;

	uFnFindPathToSquadRoute->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFindPathToSquadRoute, &FindPathToSquadRoute_Params, nullptr);
	uFnFindPathToSquadRoute->FunctionFlags |= 0x400;

	return FindPathToSquadRoute_Params.ReturnValue;
};

// Function UDKBase.UDKBot.FindBestInventoryPath
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          MinWeight                      (CPF_Parm | CPF_OutParm)

class AActor* AUDKBot::FindBestInventoryPath(float& MinWeight)
{
	static UFunction* uFnFindBestInventoryPath = nullptr;

	if (!uFnFindBestInventoryPath)
	{
		uFnFindBestInventoryPath = UFunction::FindFunction("Function UDKBase.UDKBot.FindBestInventoryPath");
	}

	AUDKBot_execFindBestInventoryPath_Params FindBestInventoryPath_Params;
	memset(&FindBestInventoryPath_Params, 0, sizeof(FindBestInventoryPath_Params));
	memcpy_s(&FindBestInventoryPath_Params.MinWeight, sizeof(FindBestInventoryPath_Params.MinWeight), &MinWeight, sizeof(MinWeight));

	uFnFindBestInventoryPath->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFindBestInventoryPath, &FindBestInventoryPath_Params, nullptr);
	uFnFindBestInventoryPath->FunctionFlags |= 0x400;

	memcpy_s(&MinWeight, sizeof(MinWeight), &FindBestInventoryPath_Params.MinWeight, sizeof(FindBestInventoryPath_Params.MinWeight));

	return FindBestInventoryPath_Params.ReturnValue;
};

// Function UDKBase.UDKBot.CanMakePathTo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  A                              (CPF_Parm)

bool AUDKBot::CanMakePathTo(class AActor* A)
{
	static UFunction* uFnCanMakePathTo = nullptr;

	if (!uFnCanMakePathTo)
	{
		uFnCanMakePathTo = UFunction::FindFunction("Function UDKBase.UDKBot.CanMakePathTo");
	}

	AUDKBot_execCanMakePathTo_Params CanMakePathTo_Params;
	memset(&CanMakePathTo_Params, 0, sizeof(CanMakePathTo_Params));
	memcpy_s(&CanMakePathTo_Params.A, sizeof(CanMakePathTo_Params.A), &A, sizeof(A));

	uFnCanMakePathTo->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCanMakePathTo, &CanMakePathTo_Params, nullptr);
	uFnCanMakePathTo->FunctionFlags |= 0x400;

	return CanMakePathTo_Params.ReturnValue;
};

// Function UDKBase.UDKBot.LatentWhatToDoNext
// [0x00020409] (FUNC_Final | FUNC_Latent | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKBot::LatentWhatToDoNext()
{
	static UFunction* uFnLatentWhatToDoNext = nullptr;

	if (!uFnLatentWhatToDoNext)
	{
		uFnLatentWhatToDoNext = UFunction::FindFunction("Function UDKBase.UDKBot.LatentWhatToDoNext");
	}

	AUDKBot_execLatentWhatToDoNext_Params LatentWhatToDoNext_Params;
	memset(&LatentWhatToDoNext_Params, 0, sizeof(LatentWhatToDoNext_Params));

	uFnLatentWhatToDoNext->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLatentWhatToDoNext, &LatentWhatToDoNext_Params, nullptr);
	uFnLatentWhatToDoNext->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKBot.WaitToSeeEnemy
// [0x00020409] (FUNC_Final | FUNC_Latent | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKBot::WaitToSeeEnemy()
{
	static UFunction* uFnWaitToSeeEnemy = nullptr;

	if (!uFnWaitToSeeEnemy)
	{
		uFnWaitToSeeEnemy = UFunction::FindFunction("Function UDKBase.UDKBot.WaitToSeeEnemy");
	}

	AUDKBot_execWaitToSeeEnemy_Params WaitToSeeEnemy_Params;
	memset(&WaitToSeeEnemy_Params, 0, sizeof(WaitToSeeEnemy_Params));

	uFnWaitToSeeEnemy->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWaitToSeeEnemy, &WaitToSeeEnemy_Params, nullptr);
	uFnWaitToSeeEnemy->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKBot.ReceiveRunOverWarning
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AUDKVehicle*             V                              (CPF_Parm)
// float                          projSpeed                      (CPF_Parm)
// struct FVector                 VehicleDir                     (CPF_Parm)

void AUDKBot::eventReceiveRunOverWarning(class AUDKVehicle* V, float projSpeed, struct FVector VehicleDir)
{
	static UFunction* uFnReceiveRunOverWarning = nullptr;

	if (!uFnReceiveRunOverWarning)
	{
		uFnReceiveRunOverWarning = UFunction::FindFunction("Function UDKBase.UDKBot.ReceiveRunOverWarning");
	}

	AUDKBot_eventReceiveRunOverWarning_Params ReceiveRunOverWarning_Params;
	memset(&ReceiveRunOverWarning_Params, 0, sizeof(ReceiveRunOverWarning_Params));
	memcpy_s(&ReceiveRunOverWarning_Params.V, sizeof(ReceiveRunOverWarning_Params.V), &V, sizeof(V));
	memcpy_s(&ReceiveRunOverWarning_Params.projSpeed, sizeof(ReceiveRunOverWarning_Params.projSpeed), &projSpeed, sizeof(projSpeed));
	memcpy_s(&ReceiveRunOverWarning_Params.VehicleDir, sizeof(ReceiveRunOverWarning_Params.VehicleDir), &VehicleDir, sizeof(VehicleDir));

	this->ProcessEvent(uFnReceiveRunOverWarning, &ReceiveRunOverWarning_Params, nullptr);
};

// Function UDKBase.UDKBot.ExecuteWhatToDoNext
// [0x00080800] (FUNC_Event | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:

void AUDKBot::eventExecuteWhatToDoNext()
{
	static UFunction* uFnExecuteWhatToDoNext = nullptr;

	if (!uFnExecuteWhatToDoNext)
	{
		uFnExecuteWhatToDoNext = UFunction::FindFunction("Function UDKBase.UDKBot.ExecuteWhatToDoNext");
	}

	AUDKBot_eventExecuteWhatToDoNext_Params ExecuteWhatToDoNext_Params;
	memset(&ExecuteWhatToDoNext_Params, 0, sizeof(ExecuteWhatToDoNext_Params));

	this->ProcessEvent(uFnExecuteWhatToDoNext, &ExecuteWhatToDoNext_Params, nullptr);
};

// Function UDKBase.UDKBot.FaceActor
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          StrafingModifier               (CPF_Parm)

class AActor* AUDKBot::FaceActor(float StrafingModifier)
{
	static UFunction* uFnFaceActor = nullptr;

	if (!uFnFaceActor)
	{
		uFnFaceActor = UFunction::FindFunction("Function UDKBase.UDKBot.FaceActor");
	}

	AUDKBot_execFaceActor_Params FaceActor_Params;
	memset(&FaceActor_Params, 0, sizeof(FaceActor_Params));
	memcpy_s(&FaceActor_Params.StrafingModifier, sizeof(FaceActor_Params.StrafingModifier), &StrafingModifier, sizeof(StrafingModifier));

	this->ProcessEvent(uFnFaceActor, &FaceActor_Params, nullptr);

	return FaceActor_Params.ReturnValue;
};

// Function UDKBase.UDKCarriedObject.GetTeamNum
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t AUDKCarriedObject::GetTeamNum()
{
	static UFunction* uFnGetTeamNum = nullptr;

	if (!uFnGetTeamNum)
	{
		uFnGetTeamNum = UFunction::FindFunction("Function UDKBase.UDKCarriedObject.GetTeamNum");
	}

	AUDKCarriedObject_execGetTeamNum_Params GetTeamNum_Params;
	memset(&GetTeamNum_Params, 0, sizeof(GetTeamNum_Params));

	uFnGetTeamNum->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTeamNum, &GetTeamNum_Params, nullptr);
	uFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Params.ReturnValue;
};

// Function UDKBase.UDKCarriedObject.OnBaseChainChanged
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKCarriedObject::eventOnBaseChainChanged()
{
	static UFunction* uFnOnBaseChainChanged = nullptr;

	if (!uFnOnBaseChainChanged)
	{
		uFnOnBaseChainChanged = UFunction::FindFunction("Function UDKBase.UDKCarriedObject.OnBaseChainChanged");
	}

	AUDKCarriedObject_eventOnBaseChainChanged_Params OnBaseChainChanged_Params;
	memset(&OnBaseChainChanged_Params, 0, sizeof(OnBaseChainChanged_Params));

	this->ProcessEvent(uFnOnBaseChainChanged, &OnBaseChainChanged_Params, nullptr);
};

// Function UDKBase.UDKCarriedObject.NotReachableBy
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)

void AUDKCarriedObject::eventNotReachableBy(class APawn* P)
{
	static UFunction* uFnNotReachableBy = nullptr;

	if (!uFnNotReachableBy)
	{
		uFnNotReachableBy = UFunction::FindFunction("Function UDKBase.UDKCarriedObject.NotReachableBy");
	}

	AUDKCarriedObject_eventNotReachableBy_Params NotReachableBy_Params;
	memset(&NotReachableBy_Params, 0, sizeof(NotReachableBy_Params));
	memcpy_s(&NotReachableBy_Params.P, sizeof(NotReachableBy_Params.P), &P, sizeof(P));

	this->ProcessEvent(uFnNotReachableBy, &NotReachableBy_Params, nullptr);
};

// Function UDKBase.UDKCarriedObject.SetHUDLocation
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 NewHUDLocation                 (CPF_Parm)

void AUDKCarriedObject::SetHUDLocation(struct FVector NewHUDLocation)
{
	static UFunction* uFnSetHUDLocation = nullptr;

	if (!uFnSetHUDLocation)
	{
		uFnSetHUDLocation = UFunction::FindFunction("Function UDKBase.UDKCarriedObject.SetHUDLocation");
	}

	AUDKCarriedObject_execSetHUDLocation_Params SetHUDLocation_Params;
	memset(&SetHUDLocation_Params, 0, sizeof(SetHUDLocation_Params));
	memcpy_s(&SetHUDLocation_Params.NewHUDLocation, sizeof(SetHUDLocation_Params.NewHUDLocation), &NewHUDLocation, sizeof(NewHUDLocation));

	uFnSetHUDLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetHUDLocation, &SetHUDLocation_Params, nullptr);
	uFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKDataStore_GameSearchBase.HasExistingSearchResults
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UUDKDataStore_GameSearchBase::HasExistingSearchResults()
{
	static UFunction* uFnHasExistingSearchResults = nullptr;

	if (!uFnHasExistingSearchResults)
	{
		uFnHasExistingSearchResults = UFunction::FindFunction("Function UDKBase.UDKDataStore_GameSearchBase.HasExistingSearchResults");
	}

	UUDKDataStore_GameSearchBase_execHasExistingSearchResults_Params HasExistingSearchResults_Params;
	memset(&HasExistingSearchResults_Params, 0, sizeof(HasExistingSearchResults_Params));

	this->ProcessEvent(uFnHasExistingSearchResults, &HasExistingSearchResults_Params, nullptr);

	return HasExistingSearchResults_Params.ReturnValue;
};

// Function UDKBase.UDKDataStore_GameSearchBase.HasOutstandingQueries
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bRestrictCheckToSelf           (CPF_OptionalParm | CPF_Parm)

bool UUDKDataStore_GameSearchBase::HasOutstandingQueries(bool bRestrictCheckToSelf)
{
	static UFunction* uFnHasOutstandingQueries = nullptr;

	if (!uFnHasOutstandingQueries)
	{
		uFnHasOutstandingQueries = UFunction::FindFunction("Function UDKBase.UDKDataStore_GameSearchBase.HasOutstandingQueries");
	}

	UUDKDataStore_GameSearchBase_execHasOutstandingQueries_Params HasOutstandingQueries_Params;
	memset(&HasOutstandingQueries_Params, 0, sizeof(HasOutstandingQueries_Params));
	HasOutstandingQueries_Params.bRestrictCheckToSelf = bRestrictCheckToSelf;

	this->ProcessEvent(uFnHasOutstandingQueries, &HasOutstandingQueries_Params, nullptr);

	return HasOutstandingQueries_Params.ReturnValue;
};

// Function UDKBase.UDKDataStore_GameSearchBase.OnSearchComplete
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UUDKDataStore_GameSearchBase::OnSearchComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnSearchComplete = nullptr;

	if (!uFnOnSearchComplete)
	{
		uFnOnSearchComplete = UFunction::FindFunction("Function UDKBase.UDKDataStore_GameSearchBase.OnSearchComplete");
	}

	UUDKDataStore_GameSearchBase_execOnSearchComplete_Params OnSearchComplete_Params;
	memset(&OnSearchComplete_Params, 0, sizeof(OnSearchComplete_Params));
	OnSearchComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnSearchComplete, &OnSearchComplete_Params, nullptr);
};

// Function UDKBase.UDKDataStore_GameSearchBase.SubmitGameSearch
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        ControllerIndex                (CPF_Parm)
// bool                           bInvalidateExistingSearchResults (CPF_OptionalParm | CPF_Parm)

bool UUDKDataStore_GameSearchBase::eventSubmitGameSearch(uint8_t ControllerIndex, bool bInvalidateExistingSearchResults)
{
	static UFunction* uFnSubmitGameSearch = nullptr;

	if (!uFnSubmitGameSearch)
	{
		uFnSubmitGameSearch = UFunction::FindFunction("Function UDKBase.UDKDataStore_GameSearchBase.SubmitGameSearch");
	}

	UUDKDataStore_GameSearchBase_eventSubmitGameSearch_Params SubmitGameSearch_Params;
	memset(&SubmitGameSearch_Params, 0, sizeof(SubmitGameSearch_Params));
	memcpy_s(&SubmitGameSearch_Params.ControllerIndex, sizeof(SubmitGameSearch_Params.ControllerIndex), &ControllerIndex, sizeof(ControllerIndex));
	SubmitGameSearch_Params.bInvalidateExistingSearchResults = bInvalidateExistingSearchResults;

	this->ProcessEvent(uFnSubmitGameSearch, &SubmitGameSearch_Params, nullptr);

	return SubmitGameSearch_Params.ReturnValue;
};

// Function UDKBase.UDKDataStore_GameSearchBase.Init
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUDKDataStore_GameSearchBase::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function UDKBase.UDKDataStore_GameSearchBase.Init");
	}

	UUDKDataStore_GameSearchBase_eventInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function UDKBase.UDKEmitCameraEffect.UpdateLocation
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          CamFOVDeg                      (CPF_Parm)
// struct FVector                 CamLoc                         (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FRotator                CamRot                         (CPF_Const | CPF_Parm | CPF_OutParm)

void AUDKEmitCameraEffect::UpdateLocation(float CamFOVDeg, struct FVector& CamLoc, struct FRotator& CamRot)
{
	static UFunction* uFnUpdateLocation = nullptr;

	if (!uFnUpdateLocation)
	{
		uFnUpdateLocation = UFunction::FindFunction("Function UDKBase.UDKEmitCameraEffect.UpdateLocation");
	}

	AUDKEmitCameraEffect_execUpdateLocation_Params UpdateLocation_Params;
	memset(&UpdateLocation_Params, 0, sizeof(UpdateLocation_Params));
	memcpy_s(&UpdateLocation_Params.CamFOVDeg, sizeof(UpdateLocation_Params.CamFOVDeg), &CamFOVDeg, sizeof(CamFOVDeg));
	memcpy_s(&UpdateLocation_Params.CamLoc, sizeof(UpdateLocation_Params.CamLoc), &CamLoc, sizeof(CamLoc));
	memcpy_s(&UpdateLocation_Params.CamRot, sizeof(UpdateLocation_Params.CamRot), &CamRot, sizeof(CamRot));

	uFnUpdateLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateLocation, &UpdateLocation_Params, nullptr);
	uFnUpdateLocation->FunctionFlags |= 0x400;

	memcpy_s(&CamLoc, sizeof(CamLoc), &UpdateLocation_Params.CamLoc, sizeof(UpdateLocation_Params.CamLoc));
	memcpy_s(&CamRot, sizeof(CamRot), &UpdateLocation_Params.CamRot, sizeof(UpdateLocation_Params.CamRot));
};

// Function UDKBase.UDKEmitCameraEffect.RegisterCamera
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AUDKPlayerController*    inCam                          (CPF_Parm)

void AUDKEmitCameraEffect::RegisterCamera(class AUDKPlayerController* inCam)
{
	static UFunction* uFnRegisterCamera = nullptr;

	if (!uFnRegisterCamera)
	{
		uFnRegisterCamera = UFunction::FindFunction("Function UDKBase.UDKEmitCameraEffect.RegisterCamera");
	}

	AUDKEmitCameraEffect_execRegisterCamera_Params RegisterCamera_Params;
	memset(&RegisterCamera_Params, 0, sizeof(RegisterCamera_Params));
	memcpy_s(&RegisterCamera_Params.inCam, sizeof(RegisterCamera_Params.inCam), &inCam, sizeof(inCam));

	this->ProcessEvent(uFnRegisterCamera, &RegisterCamera_Params, nullptr);
};

// Function UDKBase.UDKEmitCameraEffect.Destroyed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKEmitCameraEffect::Destroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function UDKBase.UDKEmitCameraEffect.Destroyed");
	}

	AUDKEmitCameraEffect_execDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function UDKBase.UDKEmitCameraEffect.PostBeginPlay
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKEmitCameraEffect::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function UDKBase.UDKEmitCameraEffect.PostBeginPlay");
	}

	AUDKEmitCameraEffect_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function UDKBase.UDKEmitterPool.SpawnExplosionLight
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UUDKExplosionLight*      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class UClass*                  LightClass                     (CPF_Parm)
// struct FVector                 SpawnLocation                  (CPF_Parm)
// class AActor*                  AttachToActor                  (CPF_OptionalParm | CPF_Parm)

class UUDKExplosionLight* AUDKEmitterPool::SpawnExplosionLight(class UClass* LightClass, struct FVector SpawnLocation, class AActor* AttachToActor)
{
	static UFunction* uFnSpawnExplosionLight = nullptr;

	if (!uFnSpawnExplosionLight)
	{
		uFnSpawnExplosionLight = UFunction::FindFunction("Function UDKBase.UDKEmitterPool.SpawnExplosionLight");
	}

	AUDKEmitterPool_execSpawnExplosionLight_Params SpawnExplosionLight_Params;
	memset(&SpawnExplosionLight_Params, 0, sizeof(SpawnExplosionLight_Params));
	memcpy_s(&SpawnExplosionLight_Params.LightClass, sizeof(SpawnExplosionLight_Params.LightClass), &LightClass, sizeof(LightClass));
	memcpy_s(&SpawnExplosionLight_Params.SpawnLocation, sizeof(SpawnExplosionLight_Params.SpawnLocation), &SpawnLocation, sizeof(SpawnLocation));
	memcpy_s(&SpawnExplosionLight_Params.AttachToActor, sizeof(SpawnExplosionLight_Params.AttachToActor), &AttachToActor, sizeof(AttachToActor));

	this->ProcessEvent(uFnSpawnExplosionLight, &SpawnExplosionLight_Params, nullptr);

	return SpawnExplosionLight_Params.ReturnValue;
};

// Function UDKBase.UDKEmitterPool.OnExplosionLightFinished
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UUDKExplosionLight*      Light                          (CPF_Parm | CPF_EditInline)

void AUDKEmitterPool::OnExplosionLightFinished(class UUDKExplosionLight* Light)
{
	static UFunction* uFnOnExplosionLightFinished = nullptr;

	if (!uFnOnExplosionLightFinished)
	{
		uFnOnExplosionLightFinished = UFunction::FindFunction("Function UDKBase.UDKEmitterPool.OnExplosionLightFinished");
	}

	AUDKEmitterPool_execOnExplosionLightFinished_Params OnExplosionLightFinished_Params;
	memset(&OnExplosionLightFinished_Params, 0, sizeof(OnExplosionLightFinished_Params));
	memcpy_s(&OnExplosionLightFinished_Params.Light, sizeof(OnExplosionLightFinished_Params.Light), &Light, sizeof(Light));

	this->ProcessEvent(uFnOnExplosionLightFinished, &OnExplosionLightFinished_Params, nullptr);
};

// Function UDKBase.UDKEmitterPool.SpawnEmitter
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UParticleSystemComponent* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class UParticleSystem*         EmitterTemplate                (CPF_Parm)
// struct FVector                 SpawnLocation                  (CPF_Parm)
// struct FRotator                SpawnRotation                  (CPF_OptionalParm | CPF_Parm)
// class AActor*                  AttachToActor                  (CPF_OptionalParm | CPF_Parm)
// class AActor*                  InInstigator                   (CPF_OptionalParm | CPF_Parm)
// int32_t                        MaxDLEPooledReuses             (CPF_OptionalParm | CPF_Parm)
// bool                           bInheritScaleFromBase          (CPF_OptionalParm | CPF_Parm)

class UParticleSystemComponent* AUDKEmitterPool::SpawnEmitter(class UParticleSystem* EmitterTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation, class AActor* AttachToActor, class AActor* InInstigator, int32_t MaxDLEPooledReuses, bool bInheritScaleFromBase)
{
	static UFunction* uFnSpawnEmitter = nullptr;

	if (!uFnSpawnEmitter)
	{
		uFnSpawnEmitter = UFunction::FindFunction("Function UDKBase.UDKEmitterPool.SpawnEmitter");
	}

	AUDKEmitterPool_execSpawnEmitter_Params SpawnEmitter_Params;
	memset(&SpawnEmitter_Params, 0, sizeof(SpawnEmitter_Params));
	memcpy_s(&SpawnEmitter_Params.EmitterTemplate, sizeof(SpawnEmitter_Params.EmitterTemplate), &EmitterTemplate, sizeof(EmitterTemplate));
	memcpy_s(&SpawnEmitter_Params.SpawnLocation, sizeof(SpawnEmitter_Params.SpawnLocation), &SpawnLocation, sizeof(SpawnLocation));
	memcpy_s(&SpawnEmitter_Params.SpawnRotation, sizeof(SpawnEmitter_Params.SpawnRotation), &SpawnRotation, sizeof(SpawnRotation));
	memcpy_s(&SpawnEmitter_Params.AttachToActor, sizeof(SpawnEmitter_Params.AttachToActor), &AttachToActor, sizeof(AttachToActor));
	memcpy_s(&SpawnEmitter_Params.InInstigator, sizeof(SpawnEmitter_Params.InInstigator), &InInstigator, sizeof(InInstigator));
	memcpy_s(&SpawnEmitter_Params.MaxDLEPooledReuses, sizeof(SpawnEmitter_Params.MaxDLEPooledReuses), &MaxDLEPooledReuses, sizeof(MaxDLEPooledReuses));
	SpawnEmitter_Params.bInheritScaleFromBase = bInheritScaleFromBase;

	this->ProcessEvent(uFnSpawnEmitter, &SpawnEmitter_Params, nullptr);

	return SpawnEmitter_Params.ReturnValue;
};

// Function UDKBase.UDKExplosionLight.OnLightFinished
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class UUDKExplosionLight*      Light                          (CPF_Parm | CPF_EditInline)

void UUDKExplosionLight::OnLightFinished(class UUDKExplosionLight* Light)
{
	static UFunction* uFnOnLightFinished = nullptr;

	if (!uFnOnLightFinished)
	{
		uFnOnLightFinished = UFunction::FindFunction("Function UDKBase.UDKExplosionLight.OnLightFinished");
	}

	UUDKExplosionLight_execOnLightFinished_Params OnLightFinished_Params;
	memset(&OnLightFinished_Params, 0, sizeof(OnLightFinished_Params));
	memcpy_s(&OnLightFinished_Params.Light, sizeof(OnLightFinished_Params.Light), &Light, sizeof(Light));

	this->ProcessEvent(uFnOnLightFinished, &OnLightFinished_Params, nullptr);
};

// Function UDKBase.UDKExplosionLight.ResetLight
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUDKExplosionLight::ResetLight()
{
	static UFunction* uFnResetLight = nullptr;

	if (!uFnResetLight)
	{
		uFnResetLight = UFunction::FindFunction("Function UDKBase.UDKExplosionLight.ResetLight");
	}

	UUDKExplosionLight_execResetLight_Params ResetLight_Params;
	memset(&ResetLight_Params, 0, sizeof(ResetLight_Params));

	uFnResetLight->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetLight, &ResetLight_Params, nullptr);
	uFnResetLight->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKForcedDirectionVolume.StopsProjectile
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AProjectile*             P                              (CPF_Parm)

bool AUDKForcedDirectionVolume::StopsProjectile(class AProjectile* P)
{
	static UFunction* uFnStopsProjectile = nullptr;

	if (!uFnStopsProjectile)
	{
		uFnStopsProjectile = UFunction::FindFunction("Function UDKBase.UDKForcedDirectionVolume.StopsProjectile");
	}

	AUDKForcedDirectionVolume_execStopsProjectile_Params StopsProjectile_Params;
	memset(&StopsProjectile_Params, 0, sizeof(StopsProjectile_Params));
	memcpy_s(&StopsProjectile_Params.P, sizeof(StopsProjectile_Params.P), &P, sizeof(P));

	this->ProcessEvent(uFnStopsProjectile, &StopsProjectile_Params, nullptr);

	return StopsProjectile_Params.ReturnValue;
};

// Function UDKBase.UDKForcedDirectionVolume.UnTouch
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)

void AUDKForcedDirectionVolume::eventUnTouch(class AActor* Other)
{
	static UFunction* uFnUnTouch = nullptr;

	if (!uFnUnTouch)
	{
		uFnUnTouch = UFunction::FindFunction("Function UDKBase.UDKForcedDirectionVolume.UnTouch");
	}

	AUDKForcedDirectionVolume_eventUnTouch_Params UnTouch_Params;
	memset(&UnTouch_Params, 0, sizeof(UnTouch_Params));
	memcpy_s(&UnTouch_Params.Other, sizeof(UnTouch_Params.Other), &Other, sizeof(Other));

	this->ProcessEvent(uFnUnTouch, &UnTouch_Params, nullptr);
};

// Function UDKBase.UDKForcedDirectionVolume.Touch
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm | CPF_EditInline)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AUDKForcedDirectionVolume::eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal)
{
	static UFunction* uFnTouch = nullptr;

	if (!uFnTouch)
	{
		uFnTouch = UFunction::FindFunction("Function UDKBase.UDKForcedDirectionVolume.Touch");
	}

	AUDKForcedDirectionVolume_eventTouch_Params Touch_Params;
	memset(&Touch_Params, 0, sizeof(Touch_Params));
	memcpy_s(&Touch_Params.Other, sizeof(Touch_Params.Other), &Other, sizeof(Other));
	memcpy_s(&Touch_Params.OtherComp, sizeof(Touch_Params.OtherComp), &OtherComp, sizeof(OtherComp));
	memcpy_s(&Touch_Params.HitLocation, sizeof(Touch_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&Touch_Params.HitNormal, sizeof(Touch_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	this->ProcessEvent(uFnTouch, &Touch_Params, nullptr);
};

// Function UDKBase.UDKForcedDirectionVolume.ActorEnteredVolume
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)

void AUDKForcedDirectionVolume::eventActorEnteredVolume(class AActor* Other)
{
	static UFunction* uFnActorEnteredVolume = nullptr;

	if (!uFnActorEnteredVolume)
	{
		uFnActorEnteredVolume = UFunction::FindFunction("Function UDKBase.UDKForcedDirectionVolume.ActorEnteredVolume");
	}

	AUDKForcedDirectionVolume_eventActorEnteredVolume_Params ActorEnteredVolume_Params;
	memset(&ActorEnteredVolume_Params, 0, sizeof(ActorEnteredVolume_Params));
	memcpy_s(&ActorEnteredVolume_Params.Other, sizeof(ActorEnteredVolume_Params.Other), &Other, sizeof(Other));

	this->ProcessEvent(uFnActorEnteredVolume, &ActorEnteredVolume_Params, nullptr);
};

// Function UDKBase.UDKForcedDirectionVolume.PostBeginPlay
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKForcedDirectionVolume::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function UDKBase.UDKForcedDirectionVolume.PostBeginPlay");
	}

	AUDKForcedDirectionVolume_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function UDKBase.UDKGameInteraction.NotifyGameSessionEnded
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUDKGameInteraction::NotifyGameSessionEnded()
{
	static UFunction* uFnNotifyGameSessionEnded = nullptr;

	if (!uFnNotifyGameSessionEnded)
	{
		uFnNotifyGameSessionEnded = UFunction::FindFunction("Function UDKBase.UDKGameInteraction.NotifyGameSessionEnded");
	}

	UUDKGameInteraction_execNotifyGameSessionEnded_Params NotifyGameSessionEnded_Params;
	memset(&NotifyGameSessionEnded_Params, 0, sizeof(NotifyGameSessionEnded_Params));

	this->ProcessEvent(uFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Params, nullptr);
};

// Function UDKBase.UDKGameInteraction.BlockUIInput
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bBlock                         (CPF_Parm)

void UUDKGameInteraction::eventBlockUIInput(bool bBlock)
{
	static UFunction* uFnBlockUIInput = nullptr;

	if (!uFnBlockUIInput)
	{
		uFnBlockUIInput = UFunction::FindFunction("Function UDKBase.UDKGameInteraction.BlockUIInput");
	}

	UUDKGameInteraction_eventBlockUIInput_Params BlockUIInput_Params;
	memset(&BlockUIInput_Params, 0, sizeof(BlockUIInput_Params));
	BlockUIInput_Params.bBlock = bBlock;

	this->ProcessEvent(uFnBlockUIInput, &BlockUIInput_Params, nullptr);
};

// Function UDKBase.UDKGameInteraction.ClearUIInputBlocks
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUDKGameInteraction::eventClearUIInputBlocks()
{
	static UFunction* uFnClearUIInputBlocks = nullptr;

	if (!uFnClearUIInputBlocks)
	{
		uFnClearUIInputBlocks = UFunction::FindFunction("Function UDKBase.UDKGameInteraction.ClearUIInputBlocks");
	}

	UUDKGameInteraction_eventClearUIInputBlocks_Params ClearUIInputBlocks_Params;
	memset(&ClearUIInputBlocks_Params, 0, sizeof(ClearUIInputBlocks_Params));

	this->ProcessEvent(uFnClearUIInputBlocks, &ClearUIInputBlocks_Params, nullptr);
};

// Function UDKBase.UDKGameInteraction.ShouldProcessUIInput
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UUDKGameInteraction::ShouldProcessUIInput()
{
	static UFunction* uFnShouldProcessUIInput = nullptr;

	if (!uFnShouldProcessUIInput)
	{
		uFnShouldProcessUIInput = UFunction::FindFunction("Function UDKBase.UDKGameInteraction.ShouldProcessUIInput");
	}

	UUDKGameInteraction_execShouldProcessUIInput_Params ShouldProcessUIInput_Params;
	memset(&ShouldProcessUIInput_Params, 0, sizeof(ShouldProcessUIInput_Params));

	uFnShouldProcessUIInput->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShouldProcessUIInput, &ShouldProcessUIInput_Params, nullptr);
	uFnShouldProcessUIInput->FunctionFlags |= 0x400;

	return ShouldProcessUIInput_Params.ReturnValue;
};

// Function UDKBase.UDKGameObjective.GetTeamNum
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t AUDKGameObjective::GetTeamNum()
{
	static UFunction* uFnGetTeamNum = nullptr;

	if (!uFnGetTeamNum)
	{
		uFnGetTeamNum = UFunction::FindFunction("Function UDKBase.UDKGameObjective.GetTeamNum");
	}

	AUDKGameObjective_execGetTeamNum_Params GetTeamNum_Params;
	memset(&GetTeamNum_Params, 0, sizeof(GetTeamNum_Params));

	uFnGetTeamNum->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTeamNum, &GetTeamNum_Params, nullptr);
	uFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Params.ReturnValue;
};

// Function UDKBase.UDKGameObjective.DrawIcon
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 IconLocation                   (CPF_Parm)
// float                          IconWidth                      (CPF_Parm)
// float                          IconAlpha                      (CPF_Parm)
// class AUDKPlayerController*    PlayerOwner                    (CPF_Parm)
// struct FLinearColor            DrawColor                      (CPF_Parm)

void AUDKGameObjective::DrawIcon(class UCanvas* Canvas, struct FVector IconLocation, float IconWidth, float IconAlpha, class AUDKPlayerController* PlayerOwner, struct FLinearColor DrawColor)
{
	static UFunction* uFnDrawIcon = nullptr;

	if (!uFnDrawIcon)
	{
		uFnDrawIcon = UFunction::FindFunction("Function UDKBase.UDKGameObjective.DrawIcon");
	}

	AUDKGameObjective_execDrawIcon_Params DrawIcon_Params;
	memset(&DrawIcon_Params, 0, sizeof(DrawIcon_Params));
	memcpy_s(&DrawIcon_Params.Canvas, sizeof(DrawIcon_Params.Canvas), &Canvas, sizeof(Canvas));
	memcpy_s(&DrawIcon_Params.IconLocation, sizeof(DrawIcon_Params.IconLocation), &IconLocation, sizeof(IconLocation));
	memcpy_s(&DrawIcon_Params.IconWidth, sizeof(DrawIcon_Params.IconWidth), &IconWidth, sizeof(IconWidth));
	memcpy_s(&DrawIcon_Params.IconAlpha, sizeof(DrawIcon_Params.IconAlpha), &IconAlpha, sizeof(IconAlpha));
	memcpy_s(&DrawIcon_Params.PlayerOwner, sizeof(DrawIcon_Params.PlayerOwner), &PlayerOwner, sizeof(PlayerOwner));
	memcpy_s(&DrawIcon_Params.DrawColor, sizeof(DrawIcon_Params.DrawColor), &DrawColor, sizeof(DrawColor));

	uFnDrawIcon->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDrawIcon, &DrawIcon_Params, nullptr);
	uFnDrawIcon->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKGameObjective.SetHUDLocation
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 NewHUDLocation                 (CPF_Parm)

void AUDKGameObjective::SetHUDLocation(struct FVector NewHUDLocation)
{
	static UFunction* uFnSetHUDLocation = nullptr;

	if (!uFnSetHUDLocation)
	{
		uFnSetHUDLocation = UFunction::FindFunction("Function UDKBase.UDKGameObjective.SetHUDLocation");
	}

	AUDKGameObjective_execSetHUDLocation_Params SetHUDLocation_Params;
	memset(&SetHUDLocation_Params, 0, sizeof(SetHUDLocation_Params));
	memcpy_s(&SetHUDLocation_Params.NewHUDLocation, sizeof(SetHUDLocation_Params.NewHUDLocation), &NewHUDLocation, sizeof(NewHUDLocation));

	uFnSetHUDLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetHUDLocation, &SetHUDLocation_Params, nullptr);
	uFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKGameObjective.TriggerFlagEvent
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   EventType                      (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)

void AUDKGameObjective::TriggerFlagEvent(struct FName EventType, class AController* EventInstigator)
{
	static UFunction* uFnTriggerFlagEvent = nullptr;

	if (!uFnTriggerFlagEvent)
	{
		uFnTriggerFlagEvent = UFunction::FindFunction("Function UDKBase.UDKGameObjective.TriggerFlagEvent");
	}

	AUDKGameObjective_execTriggerFlagEvent_Params TriggerFlagEvent_Params;
	memset(&TriggerFlagEvent_Params, 0, sizeof(TriggerFlagEvent_Params));
	memcpy_s(&TriggerFlagEvent_Params.EventType, sizeof(TriggerFlagEvent_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&TriggerFlagEvent_Params.EventInstigator, sizeof(TriggerFlagEvent_Params.EventInstigator), &EventInstigator, sizeof(EventInstigator));

	this->ProcessEvent(uFnTriggerFlagEvent, &TriggerFlagEvent_Params, nullptr);
};

// Function UDKBase.UDKGameObjective.BotNearObjective
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AAIController*           C                              (CPF_Parm)

bool AUDKGameObjective::BotNearObjective(class AAIController* C)
{
	static UFunction* uFnBotNearObjective = nullptr;

	if (!uFnBotNearObjective)
	{
		uFnBotNearObjective = UFunction::FindFunction("Function UDKBase.UDKGameObjective.BotNearObjective");
	}

	AUDKGameObjective_execBotNearObjective_Params BotNearObjective_Params;
	memset(&BotNearObjective_Params, 0, sizeof(BotNearObjective_Params));
	memcpy_s(&BotNearObjective_Params.C, sizeof(BotNearObjective_Params.C), &C, sizeof(C));

	this->ProcessEvent(uFnBotNearObjective, &BotNearObjective_Params, nullptr);

	return BotNearObjective_Params.ReturnValue;
};

// Function UDKBase.UDKGameObjective.GetBestViewTarget
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AActor* AUDKGameObjective::eventGetBestViewTarget()
{
	static UFunction* uFnGetBestViewTarget = nullptr;

	if (!uFnGetBestViewTarget)
	{
		uFnGetBestViewTarget = UFunction::FindFunction("Function UDKBase.UDKGameObjective.GetBestViewTarget");
	}

	AUDKGameObjective_eventGetBestViewTarget_Params GetBestViewTarget_Params;
	memset(&GetBestViewTarget_Params, 0, sizeof(GetBestViewTarget_Params));

	this->ProcessEvent(uFnGetBestViewTarget, &GetBestViewTarget_Params, nullptr);

	return GetBestViewTarget_Params.ReturnValue;
};

// Function UDKBase.UDKGameObjective.ObjectiveChanged
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKGameObjective::ObjectiveChanged()
{
	static UFunction* uFnObjectiveChanged = nullptr;

	if (!uFnObjectiveChanged)
	{
		uFnObjectiveChanged = UFunction::FindFunction("Function UDKBase.UDKGameObjective.ObjectiveChanged");
	}

	AUDKGameObjective_execObjectiveChanged_Params ObjectiveChanged_Params;
	memset(&ObjectiveChanged_Params, 0, sizeof(ObjectiveChanged_Params));

	this->ProcessEvent(uFnObjectiveChanged, &ObjectiveChanged_Params, nullptr);
};

// Function UDKBase.UDKGameSettingsCommon.BlobToString
// [0x00422400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  InBlob                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class FString UUDKGameSettingsCommon::BlobToString(class FString& InBlob)
{
	static UFunction* uFnBlobToString = nullptr;

	if (!uFnBlobToString)
	{
		uFnBlobToString = UFunction::FindFunction("Function UDKBase.UDKGameSettingsCommon.BlobToString");
	}

	UUDKGameSettingsCommon_execBlobToString_Params BlobToString_Params;
	memset(&BlobToString_Params, 0, sizeof(BlobToString_Params));
	memcpy_s(&BlobToString_Params.InBlob, sizeof(BlobToString_Params.InBlob), &InBlob, sizeof(InBlob));

	uFnBlobToString->FunctionFlags &= ~0x400;
	UUDKGameSettingsCommon::StaticClass()->ProcessEvent(uFnBlobToString, &BlobToString_Params, nullptr);
	uFnBlobToString->FunctionFlags |= 0x400;

	memcpy_s(&InBlob, sizeof(InBlob), &BlobToString_Params.InBlob, sizeof(BlobToString_Params.InBlob));

	return BlobToString_Params.ReturnValue;
};

// Function UDKBase.UDKGameSettingsCommon.StringToBlob
// [0x00422400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InString                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  OutBlob                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UUDKGameSettingsCommon::StringToBlob(class FString& InString, class FString& OutBlob)
{
	static UFunction* uFnStringToBlob = nullptr;

	if (!uFnStringToBlob)
	{
		uFnStringToBlob = UFunction::FindFunction("Function UDKBase.UDKGameSettingsCommon.StringToBlob");
	}

	UUDKGameSettingsCommon_execStringToBlob_Params StringToBlob_Params;
	memset(&StringToBlob_Params, 0, sizeof(StringToBlob_Params));
	memcpy_s(&StringToBlob_Params.InString, sizeof(StringToBlob_Params.InString), &InString, sizeof(InString));
	memcpy_s(&StringToBlob_Params.OutBlob, sizeof(StringToBlob_Params.OutBlob), &OutBlob, sizeof(OutBlob));

	uFnStringToBlob->FunctionFlags &= ~0x400;
	UUDKGameSettingsCommon::StaticClass()->ProcessEvent(uFnStringToBlob, &StringToBlob_Params, nullptr);
	uFnStringToBlob->FunctionFlags |= 0x400;

	memcpy_s(&InString, sizeof(InString), &StringToBlob_Params.InString, sizeof(StringToBlob_Params.InString));
	memcpy_s(&OutBlob, sizeof(OutBlob), &StringToBlob_Params.OutBlob, sizeof(StringToBlob_Params.OutBlob));

	return StringToBlob_Params.ReturnValue;
};

// Function UDKBase.UDKGameViewportClient.LoadRandomLocalizedHintMessage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Category1Name                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Category2Name                  (CPF_Parm | CPF_NeedCtorLink)

class FString UUDKGameViewportClient::LoadRandomLocalizedHintMessage(class FString Category1Name, class FString Category2Name)
{
	static UFunction* uFnLoadRandomLocalizedHintMessage = nullptr;

	if (!uFnLoadRandomLocalizedHintMessage)
	{
		uFnLoadRandomLocalizedHintMessage = UFunction::FindFunction("Function UDKBase.UDKGameViewportClient.LoadRandomLocalizedHintMessage");
	}

	UUDKGameViewportClient_execLoadRandomLocalizedHintMessage_Params LoadRandomLocalizedHintMessage_Params;
	memset(&LoadRandomLocalizedHintMessage_Params, 0, sizeof(LoadRandomLocalizedHintMessage_Params));
	memcpy_s(&LoadRandomLocalizedHintMessage_Params.Category1Name, sizeof(LoadRandomLocalizedHintMessage_Params.Category1Name), &Category1Name, sizeof(Category1Name));
	memcpy_s(&LoadRandomLocalizedHintMessage_Params.Category2Name, sizeof(LoadRandomLocalizedHintMessage_Params.Category2Name), &Category2Name, sizeof(Category2Name));

	uFnLoadRandomLocalizedHintMessage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLoadRandomLocalizedHintMessage, &LoadRandomLocalizedHintMessage_Params, nullptr);
	uFnLoadRandomLocalizedHintMessage->FunctionFlags |= 0x400;

	return LoadRandomLocalizedHintMessage_Params.ReturnValue;
};

// Function UDKBase.UDKHUD.TranslateBindToFont
// [0x00422400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  InBindStr                      (CPF_Parm | CPF_NeedCtorLink)
// class UFont*                   DrawFont                       (CPF_Parm | CPF_OutParm)
// class FString                  OutBindStr                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AUDKHUD::TranslateBindToFont(class FString InBindStr, class UFont*& DrawFont, class FString& OutBindStr)
{
	static UFunction* uFnTranslateBindToFont = nullptr;

	if (!uFnTranslateBindToFont)
	{
		uFnTranslateBindToFont = UFunction::FindFunction("Function UDKBase.UDKHUD.TranslateBindToFont");
	}

	AUDKHUD_execTranslateBindToFont_Params TranslateBindToFont_Params;
	memset(&TranslateBindToFont_Params, 0, sizeof(TranslateBindToFont_Params));
	memcpy_s(&TranslateBindToFont_Params.InBindStr, sizeof(TranslateBindToFont_Params.InBindStr), &InBindStr, sizeof(InBindStr));
	memcpy_s(&TranslateBindToFont_Params.DrawFont, sizeof(TranslateBindToFont_Params.DrawFont), &DrawFont, sizeof(DrawFont));
	memcpy_s(&TranslateBindToFont_Params.OutBindStr, sizeof(TranslateBindToFont_Params.OutBindStr), &OutBindStr, sizeof(OutBindStr));

	uFnTranslateBindToFont->FunctionFlags &= ~0x400;
	AUDKHUD::StaticClass()->ProcessEvent(uFnTranslateBindToFont, &TranslateBindToFont_Params, nullptr);
	uFnTranslateBindToFont->FunctionFlags |= 0x400;

	memcpy_s(&DrawFont, sizeof(DrawFont), &TranslateBindToFont_Params.DrawFont, sizeof(TranslateBindToFont_Params.DrawFont));
	memcpy_s(&OutBindStr, sizeof(OutBindStr), &TranslateBindToFont_Params.OutBindStr, sizeof(TranslateBindToFont_Params.OutBindStr));
};

// Function UDKBase.UDKHUD.DrawGlowText
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Text                           (CPF_Parm | CPF_NeedCtorLink)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)
// float                          MaxHeightInPixels              (CPF_OptionalParm | CPF_Parm)
// float                          PulseTime                      (CPF_OptionalParm | CPF_Parm)
// bool                           bRightJustified                (CPF_OptionalParm | CPF_Parm)

void AUDKHUD::DrawGlowText(class FString Text, float X, float Y, float MaxHeightInPixels, float PulseTime, bool bRightJustified)
{
	static UFunction* uFnDrawGlowText = nullptr;

	if (!uFnDrawGlowText)
	{
		uFnDrawGlowText = UFunction::FindFunction("Function UDKBase.UDKHUD.DrawGlowText");
	}

	AUDKHUD_execDrawGlowText_Params DrawGlowText_Params;
	memset(&DrawGlowText_Params, 0, sizeof(DrawGlowText_Params));
	memcpy_s(&DrawGlowText_Params.Text, sizeof(DrawGlowText_Params.Text), &Text, sizeof(Text));
	memcpy_s(&DrawGlowText_Params.X, sizeof(DrawGlowText_Params.X), &X, sizeof(X));
	memcpy_s(&DrawGlowText_Params.Y, sizeof(DrawGlowText_Params.Y), &Y, sizeof(Y));
	memcpy_s(&DrawGlowText_Params.MaxHeightInPixels, sizeof(DrawGlowText_Params.MaxHeightInPixels), &MaxHeightInPixels, sizeof(MaxHeightInPixels));
	memcpy_s(&DrawGlowText_Params.PulseTime, sizeof(DrawGlowText_Params.PulseTime), &PulseTime, sizeof(PulseTime));
	DrawGlowText_Params.bRightJustified = bRightJustified;

	uFnDrawGlowText->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDrawGlowText, &DrawGlowText_Params, nullptr);
	uFnDrawGlowText->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKJumpPad.SuggestMovePreparation
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   Other                          (CPF_Parm)

bool AUDKJumpPad::eventSuggestMovePreparation(class APawn* Other)
{
	static UFunction* uFnSuggestMovePreparation = nullptr;

	if (!uFnSuggestMovePreparation)
	{
		uFnSuggestMovePreparation = UFunction::FindFunction("Function UDKBase.UDKJumpPad.SuggestMovePreparation");
	}

	AUDKJumpPad_eventSuggestMovePreparation_Params SuggestMovePreparation_Params;
	memset(&SuggestMovePreparation_Params, 0, sizeof(SuggestMovePreparation_Params));
	memcpy_s(&SuggestMovePreparation_Params.Other, sizeof(SuggestMovePreparation_Params.Other), &Other, sizeof(Other));

	this->ProcessEvent(uFnSuggestMovePreparation, &SuggestMovePreparation_Params, nullptr);

	return SuggestMovePreparation_Params.ReturnValue;
};

// Function UDKBase.UDKJumpPad.PostTouch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)

void AUDKJumpPad::eventPostTouch(class AActor* Other)
{
	static UFunction* uFnPostTouch = nullptr;

	if (!uFnPostTouch)
	{
		uFnPostTouch = UFunction::FindFunction("Function UDKBase.UDKJumpPad.PostTouch");
	}

	AUDKJumpPad_eventPostTouch_Params PostTouch_Params;
	memset(&PostTouch_Params, 0, sizeof(PostTouch_Params));
	memcpy_s(&PostTouch_Params.Other, sizeof(PostTouch_Params.Other), &Other, sizeof(Other));

	this->ProcessEvent(uFnPostTouch, &PostTouch_Params, nullptr);
};

// Function UDKBase.UDKJumpPad.Touch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm | CPF_EditInline)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AUDKJumpPad::eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal)
{
	static UFunction* uFnTouch = nullptr;

	if (!uFnTouch)
	{
		uFnTouch = UFunction::FindFunction("Function UDKBase.UDKJumpPad.Touch");
	}

	AUDKJumpPad_eventTouch_Params Touch_Params;
	memset(&Touch_Params, 0, sizeof(Touch_Params));
	memcpy_s(&Touch_Params.Other, sizeof(Touch_Params.Other), &Other, sizeof(Other));
	memcpy_s(&Touch_Params.OtherComp, sizeof(Touch_Params.OtherComp), &OtherComp, sizeof(OtherComp));
	memcpy_s(&Touch_Params.HitLocation, sizeof(Touch_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&Touch_Params.HitNormal, sizeof(Touch_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	this->ProcessEvent(uFnTouch, &Touch_Params, nullptr);
};

// Function UDKBase.UDKKActorBreakable.ReplicatedEvent
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   VarName                        (CPF_Parm)

void AUDKKActorBreakable::eventReplicatedEvent(struct FName VarName)
{
	static UFunction* uFnReplicatedEvent = nullptr;

	if (!uFnReplicatedEvent)
	{
		uFnReplicatedEvent = UFunction::FindFunction("Function UDKBase.UDKKActorBreakable.ReplicatedEvent");
	}

	AUDKKActorBreakable_eventReplicatedEvent_Params ReplicatedEvent_Params;
	memset(&ReplicatedEvent_Params, 0, sizeof(ReplicatedEvent_Params));
	memcpy_s(&ReplicatedEvent_Params.VarName, sizeof(ReplicatedEvent_Params.VarName), &VarName, sizeof(VarName));

	this->ProcessEvent(uFnReplicatedEvent, &ReplicatedEvent_Params, nullptr);
};

// Function UDKBase.UDKKActorBreakable.BreakApart
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKKActorBreakable::BreakApart()
{
	static UFunction* uFnBreakApart = nullptr;

	if (!uFnBreakApart)
	{
		uFnBreakApart = UFunction::FindFunction("Function UDKBase.UDKKActorBreakable.BreakApart");
	}

	AUDKKActorBreakable_execBreakApart_Params BreakApart_Params;
	memset(&BreakApart_Params, 0, sizeof(BreakApart_Params));

	this->ProcessEvent(uFnBreakApart, &BreakApart_Params, nullptr);
};

// Function UDKBase.UDKKActorBreakable.EncroachingOn
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Other                          (CPF_Parm)

bool AUDKKActorBreakable::EncroachingOn(class AActor* Other)
{
	static UFunction* uFnEncroachingOn = nullptr;

	if (!uFnEncroachingOn)
	{
		uFnEncroachingOn = UFunction::FindFunction("Function UDKBase.UDKKActorBreakable.EncroachingOn");
	}

	AUDKKActorBreakable_execEncroachingOn_Params EncroachingOn_Params;
	memset(&EncroachingOn_Params, 0, sizeof(EncroachingOn_Params));
	memcpy_s(&EncroachingOn_Params.Other, sizeof(EncroachingOn_Params.Other), &Other, sizeof(Other));

	this->ProcessEvent(uFnEncroachingOn, &EncroachingOn_Params, nullptr);

	return EncroachingOn_Params.ReturnValue;
};

// Function UDKBase.UDKKActorBreakable.TakeDamage
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Damage                         (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void AUDKKActorBreakable::eventTakeDamage(int32_t Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function UDKBase.UDKKActorBreakable.TakeDamage");
	}

	AUDKKActorBreakable_eventTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.Damage, sizeof(TakeDamage_Params.Damage), &Damage, sizeof(Damage));
	memcpy_s(&TakeDamage_Params.EventInstigator, sizeof(TakeDamage_Params.EventInstigator), &EventInstigator, sizeof(EventInstigator));
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	memcpy_s(&TakeDamage_Params.DamageType, sizeof(TakeDamage_Params.DamageType), &DamageType, sizeof(DamageType));
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	memcpy_s(&TakeDamage_Params.DamageCauser, sizeof(TakeDamage_Params.DamageCauser), &DamageCauser, sizeof(DamageCauser));

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function UDKBase.UDKKActorBreakable.OnEncroach
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Other                          (CPF_Parm)

bool AUDKKActorBreakable::OnEncroach(class AActor* Other)
{
	static UFunction* uFnOnEncroach = nullptr;

	if (!uFnOnEncroach)
	{
		uFnOnEncroach = UFunction::FindFunction("Function UDKBase.UDKKActorBreakable.OnEncroach");
	}

	AUDKKActorBreakable_execOnEncroach_Params OnEncroach_Params;
	memset(&OnEncroach_Params, 0, sizeof(OnEncroach_Params));
	memcpy_s(&OnEncroach_Params.Other, sizeof(OnEncroach_Params.Other), &Other, sizeof(Other));

	this->ProcessEvent(uFnOnEncroach, &OnEncroach_Params, nullptr);

	return OnEncroach_Params.ReturnValue;
};

// Function UDKBase.UDKKActorBreakable.OnBreakApart
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void AUDKKActorBreakable::OnBreakApart()
{
	static UFunction* uFnOnBreakApart = nullptr;

	if (!uFnOnBreakApart)
	{
		uFnOnBreakApart = UFunction::FindFunction("Function UDKBase.UDKKActorBreakable.OnBreakApart");
	}

	AUDKKActorBreakable_execOnBreakApart_Params OnBreakApart_Params;
	memset(&OnBreakApart_Params, 0, sizeof(OnBreakApart_Params));

	this->ProcessEvent(uFnOnBreakApart, &OnBreakApart_Params, nullptr);
};

// Function UDKBase.UDKOnlineEventTracker.RaiseEvent
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  EventName                      (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          EventParams                    (CPF_Const | CPF_Parm | CPF_NeedCtorLink)

bool UUDKOnlineEventTracker::eventRaiseEvent(class FString EventName, TArray<class FString> EventParams)
{
	static UFunction* uFnRaiseEvent = nullptr;

	if (!uFnRaiseEvent)
	{
		uFnRaiseEvent = UFunction::FindFunction("Function UDKBase.UDKOnlineEventTracker.RaiseEvent");
	}

	UUDKOnlineEventTracker_eventRaiseEvent_Params RaiseEvent_Params;
	memset(&RaiseEvent_Params, 0, sizeof(RaiseEvent_Params));
	memcpy_s(&RaiseEvent_Params.EventName, sizeof(RaiseEvent_Params.EventName), &EventName, sizeof(EventName));
	memcpy_s(&RaiseEvent_Params.EventParams, sizeof(RaiseEvent_Params.EventParams), &EventParams, sizeof(EventParams));

	uFnRaiseEvent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRaiseEvent, &RaiseEvent_Params, nullptr);
	uFnRaiseEvent->FunctionFlags |= 0x400;

	return RaiseEvent_Params.ReturnValue;
};

// Function UDKBase.UDKOnlineEventTracker.ShutDown
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUDKOnlineEventTracker::eventShutDown()
{
	static UFunction* uFnShutDown = nullptr;

	if (!uFnShutDown)
	{
		uFnShutDown = UFunction::FindFunction("Function UDKBase.UDKOnlineEventTracker.ShutDown");
	}

	UUDKOnlineEventTracker_eventShutDown_Params ShutDown_Params;
	memset(&ShutDown_Params, 0, sizeof(ShutDown_Params));

	uFnShutDown->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShutDown, &ShutDown_Params, nullptr);
	uFnShutDown->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKOnlineEventTracker.Init
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUDKOnlineEventTracker::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function UDKBase.UDKOnlineEventTracker.Init");
	}

	UUDKOnlineEventTracker_eventInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	uFnInit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
	uFnInit->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKParticleSystemComponent.SetFOV
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          NewFOV                         (CPF_Parm)

void UUDKParticleSystemComponent::SetFOV(float NewFOV)
{
	static UFunction* uFnSetFOV = nullptr;

	if (!uFnSetFOV)
	{
		uFnSetFOV = UFunction::FindFunction("Function UDKBase.UDKParticleSystemComponent.SetFOV");
	}

	UUDKParticleSystemComponent_execSetFOV_Params SetFOV_Params;
	memset(&SetFOV_Params, 0, sizeof(SetFOV_Params));
	memcpy_s(&SetFOV_Params.NewFOV, sizeof(SetFOV_Params.NewFOV), &NewFOV, sizeof(NewFOV));

	uFnSetFOV->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetFOV, &SetFOV_Params, nullptr);
	uFnSetFOV->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPawn.StuckFalling
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKPawn::eventStuckFalling()
{
	static UFunction* uFnStuckFalling = nullptr;

	if (!uFnStuckFalling)
	{
		uFnStuckFalling = UFunction::FindFunction("Function UDKBase.UDKPawn.StuckFalling");
	}

	AUDKPawn_eventStuckFalling_Params StuckFalling_Params;
	memset(&StuckFalling_Params, 0, sizeof(StuckFalling_Params));

	this->ProcessEvent(uFnStuckFalling, &StuckFalling_Params, nullptr);
};

// Function UDKBase.UDKPawn.UpdateEyeHeight
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void AUDKPawn::eventUpdateEyeHeight(float DeltaTime)
{
	static UFunction* uFnUpdateEyeHeight = nullptr;

	if (!uFnUpdateEyeHeight)
	{
		uFnUpdateEyeHeight = UFunction::FindFunction("Function UDKBase.UDKPawn.UpdateEyeHeight");
	}

	AUDKPawn_eventUpdateEyeHeight_Params UpdateEyeHeight_Params;
	memset(&UpdateEyeHeight_Params, 0, sizeof(UpdateEyeHeight_Params));
	memcpy_s(&UpdateEyeHeight_Params.DeltaTime, sizeof(UpdateEyeHeight_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnUpdateEyeHeight, &UpdateEyeHeight_Params, nullptr);
};

// Function UDKBase.UDKPawn.TakeHitBlendedOut
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKPawn::eventTakeHitBlendedOut()
{
	static UFunction* uFnTakeHitBlendedOut = nullptr;

	if (!uFnTakeHitBlendedOut)
	{
		uFnTakeHitBlendedOut = UFunction::FindFunction("Function UDKBase.UDKPawn.TakeHitBlendedOut");
	}

	AUDKPawn_eventTakeHitBlendedOut_Params TakeHitBlendedOut_Params;
	memset(&TakeHitBlendedOut_Params, 0, sizeof(TakeHitBlendedOut_Params));

	this->ProcessEvent(uFnTakeHitBlendedOut, &TakeHitBlendedOut_Params, nullptr);
};

// Function UDKBase.UDKPawn.StartFeignDeathRecoveryAnim
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKPawn::eventStartFeignDeathRecoveryAnim()
{
	static UFunction* uFnStartFeignDeathRecoveryAnim = nullptr;

	if (!uFnStartFeignDeathRecoveryAnim)
	{
		uFnStartFeignDeathRecoveryAnim = UFunction::FindFunction("Function UDKBase.UDKPawn.StartFeignDeathRecoveryAnim");
	}

	AUDKPawn_eventStartFeignDeathRecoveryAnim_Params StartFeignDeathRecoveryAnim_Params;
	memset(&StartFeignDeathRecoveryAnim_Params, 0, sizeof(StartFeignDeathRecoveryAnim_Params));

	this->ProcessEvent(uFnStartFeignDeathRecoveryAnim, &StartFeignDeathRecoveryAnim_Params, nullptr);
};

// Function UDKBase.UDKPawn.SetHandIKEnabled
// [0x00020100] (FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bEnabled                       (CPF_Parm)

void AUDKPawn::SetHandIKEnabled(bool bEnabled)
{
	static UFunction* uFnSetHandIKEnabled = nullptr;

	if (!uFnSetHandIKEnabled)
	{
		uFnSetHandIKEnabled = UFunction::FindFunction("Function UDKBase.UDKPawn.SetHandIKEnabled");
	}

	AUDKPawn_execSetHandIKEnabled_Params SetHandIKEnabled_Params;
	memset(&SetHandIKEnabled_Params, 0, sizeof(SetHandIKEnabled_Params));
	SetHandIKEnabled_Params.bEnabled = bEnabled;

	this->ProcessEvent(uFnSetHandIKEnabled, &SetHandIKEnabled_Params, nullptr);
};

// Function UDKBase.UDKPawn.SetWeaponAttachmentVisibility
// [0x00020100] (FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bAttachmentVisible             (CPF_Parm)

void AUDKPawn::SetWeaponAttachmentVisibility(bool bAttachmentVisible)
{
	static UFunction* uFnSetWeaponAttachmentVisibility = nullptr;

	if (!uFnSetWeaponAttachmentVisibility)
	{
		uFnSetWeaponAttachmentVisibility = UFunction::FindFunction("Function UDKBase.UDKPawn.SetWeaponAttachmentVisibility");
	}

	AUDKPawn_execSetWeaponAttachmentVisibility_Params SetWeaponAttachmentVisibility_Params;
	memset(&SetWeaponAttachmentVisibility_Params, 0, sizeof(SetWeaponAttachmentVisibility_Params));
	SetWeaponAttachmentVisibility_Params.bAttachmentVisible = bAttachmentVisible;

	this->ProcessEvent(uFnSetWeaponAttachmentVisibility, &SetWeaponAttachmentVisibility_Params, nullptr);
};

// Function UDKBase.UDKPawn.NativePostRenderFor
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 CameraPosition                 (CPF_Parm)
// struct FVector                 CameraDir                      (CPF_Parm)

void AUDKPawn::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir)
{
	static UFunction* uFnNativePostRenderFor = nullptr;

	if (!uFnNativePostRenderFor)
	{
		uFnNativePostRenderFor = UFunction::FindFunction("Function UDKBase.UDKPawn.NativePostRenderFor");
	}

	AUDKPawn_execNativePostRenderFor_Params NativePostRenderFor_Params;
	memset(&NativePostRenderFor_Params, 0, sizeof(NativePostRenderFor_Params));
	memcpy_s(&NativePostRenderFor_Params.PC, sizeof(NativePostRenderFor_Params.PC), &PC, sizeof(PC));
	memcpy_s(&NativePostRenderFor_Params.Canvas, sizeof(NativePostRenderFor_Params.Canvas), &Canvas, sizeof(Canvas));
	memcpy_s(&NativePostRenderFor_Params.CameraPosition, sizeof(NativePostRenderFor_Params.CameraPosition), &CameraPosition, sizeof(CameraPosition));
	memcpy_s(&NativePostRenderFor_Params.CameraDir, sizeof(NativePostRenderFor_Params.CameraDir), &CameraDir, sizeof(CameraDir));

	uFnNativePostRenderFor->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativePostRenderFor, &NativePostRenderFor_Params, nullptr);
	uFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPawn.SetHUDLocation
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 NewHUDLocation                 (CPF_Parm)

void AUDKPawn::SetHUDLocation(struct FVector NewHUDLocation)
{
	static UFunction* uFnSetHUDLocation = nullptr;

	if (!uFnSetHUDLocation)
	{
		uFnSetHUDLocation = UFunction::FindFunction("Function UDKBase.UDKPawn.SetHUDLocation");
	}

	AUDKPawn_execSetHUDLocation_Params SetHUDLocation_Params;
	memset(&SetHUDLocation_Params, 0, sizeof(SetHUDLocation_Params));
	memcpy_s(&SetHUDLocation_Params.NewHUDLocation, sizeof(SetHUDLocation_Params.NewHUDLocation), &NewHUDLocation, sizeof(NewHUDLocation));

	uFnSetHUDLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetHUDLocation, &SetHUDLocation_Params, nullptr);
	uFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPawn.SuggestJumpVelocity
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Destination                    (CPF_Parm)
// struct FVector                 Start                          (CPF_Parm)
// bool                           bRequireFallLanding            (CPF_OptionalParm | CPF_Parm)
// struct FVector                 JumpVelocity                   (CPF_Parm | CPF_OutParm)

bool AUDKPawn::SuggestJumpVelocity(struct FVector Destination, struct FVector Start, bool bRequireFallLanding, struct FVector& JumpVelocity)
{
	static UFunction* uFnSuggestJumpVelocity = nullptr;

	if (!uFnSuggestJumpVelocity)
	{
		uFnSuggestJumpVelocity = UFunction::FindFunction("Function UDKBase.UDKPawn.SuggestJumpVelocity");
	}

	AUDKPawn_execSuggestJumpVelocity_Params SuggestJumpVelocity_Params;
	memset(&SuggestJumpVelocity_Params, 0, sizeof(SuggestJumpVelocity_Params));
	memcpy_s(&SuggestJumpVelocity_Params.Destination, sizeof(SuggestJumpVelocity_Params.Destination), &Destination, sizeof(Destination));
	memcpy_s(&SuggestJumpVelocity_Params.Start, sizeof(SuggestJumpVelocity_Params.Start), &Start, sizeof(Start));
	SuggestJumpVelocity_Params.bRequireFallLanding = bRequireFallLanding;
	memcpy_s(&SuggestJumpVelocity_Params.JumpVelocity, sizeof(SuggestJumpVelocity_Params.JumpVelocity), &JumpVelocity, sizeof(JumpVelocity));

	uFnSuggestJumpVelocity->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSuggestJumpVelocity, &SuggestJumpVelocity_Params, nullptr);
	uFnSuggestJumpVelocity->FunctionFlags |= 0x400;

	memcpy_s(&JumpVelocity, sizeof(JumpVelocity), &SuggestJumpVelocity_Params.JumpVelocity, sizeof(SuggestJumpVelocity_Params.JumpVelocity));

	return SuggestJumpVelocity_Params.ReturnValue;
};

// Function UDKBase.UDKPawn.StartCrouch
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          HeightAdjust                   (CPF_Parm)

void AUDKPawn::eventStartCrouch(float HeightAdjust)
{
	static UFunction* uFnStartCrouch = nullptr;

	if (!uFnStartCrouch)
	{
		uFnStartCrouch = UFunction::FindFunction("Function UDKBase.UDKPawn.StartCrouch");
	}

	AUDKPawn_eventStartCrouch_Params StartCrouch_Params;
	memset(&StartCrouch_Params, 0, sizeof(StartCrouch_Params));
	memcpy_s(&StartCrouch_Params.HeightAdjust, sizeof(StartCrouch_Params.HeightAdjust), &HeightAdjust, sizeof(HeightAdjust));

	this->ProcessEvent(uFnStartCrouch, &StartCrouch_Params, nullptr);
};

// Function UDKBase.UDKPawn.EndCrouch
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          HeightAdjust                   (CPF_Parm)

void AUDKPawn::eventEndCrouch(float HeightAdjust)
{
	static UFunction* uFnEndCrouch = nullptr;

	if (!uFnEndCrouch)
	{
		uFnEndCrouch = UFunction::FindFunction("Function UDKBase.UDKPawn.EndCrouch");
	}

	AUDKPawn_eventEndCrouch_Params EndCrouch_Params;
	memset(&EndCrouch_Params, 0, sizeof(EndCrouch_Params));
	memcpy_s(&EndCrouch_Params.HeightAdjust, sizeof(EndCrouch_Params.HeightAdjust), &HeightAdjust, sizeof(HeightAdjust));

	this->ProcessEvent(uFnEndCrouch, &EndCrouch_Params, nullptr);
};

// Function UDKBase.UDKPawn.StoppedFalling
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKPawn::eventStoppedFalling()
{
	static UFunction* uFnStoppedFalling = nullptr;

	if (!uFnStoppedFalling)
	{
		uFnStoppedFalling = UFunction::FindFunction("Function UDKBase.UDKPawn.StoppedFalling");
	}

	AUDKPawn_eventStoppedFalling_Params StoppedFalling_Params;
	memset(&StoppedFalling_Params, 0, sizeof(StoppedFalling_Params));

	this->ProcessEvent(uFnStoppedFalling, &StoppedFalling_Params, nullptr);
};

// Function UDKBase.UDKPawn.HoldGameObject
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AUDKCarriedObject*       UDKGameObj                     (CPF_Parm)

void AUDKPawn::eventHoldGameObject(class AUDKCarriedObject* UDKGameObj)
{
	static UFunction* uFnHoldGameObject = nullptr;

	if (!uFnHoldGameObject)
	{
		uFnHoldGameObject = UFunction::FindFunction("Function UDKBase.UDKPawn.HoldGameObject");
	}

	AUDKPawn_eventHoldGameObject_Params HoldGameObject_Params;
	memset(&HoldGameObject_Params, 0, sizeof(HoldGameObject_Params));
	memcpy_s(&HoldGameObject_Params.UDKGameObj, sizeof(HoldGameObject_Params.UDKGameObj), &UDKGameObj, sizeof(UDKGameObj));

	this->ProcessEvent(uFnHoldGameObject, &HoldGameObject_Params, nullptr);
};

// Function UDKBase.UDKPawn.IsInvisible
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AUDKPawn::IsInvisible()
{
	static UFunction* uFnIsInvisible = nullptr;

	if (!uFnIsInvisible)
	{
		uFnIsInvisible = UFunction::FindFunction("Function UDKBase.UDKPawn.IsInvisible");
	}

	AUDKPawn_execIsInvisible_Params IsInvisible_Params;
	memset(&IsInvisible_Params, 0, sizeof(IsInvisible_Params));

	uFnIsInvisible->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsInvisible, &IsInvisible_Params, nullptr);
	uFnIsInvisible->FunctionFlags |= 0x400;

	return IsInvisible_Params.ReturnValue;
};

// Function UDKBase.UDKPawn.GetTargetLocation
// [0x00024500] (FUNC_Simulated | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  RequestedBy                    (CPF_OptionalParm | CPF_Parm)
// bool                           bRequestAlternateLoc           (CPF_OptionalParm | CPF_Parm)

struct FVector AUDKPawn::GetTargetLocation(class AActor* RequestedBy, bool bRequestAlternateLoc)
{
	static UFunction* uFnGetTargetLocation = nullptr;

	if (!uFnGetTargetLocation)
	{
		uFnGetTargetLocation = UFunction::FindFunction("Function UDKBase.UDKPawn.GetTargetLocation");
	}

	AUDKPawn_execGetTargetLocation_Params GetTargetLocation_Params;
	memset(&GetTargetLocation_Params, 0, sizeof(GetTargetLocation_Params));
	memcpy_s(&GetTargetLocation_Params.RequestedBy, sizeof(GetTargetLocation_Params.RequestedBy), &RequestedBy, sizeof(RequestedBy));
	GetTargetLocation_Params.bRequestAlternateLoc = bRequestAlternateLoc;

	uFnGetTargetLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTargetLocation, &GetTargetLocation_Params, nullptr);
	uFnGetTargetLocation->FunctionFlags |= 0x400;

	return GetTargetLocation_Params.ReturnValue;
};

// Function UDKBase.UDKPawn.EnsureOverlayComponentLast
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKPawn::EnsureOverlayComponentLast()
{
	static UFunction* uFnEnsureOverlayComponentLast = nullptr;

	if (!uFnEnsureOverlayComponentLast)
	{
		uFnEnsureOverlayComponentLast = UFunction::FindFunction("Function UDKBase.UDKPawn.EnsureOverlayComponentLast");
	}

	AUDKPawn_execEnsureOverlayComponentLast_Params EnsureOverlayComponentLast_Params;
	memset(&EnsureOverlayComponentLast_Params, 0, sizeof(EnsureOverlayComponentLast_Params));

	uFnEnsureOverlayComponentLast->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEnsureOverlayComponentLast, &EnsureOverlayComponentLast_Params, nullptr);
	uFnEnsureOverlayComponentLast->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPawn.RestorePreRagdollCollisionComponent
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKPawn::RestorePreRagdollCollisionComponent()
{
	static UFunction* uFnRestorePreRagdollCollisionComponent = nullptr;

	if (!uFnRestorePreRagdollCollisionComponent)
	{
		uFnRestorePreRagdollCollisionComponent = UFunction::FindFunction("Function UDKBase.UDKPawn.RestorePreRagdollCollisionComponent");
	}

	AUDKPawn_execRestorePreRagdollCollisionComponent_Params RestorePreRagdollCollisionComponent_Params;
	memset(&RestorePreRagdollCollisionComponent_Params, 0, sizeof(RestorePreRagdollCollisionComponent_Params));

	uFnRestorePreRagdollCollisionComponent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRestorePreRagdollCollisionComponent, &RestorePreRagdollCollisionComponent_Params, nullptr);
	uFnRestorePreRagdollCollisionComponent->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPawn.GetBoundingCylinder
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          CollisionRadius                (CPF_Parm | CPF_OutParm)
// float                          CollisionHeight                (CPF_Parm | CPF_OutParm)

void AUDKPawn::GetBoundingCylinder(float& CollisionRadius, float& CollisionHeight)
{
	static UFunction* uFnGetBoundingCylinder = nullptr;

	if (!uFnGetBoundingCylinder)
	{
		uFnGetBoundingCylinder = UFunction::FindFunction("Function UDKBase.UDKPawn.GetBoundingCylinder");
	}

	AUDKPawn_execGetBoundingCylinder_Params GetBoundingCylinder_Params;
	memset(&GetBoundingCylinder_Params, 0, sizeof(GetBoundingCylinder_Params));
	memcpy_s(&GetBoundingCylinder_Params.CollisionRadius, sizeof(GetBoundingCylinder_Params.CollisionRadius), &CollisionRadius, sizeof(CollisionRadius));
	memcpy_s(&GetBoundingCylinder_Params.CollisionHeight, sizeof(GetBoundingCylinder_Params.CollisionHeight), &CollisionHeight, sizeof(CollisionHeight));

	uFnGetBoundingCylinder->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetBoundingCylinder, &GetBoundingCylinder_Params, nullptr);
	uFnGetBoundingCylinder->FunctionFlags |= 0x400;

	memcpy_s(&CollisionRadius, sizeof(CollisionRadius), &GetBoundingCylinder_Params.CollisionRadius, sizeof(GetBoundingCylinder_Params.CollisionRadius));
	memcpy_s(&CollisionHeight, sizeof(CollisionHeight), &GetBoundingCylinder_Params.CollisionHeight, sizeof(GetBoundingCylinder_Params.CollisionHeight));
};

// Function UDKBase.UDKPickupFactory.SetPickupHidden
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKPickupFactory::SetPickupHidden()
{
	static UFunction* uFnSetPickupHidden = nullptr;

	if (!uFnSetPickupHidden)
	{
		uFnSetPickupHidden = UFunction::FindFunction("Function UDKBase.UDKPickupFactory.SetPickupHidden");
	}

	AUDKPickupFactory_execSetPickupHidden_Params SetPickupHidden_Params;
	memset(&SetPickupHidden_Params, 0, sizeof(SetPickupHidden_Params));

	this->ProcessEvent(uFnSetPickupHidden, &SetPickupHidden_Params, nullptr);
};

// Function UDKBase.UDKPickupFactory.SetPickupVisible
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKPickupFactory::SetPickupVisible()
{
	static UFunction* uFnSetPickupVisible = nullptr;

	if (!uFnSetPickupVisible)
	{
		uFnSetPickupVisible = UFunction::FindFunction("Function UDKBase.UDKPickupFactory.SetPickupVisible");
	}

	AUDKPickupFactory_execSetPickupVisible_Params SetPickupVisible_Params;
	memset(&SetPickupVisible_Params, 0, sizeof(SetPickupVisible_Params));

	this->ProcessEvent(uFnSetPickupVisible, &SetPickupVisible_Params, nullptr);
};

// Function UDKBase.UDKPlayerController.GetTargetAdhesionFrictionTarget
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          MaxDistance                    (CPF_Parm)
// struct FVector                 CamLoc                         (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FRotator                CamRot                         (CPF_Const | CPF_Parm | CPF_OutParm)

class APawn* AUDKPlayerController::GetTargetAdhesionFrictionTarget(float MaxDistance, struct FVector& CamLoc, struct FRotator& CamRot)
{
	static UFunction* uFnGetTargetAdhesionFrictionTarget = nullptr;

	if (!uFnGetTargetAdhesionFrictionTarget)
	{
		uFnGetTargetAdhesionFrictionTarget = UFunction::FindFunction("Function UDKBase.UDKPlayerController.GetTargetAdhesionFrictionTarget");
	}

	AUDKPlayerController_execGetTargetAdhesionFrictionTarget_Params GetTargetAdhesionFrictionTarget_Params;
	memset(&GetTargetAdhesionFrictionTarget_Params, 0, sizeof(GetTargetAdhesionFrictionTarget_Params));
	memcpy_s(&GetTargetAdhesionFrictionTarget_Params.MaxDistance, sizeof(GetTargetAdhesionFrictionTarget_Params.MaxDistance), &MaxDistance, sizeof(MaxDistance));
	memcpy_s(&GetTargetAdhesionFrictionTarget_Params.CamLoc, sizeof(GetTargetAdhesionFrictionTarget_Params.CamLoc), &CamLoc, sizeof(CamLoc));
	memcpy_s(&GetTargetAdhesionFrictionTarget_Params.CamRot, sizeof(GetTargetAdhesionFrictionTarget_Params.CamRot), &CamRot, sizeof(CamRot));

	uFnGetTargetAdhesionFrictionTarget->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTargetAdhesionFrictionTarget, &GetTargetAdhesionFrictionTarget_Params, nullptr);
	uFnGetTargetAdhesionFrictionTarget->FunctionFlags |= 0x400;

	memcpy_s(&CamLoc, sizeof(CamLoc), &GetTargetAdhesionFrictionTarget_Params.CamLoc, sizeof(GetTargetAdhesionFrictionTarget_Params.CamLoc));
	memcpy_s(&CamRot, sizeof(CamRot), &GetTargetAdhesionFrictionTarget_Params.CamRot, sizeof(GetTargetAdhesionFrictionTarget_Params.CamRot));

	return GetTargetAdhesionFrictionTarget_Params.ReturnValue;
};

// Function UDKBase.UDKPlayerController.ClearCameraEffect
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKPlayerController::ClearCameraEffect()
{
	static UFunction* uFnClearCameraEffect = nullptr;

	if (!uFnClearCameraEffect)
	{
		uFnClearCameraEffect = UFunction::FindFunction("Function UDKBase.UDKPlayerController.ClearCameraEffect");
	}

	AUDKPlayerController_execClearCameraEffect_Params ClearCameraEffect_Params;
	memset(&ClearCameraEffect_Params, 0, sizeof(ClearCameraEffect_Params));

	this->ProcessEvent(uFnClearCameraEffect, &ClearCameraEffect_Params, nullptr);
};

// Function UDKBase.UDKPlayerController.ClientSpawnCameraEffect
// [0xFFFF000001820142] (FUNC_Defined | FUNC_Net | FUNC_Simulated | FUNC_Public | FUNC_HasDefaults | FUNC_NetClient | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  CameraEffectClass              (CPF_Parm)

void AUDKPlayerController::ClientSpawnCameraEffect(class UClass* CameraEffectClass)
{
	static UFunction* uFnClientSpawnCameraEffect = nullptr;

	if (!uFnClientSpawnCameraEffect)
	{
		uFnClientSpawnCameraEffect = UFunction::FindFunction("Function UDKBase.UDKPlayerController.ClientSpawnCameraEffect");
	}

	AUDKPlayerController_execClientSpawnCameraEffect_Params ClientSpawnCameraEffect_Params;
	memset(&ClientSpawnCameraEffect_Params, 0, sizeof(ClientSpawnCameraEffect_Params));
	memcpy_s(&ClientSpawnCameraEffect_Params.CameraEffectClass, sizeof(ClientSpawnCameraEffect_Params.CameraEffectClass), &CameraEffectClass, sizeof(CameraEffectClass));

	this->ProcessEvent(uFnClientSpawnCameraEffect, &ClientSpawnCameraEffect_Params, nullptr);
};

// Function UDKBase.UDKPlayerController.RemoveCameraEffect
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AUDKEmitCameraEffect*    CamEmitter                     (CPF_Parm)

void AUDKPlayerController::RemoveCameraEffect(class AUDKEmitCameraEffect* CamEmitter)
{
	static UFunction* uFnRemoveCameraEffect = nullptr;

	if (!uFnRemoveCameraEffect)
	{
		uFnRemoveCameraEffect = UFunction::FindFunction("Function UDKBase.UDKPlayerController.RemoveCameraEffect");
	}

	AUDKPlayerController_execRemoveCameraEffect_Params RemoveCameraEffect_Params;
	memset(&RemoveCameraEffect_Params, 0, sizeof(RemoveCameraEffect_Params));
	memcpy_s(&RemoveCameraEffect_Params.CamEmitter, sizeof(RemoveCameraEffect_Params.CamEmitter), &CamEmitter, sizeof(CamEmitter));

	this->ProcessEvent(uFnRemoveCameraEffect, &RemoveCameraEffect_Params, nullptr);
};

// Function UDKBase.UDKPlayerController.IsMouseAvailable
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AUDKPlayerController::IsMouseAvailable()
{
	static UFunction* uFnIsMouseAvailable = nullptr;

	if (!uFnIsMouseAvailable)
	{
		uFnIsMouseAvailable = UFunction::FindFunction("Function UDKBase.UDKPlayerController.IsMouseAvailable");
	}

	AUDKPlayerController_execIsMouseAvailable_Params IsMouseAvailable_Params;
	memset(&IsMouseAvailable_Params, 0, sizeof(IsMouseAvailable_Params));

	uFnIsMouseAvailable->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsMouseAvailable, &IsMouseAvailable_Params, nullptr);
	uFnIsMouseAvailable->FunctionFlags |= 0x400;

	return IsMouseAvailable_Params.ReturnValue;
};

// Function UDKBase.UDKPlayerController.IsKeyboardAvailable
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AUDKPlayerController::IsKeyboardAvailable()
{
	static UFunction* uFnIsKeyboardAvailable = nullptr;

	if (!uFnIsKeyboardAvailable)
	{
		uFnIsKeyboardAvailable = UFunction::FindFunction("Function UDKBase.UDKPlayerController.IsKeyboardAvailable");
	}

	AUDKPlayerController_execIsKeyboardAvailable_Params IsKeyboardAvailable_Params;
	memset(&IsKeyboardAvailable_Params, 0, sizeof(IsKeyboardAvailable_Params));

	uFnIsKeyboardAvailable->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsKeyboardAvailable, &IsKeyboardAvailable_Params, nullptr);
	uFnIsKeyboardAvailable->FunctionFlags |= 0x400;

	return IsKeyboardAvailable_Params.ReturnValue;
};

// Function UDKBase.UDKPlayerController.SetHardwarePhysicsEnabled
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bEnabled                       (CPF_Parm)

void AUDKPlayerController::SetHardwarePhysicsEnabled(bool bEnabled)
{
	static UFunction* uFnSetHardwarePhysicsEnabled = nullptr;

	if (!uFnSetHardwarePhysicsEnabled)
	{
		uFnSetHardwarePhysicsEnabled = UFunction::FindFunction("Function UDKBase.UDKPlayerController.SetHardwarePhysicsEnabled");
	}

	AUDKPlayerController_execSetHardwarePhysicsEnabled_Params SetHardwarePhysicsEnabled_Params;
	memset(&SetHardwarePhysicsEnabled_Params, 0, sizeof(SetHardwarePhysicsEnabled_Params));
	SetHardwarePhysicsEnabled_Params.bEnabled = bEnabled;

	uFnSetHardwarePhysicsEnabled->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetHardwarePhysicsEnabled, &SetHardwarePhysicsEnabled_Params, nullptr);
	uFnSetHardwarePhysicsEnabled->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPlayerController.SetGamma
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          GammaValue                     (CPF_Parm)

void AUDKPlayerController::SetGamma(float GammaValue)
{
	static UFunction* uFnSetGamma = nullptr;

	if (!uFnSetGamma)
	{
		uFnSetGamma = UFunction::FindFunction("Function UDKBase.UDKPlayerController.SetGamma");
	}

	AUDKPlayerController_execSetGamma_Params SetGamma_Params;
	memset(&SetGamma_Params, 0, sizeof(SetGamma_Params));
	memcpy_s(&SetGamma_Params.GammaValue, sizeof(SetGamma_Params.GammaValue), &GammaValue, sizeof(GammaValue));

	uFnSetGamma->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetGamma, &SetGamma_Params, nullptr);
	uFnSetGamma->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPlayerInput.GetUDKBindNameFromCommand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  BindCommand                    (CPF_Parm | CPF_NeedCtorLink)

class FString UUDKPlayerInput::GetUDKBindNameFromCommand(class FString BindCommand)
{
	static UFunction* uFnGetUDKBindNameFromCommand = nullptr;

	if (!uFnGetUDKBindNameFromCommand)
	{
		uFnGetUDKBindNameFromCommand = UFunction::FindFunction("Function UDKBase.UDKPlayerInput.GetUDKBindNameFromCommand");
	}

	UUDKPlayerInput_execGetUDKBindNameFromCommand_Params GetUDKBindNameFromCommand_Params;
	memset(&GetUDKBindNameFromCommand_Params, 0, sizeof(GetUDKBindNameFromCommand_Params));
	memcpy_s(&GetUDKBindNameFromCommand_Params.BindCommand, sizeof(GetUDKBindNameFromCommand_Params.BindCommand), &BindCommand, sizeof(BindCommand));

	uFnGetUDKBindNameFromCommand->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetUDKBindNameFromCommand, &GetUDKBindNameFromCommand_Params, nullptr);
	uFnGetUDKBindNameFromCommand->FunctionFlags |= 0x400;

	return GetUDKBindNameFromCommand_Params.ReturnValue;
};

// Function UDKBase.UDKProfileSettings.ResetKeysToDefault
// [0x00026400] (FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ULocalPlayer*            InPlayerOwner                  (CPF_OptionalParm | CPF_Parm)

void UUDKProfileSettings::ResetKeysToDefault(class ULocalPlayer* InPlayerOwner)
{
	static UFunction* uFnResetKeysToDefault = nullptr;

	if (!uFnResetKeysToDefault)
	{
		uFnResetKeysToDefault = UFunction::FindFunction("Function UDKBase.UDKProfileSettings.ResetKeysToDefault");
	}

	UUDKProfileSettings_execResetKeysToDefault_Params ResetKeysToDefault_Params;
	memset(&ResetKeysToDefault_Params, 0, sizeof(ResetKeysToDefault_Params));
	memcpy_s(&ResetKeysToDefault_Params.InPlayerOwner, sizeof(ResetKeysToDefault_Params.InPlayerOwner), &InPlayerOwner, sizeof(InPlayerOwner));

	uFnResetKeysToDefault->FunctionFlags &= ~0x400;
	UUDKProfileSettings::StaticClass()->ProcessEvent(uFnResetKeysToDefault, &ResetKeysToDefault_Params, nullptr);
	uFnResetKeysToDefault->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKProfileSettings.ResetToDefault
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ProfileId                      (CPF_Parm)

void UUDKProfileSettings::ResetToDefault(int32_t ProfileId)
{
	static UFunction* uFnResetToDefault = nullptr;

	if (!uFnResetToDefault)
	{
		uFnResetToDefault = UFunction::FindFunction("Function UDKBase.UDKProfileSettings.ResetToDefault");
	}

	UUDKProfileSettings_execResetToDefault_Params ResetToDefault_Params;
	memset(&ResetToDefault_Params, 0, sizeof(ResetToDefault_Params));
	memcpy_s(&ResetToDefault_Params.ProfileId, sizeof(ResetToDefault_Params.ProfileId), &ProfileId, sizeof(ProfileId));

	uFnResetToDefault->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetToDefault, &ResetToDefault_Params, nullptr);
	uFnResetToDefault->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKProjectile.CreateProjectileLight
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKProjectile::eventCreateProjectileLight()
{
	static UFunction* uFnCreateProjectileLight = nullptr;

	if (!uFnCreateProjectileLight)
	{
		uFnCreateProjectileLight = UFunction::FindFunction("Function UDKBase.UDKProjectile.CreateProjectileLight");
	}

	AUDKProjectile_eventCreateProjectileLight_Params CreateProjectileLight_Params;
	memset(&CreateProjectileLight_Params, 0, sizeof(CreateProjectileLight_Params));

	this->ProcessEvent(uFnCreateProjectileLight, &CreateProjectileLight_Params, nullptr);
};

// Function UDKBase.UDKProjectile.GetTerminalVelocity
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AUDKProjectile::GetTerminalVelocity()
{
	static UFunction* uFnGetTerminalVelocity = nullptr;

	if (!uFnGetTerminalVelocity)
	{
		uFnGetTerminalVelocity = UFunction::FindFunction("Function UDKBase.UDKProjectile.GetTerminalVelocity");
	}

	AUDKProjectile_execGetTerminalVelocity_Params GetTerminalVelocity_Params;
	memset(&GetTerminalVelocity_Params, 0, sizeof(GetTerminalVelocity_Params));

	uFnGetTerminalVelocity->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTerminalVelocity, &GetTerminalVelocity_Params, nullptr);
	uFnGetTerminalVelocity->FunctionFlags |= 0x400;

	return GetTerminalVelocity_Params.ReturnValue;
};

// Function UDKBase.UDKScout.SuggestJumpVelocity
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Destination                    (CPF_Parm)
// struct FVector                 Start                          (CPF_Parm)
// bool                           bRequireFallLanding            (CPF_OptionalParm | CPF_Parm)
// struct FVector                 JumpVelocity                   (CPF_Parm | CPF_OutParm)

bool AUDKScout::SuggestJumpVelocity(struct FVector Destination, struct FVector Start, bool bRequireFallLanding, struct FVector& JumpVelocity)
{
	static UFunction* uFnSuggestJumpVelocity = nullptr;

	if (!uFnSuggestJumpVelocity)
	{
		uFnSuggestJumpVelocity = UFunction::FindFunction("Function UDKBase.UDKScout.SuggestJumpVelocity");
	}

	AUDKScout_execSuggestJumpVelocity_Params SuggestJumpVelocity_Params;
	memset(&SuggestJumpVelocity_Params, 0, sizeof(SuggestJumpVelocity_Params));
	memcpy_s(&SuggestJumpVelocity_Params.Destination, sizeof(SuggestJumpVelocity_Params.Destination), &Destination, sizeof(Destination));
	memcpy_s(&SuggestJumpVelocity_Params.Start, sizeof(SuggestJumpVelocity_Params.Start), &Start, sizeof(Start));
	SuggestJumpVelocity_Params.bRequireFallLanding = bRequireFallLanding;
	memcpy_s(&SuggestJumpVelocity_Params.JumpVelocity, sizeof(SuggestJumpVelocity_Params.JumpVelocity), &JumpVelocity, sizeof(JumpVelocity));

	uFnSuggestJumpVelocity->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSuggestJumpVelocity, &SuggestJumpVelocity_Params, nullptr);
	uFnSuggestJumpVelocity->FunctionFlags |= 0x400;

	memcpy_s(&JumpVelocity, sizeof(JumpVelocity), &SuggestJumpVelocity_Params.JumpVelocity, sizeof(SuggestJumpVelocity_Params.JumpVelocity));

	return SuggestJumpVelocity_Params.ReturnValue;
};

// Function UDKBase.UDKScriptedNavigationPoint.NotifyAnchorFindingResult
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ANavigationPoint*        EndAnchor                      (CPF_Parm)
// class APawn*                   RouteFinder                    (CPF_Parm)

void AUDKScriptedNavigationPoint::eventNotifyAnchorFindingResult(class ANavigationPoint* EndAnchor, class APawn* RouteFinder)
{
	static UFunction* uFnNotifyAnchorFindingResult = nullptr;

	if (!uFnNotifyAnchorFindingResult)
	{
		uFnNotifyAnchorFindingResult = UFunction::FindFunction("Function UDKBase.UDKScriptedNavigationPoint.NotifyAnchorFindingResult");
	}

	AUDKScriptedNavigationPoint_eventNotifyAnchorFindingResult_Params NotifyAnchorFindingResult_Params;
	memset(&NotifyAnchorFindingResult_Params, 0, sizeof(NotifyAnchorFindingResult_Params));
	memcpy_s(&NotifyAnchorFindingResult_Params.EndAnchor, sizeof(NotifyAnchorFindingResult_Params.EndAnchor), &EndAnchor, sizeof(EndAnchor));
	memcpy_s(&NotifyAnchorFindingResult_Params.RouteFinder, sizeof(NotifyAnchorFindingResult_Params.RouteFinder), &RouteFinder, sizeof(RouteFinder));

	this->ProcessEvent(uFnNotifyAnchorFindingResult, &NotifyAnchorFindingResult_Params, nullptr);
};

// Function UDKBase.UDKScriptedNavigationPoint.SpecifyEndAnchor
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ANavigationPoint*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   RouteFinder                    (CPF_Parm)

class ANavigationPoint* AUDKScriptedNavigationPoint::eventSpecifyEndAnchor(class APawn* RouteFinder)
{
	static UFunction* uFnSpecifyEndAnchor = nullptr;

	if (!uFnSpecifyEndAnchor)
	{
		uFnSpecifyEndAnchor = UFunction::FindFunction("Function UDKBase.UDKScriptedNavigationPoint.SpecifyEndAnchor");
	}

	AUDKScriptedNavigationPoint_eventSpecifyEndAnchor_Params SpecifyEndAnchor_Params;
	memset(&SpecifyEndAnchor_Params, 0, sizeof(SpecifyEndAnchor_Params));
	memcpy_s(&SpecifyEndAnchor_Params.RouteFinder, sizeof(SpecifyEndAnchor_Params.RouteFinder), &RouteFinder, sizeof(RouteFinder));

	this->ProcessEvent(uFnSpecifyEndAnchor, &SpecifyEndAnchor_Params, nullptr);

	return SpecifyEndAnchor_Params.ReturnValue;
};

// Function UDKBase.UDKSkeletalMeshComponent.SetFOV
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          NewFOV                         (CPF_Parm)

void UUDKSkeletalMeshComponent::SetFOV(float NewFOV)
{
	static UFunction* uFnSetFOV = nullptr;

	if (!uFnSetFOV)
	{
		uFnSetFOV = UFunction::FindFunction("Function UDKBase.UDKSkeletalMeshComponent.SetFOV");
	}

	UUDKSkeletalMeshComponent_execSetFOV_Params SetFOV_Params;
	memset(&SetFOV_Params, 0, sizeof(SetFOV_Params));
	memcpy_s(&SetFOV_Params.NewFOV, sizeof(SetFOV_Params.NewFOV), &NewFOV, sizeof(NewFOV));

	uFnSetFOV->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetFOV, &SetFOV_Params, nullptr);
	uFnSetFOV->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKSkeletalMeshComponent.PreloadTextures
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bForcePreload                  (CPF_Parm)
// float                          ClearTime                      (CPF_Parm)

void UUDKSkeletalMeshComponent::eventPreloadTextures(bool bForcePreload, float ClearTime)
{
	static UFunction* uFnPreloadTextures = nullptr;

	if (!uFnPreloadTextures)
	{
		uFnPreloadTextures = UFunction::FindFunction("Function UDKBase.UDKSkeletalMeshComponent.PreloadTextures");
	}

	UUDKSkeletalMeshComponent_eventPreloadTextures_Params PreloadTextures_Params;
	memset(&PreloadTextures_Params, 0, sizeof(PreloadTextures_Params));
	PreloadTextures_Params.bForcePreload = bForcePreload;
	memcpy_s(&PreloadTextures_Params.ClearTime, sizeof(PreloadTextures_Params.ClearTime), &ClearTime, sizeof(ClearTime));

	this->ProcessEvent(uFnPreloadTextures, &PreloadTextures_Params, nullptr);
};

// Function UDKBase.UDKTeamOwnedInfo.GetTeamNum
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t AUDKTeamOwnedInfo::GetTeamNum()
{
	static UFunction* uFnGetTeamNum = nullptr;

	if (!uFnGetTeamNum)
	{
		uFnGetTeamNum = UFunction::FindFunction("Function UDKBase.UDKTeamOwnedInfo.GetTeamNum");
	}

	AUDKTeamOwnedInfo_execGetTeamNum_Params GetTeamNum_Params;
	memset(&GetTeamNum_Params, 0, sizeof(GetTeamNum_Params));

	uFnGetTeamNum->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTeamNum, &GetTeamNum_Params, nullptr);
	uFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Params.ReturnValue;
};

// Function UDKBase.UDKTeleporterBase.Accept
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Incoming                       (CPF_Parm)
// class AActor*                  Source                         (CPF_Parm)

bool AUDKTeleporterBase::eventAccept(class AActor* Incoming, class AActor* Source)
{
	static UFunction* uFnAccept = nullptr;

	if (!uFnAccept)
	{
		uFnAccept = UFunction::FindFunction("Function UDKBase.UDKTeleporterBase.Accept");
	}

	AUDKTeleporterBase_eventAccept_Params Accept_Params;
	memset(&Accept_Params, 0, sizeof(Accept_Params));
	memcpy_s(&Accept_Params.Incoming, sizeof(Accept_Params.Incoming), &Incoming, sizeof(Incoming));
	memcpy_s(&Accept_Params.Source, sizeof(Accept_Params.Source), &Source, sizeof(Source));

	this->ProcessEvent(uFnAccept, &Accept_Params, nullptr);

	return Accept_Params.ReturnValue;
};

// Function UDKBase.UDKTeleporterBase.InitializePortalEffect
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Dest                           (CPF_Parm)

void AUDKTeleporterBase::InitializePortalEffect(class AActor* Dest)
{
	static UFunction* uFnInitializePortalEffect = nullptr;

	if (!uFnInitializePortalEffect)
	{
		uFnInitializePortalEffect = UFunction::FindFunction("Function UDKBase.UDKTeleporterBase.InitializePortalEffect");
	}

	AUDKTeleporterBase_execInitializePortalEffect_Params InitializePortalEffect_Params;
	memset(&InitializePortalEffect_Params, 0, sizeof(InitializePortalEffect_Params));
	memcpy_s(&InitializePortalEffect_Params.Dest, sizeof(InitializePortalEffect_Params.Dest), &Dest, sizeof(Dest));

	this->ProcessEvent(uFnInitializePortalEffect, &InitializePortalEffect_Params, nullptr);
};

// Function UDKBase.UDKTeleporterBase.PostBeginPlay
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKTeleporterBase::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function UDKBase.UDKTeleporterBase.PostBeginPlay");
	}

	AUDKTeleporterBase_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function UDKBase.UDKUIDataProvider_SearchResult.IsPrivateServer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UUDKUIDataProvider_SearchResult::IsPrivateServer()
{
	static UFunction* uFnIsPrivateServer = nullptr;

	if (!uFnIsPrivateServer)
	{
		uFnIsPrivateServer = UFunction::FindFunction("Function UDKBase.UDKUIDataProvider_SearchResult.IsPrivateServer");
	}

	UUDKUIDataProvider_SearchResult_execIsPrivateServer_Params IsPrivateServer_Params;
	memset(&IsPrivateServer_Params, 0, sizeof(IsPrivateServer_Params));

	uFnIsPrivateServer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsPrivateServer, &IsPrivateServer_Params, nullptr);
	uFnIsPrivateServer->FunctionFlags |= 0x400;

	return IsPrivateServer_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_MenuItems.AddListElementProvidersKey
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   KeyName                        (CPF_Parm)
// class UUDKUIResourceDataProvider* Provider                       (CPF_Parm)

void UUDKUIDataStore_MenuItems::AddListElementProvidersKey(struct FName KeyName, class UUDKUIResourceDataProvider* Provider)
{
	static UFunction* uFnAddListElementProvidersKey = nullptr;

	if (!uFnAddListElementProvidersKey)
	{
		uFnAddListElementProvidersKey = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_MenuItems.AddListElementProvidersKey");
	}

	UUDKUIDataStore_MenuItems_execAddListElementProvidersKey_Params AddListElementProvidersKey_Params;
	memset(&AddListElementProvidersKey_Params, 0, sizeof(AddListElementProvidersKey_Params));
	memcpy_s(&AddListElementProvidersKey_Params.KeyName, sizeof(AddListElementProvidersKey_Params.KeyName), &KeyName, sizeof(KeyName));
	memcpy_s(&AddListElementProvidersKey_Params.Provider, sizeof(AddListElementProvidersKey_Params.Provider), &Provider, sizeof(Provider));

	uFnAddListElementProvidersKey->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddListElementProvidersKey, &AddListElementProvidersKey_Params, nullptr);
	uFnAddListElementProvidersKey->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_MenuItems.RemoveListElementProvidersKey
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   KeyName                        (CPF_Parm)

void UUDKUIDataStore_MenuItems::RemoveListElementProvidersKey(struct FName KeyName)
{
	static UFunction* uFnRemoveListElementProvidersKey = nullptr;

	if (!uFnRemoveListElementProvidersKey)
	{
		uFnRemoveListElementProvidersKey = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_MenuItems.RemoveListElementProvidersKey");
	}

	UUDKUIDataStore_MenuItems_execRemoveListElementProvidersKey_Params RemoveListElementProvidersKey_Params;
	memset(&RemoveListElementProvidersKey_Params, 0, sizeof(RemoveListElementProvidersKey_Params));
	memcpy_s(&RemoveListElementProvidersKey_Params.KeyName, sizeof(RemoveListElementProvidersKey_Params.KeyName), &KeyName, sizeof(KeyName));

	uFnRemoveListElementProvidersKey->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRemoveListElementProvidersKey, &RemoveListElementProvidersKey_Params, nullptr);
	uFnRemoveListElementProvidersKey->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_MenuItems.InitializeListElementProviders
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUDKUIDataStore_MenuItems::eventInitializeListElementProviders()
{
	static UFunction* uFnInitializeListElementProviders = nullptr;

	if (!uFnInitializeListElementProviders)
	{
		uFnInitializeListElementProviders = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_MenuItems.InitializeListElementProviders");
	}

	UUDKUIDataStore_MenuItems_eventInitializeListElementProviders_Params InitializeListElementProviders_Params;
	memset(&InitializeListElementProviders_Params, 0, sizeof(InitializeListElementProviders_Params));

	this->ProcessEvent(uFnInitializeListElementProviders, &InitializeListElementProviders_Params, nullptr);
};

// Function UDKBase.UDKUIDataStore_MenuItems.GetProviderSet
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   ProviderFieldName              (CPF_Parm)
// TArray<class UUDKUIResourceDataProvider*> OutProviders                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UUDKUIDataStore_MenuItems::GetProviderSet(struct FName ProviderFieldName, TArray<class UUDKUIResourceDataProvider*>& OutProviders)
{
	static UFunction* uFnGetProviderSet = nullptr;

	if (!uFnGetProviderSet)
	{
		uFnGetProviderSet = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_MenuItems.GetProviderSet");
	}

	UUDKUIDataStore_MenuItems_execGetProviderSet_Params GetProviderSet_Params;
	memset(&GetProviderSet_Params, 0, sizeof(GetProviderSet_Params));
	memcpy_s(&GetProviderSet_Params.ProviderFieldName, sizeof(GetProviderSet_Params.ProviderFieldName), &ProviderFieldName, sizeof(ProviderFieldName));
	memcpy_s(&GetProviderSet_Params.OutProviders, sizeof(GetProviderSet_Params.OutProviders), &OutProviders, sizeof(OutProviders));

	uFnGetProviderSet->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetProviderSet, &GetProviderSet_Params, nullptr);
	uFnGetProviderSet->FunctionFlags |= 0x400;

	memcpy_s(&OutProviders, sizeof(OutProviders), &GetProviderSet_Params.OutProviders, sizeof(GetProviderSet_Params.OutProviders));

	return GetProviderSet_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_MenuItems.GetAllResourceDataProviders
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  ProviderClass                  (CPF_Parm)
// TArray<class UUDKUIResourceDataProvider*> Providers                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UUDKUIDataStore_MenuItems::GetAllResourceDataProviders(class UClass* ProviderClass, TArray<class UUDKUIResourceDataProvider*>& Providers)
{
	static UFunction* uFnGetAllResourceDataProviders = nullptr;

	if (!uFnGetAllResourceDataProviders)
	{
		uFnGetAllResourceDataProviders = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_MenuItems.GetAllResourceDataProviders");
	}

	UUDKUIDataStore_MenuItems_execGetAllResourceDataProviders_Params GetAllResourceDataProviders_Params;
	memset(&GetAllResourceDataProviders_Params, 0, sizeof(GetAllResourceDataProviders_Params));
	memcpy_s(&GetAllResourceDataProviders_Params.ProviderClass, sizeof(GetAllResourceDataProviders_Params.ProviderClass), &ProviderClass, sizeof(ProviderClass));
	memcpy_s(&GetAllResourceDataProviders_Params.Providers, sizeof(GetAllResourceDataProviders_Params.Providers), &Providers, sizeof(Providers));

	uFnGetAllResourceDataProviders->FunctionFlags &= ~0x400;
	UUDKUIDataStore_MenuItems::StaticClass()->ProcessEvent(uFnGetAllResourceDataProviders, &GetAllResourceDataProviders_Params, nullptr);
	uFnGetAllResourceDataProviders->FunctionFlags |= 0x400;

	memcpy_s(&Providers, sizeof(Providers), &GetAllResourceDataProviders_Params.Providers, sizeof(GetAllResourceDataProviders_Params.Providers));
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.ClearBoundKeyCache
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUDKUIDataStore_StringAliasBindingMap::ClearBoundKeyCache()
{
	static UFunction* uFnClearBoundKeyCache = nullptr;

	if (!uFnClearBoundKeyCache)
	{
		uFnClearBoundKeyCache = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.ClearBoundKeyCache");
	}

	UUDKUIDataStore_StringAliasBindingMap_execClearBoundKeyCache_Params ClearBoundKeyCache_Params;
	memset(&ClearBoundKeyCache_Params, 0, sizeof(ClearBoundKeyCache_Params));

	uFnClearBoundKeyCache->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearBoundKeyCache, &ClearBoundKeyCache_Params, nullptr);
	uFnClearBoundKeyCache->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.AddMappingToBoundKeyCache
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class FString                  Command                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  MappingStr                     (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        FieldIndex                     (CPF_Parm)

void UUDKUIDataStore_StringAliasBindingMap::AddMappingToBoundKeyCache(class FString Command, class FString MappingStr, int32_t FieldIndex)
{
	static UFunction* uFnAddMappingToBoundKeyCache = nullptr;

	if (!uFnAddMappingToBoundKeyCache)
	{
		uFnAddMappingToBoundKeyCache = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.AddMappingToBoundKeyCache");
	}

	UUDKUIDataStore_StringAliasBindingMap_execAddMappingToBoundKeyCache_Params AddMappingToBoundKeyCache_Params;
	memset(&AddMappingToBoundKeyCache_Params, 0, sizeof(AddMappingToBoundKeyCache_Params));
	memcpy_s(&AddMappingToBoundKeyCache_Params.Command, sizeof(AddMappingToBoundKeyCache_Params.Command), &Command, sizeof(Command));
	memcpy_s(&AddMappingToBoundKeyCache_Params.MappingStr, sizeof(AddMappingToBoundKeyCache_Params.MappingStr), &MappingStr, sizeof(MappingStr));
	memcpy_s(&AddMappingToBoundKeyCache_Params.FieldIndex, sizeof(AddMappingToBoundKeyCache_Params.FieldIndex), &FieldIndex, sizeof(FieldIndex));

	uFnAddMappingToBoundKeyCache->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddMappingToBoundKeyCache, &AddMappingToBoundKeyCache_Params, nullptr);
	uFnAddMappingToBoundKeyCache->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.FindMappingInBoundKeyCache
// [0x00480401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Command                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  MappingStr                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// int32_t                        FieldIndex                     (CPF_Parm | CPF_OutParm)

bool UUDKUIDataStore_StringAliasBindingMap::FindMappingInBoundKeyCache(class FString Command, class FString& MappingStr, int32_t& FieldIndex)
{
	static UFunction* uFnFindMappingInBoundKeyCache = nullptr;

	if (!uFnFindMappingInBoundKeyCache)
	{
		uFnFindMappingInBoundKeyCache = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.FindMappingInBoundKeyCache");
	}

	UUDKUIDataStore_StringAliasBindingMap_execFindMappingInBoundKeyCache_Params FindMappingInBoundKeyCache_Params;
	memset(&FindMappingInBoundKeyCache_Params, 0, sizeof(FindMappingInBoundKeyCache_Params));
	memcpy_s(&FindMappingInBoundKeyCache_Params.Command, sizeof(FindMappingInBoundKeyCache_Params.Command), &Command, sizeof(Command));
	memcpy_s(&FindMappingInBoundKeyCache_Params.MappingStr, sizeof(FindMappingInBoundKeyCache_Params.MappingStr), &MappingStr, sizeof(MappingStr));
	memcpy_s(&FindMappingInBoundKeyCache_Params.FieldIndex, sizeof(FindMappingInBoundKeyCache_Params.FieldIndex), &FieldIndex, sizeof(FieldIndex));

	uFnFindMappingInBoundKeyCache->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFindMappingInBoundKeyCache, &FindMappingInBoundKeyCache_Params, nullptr);
	uFnFindMappingInBoundKeyCache->FunctionFlags |= 0x400;

	memcpy_s(&MappingStr, sizeof(MappingStr), &FindMappingInBoundKeyCache_Params.MappingStr, sizeof(FindMappingInBoundKeyCache_Params.MappingStr));
	memcpy_s(&FieldIndex, sizeof(FieldIndex), &FindMappingInBoundKeyCache_Params.FieldIndex, sizeof(FindMappingInBoundKeyCache_Params.FieldIndex));

	return FindMappingInBoundKeyCache_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetBoundStringWithFieldName
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FieldName                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  MappedString                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// int32_t                        StartIndex                     (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
// class FString                  BindString                     (CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UUDKUIDataStore_StringAliasBindingMap::GetBoundStringWithFieldName(class FString FieldName, class FString& MappedString, int32_t& StartIndex, class FString& BindString)
{
	static UFunction* uFnGetBoundStringWithFieldName = nullptr;

	if (!uFnGetBoundStringWithFieldName)
	{
		uFnGetBoundStringWithFieldName = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetBoundStringWithFieldName");
	}

	UUDKUIDataStore_StringAliasBindingMap_execGetBoundStringWithFieldName_Params GetBoundStringWithFieldName_Params;
	memset(&GetBoundStringWithFieldName_Params, 0, sizeof(GetBoundStringWithFieldName_Params));
	memcpy_s(&GetBoundStringWithFieldName_Params.FieldName, sizeof(GetBoundStringWithFieldName_Params.FieldName), &FieldName, sizeof(FieldName));
	memcpy_s(&GetBoundStringWithFieldName_Params.MappedString, sizeof(GetBoundStringWithFieldName_Params.MappedString), &MappedString, sizeof(MappedString));
	memcpy_s(&GetBoundStringWithFieldName_Params.StartIndex, sizeof(GetBoundStringWithFieldName_Params.StartIndex), &StartIndex, sizeof(StartIndex));
	memcpy_s(&GetBoundStringWithFieldName_Params.BindString, sizeof(GetBoundStringWithFieldName_Params.BindString), &BindString, sizeof(BindString));

	uFnGetBoundStringWithFieldName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetBoundStringWithFieldName, &GetBoundStringWithFieldName_Params, nullptr);
	uFnGetBoundStringWithFieldName->FunctionFlags |= 0x400;

	memcpy_s(&MappedString, sizeof(MappedString), &GetBoundStringWithFieldName_Params.MappedString, sizeof(GetBoundStringWithFieldName_Params.MappedString));
	memcpy_s(&StartIndex, sizeof(StartIndex), &GetBoundStringWithFieldName_Params.StartIndex, sizeof(GetBoundStringWithFieldName_Params.StartIndex));
	memcpy_s(&BindString, sizeof(BindString), &GetBoundStringWithFieldName_Params.BindString, sizeof(GetBoundStringWithFieldName_Params.BindString));

	return GetBoundStringWithFieldName_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetStringWithFieldName
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FieldName                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  MappedString                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UUDKUIDataStore_StringAliasBindingMap::GetStringWithFieldName(class FString FieldName, class FString& MappedString)
{
	static UFunction* uFnGetStringWithFieldName = nullptr;

	if (!uFnGetStringWithFieldName)
	{
		uFnGetStringWithFieldName = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetStringWithFieldName");
	}

	UUDKUIDataStore_StringAliasBindingMap_execGetStringWithFieldName_Params GetStringWithFieldName_Params;
	memset(&GetStringWithFieldName_Params, 0, sizeof(GetStringWithFieldName_Params));
	memcpy_s(&GetStringWithFieldName_Params.FieldName, sizeof(GetStringWithFieldName_Params.FieldName), &FieldName, sizeof(FieldName));
	memcpy_s(&GetStringWithFieldName_Params.MappedString, sizeof(GetStringWithFieldName_Params.MappedString), &MappedString, sizeof(MappedString));

	uFnGetStringWithFieldName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetStringWithFieldName, &GetStringWithFieldName_Params, nullptr);
	uFnGetStringWithFieldName->FunctionFlags |= 0x400;

	memcpy_s(&MappedString, sizeof(MappedString), &GetStringWithFieldName_Params.MappedString, sizeof(GetStringWithFieldName_Params.MappedString));

	return GetStringWithFieldName_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringAliasMap.GetStringWithFieldName
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FieldName                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  MappedString                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UUDKUIDataStore_StringAliasMap::GetStringWithFieldName(class FString FieldName, class FString& MappedString)
{
	static UFunction* uFnGetStringWithFieldName = nullptr;

	if (!uFnGetStringWithFieldName)
	{
		uFnGetStringWithFieldName = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringAliasMap.GetStringWithFieldName");
	}

	UUDKUIDataStore_StringAliasMap_execGetStringWithFieldName_Params GetStringWithFieldName_Params;
	memset(&GetStringWithFieldName_Params, 0, sizeof(GetStringWithFieldName_Params));
	memcpy_s(&GetStringWithFieldName_Params.FieldName, sizeof(GetStringWithFieldName_Params.FieldName), &FieldName, sizeof(FieldName));
	memcpy_s(&GetStringWithFieldName_Params.MappedString, sizeof(GetStringWithFieldName_Params.MappedString), &MappedString, sizeof(MappedString));

	uFnGetStringWithFieldName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetStringWithFieldName, &GetStringWithFieldName_Params, nullptr);
	uFnGetStringWithFieldName->FunctionFlags |= 0x400;

	memcpy_s(&MappedString, sizeof(MappedString), &GetStringWithFieldName_Params.MappedString, sizeof(GetStringWithFieldName_Params.MappedString));

	return GetStringWithFieldName_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.Num
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   FieldName                      (CPF_Parm)

int32_t UUDKUIDataStore_StringList::eventNum(struct FName FieldName)
{
	static UFunction* uFnNum = nullptr;

	if (!uFnNum)
	{
		uFnNum = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringList.Num");
	}

	UUDKUIDataStore_StringList_eventNum_Params Num_Params;
	memset(&Num_Params, 0, sizeof(Num_Params));
	memcpy_s(&Num_Params.FieldName, sizeof(Num_Params.FieldName), &FieldName, sizeof(FieldName));

	this->ProcessEvent(uFnNum, &Num_Params, nullptr);

	return Num_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.SetCurrentValueIndex
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   FieldName                      (CPF_Parm)
// int32_t                        NewValueIndex                  (CPF_Parm)

int32_t UUDKUIDataStore_StringList::eventSetCurrentValueIndex(struct FName FieldName, int32_t NewValueIndex)
{
	static UFunction* uFnSetCurrentValueIndex = nullptr;

	if (!uFnSetCurrentValueIndex)
	{
		uFnSetCurrentValueIndex = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringList.SetCurrentValueIndex");
	}

	UUDKUIDataStore_StringList_eventSetCurrentValueIndex_Params SetCurrentValueIndex_Params;
	memset(&SetCurrentValueIndex_Params, 0, sizeof(SetCurrentValueIndex_Params));
	memcpy_s(&SetCurrentValueIndex_Params.FieldName, sizeof(SetCurrentValueIndex_Params.FieldName), &FieldName, sizeof(FieldName));
	memcpy_s(&SetCurrentValueIndex_Params.NewValueIndex, sizeof(SetCurrentValueIndex_Params.NewValueIndex), &NewValueIndex, sizeof(NewValueIndex));

	this->ProcessEvent(uFnSetCurrentValueIndex, &SetCurrentValueIndex_Params, nullptr);

	return SetCurrentValueIndex_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValueIndex
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   FieldName                      (CPF_Parm)

int32_t UUDKUIDataStore_StringList::eventGetCurrentValueIndex(struct FName FieldName)
{
	static UFunction* uFnGetCurrentValueIndex = nullptr;

	if (!uFnGetCurrentValueIndex)
	{
		uFnGetCurrentValueIndex = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringList.GetCurrentValueIndex");
	}

	UUDKUIDataStore_StringList_eventGetCurrentValueIndex_Params GetCurrentValueIndex_Params;
	memset(&GetCurrentValueIndex_Params, 0, sizeof(GetCurrentValueIndex_Params));
	memcpy_s(&GetCurrentValueIndex_Params.FieldName, sizeof(GetCurrentValueIndex_Params.FieldName), &FieldName, sizeof(FieldName));

	this->ProcessEvent(uFnGetCurrentValueIndex, &GetCurrentValueIndex_Params, nullptr);

	return GetCurrentValueIndex_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValue
// [0x00420802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   FieldName                      (CPF_Parm)
// class FString                  out_Value                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UUDKUIDataStore_StringList::eventGetCurrentValue(struct FName FieldName, class FString& out_Value)
{
	static UFunction* uFnGetCurrentValue = nullptr;

	if (!uFnGetCurrentValue)
	{
		uFnGetCurrentValue = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringList.GetCurrentValue");
	}

	UUDKUIDataStore_StringList_eventGetCurrentValue_Params GetCurrentValue_Params;
	memset(&GetCurrentValue_Params, 0, sizeof(GetCurrentValue_Params));
	memcpy_s(&GetCurrentValue_Params.FieldName, sizeof(GetCurrentValue_Params.FieldName), &FieldName, sizeof(FieldName));
	memcpy_s(&GetCurrentValue_Params.out_Value, sizeof(GetCurrentValue_Params.out_Value), &out_Value, sizeof(out_Value));

	this->ProcessEvent(uFnGetCurrentValue, &GetCurrentValue_Params, nullptr);

	memcpy_s(&out_Value, sizeof(out_Value), &GetCurrentValue_Params.out_Value, sizeof(GetCurrentValue_Params.out_Value));

	return GetCurrentValue_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.GetStr
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FName                   FieldName                      (CPF_Parm)
// int32_t                        StrIndex                       (CPF_Parm)

class FString UUDKUIDataStore_StringList::GetStr(struct FName FieldName, int32_t StrIndex)
{
	static UFunction* uFnGetStr = nullptr;

	if (!uFnGetStr)
	{
		uFnGetStr = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringList.GetStr");
	}

	UUDKUIDataStore_StringList_execGetStr_Params GetStr_Params;
	memset(&GetStr_Params, 0, sizeof(GetStr_Params));
	memcpy_s(&GetStr_Params.FieldName, sizeof(GetStr_Params.FieldName), &FieldName, sizeof(FieldName));
	memcpy_s(&GetStr_Params.StrIndex, sizeof(GetStr_Params.StrIndex), &StrIndex, sizeof(StrIndex));

	uFnGetStr->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetStr, &GetStr_Params, nullptr);
	uFnGetStr->FunctionFlags |= 0x400;

	return GetStr_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.FindStr
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   FieldName                      (CPF_Parm)
// class FString                  SearchString                   (CPF_Parm | CPF_NeedCtorLink)

int32_t UUDKUIDataStore_StringList::FindStr(struct FName FieldName, class FString SearchString)
{
	static UFunction* uFnFindStr = nullptr;

	if (!uFnFindStr)
	{
		uFnFindStr = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringList.FindStr");
	}

	UUDKUIDataStore_StringList_execFindStr_Params FindStr_Params;
	memset(&FindStr_Params, 0, sizeof(FindStr_Params));
	memcpy_s(&FindStr_Params.FieldName, sizeof(FindStr_Params.FieldName), &FieldName, sizeof(FieldName));
	memcpy_s(&FindStr_Params.SearchString, sizeof(FindStr_Params.SearchString), &SearchString, sizeof(SearchString));

	uFnFindStr->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFindStr, &FindStr_Params, nullptr);
	uFnFindStr->FunctionFlags |= 0x400;

	return FindStr_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.Empty
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   FieldName                      (CPF_Parm)
// bool                           bBatchOp                       (CPF_OptionalParm | CPF_Parm)

void UUDKUIDataStore_StringList::Empty(struct FName FieldName, bool bBatchOp)
{
	static UFunction* uFnEmpty = nullptr;

	if (!uFnEmpty)
	{
		uFnEmpty = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringList.Empty");
	}

	UUDKUIDataStore_StringList_execEmpty_Params Empty_Params;
	memset(&Empty_Params, 0, sizeof(Empty_Params));
	memcpy_s(&Empty_Params.FieldName, sizeof(Empty_Params.FieldName), &FieldName, sizeof(FieldName));
	Empty_Params.bBatchOp = bBatchOp;

	uFnEmpty->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEmpty, &Empty_Params, nullptr);
	uFnEmpty->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_StringList.RemoveStrByIndex
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   FieldName                      (CPF_Parm)
// int32_t                        Index                          (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// bool                           bBatchOp                       (CPF_OptionalParm | CPF_Parm)

void UUDKUIDataStore_StringList::RemoveStrByIndex(struct FName FieldName, int32_t Index, int32_t Count, bool bBatchOp)
{
	static UFunction* uFnRemoveStrByIndex = nullptr;

	if (!uFnRemoveStrByIndex)
	{
		uFnRemoveStrByIndex = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringList.RemoveStrByIndex");
	}

	UUDKUIDataStore_StringList_execRemoveStrByIndex_Params RemoveStrByIndex_Params;
	memset(&RemoveStrByIndex_Params, 0, sizeof(RemoveStrByIndex_Params));
	memcpy_s(&RemoveStrByIndex_Params.FieldName, sizeof(RemoveStrByIndex_Params.FieldName), &FieldName, sizeof(FieldName));
	memcpy_s(&RemoveStrByIndex_Params.Index, sizeof(RemoveStrByIndex_Params.Index), &Index, sizeof(Index));
	memcpy_s(&RemoveStrByIndex_Params.Count, sizeof(RemoveStrByIndex_Params.Count), &Count, sizeof(Count));
	RemoveStrByIndex_Params.bBatchOp = bBatchOp;

	uFnRemoveStrByIndex->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRemoveStrByIndex, &RemoveStrByIndex_Params, nullptr);
	uFnRemoveStrByIndex->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_StringList.RemoveStr
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   FieldName                      (CPF_Parm)
// class FString                  StringToRemove                 (CPF_Parm | CPF_NeedCtorLink)
// bool                           bBatchOp                       (CPF_OptionalParm | CPF_Parm)

void UUDKUIDataStore_StringList::RemoveStr(struct FName FieldName, class FString StringToRemove, bool bBatchOp)
{
	static UFunction* uFnRemoveStr = nullptr;

	if (!uFnRemoveStr)
	{
		uFnRemoveStr = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringList.RemoveStr");
	}

	UUDKUIDataStore_StringList_execRemoveStr_Params RemoveStr_Params;
	memset(&RemoveStr_Params, 0, sizeof(RemoveStr_Params));
	memcpy_s(&RemoveStr_Params.FieldName, sizeof(RemoveStr_Params.FieldName), &FieldName, sizeof(FieldName));
	memcpy_s(&RemoveStr_Params.StringToRemove, sizeof(RemoveStr_Params.StringToRemove), &StringToRemove, sizeof(StringToRemove));
	RemoveStr_Params.bBatchOp = bBatchOp;

	uFnRemoveStr->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRemoveStr, &RemoveStr_Params, nullptr);
	uFnRemoveStr->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_StringList.GetFieldIndex
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   FieldName                      (CPF_Parm)

int32_t UUDKUIDataStore_StringList::GetFieldIndex(struct FName FieldName)
{
	static UFunction* uFnGetFieldIndex = nullptr;

	if (!uFnGetFieldIndex)
	{
		uFnGetFieldIndex = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringList.GetFieldIndex");
	}

	UUDKUIDataStore_StringList_execGetFieldIndex_Params GetFieldIndex_Params;
	memset(&GetFieldIndex_Params, 0, sizeof(GetFieldIndex_Params));
	memcpy_s(&GetFieldIndex_Params.FieldName, sizeof(GetFieldIndex_Params.FieldName), &FieldName, sizeof(FieldName));

	uFnGetFieldIndex->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFieldIndex, &GetFieldIndex_Params, nullptr);
	uFnGetFieldIndex->FunctionFlags |= 0x400;

	return GetFieldIndex_Params.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.Registered
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ULocalPlayer*            PlayerOwner                    (CPF_Parm)

void UUDKUIDataStore_StringList::eventRegistered(class ULocalPlayer* PlayerOwner)
{
	static UFunction* uFnRegistered = nullptr;

	if (!uFnRegistered)
	{
		uFnRegistered = UFunction::FindFunction("Function UDKBase.UDKUIDataStore_StringList.Registered");
	}

	UUDKUIDataStore_StringList_eventRegistered_Params Registered_Params;
	memset(&Registered_Params, 0, sizeof(Registered_Params));
	memcpy_s(&Registered_Params.PlayerOwner, sizeof(Registered_Params.PlayerOwner), &PlayerOwner, sizeof(PlayerOwner));

	this->ProcessEvent(uFnRegistered, &Registered_Params, nullptr);
};

// Function UDKBase.UDKUIResourceDataProvider.ShouldBeFiltered
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UUDKUIResourceDataProvider::eventShouldBeFiltered()
{
	static UFunction* uFnShouldBeFiltered = nullptr;

	if (!uFnShouldBeFiltered)
	{
		uFnShouldBeFiltered = UFunction::FindFunction("Function UDKBase.UDKUIResourceDataProvider.ShouldBeFiltered");
	}

	UUDKUIResourceDataProvider_eventShouldBeFiltered_Params ShouldBeFiltered_Params;
	memset(&ShouldBeFiltered_Params, 0, sizeof(ShouldBeFiltered_Params));

	this->ProcessEvent(uFnShouldBeFiltered, &ShouldBeFiltered_Params, nullptr);

	return ShouldBeFiltered_Params.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.HandleDeadVehicleDriver
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicleBase::HandleDeadVehicleDriver()
{
	static UFunction* uFnHandleDeadVehicleDriver = nullptr;

	if (!uFnHandleDeadVehicleDriver)
	{
		uFnHandleDeadVehicleDriver = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.HandleDeadVehicleDriver");
	}

	AUDKVehicleBase_execHandleDeadVehicleDriver_Params HandleDeadVehicleDriver_Params;
	memset(&HandleDeadVehicleDriver_Params, 0, sizeof(HandleDeadVehicleDriver_Params));

	this->ProcessEvent(uFnHandleDeadVehicleDriver, &HandleDeadVehicleDriver_Params, nullptr);
};

// Function UDKBase.UDKVehicleBase.DriverLeft
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicleBase::DriverLeft()
{
	static UFunction* uFnDriverLeft = nullptr;

	if (!uFnDriverLeft)
	{
		uFnDriverLeft = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.DriverLeft");
	}

	AUDKVehicleBase_execDriverLeft_Params DriverLeft_Params;
	memset(&DriverLeft_Params, 0, sizeof(DriverLeft_Params));

	this->ProcessEvent(uFnDriverLeft, &DriverLeft_Params, nullptr);
};

// Function UDKBase.UDKVehicleBase.StopFiringWeapon
// [0x00020100] (FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicleBase::StopFiringWeapon()
{
	static UFunction* uFnStopFiringWeapon = nullptr;

	if (!uFnStopFiringWeapon)
	{
		uFnStopFiringWeapon = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.StopFiringWeapon");
	}

	AUDKVehicleBase_execStopFiringWeapon_Params StopFiringWeapon_Params;
	memset(&StopFiringWeapon_Params, 0, sizeof(StopFiringWeapon_Params));

	this->ProcessEvent(uFnStopFiringWeapon, &StopFiringWeapon_Params, nullptr);
};

// Function UDKBase.UDKVehicleBase.BotFire
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bFinished                      (CPF_Parm)

bool AUDKVehicleBase::BotFire(bool bFinished)
{
	static UFunction* uFnBotFire = nullptr;

	if (!uFnBotFire)
	{
		uFnBotFire = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.BotFire");
	}

	AUDKVehicleBase_execBotFire_Params BotFire_Params;
	memset(&BotFire_Params, 0, sizeof(BotFire_Params));
	BotFire_Params.bFinished = bFinished;

	this->ProcessEvent(uFnBotFire, &BotFire_Params, nullptr);

	return BotFire_Params.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.ChooseFireMode
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t AUDKVehicleBase::ChooseFireMode()
{
	static UFunction* uFnChooseFireMode = nullptr;

	if (!uFnChooseFireMode)
	{
		uFnChooseFireMode = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.ChooseFireMode");
	}

	AUDKVehicleBase_execChooseFireMode_Params ChooseFireMode_Params;
	memset(&ChooseFireMode_Params, 0, sizeof(ChooseFireMode_Params));

	this->ProcessEvent(uFnChooseFireMode, &ChooseFireMode_Params, nullptr);

	return ChooseFireMode_Params.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.DetachDriver
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)

void AUDKVehicleBase::DetachDriver(class APawn* P)
{
	static UFunction* uFnDetachDriver = nullptr;

	if (!uFnDetachDriver)
	{
		uFnDetachDriver = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.DetachDriver");
	}

	AUDKVehicleBase_execDetachDriver_Params DetachDriver_Params;
	memset(&DetachDriver_Params, 0, sizeof(DetachDriver_Params));
	memcpy_s(&DetachDriver_Params.P, sizeof(DetachDriver_Params.P), &P, sizeof(P));

	this->ProcessEvent(uFnDetachDriver, &DetachDriver_Params, nullptr);
};

// Function UDKBase.UDKVehicleBase.EjectDriver
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicleBase::EjectDriver()
{
	static UFunction* uFnEjectDriver = nullptr;

	if (!uFnEjectDriver)
	{
		uFnEjectDriver = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.EjectDriver");
	}

	AUDKVehicleBase_execEjectDriver_Params EjectDriver_Params;
	memset(&EjectDriver_Params, 0, sizeof(EjectDriver_Params));

	this->ProcessEvent(uFnEjectDriver, &EjectDriver_Params, nullptr);
};

// Function UDKBase.UDKVehicleBase.GetVehicleDrivingStatName
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName AUDKVehicleBase::GetVehicleDrivingStatName()
{
	static UFunction* uFnGetVehicleDrivingStatName = nullptr;

	if (!uFnGetVehicleDrivingStatName)
	{
		uFnGetVehicleDrivingStatName = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.GetVehicleDrivingStatName");
	}

	AUDKVehicleBase_execGetVehicleDrivingStatName_Params GetVehicleDrivingStatName_Params;
	memset(&GetVehicleDrivingStatName_Params, 0, sizeof(GetVehicleDrivingStatName_Params));

	this->ProcessEvent(uFnGetVehicleDrivingStatName, &GetVehicleDrivingStatName_Params, nullptr);

	return GetVehicleDrivingStatName_Params.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.ApplyWeaponEffects
// [0x00024100] (FUNC_Simulated | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        OverlayFlags                   (CPF_Parm)
// int32_t                        SeatIndex                      (CPF_OptionalParm | CPF_Parm)

void AUDKVehicleBase::ApplyWeaponEffects(int32_t OverlayFlags, int32_t SeatIndex)
{
	static UFunction* uFnApplyWeaponEffects = nullptr;

	if (!uFnApplyWeaponEffects)
	{
		uFnApplyWeaponEffects = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.ApplyWeaponEffects");
	}

	AUDKVehicleBase_execApplyWeaponEffects_Params ApplyWeaponEffects_Params;
	memset(&ApplyWeaponEffects_Params, 0, sizeof(ApplyWeaponEffects_Params));
	memcpy_s(&ApplyWeaponEffects_Params.OverlayFlags, sizeof(ApplyWeaponEffects_Params.OverlayFlags), &OverlayFlags, sizeof(OverlayFlags));
	memcpy_s(&ApplyWeaponEffects_Params.SeatIndex, sizeof(ApplyWeaponEffects_Params.SeatIndex), &SeatIndex, sizeof(SeatIndex));

	this->ProcessEvent(uFnApplyWeaponEffects, &ApplyWeaponEffects_Params, nullptr);
};

// Function UDKBase.UDKVehicleBase.DriverEnter
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   P                              (CPF_Parm)

bool AUDKVehicleBase::DriverEnter(class APawn* P)
{
	static UFunction* uFnDriverEnter = nullptr;

	if (!uFnDriverEnter)
	{
		uFnDriverEnter = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.DriverEnter");
	}

	AUDKVehicleBase_execDriverEnter_Params DriverEnter_Params;
	memset(&DriverEnter_Params, 0, sizeof(DriverEnter_Params));
	memcpy_s(&DriverEnter_Params.P, sizeof(DriverEnter_Params.P), &P, sizeof(P));

	this->ProcessEvent(uFnDriverEnter, &DriverEnter_Params, nullptr);

	return DriverEnter_Params.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.DrivingStatusChanged
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicleBase::DrivingStatusChanged()
{
	static UFunction* uFnDrivingStatusChanged = nullptr;

	if (!uFnDrivingStatusChanged)
	{
		uFnDrivingStatusChanged = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.DrivingStatusChanged");
	}

	AUDKVehicleBase_execDrivingStatusChanged_Params DrivingStatusChanged_Params;
	memset(&DrivingStatusChanged_Params, 0, sizeof(DrivingStatusChanged_Params));

	this->ProcessEvent(uFnDrivingStatusChanged, &DrivingStatusChanged_Params, nullptr);
};

// Function UDKBase.UDKVehicleBase.NeedToTurn
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 targ                           (CPF_Parm)

bool AUDKVehicleBase::NeedToTurn(struct FVector targ)
{
	static UFunction* uFnNeedToTurn = nullptr;

	if (!uFnNeedToTurn)
	{
		uFnNeedToTurn = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.NeedToTurn");
	}

	AUDKVehicleBase_execNeedToTurn_Params NeedToTurn_Params;
	memset(&NeedToTurn_Params, 0, sizeof(NeedToTurn_Params));
	memcpy_s(&NeedToTurn_Params.targ, sizeof(NeedToTurn_Params.targ), &targ, sizeof(targ));

	this->ProcessEvent(uFnNeedToTurn, &NeedToTurn_Params, nullptr);

	return NeedToTurn_Params.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.GetDamageScaling
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AUDKVehicleBase::GetDamageScaling()
{
	static UFunction* uFnGetDamageScaling = nullptr;

	if (!uFnGetDamageScaling)
	{
		uFnGetDamageScaling = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.GetDamageScaling");
	}

	AUDKVehicleBase_execGetDamageScaling_Params GetDamageScaling_Params;
	memset(&GetDamageScaling_Params, 0, sizeof(GetDamageScaling_Params));

	this->ProcessEvent(uFnGetDamageScaling, &GetDamageScaling_Params, nullptr);

	return GetDamageScaling_Params.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.ServerChangeSeat
// [0xFFFF0000002200C0] (FUNC_Net | FUNC_NetReliable | FUNC_Public | FUNC_NetServer | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        RequestedSeat                  (CPF_Parm)

void AUDKVehicleBase::ServerChangeSeat(int32_t RequestedSeat)
{
	static UFunction* uFnServerChangeSeat = nullptr;

	if (!uFnServerChangeSeat)
	{
		uFnServerChangeSeat = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.ServerChangeSeat");
	}

	AUDKVehicleBase_execServerChangeSeat_Params ServerChangeSeat_Params;
	memset(&ServerChangeSeat_Params, 0, sizeof(ServerChangeSeat_Params));
	memcpy_s(&ServerChangeSeat_Params.RequestedSeat, sizeof(ServerChangeSeat_Params.RequestedSeat), &RequestedSeat, sizeof(RequestedSeat));

	this->ProcessEvent(uFnServerChangeSeat, &ServerChangeSeat_Params, nullptr);
};

// Function UDKBase.UDKVehicleBase.ServerAdjacentSeat
// [0xFFFF0000002200C0] (FUNC_Net | FUNC_NetReliable | FUNC_Public | FUNC_NetServer | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Direction                      (CPF_Parm)
// class AController*             C                              (CPF_Parm)

void AUDKVehicleBase::ServerAdjacentSeat(int32_t Direction, class AController* C)
{
	static UFunction* uFnServerAdjacentSeat = nullptr;

	if (!uFnServerAdjacentSeat)
	{
		uFnServerAdjacentSeat = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.ServerAdjacentSeat");
	}

	AUDKVehicleBase_execServerAdjacentSeat_Params ServerAdjacentSeat_Params;
	memset(&ServerAdjacentSeat_Params, 0, sizeof(ServerAdjacentSeat_Params));
	memcpy_s(&ServerAdjacentSeat_Params.Direction, sizeof(ServerAdjacentSeat_Params.Direction), &Direction, sizeof(Direction));
	memcpy_s(&ServerAdjacentSeat_Params.C, sizeof(ServerAdjacentSeat_Params.C), &C, sizeof(C));

	this->ProcessEvent(uFnServerAdjacentSeat, &ServerAdjacentSeat_Params, nullptr);
};

// Function UDKBase.UDKVehicleBase.AdjacentSeat
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Direction                      (CPF_Parm)
// class AController*             C                              (CPF_Parm)

void AUDKVehicleBase::AdjacentSeat(int32_t Direction, class AController* C)
{
	static UFunction* uFnAdjacentSeat = nullptr;

	if (!uFnAdjacentSeat)
	{
		uFnAdjacentSeat = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.AdjacentSeat");
	}

	AUDKVehicleBase_execAdjacentSeat_Params AdjacentSeat_Params;
	memset(&AdjacentSeat_Params, 0, sizeof(AdjacentSeat_Params));
	memcpy_s(&AdjacentSeat_Params.Direction, sizeof(AdjacentSeat_Params.Direction), &Direction, sizeof(Direction));
	memcpy_s(&AdjacentSeat_Params.C, sizeof(AdjacentSeat_Params.C), &C, sizeof(C));

	this->ProcessEvent(uFnAdjacentSeat, &AdjacentSeat_Params, nullptr);
};

// Function UDKBase.UDKVehicleBase.SwitchWeapon
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        NewGroup                       (CPF_Parm)

void AUDKVehicleBase::SwitchWeapon(uint8_t NewGroup)
{
	static UFunction* uFnSwitchWeapon = nullptr;

	if (!uFnSwitchWeapon)
	{
		uFnSwitchWeapon = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.SwitchWeapon");
	}

	AUDKVehicleBase_execSwitchWeapon_Params SwitchWeapon_Params;
	memset(&SwitchWeapon_Params, 0, sizeof(SwitchWeapon_Params));
	memcpy_s(&SwitchWeapon_Params.NewGroup, sizeof(SwitchWeapon_Params.NewGroup), &NewGroup, sizeof(NewGroup));

	this->ProcessEvent(uFnSwitchWeapon, &SwitchWeapon_Params, nullptr);
};

// Function UDKBase.UDKVehicleBase.HoldGameObject
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AUDKCarriedObject*       GameObj                        (CPF_Parm)

void AUDKVehicleBase::eventHoldGameObject(class AUDKCarriedObject* GameObj)
{
	static UFunction* uFnHoldGameObject = nullptr;

	if (!uFnHoldGameObject)
	{
		uFnHoldGameObject = UFunction::FindFunction("Function UDKBase.UDKVehicleBase.HoldGameObject");
	}

	AUDKVehicleBase_eventHoldGameObject_Params HoldGameObject_Params;
	memset(&HoldGameObject_Params, 0, sizeof(HoldGameObject_Params));
	memcpy_s(&HoldGameObject_Params.GameObj, sizeof(HoldGameObject_Params.GameObj), &GameObj, sizeof(GameObj));

	this->ProcessEvent(uFnHoldGameObject, &HoldGameObject_Params, nullptr);
};

// Function UDKBase.UDKVehicle.UpdateHoverboardDustEffect
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DustHeight                     (CPF_Parm)

void AUDKVehicle::eventUpdateHoverboardDustEffect(float DustHeight)
{
	static UFunction* uFnUpdateHoverboardDustEffect = nullptr;

	if (!uFnUpdateHoverboardDustEffect)
	{
		uFnUpdateHoverboardDustEffect = UFunction::FindFunction("Function UDKBase.UDKVehicle.UpdateHoverboardDustEffect");
	}

	AUDKVehicle_eventUpdateHoverboardDustEffect_Params UpdateHoverboardDustEffect_Params;
	memset(&UpdateHoverboardDustEffect_Params, 0, sizeof(UpdateHoverboardDustEffect_Params));
	memcpy_s(&UpdateHoverboardDustEffect_Params.DustHeight, sizeof(UpdateHoverboardDustEffect_Params.DustHeight), &DustHeight, sizeof(DustHeight));

	this->ProcessEvent(uFnUpdateHoverboardDustEffect, &UpdateHoverboardDustEffect_Params, nullptr);
};

// Function UDKBase.UDKVehicle.PostInitRigidBody
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UPrimitiveComponent*     PrimComp                       (CPF_Parm | CPF_EditInline)

void AUDKVehicle::eventPostInitRigidBody(class UPrimitiveComponent* PrimComp)
{
	static UFunction* uFnPostInitRigidBody = nullptr;

	if (!uFnPostInitRigidBody)
	{
		uFnPostInitRigidBody = UFunction::FindFunction("Function UDKBase.UDKVehicle.PostInitRigidBody");
	}

	AUDKVehicle_eventPostInitRigidBody_Params PostInitRigidBody_Params;
	memset(&PostInitRigidBody_Params, 0, sizeof(PostInitRigidBody_Params));
	memcpy_s(&PostInitRigidBody_Params.PrimComp, sizeof(PostInitRigidBody_Params.PrimComp), &PrimComp, sizeof(PrimComp));

	this->ProcessEvent(uFnPostInitRigidBody, &PostInitRigidBody_Params, nullptr);
};

// Function UDKBase.UDKVehicle.TakeFireDamage
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicle::eventTakeFireDamage()
{
	static UFunction* uFnTakeFireDamage = nullptr;

	if (!uFnTakeFireDamage)
	{
		uFnTakeFireDamage = UFunction::FindFunction("Function UDKBase.UDKVehicle.TakeFireDamage");
	}

	AUDKVehicle_eventTakeFireDamage_Params TakeFireDamage_Params;
	memset(&TakeFireDamage_Params, 0, sizeof(TakeFireDamage_Params));

	this->ProcessEvent(uFnTakeFireDamage, &TakeFireDamage_Params, nullptr);
};

// Function UDKBase.UDKVehicle.CheckReset
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicle::eventCheckReset()
{
	static UFunction* uFnCheckReset = nullptr;

	if (!uFnCheckReset)
	{
		uFnCheckReset = UFunction::FindFunction("Function UDKBase.UDKVehicle.CheckReset");
	}

	AUDKVehicle_eventCheckReset_Params CheckReset_Params;
	memset(&CheckReset_Params, 0, sizeof(CheckReset_Params));

	this->ProcessEvent(uFnCheckReset, &CheckReset_Params, nullptr);
};

// Function UDKBase.UDKVehicle.TakeWaterDamage
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicle::eventTakeWaterDamage()
{
	static UFunction* uFnTakeWaterDamage = nullptr;

	if (!uFnTakeWaterDamage)
	{
		uFnTakeWaterDamage = UFunction::FindFunction("Function UDKBase.UDKVehicle.TakeWaterDamage");
	}

	AUDKVehicle_eventTakeWaterDamage_Params TakeWaterDamage_Params;
	memset(&TakeWaterDamage_Params, 0, sizeof(TakeWaterDamage_Params));

	this->ProcessEvent(uFnTakeWaterDamage, &TakeWaterDamage_Params, nullptr);
};

// Function UDKBase.UDKVehicle.RBPenetrationDestroy
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicle::eventRBPenetrationDestroy()
{
	static UFunction* uFnRBPenetrationDestroy = nullptr;

	if (!uFnRBPenetrationDestroy)
	{
		uFnRBPenetrationDestroy = UFunction::FindFunction("Function UDKBase.UDKVehicle.RBPenetrationDestroy");
	}

	AUDKVehicle_eventRBPenetrationDestroy_Params RBPenetrationDestroy_Params;
	memset(&RBPenetrationDestroy_Params, 0, sizeof(RBPenetrationDestroy_Params));

	this->ProcessEvent(uFnRBPenetrationDestroy, &RBPenetrationDestroy_Params, nullptr);
};

// Function UDKBase.UDKVehicle.MorphTargetDestroyed
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        MorphNodeIndex                 (CPF_Parm)

void AUDKVehicle::eventMorphTargetDestroyed(int32_t MorphNodeIndex)
{
	static UFunction* uFnMorphTargetDestroyed = nullptr;

	if (!uFnMorphTargetDestroyed)
	{
		uFnMorphTargetDestroyed = UFunction::FindFunction("Function UDKBase.UDKVehicle.MorphTargetDestroyed");
	}

	AUDKVehicle_eventMorphTargetDestroyed_Params MorphTargetDestroyed_Params;
	memset(&MorphTargetDestroyed_Params, 0, sizeof(MorphTargetDestroyed_Params));
	memcpy_s(&MorphTargetDestroyed_Params.MorphNodeIndex, sizeof(MorphTargetDestroyed_Params.MorphNodeIndex), &MorphNodeIndex, sizeof(MorphNodeIndex));

	this->ProcessEvent(uFnMorphTargetDestroyed, &MorphTargetDestroyed_Params, nullptr);
};

// Function UDKBase.UDKVehicle.ApplyMorphDamage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 HitLocation                    (CPF_Parm)
// int32_t                        Damage                         (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)

void AUDKVehicle::ApplyMorphDamage(struct FVector HitLocation, int32_t Damage, struct FVector Momentum)
{
	static UFunction* uFnApplyMorphDamage = nullptr;

	if (!uFnApplyMorphDamage)
	{
		uFnApplyMorphDamage = UFunction::FindFunction("Function UDKBase.UDKVehicle.ApplyMorphDamage");
	}

	AUDKVehicle_execApplyMorphDamage_Params ApplyMorphDamage_Params;
	memset(&ApplyMorphDamage_Params, 0, sizeof(ApplyMorphDamage_Params));
	memcpy_s(&ApplyMorphDamage_Params.HitLocation, sizeof(ApplyMorphDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&ApplyMorphDamage_Params.Damage, sizeof(ApplyMorphDamage_Params.Damage), &Damage, sizeof(Damage));
	memcpy_s(&ApplyMorphDamage_Params.Momentum, sizeof(ApplyMorphDamage_Params.Momentum), &Momentum, sizeof(Momentum));

	uFnApplyMorphDamage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnApplyMorphDamage, &ApplyMorphDamage_Params, nullptr);
	uFnApplyMorphDamage->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicle.UpdateDamageMaterial
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicle::UpdateDamageMaterial()
{
	static UFunction* uFnUpdateDamageMaterial = nullptr;

	if (!uFnUpdateDamageMaterial)
	{
		uFnUpdateDamageMaterial = UFunction::FindFunction("Function UDKBase.UDKVehicle.UpdateDamageMaterial");
	}

	AUDKVehicle_execUpdateDamageMaterial_Params UpdateDamageMaterial_Params;
	memset(&UpdateDamageMaterial_Params, 0, sizeof(UpdateDamageMaterial_Params));

	uFnUpdateDamageMaterial->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateDamageMaterial, &UpdateDamageMaterial_Params, nullptr);
	uFnUpdateDamageMaterial->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicle.InitDamageSkel
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicle::InitDamageSkel()
{
	static UFunction* uFnInitDamageSkel = nullptr;

	if (!uFnInitDamageSkel)
	{
		uFnInitDamageSkel = UFunction::FindFunction("Function UDKBase.UDKVehicle.InitDamageSkel");
	}

	AUDKVehicle_execInitDamageSkel_Params InitDamageSkel_Params;
	memset(&InitDamageSkel_Params, 0, sizeof(InitDamageSkel_Params));

	uFnInitDamageSkel->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInitDamageSkel, &InitDamageSkel_Params, nullptr);
	uFnInitDamageSkel->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicle.SetHUDLocation
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 NewHUDLocation                 (CPF_Parm)

void AUDKVehicle::SetHUDLocation(struct FVector NewHUDLocation)
{
	static UFunction* uFnSetHUDLocation = nullptr;

	if (!uFnSetHUDLocation)
	{
		uFnSetHUDLocation = UFunction::FindFunction("Function UDKBase.UDKVehicle.SetHUDLocation");
	}

	AUDKVehicle_execSetHUDLocation_Params SetHUDLocation_Params;
	memset(&SetHUDLocation_Params, 0, sizeof(SetHUDLocation_Params));
	memcpy_s(&SetHUDLocation_Params.NewHUDLocation, sizeof(SetHUDLocation_Params.NewHUDLocation), &NewHUDLocation, sizeof(NewHUDLocation));

	uFnSetHUDLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetHUDLocation, &SetHUDLocation_Params, nullptr);
	uFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicle.InUseableRange
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AUDKPlayerController*    PC                             (CPF_Parm)
// float                          Dist                           (CPF_Parm)

bool AUDKVehicle::InUseableRange(class AUDKPlayerController* PC, float Dist)
{
	static UFunction* uFnInUseableRange = nullptr;

	if (!uFnInUseableRange)
	{
		uFnInUseableRange = UFunction::FindFunction("Function UDKBase.UDKVehicle.InUseableRange");
	}

	AUDKVehicle_execInUseableRange_Params InUseableRange_Params;
	memset(&InUseableRange_Params, 0, sizeof(InUseableRange_Params));
	memcpy_s(&InUseableRange_Params.PC, sizeof(InUseableRange_Params.PC), &PC, sizeof(PC));
	memcpy_s(&InUseableRange_Params.Dist, sizeof(InUseableRange_Params.Dist), &Dist, sizeof(Dist));

	uFnInUseableRange->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInUseableRange, &InUseableRange_Params, nullptr);
	uFnInUseableRange->FunctionFlags |= 0x400;

	return InUseableRange_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.NativePostRenderFor
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       PC                             (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 CameraPosition                 (CPF_Parm)
// struct FVector                 CameraDir                      (CPF_Parm)

void AUDKVehicle::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir)
{
	static UFunction* uFnNativePostRenderFor = nullptr;

	if (!uFnNativePostRenderFor)
	{
		uFnNativePostRenderFor = UFunction::FindFunction("Function UDKBase.UDKVehicle.NativePostRenderFor");
	}

	AUDKVehicle_execNativePostRenderFor_Params NativePostRenderFor_Params;
	memset(&NativePostRenderFor_Params, 0, sizeof(NativePostRenderFor_Params));
	memcpy_s(&NativePostRenderFor_Params.PC, sizeof(NativePostRenderFor_Params.PC), &PC, sizeof(PC));
	memcpy_s(&NativePostRenderFor_Params.Canvas, sizeof(NativePostRenderFor_Params.Canvas), &Canvas, sizeof(Canvas));
	memcpy_s(&NativePostRenderFor_Params.CameraPosition, sizeof(NativePostRenderFor_Params.CameraPosition), &CameraPosition, sizeof(CameraPosition));
	memcpy_s(&NativePostRenderFor_Params.CameraDir, sizeof(NativePostRenderFor_Params.CameraDir), &CameraDir, sizeof(CameraDir));

	uFnNativePostRenderFor->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNativePostRenderFor, &NativePostRenderFor_Params, nullptr);
	uFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicle.GetTeamNum
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t AUDKVehicle::GetTeamNum()
{
	static UFunction* uFnGetTeamNum = nullptr;

	if (!uFnGetTeamNum)
	{
		uFnGetTeamNum = UFunction::FindFunction("Function UDKBase.UDKVehicle.GetTeamNum");
	}

	AUDKVehicle_execGetTeamNum_Params GetTeamNum_Params;
	memset(&GetTeamNum_Params, 0, sizeof(GetTeamNum_Params));

	uFnGetTeamNum->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTeamNum, &GetTeamNum_Params, nullptr);
	uFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.SelfDestruct
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ImpactedActor                  (CPF_Parm)

void AUDKVehicle::eventSelfDestruct(class AActor* ImpactedActor)
{
	static UFunction* uFnSelfDestruct = nullptr;

	if (!uFnSelfDestruct)
	{
		uFnSelfDestruct = UFunction::FindFunction("Function UDKBase.UDKVehicle.SelfDestruct");
	}

	AUDKVehicle_eventSelfDestruct_Params SelfDestruct_Params;
	memset(&SelfDestruct_Params, 0, sizeof(SelfDestruct_Params));
	memcpy_s(&SelfDestruct_Params.ImpactedActor, sizeof(SelfDestruct_Params.ImpactedActor), &ImpactedActor, sizeof(ImpactedActor));

	this->ProcessEvent(uFnSelfDestruct, &SelfDestruct_Params, nullptr);
};

// Function UDKBase.UDKVehicle.CheckAutoDestruct
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class ATeamInfo*               InstigatorTeam                 (CPF_Parm)
// float                          CheckRadius                    (CPF_Parm)

bool AUDKVehicle::CheckAutoDestruct(class ATeamInfo* InstigatorTeam, float CheckRadius)
{
	static UFunction* uFnCheckAutoDestruct = nullptr;

	if (!uFnCheckAutoDestruct)
	{
		uFnCheckAutoDestruct = UFunction::FindFunction("Function UDKBase.UDKVehicle.CheckAutoDestruct");
	}

	AUDKVehicle_execCheckAutoDestruct_Params CheckAutoDestruct_Params;
	memset(&CheckAutoDestruct_Params, 0, sizeof(CheckAutoDestruct_Params));
	memcpy_s(&CheckAutoDestruct_Params.InstigatorTeam, sizeof(CheckAutoDestruct_Params.InstigatorTeam), &InstigatorTeam, sizeof(InstigatorTeam));
	memcpy_s(&CheckAutoDestruct_Params.CheckRadius, sizeof(CheckAutoDestruct_Params.CheckRadius), &CheckRadius, sizeof(CheckRadius));

	uFnCheckAutoDestruct->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCheckAutoDestruct, &CheckAutoDestruct_Params, nullptr);
	uFnCheckAutoDestruct->FunctionFlags |= 0x400;

	return CheckAutoDestruct_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.GetMaxRiseForce
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AUDKVehicle::GetMaxRiseForce()
{
	static UFunction* uFnGetMaxRiseForce = nullptr;

	if (!uFnGetMaxRiseForce)
	{
		uFnGetMaxRiseForce = UFunction::FindFunction("Function UDKBase.UDKVehicle.GetMaxRiseForce");
	}

	AUDKVehicle_execGetMaxRiseForce_Params GetMaxRiseForce_Params;
	memset(&GetMaxRiseForce_Params, 0, sizeof(GetMaxRiseForce_Params));

	uFnGetMaxRiseForce->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetMaxRiseForce, &GetMaxRiseForce_Params, nullptr);
	uFnGetMaxRiseForce->FunctionFlags |= 0x400;

	return GetMaxRiseForce_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.JumpOutCheck
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicle::eventJumpOutCheck()
{
	static UFunction* uFnJumpOutCheck = nullptr;

	if (!uFnJumpOutCheck)
	{
		uFnJumpOutCheck = UFunction::FindFunction("Function UDKBase.UDKVehicle.JumpOutCheck");
	}

	AUDKVehicle_eventJumpOutCheck_Params JumpOutCheck_Params;
	memset(&JumpOutCheck_Params, 0, sizeof(JumpOutCheck_Params));

	this->ProcessEvent(uFnJumpOutCheck, &JumpOutCheck_Params, nullptr);
};

// Function UDKBase.UDKVehicle.ReceivedHealthChange
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicle::eventReceivedHealthChange()
{
	static UFunction* uFnReceivedHealthChange = nullptr;

	if (!uFnReceivedHealthChange)
	{
		uFnReceivedHealthChange = UFunction::FindFunction("Function UDKBase.UDKVehicle.ReceivedHealthChange");
	}

	AUDKVehicle_eventReceivedHealthChange_Params ReceivedHealthChange_Params;
	memset(&ReceivedHealthChange_Params, 0, sizeof(ReceivedHealthChange_Params));

	this->ProcessEvent(uFnReceivedHealthChange, &ReceivedHealthChange_Params, nullptr);
};

// Function UDKBase.UDKVehicle.PlayTakeHitEffects
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicle::eventPlayTakeHitEffects()
{
	static UFunction* uFnPlayTakeHitEffects = nullptr;

	if (!uFnPlayTakeHitEffects)
	{
		uFnPlayTakeHitEffects = UFunction::FindFunction("Function UDKBase.UDKVehicle.PlayTakeHitEffects");
	}

	AUDKVehicle_eventPlayTakeHitEffects_Params PlayTakeHitEffects_Params;
	memset(&PlayTakeHitEffects_Params, 0, sizeof(PlayTakeHitEffects_Params));

	this->ProcessEvent(uFnPlayTakeHitEffects, &PlayTakeHitEffects_Params, nullptr);
};

// Function UDKBase.UDKVehicle.OnTouchForcedDirVolume
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AUDKForcedDirectionVolume* Vol                            (CPF_Parm)

bool AUDKVehicle::OnTouchForcedDirVolume(class AUDKForcedDirectionVolume* Vol)
{
	static UFunction* uFnOnTouchForcedDirVolume = nullptr;

	if (!uFnOnTouchForcedDirVolume)
	{
		uFnOnTouchForcedDirVolume = UFunction::FindFunction("Function UDKBase.UDKVehicle.OnTouchForcedDirVolume");
	}

	AUDKVehicle_execOnTouchForcedDirVolume_Params OnTouchForcedDirVolume_Params;
	memset(&OnTouchForcedDirVolume_Params, 0, sizeof(OnTouchForcedDirVolume_Params));
	memcpy_s(&OnTouchForcedDirVolume_Params.Vol, sizeof(OnTouchForcedDirVolume_Params.Vol), &Vol, sizeof(Vol));

	this->ProcessEvent(uFnOnTouchForcedDirVolume, &OnTouchForcedDirVolume_Params, nullptr);

	return OnTouchForcedDirVolume_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.GetGravityZ
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AUDKVehicle::GetGravityZ()
{
	static UFunction* uFnGetGravityZ = nullptr;

	if (!uFnGetGravityZ)
	{
		uFnGetGravityZ = UFunction::FindFunction("Function UDKBase.UDKVehicle.GetGravityZ");
	}

	AUDKVehicle_execGetGravityZ_Params GetGravityZ_Params;
	memset(&GetGravityZ_Params, 0, sizeof(GetGravityZ_Params));

	uFnGetGravityZ->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetGravityZ, &GetGravityZ_Params, nullptr);
	uFnGetGravityZ->FunctionFlags |= 0x400;

	return GetGravityZ_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.OnPropertyChange
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   PropName                       (CPF_Parm)

void AUDKVehicle::eventOnPropertyChange(struct FName PropName)
{
	static UFunction* uFnOnPropertyChange = nullptr;

	if (!uFnOnPropertyChange)
	{
		uFnOnPropertyChange = UFunction::FindFunction("Function UDKBase.UDKVehicle.OnPropertyChange");
	}

	AUDKVehicle_eventOnPropertyChange_Params OnPropertyChange_Params;
	memset(&OnPropertyChange_Params, 0, sizeof(OnPropertyChange_Params));
	memcpy_s(&OnPropertyChange_Params.PropName, sizeof(OnPropertyChange_Params.PropName), &PropName, sizeof(PropName));

	this->ProcessEvent(uFnOnPropertyChange, &OnPropertyChange_Params, nullptr);
};

// Function UDKBase.UDKVehicle.LockOnWarning
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AUDKProjectile*          IncomingMissile                (CPF_Parm)

void AUDKVehicle::eventLockOnWarning(class AUDKProjectile* IncomingMissile)
{
	static UFunction* uFnLockOnWarning = nullptr;

	if (!uFnLockOnWarning)
	{
		uFnLockOnWarning = UFunction::FindFunction("Function UDKBase.UDKVehicle.LockOnWarning");
	}

	AUDKVehicle_eventLockOnWarning_Params LockOnWarning_Params;
	memset(&LockOnWarning_Params, 0, sizeof(LockOnWarning_Params));
	memcpy_s(&LockOnWarning_Params.IncomingMissile, sizeof(LockOnWarning_Params.IncomingMissile), &IncomingMissile, sizeof(IncomingMissile));

	this->ProcessEvent(uFnLockOnWarning, &LockOnWarning_Params, nullptr);
};

// Function UDKBase.UDKVehicle.GetRanOverDamageType
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UClass* AUDKVehicle::GetRanOverDamageType()
{
	static UFunction* uFnGetRanOverDamageType = nullptr;

	if (!uFnGetRanOverDamageType)
	{
		uFnGetRanOverDamageType = UFunction::FindFunction("Function UDKBase.UDKVehicle.GetRanOverDamageType");
	}

	AUDKVehicle_execGetRanOverDamageType_Params GetRanOverDamageType_Params;
	memset(&GetRanOverDamageType_Params, 0, sizeof(GetRanOverDamageType_Params));

	this->ProcessEvent(uFnGetRanOverDamageType, &GetRanOverDamageType_Params, nullptr);

	return GetRanOverDamageType_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.IsSeatControllerReplicationViewer
// [0x3E700020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        SeatIndex                      (CPF_Parm)

bool AUDKVehicle::IsSeatControllerReplicationViewer(int32_t SeatIndex)
{
	static UFunction* uFnIsSeatControllerReplicationViewer = nullptr;

	if (!uFnIsSeatControllerReplicationViewer)
	{
		uFnIsSeatControllerReplicationViewer = UFunction::FindFunction("Function UDKBase.UDKVehicle.IsSeatControllerReplicationViewer");
	}

	AUDKVehicle_execIsSeatControllerReplicationViewer_Params IsSeatControllerReplicationViewer_Params;
	memset(&IsSeatControllerReplicationViewer_Params, 0, sizeof(IsSeatControllerReplicationViewer_Params));
	memcpy_s(&IsSeatControllerReplicationViewer_Params.SeatIndex, sizeof(IsSeatControllerReplicationViewer_Params.SeatIndex), &SeatIndex, sizeof(SeatIndex));

	uFnIsSeatControllerReplicationViewer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsSeatControllerReplicationViewer, &IsSeatControllerReplicationViewer_Params, nullptr);
	uFnIsSeatControllerReplicationViewer->FunctionFlags |= 0x400;

	return IsSeatControllerReplicationViewer_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.GetBarrelIndex
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        SeatIndex                      (CPF_Parm)

int32_t AUDKVehicle::GetBarrelIndex(int32_t SeatIndex)
{
	static UFunction* uFnGetBarrelIndex = nullptr;

	if (!uFnGetBarrelIndex)
	{
		uFnGetBarrelIndex = UFunction::FindFunction("Function UDKBase.UDKVehicle.GetBarrelIndex");
	}

	AUDKVehicle_execGetBarrelIndex_Params GetBarrelIndex_Params;
	memset(&GetBarrelIndex_Params, 0, sizeof(GetBarrelIndex_Params));
	memcpy_s(&GetBarrelIndex_Params.SeatIndex, sizeof(GetBarrelIndex_Params.SeatIndex), &SeatIndex, sizeof(SeatIndex));

	uFnGetBarrelIndex->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetBarrelIndex, &GetBarrelIndex_Params, nullptr);
	uFnGetBarrelIndex->FunctionFlags |= 0x400;

	return GetBarrelIndex_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.GetSeatPivotPoint
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        SeatIndex                      (CPF_Parm)

struct FVector AUDKVehicle::GetSeatPivotPoint(int32_t SeatIndex)
{
	static UFunction* uFnGetSeatPivotPoint = nullptr;

	if (!uFnGetSeatPivotPoint)
	{
		uFnGetSeatPivotPoint = UFunction::FindFunction("Function UDKBase.UDKVehicle.GetSeatPivotPoint");
	}

	AUDKVehicle_execGetSeatPivotPoint_Params GetSeatPivotPoint_Params;
	memset(&GetSeatPivotPoint_Params, 0, sizeof(GetSeatPivotPoint_Params));
	memcpy_s(&GetSeatPivotPoint_Params.SeatIndex, sizeof(GetSeatPivotPoint_Params.SeatIndex), &SeatIndex, sizeof(SeatIndex));

	uFnGetSeatPivotPoint->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetSeatPivotPoint, &GetSeatPivotPoint_Params, nullptr);
	uFnGetSeatPivotPoint->FunctionFlags |= 0x400;

	return GetSeatPivotPoint_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.ForceWeaponRotation
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        SeatIndex                      (CPF_Parm)
// struct FRotator                NewRotation                    (CPF_Parm)

void AUDKVehicle::ForceWeaponRotation(int32_t SeatIndex, struct FRotator NewRotation)
{
	static UFunction* uFnForceWeaponRotation = nullptr;

	if (!uFnForceWeaponRotation)
	{
		uFnForceWeaponRotation = UFunction::FindFunction("Function UDKBase.UDKVehicle.ForceWeaponRotation");
	}

	AUDKVehicle_execForceWeaponRotation_Params ForceWeaponRotation_Params;
	memset(&ForceWeaponRotation_Params, 0, sizeof(ForceWeaponRotation_Params));
	memcpy_s(&ForceWeaponRotation_Params.SeatIndex, sizeof(ForceWeaponRotation_Params.SeatIndex), &SeatIndex, sizeof(SeatIndex));
	memcpy_s(&ForceWeaponRotation_Params.NewRotation, sizeof(ForceWeaponRotation_Params.NewRotation), &NewRotation, sizeof(NewRotation));

	uFnForceWeaponRotation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnForceWeaponRotation, &ForceWeaponRotation_Params, nullptr);
	uFnForceWeaponRotation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicle.SeatFiringMode
// [0x00024500] (FUNC_Simulated | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        SeatIndex                      (CPF_Parm)
// uint8_t                        NewFireMode                    (CPF_OptionalParm | CPF_Parm)
// bool                           bReadValue                     (CPF_OptionalParm | CPF_Parm)

uint8_t AUDKVehicle::SeatFiringMode(int32_t SeatIndex, uint8_t NewFireMode, bool bReadValue)
{
	static UFunction* uFnSeatFiringMode = nullptr;

	if (!uFnSeatFiringMode)
	{
		uFnSeatFiringMode = UFunction::FindFunction("Function UDKBase.UDKVehicle.SeatFiringMode");
	}

	AUDKVehicle_execSeatFiringMode_Params SeatFiringMode_Params;
	memset(&SeatFiringMode_Params, 0, sizeof(SeatFiringMode_Params));
	memcpy_s(&SeatFiringMode_Params.SeatIndex, sizeof(SeatFiringMode_Params.SeatIndex), &SeatIndex, sizeof(SeatIndex));
	memcpy_s(&SeatFiringMode_Params.NewFireMode, sizeof(SeatFiringMode_Params.NewFireMode), &NewFireMode, sizeof(NewFireMode));
	SeatFiringMode_Params.bReadValue = bReadValue;

	uFnSeatFiringMode->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSeatFiringMode, &SeatFiringMode_Params, nullptr);
	uFnSeatFiringMode->FunctionFlags |= 0x400;

	return SeatFiringMode_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.SeatFlashCount
// [0x00024500] (FUNC_Simulated | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        SeatIndex                      (CPF_Parm)
// uint8_t                        NewCount                       (CPF_OptionalParm | CPF_Parm)
// bool                           bReadValue                     (CPF_OptionalParm | CPF_Parm)

uint8_t AUDKVehicle::SeatFlashCount(int32_t SeatIndex, uint8_t NewCount, bool bReadValue)
{
	static UFunction* uFnSeatFlashCount = nullptr;

	if (!uFnSeatFlashCount)
	{
		uFnSeatFlashCount = UFunction::FindFunction("Function UDKBase.UDKVehicle.SeatFlashCount");
	}

	AUDKVehicle_execSeatFlashCount_Params SeatFlashCount_Params;
	memset(&SeatFlashCount_Params, 0, sizeof(SeatFlashCount_Params));
	memcpy_s(&SeatFlashCount_Params.SeatIndex, sizeof(SeatFlashCount_Params.SeatIndex), &SeatIndex, sizeof(SeatIndex));
	memcpy_s(&SeatFlashCount_Params.NewCount, sizeof(SeatFlashCount_Params.NewCount), &NewCount, sizeof(NewCount));
	SeatFlashCount_Params.bReadValue = bReadValue;

	uFnSeatFlashCount->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSeatFlashCount, &SeatFlashCount_Params, nullptr);
	uFnSeatFlashCount->FunctionFlags |= 0x400;

	return SeatFlashCount_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.SeatFlashLocation
// [0x00024500] (FUNC_Simulated | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        SeatIndex                      (CPF_Parm)
// struct FVector                 NewLoc                         (CPF_OptionalParm | CPF_Parm)
// bool                           bReadValue                     (CPF_OptionalParm | CPF_Parm)

struct FVector AUDKVehicle::SeatFlashLocation(int32_t SeatIndex, struct FVector NewLoc, bool bReadValue)
{
	static UFunction* uFnSeatFlashLocation = nullptr;

	if (!uFnSeatFlashLocation)
	{
		uFnSeatFlashLocation = UFunction::FindFunction("Function UDKBase.UDKVehicle.SeatFlashLocation");
	}

	AUDKVehicle_execSeatFlashLocation_Params SeatFlashLocation_Params;
	memset(&SeatFlashLocation_Params, 0, sizeof(SeatFlashLocation_Params));
	memcpy_s(&SeatFlashLocation_Params.SeatIndex, sizeof(SeatFlashLocation_Params.SeatIndex), &SeatIndex, sizeof(SeatIndex));
	memcpy_s(&SeatFlashLocation_Params.NewLoc, sizeof(SeatFlashLocation_Params.NewLoc), &NewLoc, sizeof(NewLoc));
	SeatFlashLocation_Params.bReadValue = bReadValue;

	uFnSeatFlashLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSeatFlashLocation, &SeatFlashLocation_Params, nullptr);
	uFnSeatFlashLocation->FunctionFlags |= 0x400;

	return SeatFlashLocation_Params.ReturnValue;
};

// Function UDKBase.UDKVehicle.SeatWeaponRotation
// [0x00024500] (FUNC_Simulated | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        SeatIndex                      (CPF_Parm)
// struct FRotator                NewRot                         (CPF_OptionalParm | CPF_Parm)
// bool                           bReadValue                     (CPF_OptionalParm | CPF_Parm)

struct FRotator AUDKVehicle::SeatWeaponRotation(int32_t SeatIndex, struct FRotator NewRot, bool bReadValue)
{
	static UFunction* uFnSeatWeaponRotation = nullptr;

	if (!uFnSeatWeaponRotation)
	{
		uFnSeatWeaponRotation = UFunction::FindFunction("Function UDKBase.UDKVehicle.SeatWeaponRotation");
	}

	AUDKVehicle_execSeatWeaponRotation_Params SeatWeaponRotation_Params;
	memset(&SeatWeaponRotation_Params, 0, sizeof(SeatWeaponRotation_Params));
	memcpy_s(&SeatWeaponRotation_Params.SeatIndex, sizeof(SeatWeaponRotation_Params.SeatIndex), &SeatIndex, sizeof(SeatIndex));
	memcpy_s(&SeatWeaponRotation_Params.NewRot, sizeof(SeatWeaponRotation_Params.NewRot), &NewRot, sizeof(NewRot));
	SeatWeaponRotation_Params.bReadValue = bReadValue;

	uFnSeatWeaponRotation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSeatWeaponRotation, &SeatWeaponRotation_Params, nullptr);
	uFnSeatWeaponRotation->FunctionFlags |= 0x400;

	return SeatWeaponRotation_Params.ReturnValue;
};

// Function UDKBase.UDKWeaponPawn.GetTargetLocation
// [0x00024500] (FUNC_Simulated | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  RequestedBy                    (CPF_OptionalParm | CPF_Parm)
// bool                           bRequestAlternateLoc           (CPF_OptionalParm | CPF_Parm)

struct FVector AUDKWeaponPawn::GetTargetLocation(class AActor* RequestedBy, bool bRequestAlternateLoc)
{
	static UFunction* uFnGetTargetLocation = nullptr;

	if (!uFnGetTargetLocation)
	{
		uFnGetTargetLocation = UFunction::FindFunction("Function UDKBase.UDKWeaponPawn.GetTargetLocation");
	}

	AUDKWeaponPawn_execGetTargetLocation_Params GetTargetLocation_Params;
	memset(&GetTargetLocation_Params, 0, sizeof(GetTargetLocation_Params));
	memcpy_s(&GetTargetLocation_Params.RequestedBy, sizeof(GetTargetLocation_Params.RequestedBy), &RequestedBy, sizeof(RequestedBy));
	GetTargetLocation_Params.bRequestAlternateLoc = bRequestAlternateLoc;

	uFnGetTargetLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTargetLocation, &GetTargetLocation_Params, nullptr);
	uFnGetTargetLocation->FunctionFlags |= 0x400;

	return GetTargetLocation_Params.ReturnValue;
};

// Function UDKBase.UDKVehicleFactory.GetTeamNum
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t AUDKVehicleFactory::GetTeamNum()
{
	static UFunction* uFnGetTeamNum = nullptr;

	if (!uFnGetTeamNum)
	{
		uFnGetTeamNum = UFunction::FindFunction("Function UDKBase.UDKVehicleFactory.GetTeamNum");
	}

	AUDKVehicleFactory_execGetTeamNum_Params GetTeamNum_Params;
	memset(&GetTeamNum_Params, 0, sizeof(GetTeamNum_Params));

	uFnGetTeamNum->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTeamNum, &GetTeamNum_Params, nullptr);
	uFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Params.ReturnValue;
};

// Function UDKBase.UDKVehicleFactory.SetHUDLocation
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 NewHUDLocation                 (CPF_Parm)

void AUDKVehicleFactory::SetHUDLocation(struct FVector NewHUDLocation)
{
	static UFunction* uFnSetHUDLocation = nullptr;

	if (!uFnSetHUDLocation)
	{
		uFnSetHUDLocation = UFunction::FindFunction("Function UDKBase.UDKVehicleFactory.SetHUDLocation");
	}

	AUDKVehicleFactory_execSetHUDLocation_Params SetHUDLocation_Params;
	memset(&SetHUDLocation_Params, 0, sizeof(SetHUDLocation_Params));
	memcpy_s(&SetHUDLocation_Params.NewHUDLocation, sizeof(SetHUDLocation_Params.NewHUDLocation), &NewHUDLocation, sizeof(NewHUDLocation));

	uFnSetHUDLocation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetHUDLocation, &SetHUDLocation_Params, nullptr);
	uFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicleFactory.SpawnVehicle
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKVehicleFactory::eventSpawnVehicle()
{
	static UFunction* uFnSpawnVehicle = nullptr;

	if (!uFnSpawnVehicle)
	{
		uFnSpawnVehicle = UFunction::FindFunction("Function UDKBase.UDKVehicleFactory.SpawnVehicle");
	}

	AUDKVehicleFactory_eventSpawnVehicle_Params SpawnVehicle_Params;
	memset(&SpawnVehicle_Params, 0, sizeof(SpawnVehicle_Params));

	this->ProcessEvent(uFnSpawnVehicle, &SpawnVehicle_Params, nullptr);
};

// Function UDKBase.UDKVehicleSimHoverboard.UpdateLeanConstraint
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class URB_ConstraintInstance*  LeanUprightConstraintInstance  (CPF_Parm)
// struct FVector                 LeanY                          (CPF_Parm)
// struct FVector                 LeanZ                          (CPF_Parm)

void UUDKVehicleSimHoverboard::UpdateLeanConstraint(class URB_ConstraintInstance* LeanUprightConstraintInstance, struct FVector LeanY, struct FVector LeanZ)
{
	static UFunction* uFnUpdateLeanConstraint = nullptr;

	if (!uFnUpdateLeanConstraint)
	{
		uFnUpdateLeanConstraint = UFunction::FindFunction("Function UDKBase.UDKVehicleSimHoverboard.UpdateLeanConstraint");
	}

	UUDKVehicleSimHoverboard_execUpdateLeanConstraint_Params UpdateLeanConstraint_Params;
	memset(&UpdateLeanConstraint_Params, 0, sizeof(UpdateLeanConstraint_Params));
	memcpy_s(&UpdateLeanConstraint_Params.LeanUprightConstraintInstance, sizeof(UpdateLeanConstraint_Params.LeanUprightConstraintInstance), &LeanUprightConstraintInstance, sizeof(LeanUprightConstraintInstance));
	memcpy_s(&UpdateLeanConstraint_Params.LeanY, sizeof(UpdateLeanConstraint_Params.LeanY), &LeanY, sizeof(LeanY));
	memcpy_s(&UpdateLeanConstraint_Params.LeanZ, sizeof(UpdateLeanConstraint_Params.LeanZ), &LeanZ, sizeof(LeanZ));

	uFnUpdateLeanConstraint->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateLeanConstraint, &UpdateLeanConstraint_Params, nullptr);
	uFnUpdateLeanConstraint->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicleSimHoverboard.InitWheels
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AUDKVehicle*             Vehicle                        (CPF_Parm)

void UUDKVehicleSimHoverboard::InitWheels(class AUDKVehicle* Vehicle)
{
	static UFunction* uFnInitWheels = nullptr;

	if (!uFnInitWheels)
	{
		uFnInitWheels = UFunction::FindFunction("Function UDKBase.UDKVehicleSimHoverboard.InitWheels");
	}

	UUDKVehicleSimHoverboard_execInitWheels_Params InitWheels_Params;
	memset(&InitWheels_Params, 0, sizeof(InitWheels_Params));
	memcpy_s(&InitWheels_Params.Vehicle, sizeof(InitWheels_Params.Vehicle), &Vehicle, sizeof(Vehicle));

	uFnInitWheels->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInitWheels, &InitWheels_Params, nullptr);
	uFnInitWheels->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicleWheel.OldEffectFinished
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UParticleSystemComponent* PSystem                        (CPF_Parm | CPF_EditInline)

void UUDKVehicleWheel::OldEffectFinished(class UParticleSystemComponent* PSystem)
{
	static UFunction* uFnOldEffectFinished = nullptr;

	if (!uFnOldEffectFinished)
	{
		uFnOldEffectFinished = UFunction::FindFunction("Function UDKBase.UDKVehicleWheel.OldEffectFinished");
	}

	UUDKVehicleWheel_execOldEffectFinished_Params OldEffectFinished_Params;
	memset(&OldEffectFinished_Params, 0, sizeof(OldEffectFinished_Params));
	memcpy_s(&OldEffectFinished_Params.PSystem, sizeof(OldEffectFinished_Params.PSystem), &PSystem, sizeof(PSystem));

	this->ProcessEvent(uFnOldEffectFinished, &OldEffectFinished_Params, nullptr);
};

// Function UDKBase.UDKVehicleWheel.SetParticleEffect
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AUDKVehicle*             OwnerVehicle                   (CPF_Parm)
// class UParticleSystem*         NewTemplate                    (CPF_Parm)

void UUDKVehicleWheel::eventSetParticleEffect(class AUDKVehicle* OwnerVehicle, class UParticleSystem* NewTemplate)
{
	static UFunction* uFnSetParticleEffect = nullptr;

	if (!uFnSetParticleEffect)
	{
		uFnSetParticleEffect = UFunction::FindFunction("Function UDKBase.UDKVehicleWheel.SetParticleEffect");
	}

	UUDKVehicleWheel_eventSetParticleEffect_Params SetParticleEffect_Params;
	memset(&SetParticleEffect_Params, 0, sizeof(SetParticleEffect_Params));
	memcpy_s(&SetParticleEffect_Params.OwnerVehicle, sizeof(SetParticleEffect_Params.OwnerVehicle), &OwnerVehicle, sizeof(OwnerVehicle));
	memcpy_s(&SetParticleEffect_Params.NewTemplate, sizeof(SetParticleEffect_Params.NewTemplate), &NewTemplate, sizeof(NewTemplate));

	this->ProcessEvent(uFnSetParticleEffect, &SetParticleEffect_Params, nullptr);
};

// Function UDKBase.UDKWeapon.SetPosition
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AUDKPawn*                Holder                         (CPF_Parm)

void AUDKWeapon::eventSetPosition(class AUDKPawn* Holder)
{
	static UFunction* uFnSetPosition = nullptr;

	if (!uFnSetPosition)
	{
		uFnSetPosition = UFunction::FindFunction("Function UDKBase.UDKWeapon.SetPosition");
	}

	AUDKWeapon_eventSetPosition_Params SetPosition_Params;
	memset(&SetPosition_Params, 0, sizeof(SetPosition_Params));
	memcpy_s(&SetPosition_Params.Holder, sizeof(SetPosition_Params.Holder), &Holder, sizeof(Holder));

	this->ProcessEvent(uFnSetPosition, &SetPosition_Params, nullptr);
};

// Function UDKBase.UDKWeapon.EnsureWeaponOverlayComponentLast
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKWeapon::EnsureWeaponOverlayComponentLast()
{
	static UFunction* uFnEnsureWeaponOverlayComponentLast = nullptr;

	if (!uFnEnsureWeaponOverlayComponentLast)
	{
		uFnEnsureWeaponOverlayComponentLast = UFunction::FindFunction("Function UDKBase.UDKWeapon.EnsureWeaponOverlayComponentLast");
	}

	AUDKWeapon_execEnsureWeaponOverlayComponentLast_Params EnsureWeaponOverlayComponentLast_Params;
	memset(&EnsureWeaponOverlayComponentLast_Params, 0, sizeof(EnsureWeaponOverlayComponentLast_Params));

	uFnEnsureWeaponOverlayComponentLast->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEnsureWeaponOverlayComponentLast, &EnsureWeaponOverlayComponentLast_Params, nullptr);
	uFnEnsureWeaponOverlayComponentLast->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKWeapon.BestMode
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t AUDKWeapon::BestMode()
{
	static UFunction* uFnBestMode = nullptr;

	if (!uFnBestMode)
	{
		uFnBestMode = UFunction::FindFunction("Function UDKBase.UDKWeapon.BestMode");
	}

	AUDKWeapon_execBestMode_Params BestMode_Params;
	memset(&BestMode_Params, 0, sizeof(BestMode_Params));

	this->ProcessEvent(uFnBestMode, &BestMode_Params, nullptr);

	return BestMode_Params.ReturnValue;
};

// Function UDKBase.UDKWeapon.IsAimCorrect
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AUDKWeapon::eventIsAimCorrect()
{
	static UFunction* uFnIsAimCorrect = nullptr;

	if (!uFnIsAimCorrect)
	{
		uFnIsAimCorrect = UFunction::FindFunction("Function UDKBase.UDKWeapon.IsAimCorrect");
	}

	AUDKWeapon_eventIsAimCorrect_Params IsAimCorrect_Params;
	memset(&IsAimCorrect_Params, 0, sizeof(IsAimCorrect_Params));

	this->ProcessEvent(uFnIsAimCorrect, &IsAimCorrect_Params, nullptr);

	return IsAimCorrect_Params.ReturnValue;
};

// Function UDKBase.UDKWeapon.PostBeginPlay
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AUDKWeapon::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function UDKBase.UDKWeapon.PostBeginPlay");
	}

	AUDKWeapon_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function UDKBase.UDKAnimBlendBase.TickAnim
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaSeconds                   (CPF_Parm)

void UUDKAnimBlendBase::eventTickAnim(float DeltaSeconds)
{
	static UFunction* uFnTickAnim = nullptr;

	if (!uFnTickAnim)
	{
		uFnTickAnim = UFunction::FindFunction("Function UDKBase.UDKAnimBlendBase.TickAnim");
	}

	UUDKAnimBlendBase_eventTickAnim_Params TickAnim_Params;
	memset(&TickAnim_Params, 0, sizeof(TickAnim_Params));
	memcpy_s(&TickAnim_Params.DeltaSeconds, sizeof(TickAnim_Params.DeltaSeconds), &DeltaSeconds, sizeof(DeltaSeconds));

	this->ProcessEvent(uFnTickAnim, &TickAnim_Params, nullptr);
};

// Function UDKBase.UDKAnimBlendBase.GetAnimDuration
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ChildIndex                     (CPF_Parm)

float UUDKAnimBlendBase::GetAnimDuration(int32_t ChildIndex)
{
	static UFunction* uFnGetAnimDuration = nullptr;

	if (!uFnGetAnimDuration)
	{
		uFnGetAnimDuration = UFunction::FindFunction("Function UDKBase.UDKAnimBlendBase.GetAnimDuration");
	}

	UUDKAnimBlendBase_execGetAnimDuration_Params GetAnimDuration_Params;
	memset(&GetAnimDuration_Params, 0, sizeof(GetAnimDuration_Params));
	memcpy_s(&GetAnimDuration_Params.ChildIndex, sizeof(GetAnimDuration_Params.ChildIndex), &ChildIndex, sizeof(ChildIndex));

	uFnGetAnimDuration->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetAnimDuration, &GetAnimDuration_Params, nullptr);
	uFnGetAnimDuration->FunctionFlags |= 0x400;

	return GetAnimDuration_Params.ReturnValue;
};

// Function UDKBase.UDKAnimBlendBase.GetBlendTime
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ChildIndex                     (CPF_Parm)
// bool                           bGetDefault                    (CPF_OptionalParm | CPF_Parm)

float UUDKAnimBlendBase::GetBlendTime(int32_t ChildIndex, bool bGetDefault)
{
	static UFunction* uFnGetBlendTime = nullptr;

	if (!uFnGetBlendTime)
	{
		uFnGetBlendTime = UFunction::FindFunction("Function UDKBase.UDKAnimBlendBase.GetBlendTime");
	}

	UUDKAnimBlendBase_execGetBlendTime_Params GetBlendTime_Params;
	memset(&GetBlendTime_Params, 0, sizeof(GetBlendTime_Params));
	memcpy_s(&GetBlendTime_Params.ChildIndex, sizeof(GetBlendTime_Params.ChildIndex), &ChildIndex, sizeof(ChildIndex));
	GetBlendTime_Params.bGetDefault = bGetDefault;

	uFnGetBlendTime->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetBlendTime, &GetBlendTime_Params, nullptr);
	uFnGetBlendTime->FunctionFlags |= 0x400;

	return GetBlendTime_Params.ReturnValue;
};

// Function UDKBase.UDKAnimBlendByFlying.UpdateFlyingState
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUDKAnimBlendByFlying::UpdateFlyingState()
{
	static UFunction* uFnUpdateFlyingState = nullptr;

	if (!uFnUpdateFlyingState)
	{
		uFnUpdateFlyingState = UFunction::FindFunction("Function UDKBase.UDKAnimBlendByFlying.UpdateFlyingState");
	}

	UUDKAnimBlendByFlying_execUpdateFlyingState_Params UpdateFlyingState_Params;
	memset(&UpdateFlyingState_Params, 0, sizeof(UpdateFlyingState_Params));

	uFnUpdateFlyingState->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateFlyingState, &UpdateFlyingState_Params, nullptr);
	uFnUpdateFlyingState->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimBlendByPhysicsVolume.PhysicsVolumeChanged
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APhysicsVolume*          NewVolume                      (CPF_Parm)

void UUDKAnimBlendByPhysicsVolume::eventPhysicsVolumeChanged(class APhysicsVolume* NewVolume)
{
	static UFunction* uFnPhysicsVolumeChanged = nullptr;

	if (!uFnPhysicsVolumeChanged)
	{
		uFnPhysicsVolumeChanged = UFunction::FindFunction("Function UDKBase.UDKAnimBlendByPhysicsVolume.PhysicsVolumeChanged");
	}

	UUDKAnimBlendByPhysicsVolume_eventPhysicsVolumeChanged_Params PhysicsVolumeChanged_Params;
	memset(&PhysicsVolumeChanged_Params, 0, sizeof(PhysicsVolumeChanged_Params));
	memcpy_s(&PhysicsVolumeChanged_Params.NewVolume, sizeof(PhysicsVolumeChanged_Params.NewVolume), &NewVolume, sizeof(NewVolume));

	this->ProcessEvent(uFnPhysicsVolumeChanged, &PhysicsVolumeChanged_Params, nullptr);
};

// Function UDKBase.UDKAnimBlendByVehicle.UpdateVehicleState
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUDKAnimBlendByVehicle::UpdateVehicleState()
{
	static UFunction* uFnUpdateVehicleState = nullptr;

	if (!uFnUpdateVehicleState)
	{
		uFnUpdateVehicleState = UFunction::FindFunction("Function UDKBase.UDKAnimBlendByVehicle.UpdateVehicleState");
	}

	UUDKAnimBlendByVehicle_execUpdateVehicleState_Params UpdateVehicleState_Params;
	memset(&UpdateVehicleState_Params, 0, sizeof(UpdateVehicleState_Params));

	uFnUpdateVehicleState->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateVehicleState, &UpdateVehicleState_Params, nullptr);
	uFnUpdateVehicleState->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimBlendByDriving.UpdateDrivingState
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUDKAnimBlendByDriving::UpdateDrivingState()
{
	static UFunction* uFnUpdateDrivingState = nullptr;

	if (!uFnUpdateDrivingState)
	{
		uFnUpdateDrivingState = UFunction::FindFunction("Function UDKBase.UDKAnimBlendByDriving.UpdateDrivingState");
	}

	UUDKAnimBlendByDriving_execUpdateDrivingState_Params UpdateDrivingState_Params;
	memset(&UpdateDrivingState_Params, 0, sizeof(UpdateDrivingState_Params));

	uFnUpdateDrivingState->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateDrivingState, &UpdateDrivingState_Params, nullptr);
	uFnUpdateDrivingState->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimBlendByWeapon.AnimStopFire
// [0x00024802] (FUNC_Defined | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          SpecialBlendTime               (CPF_OptionalParm | CPF_Parm)

void UUDKAnimBlendByWeapon::eventAnimStopFire(float SpecialBlendTime)
{
	static UFunction* uFnAnimStopFire = nullptr;

	if (!uFnAnimStopFire)
	{
		uFnAnimStopFire = UFunction::FindFunction("Function UDKBase.UDKAnimBlendByWeapon.AnimStopFire");
	}

	UUDKAnimBlendByWeapon_eventAnimStopFire_Params AnimStopFire_Params;
	memset(&AnimStopFire_Params, 0, sizeof(AnimStopFire_Params));
	memcpy_s(&AnimStopFire_Params.SpecialBlendTime, sizeof(AnimStopFire_Params.SpecialBlendTime), &SpecialBlendTime, sizeof(SpecialBlendTime));

	this->ProcessEvent(uFnAnimStopFire, &AnimStopFire_Params, nullptr);
};

// Function UDKBase.UDKAnimBlendByWeapon.AnimFire
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   FireSequence                   (CPF_Parm)
// bool                           bAutoFire                      (CPF_Parm)
// float                          AnimRate                       (CPF_OptionalParm | CPF_Parm)
// float                          SpecialBlendTime               (CPF_OptionalParm | CPF_Parm)
// struct FName                   LoopSequence                   (CPF_OptionalParm | CPF_Parm)

void UUDKAnimBlendByWeapon::AnimFire(struct FName FireSequence, bool bAutoFire, float AnimRate, float SpecialBlendTime, struct FName LoopSequence)
{
	static UFunction* uFnAnimFire = nullptr;

	if (!uFnAnimFire)
	{
		uFnAnimFire = UFunction::FindFunction("Function UDKBase.UDKAnimBlendByWeapon.AnimFire");
	}

	UUDKAnimBlendByWeapon_execAnimFire_Params AnimFire_Params;
	memset(&AnimFire_Params, 0, sizeof(AnimFire_Params));
	memcpy_s(&AnimFire_Params.FireSequence, sizeof(AnimFire_Params.FireSequence), &FireSequence, sizeof(FireSequence));
	AnimFire_Params.bAutoFire = bAutoFire;
	memcpy_s(&AnimFire_Params.AnimRate, sizeof(AnimFire_Params.AnimRate), &AnimRate, sizeof(AnimRate));
	memcpy_s(&AnimFire_Params.SpecialBlendTime, sizeof(AnimFire_Params.SpecialBlendTime), &SpecialBlendTime, sizeof(SpecialBlendTime));
	memcpy_s(&AnimFire_Params.LoopSequence, sizeof(AnimFire_Params.LoopSequence), &LoopSequence, sizeof(LoopSequence));

	this->ProcessEvent(uFnAnimFire, &AnimFire_Params, nullptr);
};

// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Perc                           (CPF_Parm)

void UUDKAnimNodeFramePlayer::SetAnimPosition(float Perc)
{
	static UFunction* uFnSetAnimPosition = nullptr;

	if (!uFnSetAnimPosition)
	{
		uFnSetAnimPosition = UFunction::FindFunction("Function UDKBase.UDKAnimNodeFramePlayer.SetAnimPosition");
	}

	UUDKAnimNodeFramePlayer_execSetAnimPosition_Params SetAnimPosition_Params;
	memset(&SetAnimPosition_Params, 0, sizeof(SetAnimPosition_Params));
	memcpy_s(&SetAnimPosition_Params.Perc, sizeof(SetAnimPosition_Params.Perc), &Perc, sizeof(Perc));

	uFnSetAnimPosition->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetAnimPosition, &SetAnimPosition_Params, nullptr);
	uFnSetAnimPosition->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Sequence                       (CPF_Parm)
// float                          RateScale                      (CPF_Parm)

void UUDKAnimNodeFramePlayer::SetAnimation(struct FName Sequence, float RateScale)
{
	static UFunction* uFnSetAnimation = nullptr;

	if (!uFnSetAnimation)
	{
		uFnSetAnimation = UFunction::FindFunction("Function UDKBase.UDKAnimNodeFramePlayer.SetAnimation");
	}

	UUDKAnimNodeFramePlayer_execSetAnimation_Params SetAnimation_Params;
	memset(&SetAnimation_Params, 0, sizeof(SetAnimation_Params));
	memcpy_s(&SetAnimation_Params.Sequence, sizeof(SetAnimation_Params.Sequence), &Sequence, sizeof(Sequence));
	memcpy_s(&SetAnimation_Params.RateScale, sizeof(SetAnimation_Params.RateScale), &RateScale, sizeof(RateScale));

	uFnSetAnimation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetAnimation, &SetAnimation_Params, nullptr);
	uFnSetAnimation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimNodeJumpLeanOffset.SetLeanWeight
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          WeightTarget                   (CPF_Parm)
// float                          BlendTime                      (CPF_Parm)

void UUDKAnimNodeJumpLeanOffset::SetLeanWeight(float WeightTarget, float BlendTime)
{
	static UFunction* uFnSetLeanWeight = nullptr;

	if (!uFnSetLeanWeight)
	{
		uFnSetLeanWeight = UFunction::FindFunction("Function UDKBase.UDKAnimNodeJumpLeanOffset.SetLeanWeight");
	}

	UUDKAnimNodeJumpLeanOffset_execSetLeanWeight_Params SetLeanWeight_Params;
	memset(&SetLeanWeight_Params, 0, sizeof(SetLeanWeight_Params));
	memcpy_s(&SetLeanWeight_Params.WeightTarget, sizeof(SetLeanWeight_Params.WeightTarget), &WeightTarget, sizeof(WeightTarget));
	memcpy_s(&SetLeanWeight_Params.BlendTime, sizeof(SetLeanWeight_Params.BlendTime), &BlendTime, sizeof(BlendTime));

	uFnSetLeanWeight->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLeanWeight, &SetLeanWeight_Params, nullptr);
	uFnSetLeanWeight->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimNodeSequence.OnInit
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UUDKAnimNodeSequence::eventOnInit()
{
	static UFunction* uFnOnInit = nullptr;

	if (!uFnOnInit)
	{
		uFnOnInit = UFunction::FindFunction("Function UDKBase.UDKAnimNodeSequence.OnInit");
	}

	UUDKAnimNodeSequence_eventOnInit_Params OnInit_Params;
	memset(&OnInit_Params, 0, sizeof(OnInit_Params));

	this->ProcessEvent(uFnOnInit, &OnInit_Params, nullptr);
};

// Function UDKBase.UDKAnimNodeSequence.PlayAnimationSet
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<struct FName>           Sequences                      (CPF_Parm | CPF_NeedCtorLink)
// float                          SeqRate                        (CPF_Parm)
// bool                           bLoopLast                      (CPF_Parm)

void UUDKAnimNodeSequence::PlayAnimationSet(TArray<struct FName> Sequences, float SeqRate, bool bLoopLast)
{
	static UFunction* uFnPlayAnimationSet = nullptr;

	if (!uFnPlayAnimationSet)
	{
		uFnPlayAnimationSet = UFunction::FindFunction("Function UDKBase.UDKAnimNodeSequence.PlayAnimationSet");
	}

	UUDKAnimNodeSequence_execPlayAnimationSet_Params PlayAnimationSet_Params;
	memset(&PlayAnimationSet_Params, 0, sizeof(PlayAnimationSet_Params));
	memcpy_s(&PlayAnimationSet_Params.Sequences, sizeof(PlayAnimationSet_Params.Sequences), &Sequences, sizeof(Sequences));
	memcpy_s(&PlayAnimationSet_Params.SeqRate, sizeof(PlayAnimationSet_Params.SeqRate), &SeqRate, sizeof(SeqRate));
	PlayAnimationSet_Params.bLoopLast = bLoopLast;

	uFnPlayAnimationSet->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPlayAnimationSet, &PlayAnimationSet_Params, nullptr);
	uFnPlayAnimationSet->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimNodeSequence.PlayAnimation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   Sequence                       (CPF_Parm)
// float                          SeqRate                        (CPF_Parm)
// bool                           bSeqLoop                       (CPF_Parm)

void UUDKAnimNodeSequence::PlayAnimation(struct FName Sequence, float SeqRate, bool bSeqLoop)
{
	static UFunction* uFnPlayAnimation = nullptr;

	if (!uFnPlayAnimation)
	{
		uFnPlayAnimation = UFunction::FindFunction("Function UDKBase.UDKAnimNodeSequence.PlayAnimation");
	}

	UUDKAnimNodeSequence_execPlayAnimation_Params PlayAnimation_Params;
	memset(&PlayAnimation_Params, 0, sizeof(PlayAnimation_Params));
	memcpy_s(&PlayAnimation_Params.Sequence, sizeof(PlayAnimation_Params.Sequence), &Sequence, sizeof(Sequence));
	memcpy_s(&PlayAnimation_Params.SeqRate, sizeof(PlayAnimation_Params.SeqRate), &SeqRate, sizeof(SeqRate));
	PlayAnimation_Params.bSeqLoop = bSeqLoop;

	uFnPlayAnimation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPlayAnimation, &PlayAnimation_Params, nullptr);
	uFnPlayAnimation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKSkelControl_CantileverBeam.EntireBeamVelocity
// [0x00120002] (FUNC_Defined | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector UUDKSkelControl_CantileverBeam::EntireBeamVelocity()
{
	static UFunction* uFnEntireBeamVelocity = nullptr;

	if (!uFnEntireBeamVelocity)
	{
		uFnEntireBeamVelocity = UFunction::FindFunction("Function UDKBase.UDKSkelControl_CantileverBeam.EntireBeamVelocity");
	}

	UUDKSkelControl_CantileverBeam_execEntireBeamVelocity_Params EntireBeamVelocity_Params;
	memset(&EntireBeamVelocity_Params, 0, sizeof(EntireBeamVelocity_Params));

	this->ProcessEvent(uFnEntireBeamVelocity, &EntireBeamVelocity_Params, nullptr);

	return EntireBeamVelocity_Params.ReturnValue;
};

// Function UDKBase.UDKSkelControl_Damage.RestorePart
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UUDKSkelControl_Damage::eventRestorePart()
{
	static UFunction* uFnRestorePart = nullptr;

	if (!uFnRestorePart)
	{
		uFnRestorePart = UFunction::FindFunction("Function UDKBase.UDKSkelControl_Damage.RestorePart");
	}

	UUDKSkelControl_Damage_eventRestorePart_Params RestorePart_Params;
	memset(&RestorePart_Params, 0, sizeof(RestorePart_Params));

	this->ProcessEvent(uFnRestorePart, &RestorePart_Params, nullptr);

	return RestorePart_Params.ReturnValue;
};

// Function UDKBase.UDKSkelControl_Damage.BreakApartOnDeath
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 PartLocation                   (CPF_Parm)
// bool                           bIsVisible                     (CPF_Parm)

void UUDKSkelControl_Damage::eventBreakApartOnDeath(struct FVector PartLocation, bool bIsVisible)
{
	static UFunction* uFnBreakApartOnDeath = nullptr;

	if (!uFnBreakApartOnDeath)
	{
		uFnBreakApartOnDeath = UFunction::FindFunction("Function UDKBase.UDKSkelControl_Damage.BreakApartOnDeath");
	}

	UUDKSkelControl_Damage_eventBreakApartOnDeath_Params BreakApartOnDeath_Params;
	memset(&BreakApartOnDeath_Params, 0, sizeof(BreakApartOnDeath_Params));
	memcpy_s(&BreakApartOnDeath_Params.PartLocation, sizeof(BreakApartOnDeath_Params.PartLocation), &PartLocation, sizeof(PartLocation));
	BreakApartOnDeath_Params.bIsVisible = bIsVisible;

	this->ProcessEvent(uFnBreakApartOnDeath, &BreakApartOnDeath_Params, nullptr);
};

// Function UDKBase.UDKSkelControl_Damage.BreakApart
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 PartLocation                   (CPF_Parm)
// bool                           bIsVisible                     (CPF_Parm)

void UUDKSkelControl_Damage::eventBreakApart(struct FVector PartLocation, bool bIsVisible)
{
	static UFunction* uFnBreakApart = nullptr;

	if (!uFnBreakApart)
	{
		uFnBreakApart = UFunction::FindFunction("Function UDKBase.UDKSkelControl_Damage.BreakApart");
	}

	UUDKSkelControl_Damage_eventBreakApart_Params BreakApart_Params;
	memset(&BreakApart_Params, 0, sizeof(BreakApart_Params));
	memcpy_s(&BreakApart_Params.PartLocation, sizeof(BreakApart_Params.PartLocation), &PartLocation, sizeof(PartLocation));
	BreakApart_Params.bIsVisible = bIsVisible;

	this->ProcessEvent(uFnBreakApart, &BreakApart_Params, nullptr);
};

// Function UDKBase.UDKSkelControl_MassBoneScaling.GetBoneScale
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   BoneName                       (CPF_Parm)

float UUDKSkelControl_MassBoneScaling::GetBoneScale(struct FName BoneName)
{
	static UFunction* uFnGetBoneScale = nullptr;

	if (!uFnGetBoneScale)
	{
		uFnGetBoneScale = UFunction::FindFunction("Function UDKBase.UDKSkelControl_MassBoneScaling.GetBoneScale");
	}

	UUDKSkelControl_MassBoneScaling_execGetBoneScale_Params GetBoneScale_Params;
	memset(&GetBoneScale_Params, 0, sizeof(GetBoneScale_Params));
	memcpy_s(&GetBoneScale_Params.BoneName, sizeof(GetBoneScale_Params.BoneName), &BoneName, sizeof(BoneName));

	uFnGetBoneScale->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetBoneScale, &GetBoneScale_Params, nullptr);
	uFnGetBoneScale->FunctionFlags |= 0x400;

	return GetBoneScale_Params.ReturnValue;
};

// Function UDKBase.UDKSkelControl_MassBoneScaling.SetBoneScale
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   BoneName                       (CPF_Parm)
// float                          Scale                          (CPF_Parm)

void UUDKSkelControl_MassBoneScaling::SetBoneScale(struct FName BoneName, float Scale)
{
	static UFunction* uFnSetBoneScale = nullptr;

	if (!uFnSetBoneScale)
	{
		uFnSetBoneScale = UFunction::FindFunction("Function UDKBase.UDKSkelControl_MassBoneScaling.SetBoneScale");
	}

	UUDKSkelControl_MassBoneScaling_execSetBoneScale_Params SetBoneScale_Params;
	memset(&SetBoneScale_Params, 0, sizeof(SetBoneScale_Params));
	memcpy_s(&SetBoneScale_Params.BoneName, sizeof(SetBoneScale_Params.BoneName), &BoneName, sizeof(BoneName));
	memcpy_s(&SetBoneScale_Params.Scale, sizeof(SetBoneScale_Params.Scale), &Scale, sizeof(Scale));

	uFnSetBoneScale->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetBoneScale, &SetBoneScale_Params, nullptr);
	uFnSetBoneScale->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKSkelControl_TurretConstrained.WouldConstrainPitch
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        TestPitch                      (CPF_Parm)
// class USkeletalMeshComponent*  SkelComp                       (CPF_Parm | CPF_EditInline)

bool UUDKSkelControl_TurretConstrained::WouldConstrainPitch(int32_t TestPitch, class USkeletalMeshComponent* SkelComp)
{
	static UFunction* uFnWouldConstrainPitch = nullptr;

	if (!uFnWouldConstrainPitch)
	{
		uFnWouldConstrainPitch = UFunction::FindFunction("Function UDKBase.UDKSkelControl_TurretConstrained.WouldConstrainPitch");
	}

	UUDKSkelControl_TurretConstrained_execWouldConstrainPitch_Params WouldConstrainPitch_Params;
	memset(&WouldConstrainPitch_Params, 0, sizeof(WouldConstrainPitch_Params));
	memcpy_s(&WouldConstrainPitch_Params.TestPitch, sizeof(WouldConstrainPitch_Params.TestPitch), &TestPitch, sizeof(TestPitch));
	memcpy_s(&WouldConstrainPitch_Params.SkelComp, sizeof(WouldConstrainPitch_Params.SkelComp), &SkelComp, sizeof(SkelComp));

	uFnWouldConstrainPitch->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWouldConstrainPitch, &WouldConstrainPitch_Params, nullptr);
	uFnWouldConstrainPitch->FunctionFlags |= 0x400;

	return WouldConstrainPitch_Params.ReturnValue;
};

// Function UDKBase.UDKSkelControl_TurretConstrained.InitTurret
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                InitRot                        (CPF_Parm)
// class USkeletalMeshComponent*  SkelComp                       (CPF_Parm | CPF_EditInline)

void UUDKSkelControl_TurretConstrained::InitTurret(struct FRotator InitRot, class USkeletalMeshComponent* SkelComp)
{
	static UFunction* uFnInitTurret = nullptr;

	if (!uFnInitTurret)
	{
		uFnInitTurret = UFunction::FindFunction("Function UDKBase.UDKSkelControl_TurretConstrained.InitTurret");
	}

	UUDKSkelControl_TurretConstrained_execInitTurret_Params InitTurret_Params;
	memset(&InitTurret_Params, 0, sizeof(InitTurret_Params));
	memcpy_s(&InitTurret_Params.InitRot, sizeof(InitTurret_Params.InitRot), &InitRot, sizeof(InitRot));
	memcpy_s(&InitTurret_Params.SkelComp, sizeof(InitTurret_Params.SkelComp), &SkelComp, sizeof(SkelComp));

	uFnInitTurret->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInitTurret, &InitTurret_Params, nullptr);
	uFnInitTurret->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKSkelControl_TurretConstrained.OnTurretStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bIsMoving                      (CPF_Parm)

void UUDKSkelControl_TurretConstrained::OnTurretStatusChange(bool bIsMoving)
{
	static UFunction* uFnOnTurretStatusChange = nullptr;

	if (!uFnOnTurretStatusChange)
	{
		uFnOnTurretStatusChange = UFunction::FindFunction("Function UDKBase.UDKSkelControl_TurretConstrained.OnTurretStatusChange");
	}

	UUDKSkelControl_TurretConstrained_execOnTurretStatusChange_Params OnTurretStatusChange_Params;
	memset(&OnTurretStatusChange_Params, 0, sizeof(OnTurretStatusChange_Params));
	OnTurretStatusChange_Params.bIsMoving = bIsMoving;

	this->ProcessEvent(uFnOnTurretStatusChange, &OnTurretStatusChange_Params, nullptr);
};

// Function UDKBase.SimplePawn.GetPawnViewLocation
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector ASimplePawn::GetPawnViewLocation()
{
	static UFunction* uFnGetPawnViewLocation = nullptr;

	if (!uFnGetPawnViewLocation)
	{
		uFnGetPawnViewLocation = UFunction::FindFunction("Function UDKBase.SimplePawn.GetPawnViewLocation");
	}

	ASimplePawn_execGetPawnViewLocation_Params GetPawnViewLocation_Params;
	memset(&GetPawnViewLocation_Params, 0, sizeof(GetPawnViewLocation_Params));

	this->ProcessEvent(uFnGetPawnViewLocation, &GetPawnViewLocation_Params, nullptr);

	return GetPawnViewLocation_Params.ReturnValue;
};

// Function UDKBase.SimplePawn.TickSpecial
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void ASimplePawn::eventTickSpecial(float DeltaTime)
{
	static UFunction* uFnTickSpecial = nullptr;

	if (!uFnTickSpecial)
	{
		uFnTickSpecial = UFunction::FindFunction("Function UDKBase.SimplePawn.TickSpecial");
	}

	ASimplePawn_eventTickSpecial_Params TickSpecial_Params;
	memset(&TickSpecial_Params, 0, sizeof(TickSpecial_Params));
	memcpy_s(&TickSpecial_Params.DeltaTime, sizeof(TickSpecial_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnTickSpecial, &TickSpecial_Params, nullptr);
};

// Function UDKBase.SimplePawn.CalcCamera
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          fDeltaTime                     (CPF_Parm)
// struct FVector                 out_CamLoc                     (CPF_Parm | CPF_OutParm)
// struct FRotator                out_CamRot                     (CPF_Parm | CPF_OutParm)
// float                          out_FOV                        (CPF_Parm | CPF_OutParm)

bool ASimplePawn::CalcCamera(float fDeltaTime, struct FVector& out_CamLoc, struct FRotator& out_CamRot, float& out_FOV)
{
	static UFunction* uFnCalcCamera = nullptr;

	if (!uFnCalcCamera)
	{
		uFnCalcCamera = UFunction::FindFunction("Function UDKBase.SimplePawn.CalcCamera");
	}

	ASimplePawn_execCalcCamera_Params CalcCamera_Params;
	memset(&CalcCamera_Params, 0, sizeof(CalcCamera_Params));
	memcpy_s(&CalcCamera_Params.fDeltaTime, sizeof(CalcCamera_Params.fDeltaTime), &fDeltaTime, sizeof(fDeltaTime));
	memcpy_s(&CalcCamera_Params.out_CamLoc, sizeof(CalcCamera_Params.out_CamLoc), &out_CamLoc, sizeof(out_CamLoc));
	memcpy_s(&CalcCamera_Params.out_CamRot, sizeof(CalcCamera_Params.out_CamRot), &out_CamRot, sizeof(out_CamRot));
	memcpy_s(&CalcCamera_Params.out_FOV, sizeof(CalcCamera_Params.out_FOV), &out_FOV, sizeof(out_FOV));

	this->ProcessEvent(uFnCalcCamera, &CalcCamera_Params, nullptr);

	memcpy_s(&out_CamLoc, sizeof(out_CamLoc), &CalcCamera_Params.out_CamLoc, sizeof(CalcCamera_Params.out_CamLoc));
	memcpy_s(&out_CamRot, sizeof(out_CamRot), &CalcCamera_Params.out_CamRot, sizeof(CalcCamera_Params.out_CamRot));
	memcpy_s(&out_FOV, sizeof(out_FOV), &CalcCamera_Params.out_FOV, sizeof(CalcCamera_Params.out_FOV));

	return CalcCamera_Params.ReturnValue;
};

// Function UDKBase.SimplePawn.FixedView
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ASimplePawn::FixedView()
{
	static UFunction* uFnFixedView = nullptr;

	if (!uFnFixedView)
	{
		uFnFixedView = UFunction::FindFunction("Function UDKBase.SimplePawn.FixedView");
	}

	ASimplePawn_execFixedView_Params FixedView_Params;
	memset(&FixedView_Params, 0, sizeof(FixedView_Params));

	this->ProcessEvent(uFnFixedView, &FixedView_Params, nullptr);
};

// Function UDKBase.SimplePawn.PostBeginPlay
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ASimplePawn::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function UDKBase.SimplePawn.PostBeginPlay");
	}

	ASimplePawn_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function UDKBase.SimplePC.SetFootstepsToSnow
// [0x00020200] (FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ASimplePC::SetFootstepsToSnow()
{
	static UFunction* uFnSetFootstepsToSnow = nullptr;

	if (!uFnSetFootstepsToSnow)
	{
		uFnSetFootstepsToSnow = UFunction::FindFunction("Function UDKBase.SimplePC.SetFootstepsToSnow");
	}

	ASimplePC_execSetFootstepsToSnow_Params SetFootstepsToSnow_Params;
	memset(&SetFootstepsToSnow_Params, 0, sizeof(SetFootstepsToSnow_Params));

	this->ProcessEvent(uFnSetFootstepsToSnow, &SetFootstepsToSnow_Params, nullptr);
};

// Function UDKBase.SimplePC.SetFootstepsToStone
// [0x00020200] (FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ASimplePC::SetFootstepsToStone()
{
	static UFunction* uFnSetFootstepsToStone = nullptr;

	if (!uFnSetFootstepsToStone)
	{
		uFnSetFootstepsToStone = UFunction::FindFunction("Function UDKBase.SimplePC.SetFootstepsToStone");
	}

	ASimplePC_execSetFootstepsToStone_Params SetFootstepsToStone_Params;
	memset(&SetFootstepsToStone_Params, 0, sizeof(SetFootstepsToStone_Params));

	this->ProcessEvent(uFnSetFootstepsToStone, &SetFootstepsToStone_Params, nullptr);
};

// Function UDKBase.SimplePC.PlayerTick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void ASimplePC::PlayerTick(float DeltaTime)
{
	static UFunction* uFnPlayerTick = nullptr;

	if (!uFnPlayerTick)
	{
		uFnPlayerTick = UFunction::FindFunction("Function UDKBase.SimplePC.PlayerTick");
	}

	ASimplePC_execPlayerTick_Params PlayerTick_Params;
	memset(&PlayerTick_Params, 0, sizeof(PlayerTick_Params));
	memcpy_s(&PlayerTick_Params.DeltaTime, sizeof(PlayerTick_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnPlayerTick, &PlayerTick_Params, nullptr);
};

// Function UDKBase.SimplePC.GetPlayerViewPoint
// [0x00420902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 out_Location                   (CPF_Parm | CPF_OutParm)
// struct FRotator                out_Rotation                   (CPF_Parm | CPF_OutParm)

void ASimplePC::eventGetPlayerViewPoint(struct FVector& out_Location, struct FRotator& out_Rotation)
{
	static UFunction* uFnGetPlayerViewPoint = nullptr;

	if (!uFnGetPlayerViewPoint)
	{
		uFnGetPlayerViewPoint = UFunction::FindFunction("Function UDKBase.SimplePC.GetPlayerViewPoint");
	}

	ASimplePC_eventGetPlayerViewPoint_Params GetPlayerViewPoint_Params;
	memset(&GetPlayerViewPoint_Params, 0, sizeof(GetPlayerViewPoint_Params));
	memcpy_s(&GetPlayerViewPoint_Params.out_Location, sizeof(GetPlayerViewPoint_Params.out_Location), &out_Location, sizeof(out_Location));
	memcpy_s(&GetPlayerViewPoint_Params.out_Rotation, sizeof(GetPlayerViewPoint_Params.out_Rotation), &out_Rotation, sizeof(out_Rotation));

	this->ProcessEvent(uFnGetPlayerViewPoint, &GetPlayerViewPoint_Params, nullptr);

	memcpy_s(&out_Location, sizeof(out_Location), &GetPlayerViewPoint_Params.out_Location, sizeof(GetPlayerViewPoint_Params.out_Location));
	memcpy_s(&out_Rotation, sizeof(out_Rotation), &GetPlayerViewPoint_Params.out_Rotation, sizeof(GetPlayerViewPoint_Params.out_Rotation));
};

// Function UDKBase.SimplePC.NotifyDirectorControl
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bNowControlling                (CPF_Parm)
// class USeqAct_Interp*          CurrentMatinee                 (CPF_Parm)

void ASimplePC::eventNotifyDirectorControl(bool bNowControlling, class USeqAct_Interp* CurrentMatinee)
{
	static UFunction* uFnNotifyDirectorControl = nullptr;

	if (!uFnNotifyDirectorControl)
	{
		uFnNotifyDirectorControl = UFunction::FindFunction("Function UDKBase.SimplePC.NotifyDirectorControl");
	}

	ASimplePC_eventNotifyDirectorControl_Params NotifyDirectorControl_Params;
	memset(&NotifyDirectorControl_Params, 0, sizeof(NotifyDirectorControl_Params));
	NotifyDirectorControl_Params.bNowControlling = bNowControlling;
	memcpy_s(&NotifyDirectorControl_Params.CurrentMatinee, sizeof(NotifyDirectorControl_Params.CurrentMatinee), &CurrentMatinee, sizeof(CurrentMatinee));

	this->ProcessEvent(uFnNotifyDirectorControl, &NotifyDirectorControl_Params, nullptr);
};

// Function UDKBase.SimplePC.OffsetMatineeTouch
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Handle                         (CPF_Parm)
// ETouchType                     Type                           (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)
// float                          DeviceTimestamp                (CPF_Parm)
// int32_t                        TouchpadIndex                  (CPF_Parm)

void ASimplePC::OffsetMatineeTouch(int32_t Handle, ETouchType Type, struct FVector2D TouchLocation, float DeviceTimestamp, int32_t TouchpadIndex)
{
	static UFunction* uFnOffsetMatineeTouch = nullptr;

	if (!uFnOffsetMatineeTouch)
	{
		uFnOffsetMatineeTouch = UFunction::FindFunction("Function UDKBase.SimplePC.OffsetMatineeTouch");
	}

	ASimplePC_execOffsetMatineeTouch_Params OffsetMatineeTouch_Params;
	memset(&OffsetMatineeTouch_Params, 0, sizeof(OffsetMatineeTouch_Params));
	memcpy_s(&OffsetMatineeTouch_Params.Handle, sizeof(OffsetMatineeTouch_Params.Handle), &Handle, sizeof(Handle));
	memcpy_s(&OffsetMatineeTouch_Params.Type, sizeof(OffsetMatineeTouch_Params.Type), &Type, sizeof(Type));
	memcpy_s(&OffsetMatineeTouch_Params.TouchLocation, sizeof(OffsetMatineeTouch_Params.TouchLocation), &TouchLocation, sizeof(TouchLocation));
	memcpy_s(&OffsetMatineeTouch_Params.DeviceTimestamp, sizeof(OffsetMatineeTouch_Params.DeviceTimestamp), &DeviceTimestamp, sizeof(DeviceTimestamp));
	memcpy_s(&OffsetMatineeTouch_Params.TouchpadIndex, sizeof(OffsetMatineeTouch_Params.TouchpadIndex), &TouchpadIndex, sizeof(TouchpadIndex));

	this->ProcessEvent(uFnOffsetMatineeTouch, &OffsetMatineeTouch_Params, nullptr);
};

// Function UDKBase.SimplePC.ActivateControlGroup
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ASimplePC::ActivateControlGroup()
{
	static UFunction* uFnActivateControlGroup = nullptr;

	if (!uFnActivateControlGroup)
	{
		uFnActivateControlGroup = UFunction::FindFunction("Function UDKBase.SimplePC.ActivateControlGroup");
	}

	ASimplePC_execActivateControlGroup_Params ActivateControlGroup_Params;
	memset(&ActivateControlGroup_Params, 0, sizeof(ActivateControlGroup_Params));

	this->ProcessEvent(uFnActivateControlGroup, &ActivateControlGroup_Params, nullptr);
};

// Function UDKBase.SimplePC.UpdateCameraBreathing
// [0x00820102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void ASimplePC::UpdateCameraBreathing()
{
	static UFunction* uFnUpdateCameraBreathing = nullptr;

	if (!uFnUpdateCameraBreathing)
	{
		uFnUpdateCameraBreathing = UFunction::FindFunction("Function UDKBase.SimplePC.UpdateCameraBreathing");
	}

	ASimplePC_execUpdateCameraBreathing_Params UpdateCameraBreathing_Params;
	memset(&UpdateCameraBreathing_Params, 0, sizeof(UpdateCameraBreathing_Params));

	this->ProcessEvent(uFnUpdateCameraBreathing, &UpdateCameraBreathing_Params, nullptr);
};

// Function UDKBase.SimplePC.CheckDistanceToDestination
// [0x00020100] (FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DistToDestination              (CPF_Parm)

void ASimplePC::CheckDistanceToDestination(float DistToDestination)
{
	static UFunction* uFnCheckDistanceToDestination = nullptr;

	if (!uFnCheckDistanceToDestination)
	{
		uFnCheckDistanceToDestination = UFunction::FindFunction("Function UDKBase.SimplePC.CheckDistanceToDestination");
	}

	ASimplePC_execCheckDistanceToDestination_Params CheckDistanceToDestination_Params;
	memset(&CheckDistanceToDestination_Params, 0, sizeof(CheckDistanceToDestination_Params));
	memcpy_s(&CheckDistanceToDestination_Params.DistToDestination, sizeof(CheckDistanceToDestination_Params.DistToDestination), &DistToDestination, sizeof(DistToDestination));

	this->ProcessEvent(uFnCheckDistanceToDestination, &CheckDistanceToDestination_Params, nullptr);
};

// Function UDKBase.SimplePC.ProcessViewRotation
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// struct FRotator                DeltaRot                       (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)

void ASimplePC::ProcessViewRotation(float DeltaTime, struct FRotator DeltaRot, struct FRotator& out_ViewRotation)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function UDKBase.SimplePC.ProcessViewRotation");
	}

	ASimplePC_execProcessViewRotation_Params ProcessViewRotation_Params;
	memset(&ProcessViewRotation_Params, 0, sizeof(ProcessViewRotation_Params));
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, sizeof(ProcessViewRotation_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&ProcessViewRotation_Params.DeltaRot, sizeof(ProcessViewRotation_Params.DeltaRot), &DeltaRot, sizeof(DeltaRot));
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation), &out_ViewRotation, sizeof(out_ViewRotation));

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, sizeof(out_ViewRotation), &ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation));
};

// Function UDKBase.SimplePC.UpdateRotation
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void ASimplePC::UpdateRotation(float DeltaTime)
{
	static UFunction* uFnUpdateRotation = nullptr;

	if (!uFnUpdateRotation)
	{
		uFnUpdateRotation = UFunction::FindFunction("Function UDKBase.SimplePC.UpdateRotation");
	}

	ASimplePC_execUpdateRotation_Params UpdateRotation_Params;
	memset(&UpdateRotation_Params, 0, sizeof(UpdateRotation_Params));
	memcpy_s(&UpdateRotation_Params.DeltaTime, sizeof(UpdateRotation_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnUpdateRotation, &UpdateRotation_Params, nullptr);
};

// Function UDKBase.SimplePC.PlayerMove
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void ASimplePC::PlayerMove(float DeltaTime)
{
	static UFunction* uFnPlayerMove = nullptr;

	if (!uFnPlayerMove)
	{
		uFnPlayerMove = UFunction::FindFunction("Function UDKBase.SimplePC.PlayerMove");
	}

	ASimplePC_execPlayerMove_Params PlayerMove_Params;
	memset(&PlayerMove_Params, 0, sizeof(PlayerMove_Params));
	memcpy_s(&PlayerMove_Params.DeltaTime, sizeof(PlayerMove_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnPlayerMove, &PlayerMove_Params, nullptr);
};

// Function UDKBase.SimplePC.SetNextFootstepDistance
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ASimplePC::SetNextFootstepDistance()
{
	static UFunction* uFnSetNextFootstepDistance = nullptr;

	if (!uFnSetNextFootstepDistance)
	{
		uFnSetNextFootstepDistance = UFunction::FindFunction("Function UDKBase.SimplePC.SetNextFootstepDistance");
	}

	ASimplePC_execSetNextFootstepDistance_Params SetNextFootstepDistance_Params;
	memset(&SetNextFootstepDistance_Params, 0, sizeof(SetNextFootstepDistance_Params));

	this->ProcessEvent(uFnSetNextFootstepDistance, &SetNextFootstepDistance_Params, nullptr);
};

// Function UDKBase.SimplePC.IsStickMoveActive
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ASimplePC::IsStickMoveActive()
{
	static UFunction* uFnIsStickMoveActive = nullptr;

	if (!uFnIsStickMoveActive)
	{
		uFnIsStickMoveActive = UFunction::FindFunction("Function UDKBase.SimplePC.IsStickMoveActive");
	}

	ASimplePC_execIsStickMoveActive_Params IsStickMoveActive_Params;
	memset(&IsStickMoveActive_Params, 0, sizeof(IsStickMoveActive_Params));

	this->ProcessEvent(uFnIsStickMoveActive, &IsStickMoveActive_Params, nullptr);

	return IsStickMoveActive_Params.ReturnValue;
};

// Function UDKBase.SimplePC.PostBeginPlay
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ASimplePC::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function UDKBase.SimplePC.PostBeginPlay");
	}

	ASimplePC_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function UDKBase.SimplePC.SetupZones
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ASimplePC::SetupZones()
{
	static UFunction* uFnSetupZones = nullptr;

	if (!uFnSetupZones)
	{
		uFnSetupZones = UFunction::FindFunction("Function UDKBase.SimplePC.SetupZones");
	}

	ASimplePC_execSetupZones_Params SetupZones_Params;
	memset(&SetupZones_Params, 0, sizeof(SetupZones_Params));

	this->ProcessEvent(uFnSetupZones, &SetupZones_Params, nullptr);
};

// Function UDKBase.SimplePC.ReceivedGameClass
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  GameClass                      (CPF_Parm)

void ASimplePC::ReceivedGameClass(class UClass* GameClass)
{
	static UFunction* uFnReceivedGameClass = nullptr;

	if (!uFnReceivedGameClass)
	{
		uFnReceivedGameClass = UFunction::FindFunction("Function UDKBase.SimplePC.ReceivedGameClass");
	}

	ASimplePC_execReceivedGameClass_Params ReceivedGameClass_Params;
	memset(&ReceivedGameClass_Params, 0, sizeof(ReceivedGameClass_Params));
	memcpy_s(&ReceivedGameClass_Params.GameClass, sizeof(ReceivedGameClass_Params.GameClass), &GameClass, sizeof(GameClass));

	this->ProcessEvent(uFnReceivedGameClass, &ReceivedGameClass_Params, nullptr);
};

// Function UDKBase.SimplePC.OnConsoleCommand
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_ConsoleCommand*  inAction                       (CPF_Parm)

void ASimplePC::OnConsoleCommand(class USeqAct_ConsoleCommand* inAction)
{
	static UFunction* uFnOnConsoleCommand = nullptr;

	if (!uFnOnConsoleCommand)
	{
		uFnOnConsoleCommand = UFunction::FindFunction("Function UDKBase.SimplePC.OnConsoleCommand");
	}

	ASimplePC_execOnConsoleCommand_Params OnConsoleCommand_Params;
	memset(&OnConsoleCommand_Params, 0, sizeof(OnConsoleCommand_Params));
	memcpy_s(&OnConsoleCommand_Params.inAction, sizeof(OnConsoleCommand_Params.inAction), &inAction, sizeof(inAction));

	this->ProcessEvent(uFnOnConsoleCommand, &OnConsoleCommand_Params, nullptr);
};

// Function UDKBase.SimplePC.InitInputSystem
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ASimplePC::eventInitInputSystem()
{
	static UFunction* uFnInitInputSystem = nullptr;

	if (!uFnInitInputSystem)
	{
		uFnInitInputSystem = UFunction::FindFunction("Function UDKBase.SimplePC.InitInputSystem");
	}

	ASimplePC_eventInitInputSystem_Params InitInputSystem_Params;
	memset(&InitInputSystem_Params, 0, sizeof(InitInputSystem_Params));

	this->ProcessEvent(uFnInitInputSystem, &InitInputSystem_Params, nullptr);
};

// Function UDKBase.CastleGame.SetGameType
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UClass*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MapName                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Options                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Portal                         (CPF_Parm | CPF_NeedCtorLink)

class UClass* ACastleGame::eventSetGameType(class FString MapName, class FString Options, class FString Portal)
{
	static UFunction* uFnSetGameType = nullptr;

	if (!uFnSetGameType)
	{
		uFnSetGameType = UFunction::FindFunction("Function UDKBase.CastleGame.SetGameType");
	}

	ACastleGame_eventSetGameType_Params SetGameType_Params;
	memset(&SetGameType_Params, 0, sizeof(SetGameType_Params));
	memcpy_s(&SetGameType_Params.MapName, sizeof(SetGameType_Params.MapName), &MapName, sizeof(MapName));
	memcpy_s(&SetGameType_Params.Options, sizeof(SetGameType_Params.Options), &Options, sizeof(Options));
	memcpy_s(&SetGameType_Params.Portal, sizeof(SetGameType_Params.Portal), &Portal, sizeof(Portal));

	ACastleGame::StaticClass()->ProcessEvent(uFnSetGameType, &SetGameType_Params, nullptr);

	return SetGameType_Params.ReturnValue;
};

// Function UDKBase.CastleGame.PreventDeath
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   KilledPawn                     (CPF_Parm)
// class AController*             Killer                         (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)

bool ACastleGame::PreventDeath(class APawn* KilledPawn, class AController* Killer, class UClass* DamageType, struct FVector HitLocation)
{
	static UFunction* uFnPreventDeath = nullptr;

	if (!uFnPreventDeath)
	{
		uFnPreventDeath = UFunction::FindFunction("Function UDKBase.CastleGame.PreventDeath");
	}

	ACastleGame_execPreventDeath_Params PreventDeath_Params;
	memset(&PreventDeath_Params, 0, sizeof(PreventDeath_Params));
	memcpy_s(&PreventDeath_Params.KilledPawn, sizeof(PreventDeath_Params.KilledPawn), &KilledPawn, sizeof(KilledPawn));
	memcpy_s(&PreventDeath_Params.Killer, sizeof(PreventDeath_Params.Killer), &Killer, sizeof(Killer));
	memcpy_s(&PreventDeath_Params.DamageType, sizeof(PreventDeath_Params.DamageType), &DamageType, sizeof(DamageType));
	memcpy_s(&PreventDeath_Params.HitLocation, sizeof(PreventDeath_Params.HitLocation), &HitLocation, sizeof(HitLocation));

	this->ProcessEvent(uFnPreventDeath, &PreventDeath_Params, nullptr);

	return PreventDeath_Params.ReturnValue;
};

// Function UDKBase.CastleGame.OnEngineHasLoaded
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastleGame::eventOnEngineHasLoaded()
{
	static UFunction* uFnOnEngineHasLoaded = nullptr;

	if (!uFnOnEngineHasLoaded)
	{
		uFnOnEngineHasLoaded = UFunction::FindFunction("Function UDKBase.CastleGame.OnEngineHasLoaded");
	}

	ACastleGame_eventOnEngineHasLoaded_Params OnEngineHasLoaded_Params;
	memset(&OnEngineHasLoaded_Params, 0, sizeof(OnEngineHasLoaded_Params));

	this->ProcessEvent(uFnOnEngineHasLoaded, &OnEngineHasLoaded_Params, nullptr);
};

// Function UDKBase.CastlePC.SetFootstepsToSnow
// [0x00020200] (FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::SetFootstepsToSnow()
{
	static UFunction* uFnSetFootstepsToSnow = nullptr;

	if (!uFnSetFootstepsToSnow)
	{
		uFnSetFootstepsToSnow = UFunction::FindFunction("Function UDKBase.CastlePC.SetFootstepsToSnow");
	}

	ACastlePC_execSetFootstepsToSnow_Params SetFootstepsToSnow_Params;
	memset(&SetFootstepsToSnow_Params, 0, sizeof(SetFootstepsToSnow_Params));

	this->ProcessEvent(uFnSetFootstepsToSnow, &SetFootstepsToSnow_Params, nullptr);
};

// Function UDKBase.CastlePC.SetFootstepsToStone
// [0x00020200] (FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::SetFootstepsToStone()
{
	static UFunction* uFnSetFootstepsToStone = nullptr;

	if (!uFnSetFootstepsToStone)
	{
		uFnSetFootstepsToStone = UFunction::FindFunction("Function UDKBase.CastlePC.SetFootstepsToStone");
	}

	ACastlePC_execSetFootstepsToStone_Params SetFootstepsToStone_Params;
	memset(&SetFootstepsToStone_Params, 0, sizeof(SetFootstepsToStone_Params));

	this->ProcessEvent(uFnSetFootstepsToStone, &SetFootstepsToStone_Params, nullptr);
};

// Function UDKBase.CastlePC.StartTutorials
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::StartTutorials()
{
	static UFunction* uFnStartTutorials = nullptr;

	if (!uFnStartTutorials)
	{
		uFnStartTutorials = UFunction::FindFunction("Function UDKBase.CastlePC.StartTutorials");
	}

	ACastlePC_execStartTutorials_Params StartTutorials_Params;
	memset(&StartTutorials_Params, 0, sizeof(StartTutorials_Params));

	this->ProcessEvent(uFnStartTutorials, &StartTutorials_Params, nullptr);
};

// Function UDKBase.CastlePC.FlashHelp
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Duration                       (CPF_Parm)

void ACastlePC::FlashHelp(float Duration)
{
	static UFunction* uFnFlashHelp = nullptr;

	if (!uFnFlashHelp)
	{
		uFnFlashHelp = UFunction::FindFunction("Function UDKBase.CastlePC.FlashHelp");
	}

	ACastlePC_execFlashHelp_Params FlashHelp_Params;
	memset(&FlashHelp_Params, 0, sizeof(FlashHelp_Params));
	memcpy_s(&FlashHelp_Params.Duration, sizeof(FlashHelp_Params.Duration), &Duration, sizeof(Duration));

	this->ProcessEvent(uFnFlashHelp, &FlashHelp_Params, nullptr);
};

// Function UDKBase.CastlePC.ShowSplash
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::ShowSplash()
{
	static UFunction* uFnShowSplash = nullptr;

	if (!uFnShowSplash)
	{
		uFnShowSplash = UFunction::FindFunction("Function UDKBase.CastlePC.ShowSplash");
	}

	ACastlePC_execShowSplash_Params ShowSplash_Params;
	memset(&ShowSplash_Params, 0, sizeof(ShowSplash_Params));

	this->ProcessEvent(uFnShowSplash, &ShowSplash_Params, nullptr);
};

// Function UDKBase.CastlePC.PlayerTick
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void ACastlePC::PlayerTick(float DeltaTime)
{
	static UFunction* uFnPlayerTick = nullptr;

	if (!uFnPlayerTick)
	{
		uFnPlayerTick = UFunction::FindFunction("Function UDKBase.CastlePC.PlayerTick");
	}

	ACastlePC_execPlayerTick_Params PlayerTick_Params;
	memset(&PlayerTick_Params, 0, sizeof(PlayerTick_Params));
	memcpy_s(&PlayerTick_Params.DeltaTime, sizeof(PlayerTick_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnPlayerTick, &PlayerTick_Params, nullptr);
};

// Function UDKBase.CastlePC.ProcessMenuSlide
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// int32_t                        SlideValue                     (CPF_Parm)
// struct FVector2D               ViewportSizes                  (CPF_Parm)

bool ACastlePC::ProcessMenuSlide(class UMobileInputZone* Zone, ETouchType EventType, int32_t SlideValue, struct FVector2D ViewportSizes)
{
	static UFunction* uFnProcessMenuSlide = nullptr;

	if (!uFnProcessMenuSlide)
	{
		uFnProcessMenuSlide = UFunction::FindFunction("Function UDKBase.CastlePC.ProcessMenuSlide");
	}

	ACastlePC_execProcessMenuSlide_Params ProcessMenuSlide_Params;
	memset(&ProcessMenuSlide_Params, 0, sizeof(ProcessMenuSlide_Params));
	memcpy_s(&ProcessMenuSlide_Params.Zone, sizeof(ProcessMenuSlide_Params.Zone), &Zone, sizeof(Zone));
	memcpy_s(&ProcessMenuSlide_Params.EventType, sizeof(ProcessMenuSlide_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&ProcessMenuSlide_Params.SlideValue, sizeof(ProcessMenuSlide_Params.SlideValue), &SlideValue, sizeof(SlideValue));
	memcpy_s(&ProcessMenuSlide_Params.ViewportSizes, sizeof(ProcessMenuSlide_Params.ViewportSizes), &ViewportSizes, sizeof(ViewportSizes));

	this->ProcessEvent(uFnProcessMenuSlide, &ProcessMenuSlide_Params, nullptr);

	return ProcessMenuSlide_Params.ReturnValue;
};

// Function UDKBase.CastlePC.MenuSliderTap
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)

bool ACastlePC::MenuSliderTap(class UMobileInputZone* Zone, ETouchType EventType, struct FVector2D TouchLocation)
{
	static UFunction* uFnMenuSliderTap = nullptr;

	if (!uFnMenuSliderTap)
	{
		uFnMenuSliderTap = UFunction::FindFunction("Function UDKBase.CastlePC.MenuSliderTap");
	}

	ACastlePC_execMenuSliderTap_Params MenuSliderTap_Params;
	memset(&MenuSliderTap_Params, 0, sizeof(MenuSliderTap_Params));
	memcpy_s(&MenuSliderTap_Params.Zone, sizeof(MenuSliderTap_Params.Zone), &Zone, sizeof(Zone));
	memcpy_s(&MenuSliderTap_Params.EventType, sizeof(MenuSliderTap_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&MenuSliderTap_Params.TouchLocation, sizeof(MenuSliderTap_Params.TouchLocation), &TouchLocation, sizeof(TouchLocation));

	this->ProcessEvent(uFnMenuSliderTap, &MenuSliderTap_Params, nullptr);

	return MenuSliderTap_Params.ReturnValue;
};

// Function UDKBase.CastlePC.OpenMenu
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::OpenMenu()
{
	static UFunction* uFnOpenMenu = nullptr;

	if (!uFnOpenMenu)
	{
		uFnOpenMenu = UFunction::FindFunction("Function UDKBase.CastlePC.OpenMenu");
	}

	ACastlePC_execOpenMenu_Params OpenMenu_Params;
	memset(&OpenMenu_Params, 0, sizeof(OpenMenu_Params));

	this->ProcessEvent(uFnOpenMenu, &OpenMenu_Params, nullptr);
};

// Function UDKBase.CastlePC.ResetMenu
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::ResetMenu()
{
	static UFunction* uFnResetMenu = nullptr;

	if (!uFnResetMenu)
	{
		uFnResetMenu = UFunction::FindFunction("Function UDKBase.CastlePC.ResetMenu");
	}

	ACastlePC_execResetMenu_Params ResetMenu_Params;
	memset(&ResetMenu_Params, 0, sizeof(ResetMenu_Params));

	this->ProcessEvent(uFnResetMenu, &ResetMenu_Params, nullptr);
};

// Function UDKBase.CastlePC.AutoSlide
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Destination                    (CPF_Parm)

void ACastlePC::AutoSlide(float Destination)
{
	static UFunction* uFnAutoSlide = nullptr;

	if (!uFnAutoSlide)
	{
		uFnAutoSlide = UFunction::FindFunction("Function UDKBase.CastlePC.AutoSlide");
	}

	ACastlePC_execAutoSlide_Params AutoSlide_Params;
	memset(&AutoSlide_Params, 0, sizeof(AutoSlide_Params));
	memcpy_s(&AutoSlide_Params.Destination, sizeof(AutoSlide_Params.Destination), &Destination, sizeof(Destination));

	this->ProcessEvent(uFnAutoSlide, &AutoSlide_Params, nullptr);
};

// Function UDKBase.CastlePC.ExitAttractTap
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)

bool ACastlePC::ExitAttractTap(class UMobileInputZone* Zone, ETouchType EventType, struct FVector2D TouchLocation)
{
	static UFunction* uFnExitAttractTap = nullptr;

	if (!uFnExitAttractTap)
	{
		uFnExitAttractTap = UFunction::FindFunction("Function UDKBase.CastlePC.ExitAttractTap");
	}

	ACastlePC_execExitAttractTap_Params ExitAttractTap_Params;
	memset(&ExitAttractTap_Params, 0, sizeof(ExitAttractTap_Params));
	memcpy_s(&ExitAttractTap_Params.Zone, sizeof(ExitAttractTap_Params.Zone), &Zone, sizeof(Zone));
	memcpy_s(&ExitAttractTap_Params.EventType, sizeof(ExitAttractTap_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&ExitAttractTap_Params.TouchLocation, sizeof(ExitAttractTap_Params.TouchLocation), &TouchLocation, sizeof(TouchLocation));

	this->ProcessEvent(uFnExitAttractTap, &ExitAttractTap_Params, nullptr);

	return ExitAttractTap_Params.ReturnValue;
};

// Function UDKBase.CastlePC.ExitAttractMode
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::ExitAttractMode()
{
	static UFunction* uFnExitAttractMode = nullptr;

	if (!uFnExitAttractMode)
	{
		uFnExitAttractMode = UFunction::FindFunction("Function UDKBase.CastlePC.ExitAttractMode");
	}

	ACastlePC_execExitAttractMode_Params ExitAttractMode_Params;
	memset(&ExitAttractMode_Params, 0, sizeof(ExitAttractMode_Params));

	this->ProcessEvent(uFnExitAttractMode, &ExitAttractMode_Params, nullptr);
};

// Function UDKBase.CastlePC.OnFlyThroughLoopCompleted
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::OnFlyThroughLoopCompleted()
{
	static UFunction* uFnOnFlyThroughLoopCompleted = nullptr;

	if (!uFnOnFlyThroughLoopCompleted)
	{
		uFnOnFlyThroughLoopCompleted = UFunction::FindFunction("Function UDKBase.CastlePC.OnFlyThroughLoopCompleted");
	}

	ACastlePC_execOnFlyThroughLoopCompleted_Params OnFlyThroughLoopCompleted_Params;
	memset(&OnFlyThroughLoopCompleted_Params, 0, sizeof(OnFlyThroughLoopCompleted_Params));

	this->ProcessEvent(uFnOnFlyThroughLoopCompleted, &OnFlyThroughLoopCompleted_Params, nullptr);
};

// Function UDKBase.CastlePC.EnterAttractMode
// [0x00024202] (FUNC_Defined | FUNC_Exec | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           BeginBenchmarking              (CPF_OptionalParm | CPF_Parm)

void ACastlePC::EnterAttractMode(bool BeginBenchmarking)
{
	static UFunction* uFnEnterAttractMode = nullptr;

	if (!uFnEnterAttractMode)
	{
		uFnEnterAttractMode = UFunction::FindFunction("Function UDKBase.CastlePC.EnterAttractMode");
	}

	ACastlePC_execEnterAttractMode_Params EnterAttractMode_Params;
	memset(&EnterAttractMode_Params, 0, sizeof(EnterAttractMode_Params));
	EnterAttractMode_Params.BeginBenchmarking = BeginBenchmarking;

	this->ProcessEvent(uFnEnterAttractMode, &EnterAttractMode_Params, nullptr);
};

// Function UDKBase.CastlePC.NotifyDirectorControl
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bNowControlling                (CPF_Parm)
// class USeqAct_Interp*          CurrentMatinee                 (CPF_Parm)

void ACastlePC::eventNotifyDirectorControl(bool bNowControlling, class USeqAct_Interp* CurrentMatinee)
{
	static UFunction* uFnNotifyDirectorControl = nullptr;

	if (!uFnNotifyDirectorControl)
	{
		uFnNotifyDirectorControl = UFunction::FindFunction("Function UDKBase.CastlePC.NotifyDirectorControl");
	}

	ACastlePC_eventNotifyDirectorControl_Params NotifyDirectorControl_Params;
	memset(&NotifyDirectorControl_Params, 0, sizeof(NotifyDirectorControl_Params));
	NotifyDirectorControl_Params.bNowControlling = bNowControlling;
	memcpy_s(&NotifyDirectorControl_Params.CurrentMatinee, sizeof(NotifyDirectorControl_Params.CurrentMatinee), &CurrentMatinee, sizeof(CurrentMatinee));

	this->ProcessEvent(uFnNotifyDirectorControl, &NotifyDirectorControl_Params, nullptr);
};

// Function UDKBase.CastlePC.CheckDistanceToDestination
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DistToDestination              (CPF_Parm)

void ACastlePC::CheckDistanceToDestination(float DistToDestination)
{
	static UFunction* uFnCheckDistanceToDestination = nullptr;

	if (!uFnCheckDistanceToDestination)
	{
		uFnCheckDistanceToDestination = UFunction::FindFunction("Function UDKBase.CastlePC.CheckDistanceToDestination");
	}

	ACastlePC_execCheckDistanceToDestination_Params CheckDistanceToDestination_Params;
	memset(&CheckDistanceToDestination_Params, 0, sizeof(CheckDistanceToDestination_Params));
	memcpy_s(&CheckDistanceToDestination_Params.DistToDestination, sizeof(CheckDistanceToDestination_Params.DistToDestination), &DistToDestination, sizeof(DistToDestination));

	this->ProcessEvent(uFnCheckDistanceToDestination, &CheckDistanceToDestination_Params, nullptr);
};

// Function UDKBase.CastlePC.ProcessViewRotation
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// struct FRotator                DeltaRot                       (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)

void ACastlePC::ProcessViewRotation(float DeltaTime, struct FRotator DeltaRot, struct FRotator& out_ViewRotation)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function UDKBase.CastlePC.ProcessViewRotation");
	}

	ACastlePC_execProcessViewRotation_Params ProcessViewRotation_Params;
	memset(&ProcessViewRotation_Params, 0, sizeof(ProcessViewRotation_Params));
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, sizeof(ProcessViewRotation_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&ProcessViewRotation_Params.DeltaRot, sizeof(ProcessViewRotation_Params.DeltaRot), &DeltaRot, sizeof(DeltaRot));
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation), &out_ViewRotation, sizeof(out_ViewRotation));

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, sizeof(out_ViewRotation), &ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation));
};

// Function UDKBase.CastlePC.PlayerLookAtDestination
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::PlayerLookAtDestination()
{
	static UFunction* uFnPlayerLookAtDestination = nullptr;

	if (!uFnPlayerLookAtDestination)
	{
		uFnPlayerLookAtDestination = UFunction::FindFunction("Function UDKBase.CastlePC.PlayerLookAtDestination");
	}

	ACastlePC_execPlayerLookAtDestination_Params PlayerLookAtDestination_Params;
	memset(&PlayerLookAtDestination_Params, 0, sizeof(PlayerLookAtDestination_Params));

	this->ProcessEvent(uFnPlayerLookAtDestination, &PlayerLookAtDestination_Params, nullptr);
};

// Function UDKBase.CastlePC.DoTapToMove
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 NewDestination                 (CPF_Parm)
// bool                           bShouldLookAtDestination       (CPF_Parm)

void ACastlePC::DoTapToMove(struct FVector NewDestination, bool bShouldLookAtDestination)
{
	static UFunction* uFnDoTapToMove = nullptr;

	if (!uFnDoTapToMove)
	{
		uFnDoTapToMove = UFunction::FindFunction("Function UDKBase.CastlePC.DoTapToMove");
	}

	ACastlePC_execDoTapToMove_Params DoTapToMove_Params;
	memset(&DoTapToMove_Params, 0, sizeof(DoTapToMove_Params));
	memcpy_s(&DoTapToMove_Params.NewDestination, sizeof(DoTapToMove_Params.NewDestination), &NewDestination, sizeof(NewDestination));
	DoTapToMove_Params.bShouldLookAtDestination = bShouldLookAtDestination;

	this->ProcessEvent(uFnDoTapToMove, &DoTapToMove_Params, nullptr);
};

// Function UDKBase.CastlePC.TapToMoveTap
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)

bool ACastlePC::TapToMoveTap(class UMobileInputZone* Zone, ETouchType EventType, struct FVector2D TouchLocation)
{
	static UFunction* uFnTapToMoveTap = nullptr;

	if (!uFnTapToMoveTap)
	{
		uFnTapToMoveTap = UFunction::FindFunction("Function UDKBase.CastlePC.TapToMoveTap");
	}

	ACastlePC_execTapToMoveTap_Params TapToMoveTap_Params;
	memset(&TapToMoveTap_Params, 0, sizeof(TapToMoveTap_Params));
	memcpy_s(&TapToMoveTap_Params.Zone, sizeof(TapToMoveTap_Params.Zone), &Zone, sizeof(Zone));
	memcpy_s(&TapToMoveTap_Params.EventType, sizeof(TapToMoveTap_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&TapToMoveTap_Params.TouchLocation, sizeof(TapToMoveTap_Params.TouchLocation), &TouchLocation, sizeof(TouchLocation));

	this->ProcessEvent(uFnTapToMoveTap, &TapToMoveTap_Params, nullptr);

	return TapToMoveTap_Params.ReturnValue;
};

// Function UDKBase.CastlePC.TraceForTapToMove
// [0x00C20102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   TraceOwner                     (CPF_Parm)
// struct FVector                 End                            (CPF_Parm)
// struct FVector                 Start                          (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm | CPF_OutParm)
// struct FVector                 HitNormal                      (CPF_Parm | CPF_OutParm)

class AActor* ACastlePC::TraceForTapToMove(class APawn* TraceOwner, struct FVector End, struct FVector Start, struct FVector& HitLocation, struct FVector& HitNormal)
{
	static UFunction* uFnTraceForTapToMove = nullptr;

	if (!uFnTraceForTapToMove)
	{
		uFnTraceForTapToMove = UFunction::FindFunction("Function UDKBase.CastlePC.TraceForTapToMove");
	}

	ACastlePC_execTraceForTapToMove_Params TraceForTapToMove_Params;
	memset(&TraceForTapToMove_Params, 0, sizeof(TraceForTapToMove_Params));
	memcpy_s(&TraceForTapToMove_Params.TraceOwner, sizeof(TraceForTapToMove_Params.TraceOwner), &TraceOwner, sizeof(TraceOwner));
	memcpy_s(&TraceForTapToMove_Params.End, sizeof(TraceForTapToMove_Params.End), &End, sizeof(End));
	memcpy_s(&TraceForTapToMove_Params.Start, sizeof(TraceForTapToMove_Params.Start), &Start, sizeof(Start));
	memcpy_s(&TraceForTapToMove_Params.HitLocation, sizeof(TraceForTapToMove_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TraceForTapToMove_Params.HitNormal, sizeof(TraceForTapToMove_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	this->ProcessEvent(uFnTraceForTapToMove, &TraceForTapToMove_Params, nullptr);

	memcpy_s(&HitLocation, sizeof(HitLocation), &TraceForTapToMove_Params.HitLocation, sizeof(TraceForTapToMove_Params.HitLocation));
	memcpy_s(&HitNormal, sizeof(HitNormal), &TraceForTapToMove_Params.HitNormal, sizeof(TraceForTapToMove_Params.HitNormal));

	return TraceForTapToMove_Params.ReturnValue;
};

// Function UDKBase.CastlePC.CheckInactivity
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::CheckInactivity()
{
	static UFunction* uFnCheckInactivity = nullptr;

	if (!uFnCheckInactivity)
	{
		uFnCheckInactivity = UFunction::FindFunction("Function UDKBase.CastlePC.CheckInactivity");
	}

	ACastlePC_execCheckInactivity_Params CheckInactivity_Params;
	memset(&CheckInactivity_Params, 0, sizeof(CheckInactivity_Params));

	this->ProcessEvent(uFnCheckInactivity, &CheckInactivity_Params, nullptr);
};

// Function UDKBase.CastlePC.SaveControllerStats
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::SaveControllerStats()
{
	static UFunction* uFnSaveControllerStats = nullptr;

	if (!uFnSaveControllerStats)
	{
		uFnSaveControllerStats = UFunction::FindFunction("Function UDKBase.CastlePC.SaveControllerStats");
	}

	ACastlePC_execSaveControllerStats_Params SaveControllerStats_Params;
	memset(&SaveControllerStats_Params, 0, sizeof(SaveControllerStats_Params));

	this->ProcessEvent(uFnSaveControllerStats, &SaveControllerStats_Params, nullptr);
};

// Function UDKBase.CastlePC.SetupZones
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::SetupZones()
{
	static UFunction* uFnSetupZones = nullptr;

	if (!uFnSetupZones)
	{
		uFnSetupZones = UFunction::FindFunction("Function UDKBase.CastlePC.SetupZones");
	}

	ACastlePC_execSetupZones_Params SetupZones_Params;
	memset(&SetupZones_Params, 0, sizeof(SetupZones_Params));

	this->ProcessEvent(uFnSetupZones, &SetupZones_Params, nullptr);
};

// Function UDKBase.CastlePC.OnEngineInitialTick
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::eventOnEngineInitialTick()
{
	static UFunction* uFnOnEngineInitialTick = nullptr;

	if (!uFnOnEngineInitialTick)
	{
		uFnOnEngineInitialTick = UFunction::FindFunction("Function UDKBase.CastlePC.OnEngineInitialTick");
	}

	ACastlePC_eventOnEngineInitialTick_Params OnEngineInitialTick_Params;
	memset(&OnEngineInitialTick_Params, 0, sizeof(OnEngineInitialTick_Params));

	this->ProcessEvent(uFnOnEngineInitialTick, &OnEngineInitialTick_Params, nullptr);
};

// Function UDKBase.CastlePC.Destroyed
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function UDKBase.CastlePC.Destroyed");
	}

	ACastlePC_eventDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function UDKBase.CastlePC.PostBeginPlay
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACastlePC::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function UDKBase.CastlePC.PostBeginPlay");
	}

	ACastlePC_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function UDKBase.MobileMenuControls.RenderScene
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          RenderDelta                    (CPF_Parm)

void UMobileMenuControls::RenderScene(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* uFnRenderScene = nullptr;

	if (!uFnRenderScene)
	{
		uFnRenderScene = UFunction::FindFunction("Function UDKBase.MobileMenuControls.RenderScene");
	}

	UMobileMenuControls_execRenderScene_Params RenderScene_Params;
	memset(&RenderScene_Params, 0, sizeof(RenderScene_Params));
	memcpy_s(&RenderScene_Params.Canvas, sizeof(RenderScene_Params.Canvas), &Canvas, sizeof(Canvas));
	memcpy_s(&RenderScene_Params.RenderDelta, sizeof(RenderScene_Params.RenderDelta), &RenderDelta, sizeof(RenderDelta));

	this->ProcessEvent(uFnRenderScene, &RenderScene_Params, nullptr);
};

// Function UDKBase.MobileMenuControls.Setup
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bTap                           (CPF_Parm)

void UMobileMenuControls::Setup(bool bTap)
{
	static UFunction* uFnSetup = nullptr;

	if (!uFnSetup)
	{
		uFnSetup = UFunction::FindFunction("Function UDKBase.MobileMenuControls.Setup");
	}

	UMobileMenuControls_execSetup_Params Setup_Params;
	memset(&Setup_Params, 0, sizeof(Setup_Params));
	Setup_Params.bTap = bTap;

	this->ProcessEvent(uFnSetup, &Setup_Params, nullptr);
};

// Function UDKBase.MobileMenuControls.FadeOut
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobileMenuControls::FadeOut()
{
	static UFunction* uFnFadeOut = nullptr;

	if (!uFnFadeOut)
	{
		uFnFadeOut = UFunction::FindFunction("Function UDKBase.MobileMenuControls.FadeOut");
	}

	UMobileMenuControls_execFadeOut_Params FadeOut_Params;
	memset(&FadeOut_Params, 0, sizeof(FadeOut_Params));

	this->ProcessEvent(uFnFadeOut, &FadeOut_Params, nullptr);
};

// Function UDKBase.MobileMenuDebug.OnTouch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuObject*       Sender                         (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)

void UMobileMenuDebug::eventOnTouch(class UMobileMenuObject* Sender, ETouchType EventType, float TouchX, float TouchY)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function UDKBase.MobileMenuDebug.OnTouch");
	}

	UMobileMenuDebug_eventOnTouch_Params OnTouch_Params;
	memset(&OnTouch_Params, 0, sizeof(OnTouch_Params));
	memcpy_s(&OnTouch_Params.Sender, sizeof(OnTouch_Params.Sender), &Sender, sizeof(Sender));
	memcpy_s(&OnTouch_Params.EventType, sizeof(OnTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTouch_Params.TouchX, sizeof(OnTouch_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnTouch_Params.TouchY, sizeof(OnTouch_Params.TouchY), &TouchY, sizeof(TouchY));

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);
};

// Function UDKBase.MobileMenuBase.RenderScene
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          RenderDelta                    (CPF_Parm)

void UMobileMenuBase::RenderScene(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* uFnRenderScene = nullptr;

	if (!uFnRenderScene)
	{
		uFnRenderScene = UFunction::FindFunction("Function UDKBase.MobileMenuBase.RenderScene");
	}

	UMobileMenuBase_execRenderScene_Params RenderScene_Params;
	memset(&RenderScene_Params, 0, sizeof(RenderScene_Params));
	memcpy_s(&RenderScene_Params.Canvas, sizeof(RenderScene_Params.Canvas), &Canvas, sizeof(Canvas));
	memcpy_s(&RenderScene_Params.RenderDelta, sizeof(RenderScene_Params.RenderDelta), &RenderDelta, sizeof(RenderDelta));

	this->ProcessEvent(uFnRenderScene, &RenderScene_Params, nullptr);
};

// Function UDKBase.MobileMenuBase.Fade
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bIsFadeOut                     (CPF_Parm)
// float                          FadeDur                        (CPF_Parm)

void UMobileMenuBase::Fade(bool bIsFadeOut, float FadeDur)
{
	static UFunction* uFnFade = nullptr;

	if (!uFnFade)
	{
		uFnFade = UFunction::FindFunction("Function UDKBase.MobileMenuBase.Fade");
	}

	UMobileMenuBase_execFade_Params Fade_Params;
	memset(&Fade_Params, 0, sizeof(Fade_Params));
	Fade_Params.bIsFadeOut = bIsFadeOut;
	memcpy_s(&Fade_Params.FadeDur, sizeof(Fade_Params.FadeDur), &FadeDur, sizeof(FadeDur));

	this->ProcessEvent(uFnFade, &Fade_Params, nullptr);
};

// Function UDKBase.MobileMenuPause.SetDefaultUI
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobileMenuPause::SetDefaultUI()
{
	static UFunction* uFnSetDefaultUI = nullptr;

	if (!uFnSetDefaultUI)
	{
		uFnSetDefaultUI = UFunction::FindFunction("Function UDKBase.MobileMenuPause.SetDefaultUI");
	}

	UMobileMenuPause_execSetDefaultUI_Params SetDefaultUI_Params;
	memset(&SetDefaultUI_Params, 0, sizeof(SetDefaultUI_Params));

	this->ProcessEvent(uFnSetDefaultUI, &SetDefaultUI_Params, nullptr);
};

// Function UDKBase.MobileMenuPause.SetAttractModeUI
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bIsInBenchmarkMode             (CPF_Parm)

void UMobileMenuPause::SetAttractModeUI(bool bIsInBenchmarkMode)
{
	static UFunction* uFnSetAttractModeUI = nullptr;

	if (!uFnSetAttractModeUI)
	{
		uFnSetAttractModeUI = UFunction::FindFunction("Function UDKBase.MobileMenuPause.SetAttractModeUI");
	}

	UMobileMenuPause_execSetAttractModeUI_Params SetAttractModeUI_Params;
	memset(&SetAttractModeUI_Params, 0, sizeof(SetAttractModeUI_Params));
	SetAttractModeUI_Params.bIsInBenchmarkMode = bIsInBenchmarkMode;

	this->ProcessEvent(uFnSetAttractModeUI, &SetAttractModeUI_Params, nullptr);
};

// Function UDKBase.MobileMenuPause.ReleaseHelp
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobileMenuPause::ReleaseHelp()
{
	static UFunction* uFnReleaseHelp = nullptr;

	if (!uFnReleaseHelp)
	{
		uFnReleaseHelp = UFunction::FindFunction("Function UDKBase.MobileMenuPause.ReleaseHelp");
	}

	UMobileMenuPause_execReleaseHelp_Params ReleaseHelp_Params;
	memset(&ReleaseHelp_Params, 0, sizeof(ReleaseHelp_Params));

	this->ProcessEvent(uFnReleaseHelp, &ReleaseHelp_Params, nullptr);
};

// Function UDKBase.MobileMenuPause.FlashHelp
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Duration                       (CPF_Parm)

void UMobileMenuPause::FlashHelp(float Duration)
{
	static UFunction* uFnFlashHelp = nullptr;

	if (!uFnFlashHelp)
	{
		uFnFlashHelp = UFunction::FindFunction("Function UDKBase.MobileMenuPause.FlashHelp");
	}

	UMobileMenuPause_execFlashHelp_Params FlashHelp_Params;
	memset(&FlashHelp_Params, 0, sizeof(FlashHelp_Params));
	memcpy_s(&FlashHelp_Params.Duration, sizeof(FlashHelp_Params.Duration), &Duration, sizeof(Duration));

	this->ProcessEvent(uFnFlashHelp, &FlashHelp_Params, nullptr);
};

// Function UDKBase.MobileMenuPause.OnSceneTouch
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)
// bool                           bInside                        (CPF_Parm)

bool UMobileMenuPause::OnSceneTouch(ETouchType EventType, float X, float Y, bool bInside)
{
	static UFunction* uFnOnSceneTouch = nullptr;

	if (!uFnOnSceneTouch)
	{
		uFnOnSceneTouch = UFunction::FindFunction("Function UDKBase.MobileMenuPause.OnSceneTouch");
	}

	UMobileMenuPause_execOnSceneTouch_Params OnSceneTouch_Params;
	memset(&OnSceneTouch_Params, 0, sizeof(OnSceneTouch_Params));
	memcpy_s(&OnSceneTouch_Params.EventType, sizeof(OnSceneTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnSceneTouch_Params.X, sizeof(OnSceneTouch_Params.X), &X, sizeof(X));
	memcpy_s(&OnSceneTouch_Params.Y, sizeof(OnSceneTouch_Params.Y), &Y, sizeof(Y));
	OnSceneTouch_Params.bInside = bInside;

	this->ProcessEvent(uFnOnSceneTouch, &OnSceneTouch_Params, nullptr);

	return OnSceneTouch_Params.ReturnValue;
};

// Function UDKBase.MobileMenuPause.RenderScene
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          RenderDelta                    (CPF_Parm)

void UMobileMenuPause::RenderScene(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* uFnRenderScene = nullptr;

	if (!uFnRenderScene)
	{
		uFnRenderScene = UFunction::FindFunction("Function UDKBase.MobileMenuPause.RenderScene");
	}

	UMobileMenuPause_execRenderScene_Params RenderScene_Params;
	memset(&RenderScene_Params, 0, sizeof(RenderScene_Params));
	memcpy_s(&RenderScene_Params.Canvas, sizeof(RenderScene_Params.Canvas), &Canvas, sizeof(Canvas));
	memcpy_s(&RenderScene_Params.RenderDelta, sizeof(RenderScene_Params.RenderDelta), &RenderDelta, sizeof(RenderDelta));

	this->ProcessEvent(uFnRenderScene, &RenderScene_Params, nullptr);
};

// Function UDKBase.MobileMenuPause.HackInactiveAlpha
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          NewValue                       (CPF_Parm)

void UMobileMenuPause::HackInactiveAlpha(float NewValue)
{
	static UFunction* uFnHackInactiveAlpha = nullptr;

	if (!uFnHackInactiveAlpha)
	{
		uFnHackInactiveAlpha = UFunction::FindFunction("Function UDKBase.MobileMenuPause.HackInactiveAlpha");
	}

	UMobileMenuPause_execHackInactiveAlpha_Params HackInactiveAlpha_Params;
	memset(&HackInactiveAlpha_Params, 0, sizeof(HackInactiveAlpha_Params));
	memcpy_s(&HackInactiveAlpha_Params.NewValue, sizeof(HackInactiveAlpha_Params.NewValue), &NewValue, sizeof(NewValue));

	this->ProcessEvent(uFnHackInactiveAlpha, &HackInactiveAlpha_Params, nullptr);
};

// Function UDKBase.MobileMenuPause.OnResetMenu
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobileMenuPause::OnResetMenu()
{
	static UFunction* uFnOnResetMenu = nullptr;

	if (!uFnOnResetMenu)
	{
		uFnOnResetMenu = UFunction::FindFunction("Function UDKBase.MobileMenuPause.OnResetMenu");
	}

	UMobileMenuPause_execOnResetMenu_Params OnResetMenu_Params;
	memset(&OnResetMenu_Params, 0, sizeof(OnResetMenu_Params));

	this->ProcessEvent(uFnOnResetMenu, &OnResetMenu_Params, nullptr);
};

// Function UDKBase.MobileMenuPause.OnTouch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuObject*       Sender                         (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)

void UMobileMenuPause::eventOnTouch(class UMobileMenuObject* Sender, ETouchType EventType, float TouchX, float TouchY)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function UDKBase.MobileMenuPause.OnTouch");
	}

	UMobileMenuPause_eventOnTouch_Params OnTouch_Params;
	memset(&OnTouch_Params, 0, sizeof(OnTouch_Params));
	memcpy_s(&OnTouch_Params.Sender, sizeof(OnTouch_Params.Sender), &Sender, sizeof(Sender));
	memcpy_s(&OnTouch_Params.EventType, sizeof(OnTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTouch_Params.TouchX, sizeof(OnTouch_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnTouch_Params.TouchY, sizeof(OnTouch_Params.TouchY), &TouchY, sizeof(TouchY));

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);
};

// Function UDKBase.MobileMenuPause.InitMenuScene
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// int32_t                        ScreenWidth                    (CPF_Parm)
// int32_t                        ScreenHeight                   (CPF_Parm)
// bool                           bIsFirstInitialization         (CPF_Parm)

void UMobileMenuPause::eventInitMenuScene(class UMobilePlayerInput* PlayerInput, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* uFnInitMenuScene = nullptr;

	if (!uFnInitMenuScene)
	{
		uFnInitMenuScene = UFunction::FindFunction("Function UDKBase.MobileMenuPause.InitMenuScene");
	}

	UMobileMenuPause_eventInitMenuScene_Params InitMenuScene_Params;
	memset(&InitMenuScene_Params, 0, sizeof(InitMenuScene_Params));
	memcpy_s(&InitMenuScene_Params.PlayerInput, sizeof(InitMenuScene_Params.PlayerInput), &PlayerInput, sizeof(PlayerInput));
	memcpy_s(&InitMenuScene_Params.ScreenWidth, sizeof(InitMenuScene_Params.ScreenWidth), &ScreenWidth, sizeof(ScreenWidth));
	memcpy_s(&InitMenuScene_Params.ScreenHeight, sizeof(InitMenuScene_Params.ScreenHeight), &ScreenHeight, sizeof(ScreenHeight));
	InitMenuScene_Params.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent(uFnInitMenuScene, &InitMenuScene_Params, nullptr);
};

// Function UDKBase.MobileMenuSplash.Closed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UMobileMenuSplash::Closed()
{
	static UFunction* uFnClosed = nullptr;

	if (!uFnClosed)
	{
		uFnClosed = UFunction::FindFunction("Function UDKBase.MobileMenuSplash.Closed");
	}

	UMobileMenuSplash_execClosed_Params Closed_Params;
	memset(&Closed_Params, 0, sizeof(Closed_Params));

	this->ProcessEvent(uFnClosed, &Closed_Params, nullptr);
};

// Function UDKBase.MobileMenuSplash.OnTouch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuObject*       Sender                         (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)

void UMobileMenuSplash::eventOnTouch(class UMobileMenuObject* Sender, ETouchType EventType, float TouchX, float TouchY)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function UDKBase.MobileMenuSplash.OnTouch");
	}

	UMobileMenuSplash_eventOnTouch_Params OnTouch_Params;
	memset(&OnTouch_Params, 0, sizeof(OnTouch_Params));
	memcpy_s(&OnTouch_Params.Sender, sizeof(OnTouch_Params.Sender), &Sender, sizeof(Sender));
	memcpy_s(&OnTouch_Params.EventType, sizeof(OnTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTouch_Params.TouchX, sizeof(OnTouch_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnTouch_Params.TouchY, sizeof(OnTouch_Params.TouchY), &TouchY, sizeof(TouchY));

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);
};

// Function UDKBase.MobileMenuSplash.InitMenuScene
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// int32_t                        ScreenWidth                    (CPF_Parm)
// int32_t                        ScreenHeight                   (CPF_Parm)
// bool                           bIsFirstInitialization         (CPF_Parm)

void UMobileMenuSplash::eventInitMenuScene(class UMobilePlayerInput* PlayerInput, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* uFnInitMenuScene = nullptr;

	if (!uFnInitMenuScene)
	{
		uFnInitMenuScene = UFunction::FindFunction("Function UDKBase.MobileMenuSplash.InitMenuScene");
	}

	UMobileMenuSplash_eventInitMenuScene_Params InitMenuScene_Params;
	memset(&InitMenuScene_Params, 0, sizeof(InitMenuScene_Params));
	memcpy_s(&InitMenuScene_Params.PlayerInput, sizeof(InitMenuScene_Params.PlayerInput), &PlayerInput, sizeof(PlayerInput));
	memcpy_s(&InitMenuScene_Params.ScreenWidth, sizeof(InitMenuScene_Params.ScreenWidth), &ScreenWidth, sizeof(ScreenWidth));
	memcpy_s(&InitMenuScene_Params.ScreenHeight, sizeof(InitMenuScene_Params.ScreenHeight), &ScreenHeight, sizeof(ScreenHeight));
	InitMenuScene_Params.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent(uFnInitMenuScene, &InitMenuScene_Params, nullptr);
};

// Function UDKBase.CloudHUD.PostRender
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACloudHUD::PostRender()
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function UDKBase.CloudHUD.PostRender");
	}

	ACloudHUD_execPostRender_Params PostRender_Params;
	memset(&PostRender_Params, 0, sizeof(PostRender_Params));

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function UDKBase.CloudPC.OnTwitterAuthorizeComplete
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::OnTwitterAuthorizeComplete(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnTwitterAuthorizeComplete = nullptr;

	if (!uFnOnTwitterAuthorizeComplete)
	{
		uFnOnTwitterAuthorizeComplete = UFunction::FindFunction("Function UDKBase.CloudPC.OnTwitterAuthorizeComplete");
	}

	ACloudPC_execOnTwitterAuthorizeComplete_Params OnTwitterAuthorizeComplete_Params;
	memset(&OnTwitterAuthorizeComplete_Params, 0, sizeof(OnTwitterAuthorizeComplete_Params));
	memcpy_s(&OnTwitterAuthorizeComplete_Params.Result, sizeof(OnTwitterAuthorizeComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnTwitterAuthorizeComplete, &OnTwitterAuthorizeComplete_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnTwitterAuthorizeComplete_Params.Result, sizeof(OnTwitterAuthorizeComplete_Params.Result));
};

// Function UDKBase.CloudPC.OnTwitterRequestComplete
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::OnTwitterRequestComplete(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnTwitterRequestComplete = nullptr;

	if (!uFnOnTwitterRequestComplete)
	{
		uFnOnTwitterRequestComplete = UFunction::FindFunction("Function UDKBase.CloudPC.OnTwitterRequestComplete");
	}

	ACloudPC_execOnTwitterRequestComplete_Params OnTwitterRequestComplete_Params;
	memset(&OnTwitterRequestComplete_Params, 0, sizeof(OnTwitterRequestComplete_Params));
	memcpy_s(&OnTwitterRequestComplete_Params.Result, sizeof(OnTwitterRequestComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnTwitterRequestComplete, &OnTwitterRequestComplete_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnTwitterRequestComplete_Params.Result, sizeof(OnTwitterRequestComplete_Params.Result));
};

// Function UDKBase.CloudPC.OnTweetComplete
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::OnTweetComplete(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnTweetComplete = nullptr;

	if (!uFnOnTweetComplete)
	{
		uFnOnTweetComplete = UFunction::FindFunction("Function UDKBase.CloudPC.OnTweetComplete");
	}

	ACloudPC_execOnTweetComplete_Params OnTweetComplete_Params;
	memset(&OnTweetComplete_Params, 0, sizeof(OnTweetComplete_Params));
	memcpy_s(&OnTweetComplete_Params.Result, sizeof(OnTweetComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnTweetComplete, &OnTweetComplete_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnTweetComplete_Params.Result, sizeof(OnTweetComplete_Params.Result));
};

// Function UDKBase.CloudPC.CloudGameTwitter
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACloudPC::CloudGameTwitter()
{
	static UFunction* uFnCloudGameTwitter = nullptr;

	if (!uFnCloudGameTwitter)
	{
		uFnCloudGameTwitter = UFunction::FindFunction("Function UDKBase.CloudPC.CloudGameTwitter");
	}

	ACloudPC_execCloudGameTwitter_Params CloudGameTwitter_Params;
	memset(&CloudGameTwitter_Params, 0, sizeof(CloudGameTwitter_Params));

	this->ProcessEvent(uFnCloudGameTwitter, &CloudGameTwitter_Params, nullptr);
};

// Function UDKBase.CloudPC.CloudGameBuyConsumable
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACloudPC::CloudGameBuyConsumable()
{
	static UFunction* uFnCloudGameBuyConsumable = nullptr;

	if (!uFnCloudGameBuyConsumable)
	{
		uFnCloudGameBuyConsumable = UFunction::FindFunction("Function UDKBase.CloudPC.CloudGameBuyConsumable");
	}

	ACloudPC_execCloudGameBuyConsumable_Params CloudGameBuyConsumable_Params;
	memset(&CloudGameBuyConsumable_Params, 0, sizeof(CloudGameBuyConsumable_Params));

	this->ProcessEvent(uFnCloudGameBuyConsumable, &CloudGameBuyConsumable_Params, nullptr);
};

// Function UDKBase.CloudPC.MicroQueryProducts
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACloudPC::MicroQueryProducts()
{
	static UFunction* uFnMicroQueryProducts = nullptr;

	if (!uFnMicroQueryProducts)
	{
		uFnMicroQueryProducts = UFunction::FindFunction("Function UDKBase.CloudPC.MicroQueryProducts");
	}

	ACloudPC_execMicroQueryProducts_Params MicroQueryProducts_Params;
	memset(&MicroQueryProducts_Params, 0, sizeof(MicroQueryProducts_Params));

	this->ProcessEvent(uFnMicroQueryProducts, &MicroQueryProducts_Params, nullptr);
};

// Function UDKBase.CloudPC.OnProductPurchaseComplete
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::OnProductPurchaseComplete(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnProductPurchaseComplete = nullptr;

	if (!uFnOnProductPurchaseComplete)
	{
		uFnOnProductPurchaseComplete = UFunction::FindFunction("Function UDKBase.CloudPC.OnProductPurchaseComplete");
	}

	ACloudPC_execOnProductPurchaseComplete_Params OnProductPurchaseComplete_Params;
	memset(&OnProductPurchaseComplete_Params, 0, sizeof(OnProductPurchaseComplete_Params));
	memcpy_s(&OnProductPurchaseComplete_Params.Result, sizeof(OnProductPurchaseComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnProductPurchaseComplete, &OnProductPurchaseComplete_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnProductPurchaseComplete_Params.Result, sizeof(OnProductPurchaseComplete_Params.Result));
};

// Function UDKBase.CloudPC.OnProductQueryComplete
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::OnProductQueryComplete(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnProductQueryComplete = nullptr;

	if (!uFnOnProductQueryComplete)
	{
		uFnOnProductQueryComplete = UFunction::FindFunction("Function UDKBase.CloudPC.OnProductQueryComplete");
	}

	ACloudPC_execOnProductQueryComplete_Params OnProductQueryComplete_Params;
	memset(&OnProductQueryComplete_Params, 0, sizeof(OnProductQueryComplete_Params));
	memcpy_s(&OnProductQueryComplete_Params.Result, sizeof(OnProductQueryComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnProductQueryComplete, &OnProductQueryComplete_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnProductQueryComplete_Params.Result, sizeof(OnProductQueryComplete_Params.Result));
};

// Function UDKBase.CloudPC.CloudGameFacebook
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACloudPC::CloudGameFacebook()
{
	static UFunction* uFnCloudGameFacebook = nullptr;

	if (!uFnCloudGameFacebook)
	{
		uFnCloudGameFacebook = UFunction::FindFunction("Function UDKBase.CloudPC.CloudGameFacebook");
	}

	ACloudPC_execCloudGameFacebook_Params CloudGameFacebook_Params;
	memset(&CloudGameFacebook_Params, 0, sizeof(CloudGameFacebook_Params));

	this->ProcessEvent(uFnCloudGameFacebook, &CloudGameFacebook_Params, nullptr);
};

// Function UDKBase.CloudPC.OnFBDialogComplete
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::OnFBDialogComplete(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnFBDialogComplete = nullptr;

	if (!uFnOnFBDialogComplete)
	{
		uFnOnFBDialogComplete = UFunction::FindFunction("Function UDKBase.CloudPC.OnFBDialogComplete");
	}

	ACloudPC_execOnFBDialogComplete_Params OnFBDialogComplete_Params;
	memset(&OnFBDialogComplete_Params, 0, sizeof(OnFBDialogComplete_Params));
	memcpy_s(&OnFBDialogComplete_Params.Result, sizeof(OnFBDialogComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnFBDialogComplete, &OnFBDialogComplete_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnFBDialogComplete_Params.Result, sizeof(OnFBDialogComplete_Params.Result));
};

// Function UDKBase.CloudPC.OnFBFriendsListComplete
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::OnFBFriendsListComplete(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnFBFriendsListComplete = nullptr;

	if (!uFnOnFBFriendsListComplete)
	{
		uFnOnFBFriendsListComplete = UFunction::FindFunction("Function UDKBase.CloudPC.OnFBFriendsListComplete");
	}

	ACloudPC_execOnFBFriendsListComplete_Params OnFBFriendsListComplete_Params;
	memset(&OnFBFriendsListComplete_Params, 0, sizeof(OnFBFriendsListComplete_Params));
	memcpy_s(&OnFBFriendsListComplete_Params.Result, sizeof(OnFBFriendsListComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnFBFriendsListComplete, &OnFBFriendsListComplete_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnFBFriendsListComplete_Params.Result, sizeof(OnFBFriendsListComplete_Params.Result));
};

// Function UDKBase.CloudPC.OnFBRequestComplete
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::OnFBRequestComplete(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnFBRequestComplete = nullptr;

	if (!uFnOnFBRequestComplete)
	{
		uFnOnFBRequestComplete = UFunction::FindFunction("Function UDKBase.CloudPC.OnFBRequestComplete");
	}

	ACloudPC_execOnFBRequestComplete_Params OnFBRequestComplete_Params;
	memset(&OnFBRequestComplete_Params, 0, sizeof(OnFBRequestComplete_Params));
	memcpy_s(&OnFBRequestComplete_Params.Result, sizeof(OnFBRequestComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnFBRequestComplete, &OnFBRequestComplete_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnFBRequestComplete_Params.Result, sizeof(OnFBRequestComplete_Params.Result));
};

// Function UDKBase.CloudPC.OnFBAuthComplete
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::OnFBAuthComplete(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnFBAuthComplete = nullptr;

	if (!uFnOnFBAuthComplete)
	{
		uFnOnFBAuthComplete = UFunction::FindFunction("Function UDKBase.CloudPC.OnFBAuthComplete");
	}

	ACloudPC_execOnFBAuthComplete_Params OnFBAuthComplete_Params;
	memset(&OnFBAuthComplete_Params, 0, sizeof(OnFBAuthComplete_Params));
	memcpy_s(&OnFBAuthComplete_Params.Result, sizeof(OnFBAuthComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnFBAuthComplete, &OnFBAuthComplete_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnFBAuthComplete_Params.Result, sizeof(OnFBAuthComplete_Params.Result));
};

// Function UDKBase.CloudPC.OnUserClosedAdvertisement
// [0x00420802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::eventOnUserClosedAdvertisement(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnUserClosedAdvertisement = nullptr;

	if (!uFnOnUserClosedAdvertisement)
	{
		uFnOnUserClosedAdvertisement = UFunction::FindFunction("Function UDKBase.CloudPC.OnUserClosedAdvertisement");
	}

	ACloudPC_eventOnUserClosedAdvertisement_Params OnUserClosedAdvertisement_Params;
	memset(&OnUserClosedAdvertisement_Params, 0, sizeof(OnUserClosedAdvertisement_Params));
	memcpy_s(&OnUserClosedAdvertisement_Params.Result, sizeof(OnUserClosedAdvertisement_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnUserClosedAdvertisement, &OnUserClosedAdvertisement_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnUserClosedAdvertisement_Params.Result, sizeof(OnUserClosedAdvertisement_Params.Result));
};

// Function UDKBase.CloudPC.OnUserClickedAdvertisement
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::OnUserClickedAdvertisement(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnUserClickedAdvertisement = nullptr;

	if (!uFnOnUserClickedAdvertisement)
	{
		uFnOnUserClickedAdvertisement = UFunction::FindFunction("Function UDKBase.CloudPC.OnUserClickedAdvertisement");
	}

	ACloudPC_execOnUserClickedAdvertisement_Params OnUserClickedAdvertisement_Params;
	memset(&OnUserClickedAdvertisement_Params, 0, sizeof(OnUserClickedAdvertisement_Params));
	memcpy_s(&OnUserClickedAdvertisement_Params.Result, sizeof(OnUserClickedAdvertisement_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnUserClickedAdvertisement, &OnUserClickedAdvertisement_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnUserClickedAdvertisement_Params.Result, sizeof(OnUserClickedAdvertisement_Params.Result));
};

// Function UDKBase.CloudPC.CloudGameToggleAd
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACloudPC::CloudGameToggleAd()
{
	static UFunction* uFnCloudGameToggleAd = nullptr;

	if (!uFnCloudGameToggleAd)
	{
		uFnCloudGameToggleAd = UFunction::FindFunction("Function UDKBase.CloudPC.CloudGameToggleAd");
	}

	ACloudPC_execCloudGameToggleAd_Params CloudGameToggleAd_Params;
	memset(&CloudGameToggleAd_Params, 0, sizeof(CloudGameToggleAd_Params));

	this->ProcessEvent(uFnCloudGameToggleAd, &CloudGameToggleAd_Params, nullptr);
};

// Function UDKBase.CloudPC.CloudGetDocs
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACloudPC::CloudGetDocs()
{
	static UFunction* uFnCloudGetDocs = nullptr;

	if (!uFnCloudGetDocs)
	{
		uFnCloudGetDocs = UFunction::FindFunction("Function UDKBase.CloudPC.CloudGetDocs");
	}

	ACloudPC_execCloudGetDocs_Params CloudGetDocs_Params;
	memset(&CloudGetDocs_Params, 0, sizeof(CloudGetDocs_Params));

	this->ProcessEvent(uFnCloudGetDocs, &CloudGetDocs_Params, nullptr);
};

// Function UDKBase.CloudPC.CloudConflictDetected
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::CloudConflictDetected(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnCloudConflictDetected = nullptr;

	if (!uFnCloudConflictDetected)
	{
		uFnCloudConflictDetected = UFunction::FindFunction("Function UDKBase.CloudPC.CloudConflictDetected");
	}

	ACloudPC_execCloudConflictDetected_Params CloudConflictDetected_Params;
	memset(&CloudConflictDetected_Params, 0, sizeof(CloudConflictDetected_Params));
	memcpy_s(&CloudConflictDetected_Params.Result, sizeof(CloudConflictDetected_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnCloudConflictDetected, &CloudConflictDetected_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &CloudConflictDetected_Params.Result, sizeof(CloudConflictDetected_Params.Result));
};

// Function UDKBase.CloudPC.CloudReadDocument
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::CloudReadDocument(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnCloudReadDocument = nullptr;

	if (!uFnCloudReadDocument)
	{
		uFnCloudReadDocument = UFunction::FindFunction("Function UDKBase.CloudPC.CloudReadDocument");
	}

	ACloudPC_execCloudReadDocument_Params CloudReadDocument_Params;
	memset(&CloudReadDocument_Params, 0, sizeof(CloudReadDocument_Params));
	memcpy_s(&CloudReadDocument_Params.Result, sizeof(CloudReadDocument_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnCloudReadDocument, &CloudReadDocument_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &CloudReadDocument_Params.Result, sizeof(CloudReadDocument_Params.Result));
};

// Function UDKBase.CloudPC.CloudGotDocuments
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::CloudGotDocuments(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnCloudGotDocuments = nullptr;

	if (!uFnCloudGotDocuments)
	{
		uFnCloudGotDocuments = UFunction::FindFunction("Function UDKBase.CloudPC.CloudGotDocuments");
	}

	ACloudPC_execCloudGotDocuments_Params CloudGotDocuments_Params;
	memset(&CloudGotDocuments_Params, 0, sizeof(CloudGotDocuments_Params));
	memcpy_s(&CloudGotDocuments_Params.Result, sizeof(CloudGotDocuments_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnCloudGotDocuments, &CloudGotDocuments_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &CloudGotDocuments_Params.Result, sizeof(CloudGotDocuments_Params.Result));
};

// Function UDKBase.CloudPC.CloudGetAndIncrement
// [0x00820202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void ACloudPC::CloudGetAndIncrement()
{
	static UFunction* uFnCloudGetAndIncrement = nullptr;

	if (!uFnCloudGetAndIncrement)
	{
		uFnCloudGetAndIncrement = UFunction::FindFunction("Function UDKBase.CloudPC.CloudGetAndIncrement");
	}

	ACloudPC_execCloudGetAndIncrement_Params CloudGetAndIncrement_Params;
	memset(&CloudGetAndIncrement_Params, 0, sizeof(CloudGetAndIncrement_Params));

	this->ProcessEvent(uFnCloudGetAndIncrement, &CloudGetAndIncrement_Params, nullptr);
};

// Function UDKBase.CloudPC.CloudIncrementValue
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::CloudIncrementValue(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnCloudIncrementValue = nullptr;

	if (!uFnCloudIncrementValue)
	{
		uFnCloudIncrementValue = UFunction::FindFunction("Function UDKBase.CloudPC.CloudIncrementValue");
	}

	ACloudPC_execCloudIncrementValue_Params CloudIncrementValue_Params;
	memset(&CloudIncrementValue_Params, 0, sizeof(CloudIncrementValue_Params));
	memcpy_s(&CloudIncrementValue_Params.Result, sizeof(CloudIncrementValue_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnCloudIncrementValue, &CloudIncrementValue_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &CloudIncrementValue_Params.Result, sizeof(CloudIncrementValue_Params.Result));
};

// Function UDKBase.CloudPC.CloudValueChanged
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::CloudValueChanged(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnCloudValueChanged = nullptr;

	if (!uFnCloudValueChanged)
	{
		uFnCloudValueChanged = UFunction::FindFunction("Function UDKBase.CloudPC.CloudValueChanged");
	}

	ACloudPC_execCloudValueChanged_Params CloudValueChanged_Params;
	memset(&CloudValueChanged_Params, 0, sizeof(CloudValueChanged_Params));
	memcpy_s(&CloudValueChanged_Params.Result, sizeof(CloudValueChanged_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnCloudValueChanged, &CloudValueChanged_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &CloudValueChanged_Params.Result, sizeof(CloudValueChanged_Params.Result));
};

// Function UDKBase.CloudPC.CloudLogValue
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void ACloudPC::CloudLogValue(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnCloudLogValue = nullptr;

	if (!uFnCloudLogValue)
	{
		uFnCloudLogValue = UFunction::FindFunction("Function UDKBase.CloudPC.CloudLogValue");
	}

	ACloudPC_execCloudLogValue_Params CloudLogValue_Params;
	memset(&CloudLogValue_Params, 0, sizeof(CloudLogValue_Params));
	memcpy_s(&CloudLogValue_Params.Result, sizeof(CloudLogValue_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnCloudLogValue, &CloudLogValue_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &CloudLogValue_Params.Result, sizeof(CloudLogValue_Params.Result));
};

// Function UDKBase.CloudPC.CloudGameLoad
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Slot                           (CPF_Parm)

void ACloudPC::CloudGameLoad(int32_t Slot)
{
	static UFunction* uFnCloudGameLoad = nullptr;

	if (!uFnCloudGameLoad)
	{
		uFnCloudGameLoad = UFunction::FindFunction("Function UDKBase.CloudPC.CloudGameLoad");
	}

	ACloudPC_execCloudGameLoad_Params CloudGameLoad_Params;
	memset(&CloudGameLoad_Params, 0, sizeof(CloudGameLoad_Params));
	memcpy_s(&CloudGameLoad_Params.Slot, sizeof(CloudGameLoad_Params.Slot), &Slot, sizeof(Slot));

	this->ProcessEvent(uFnCloudGameLoad, &CloudGameLoad_Params, nullptr);
};

// Function UDKBase.CloudPC.CloudGameSave
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Slot                           (CPF_Parm)

void ACloudPC::CloudGameSave(int32_t Slot)
{
	static UFunction* uFnCloudGameSave = nullptr;

	if (!uFnCloudGameSave)
	{
		uFnCloudGameSave = UFunction::FindFunction("Function UDKBase.CloudPC.CloudGameSave");
	}

	ACloudPC_execCloudGameSave_Params CloudGameSave_Params;
	memset(&CloudGameSave_Params, 0, sizeof(CloudGameSave_Params));
	memcpy_s(&CloudGameSave_Params.Slot, sizeof(CloudGameSave_Params.Slot), &Slot, sizeof(Slot));

	this->ProcessEvent(uFnCloudGameSave, &CloudGameSave_Params, nullptr);
};

// Function UDKBase.CloudPC.CloudGameFight
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACloudPC::CloudGameFight()
{
	static UFunction* uFnCloudGameFight = nullptr;

	if (!uFnCloudGameFight)
	{
		uFnCloudGameFight = UFunction::FindFunction("Function UDKBase.CloudPC.CloudGameFight");
	}

	ACloudPC_execCloudGameFight_Params CloudGameFight_Params;
	memset(&CloudGameFight_Params, 0, sizeof(CloudGameFight_Params));

	this->ProcessEvent(uFnCloudGameFight, &CloudGameFight_Params, nullptr);
};

// Function UDKBase.CloudPC.Destroyed
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACloudPC::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function UDKBase.CloudPC.Destroyed");
	}

	ACloudPC_eventDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function UDKBase.CloudPC.PostBeginPlay
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void ACloudPC::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function UDKBase.CloudPC.PostBeginPlay");
	}

	ACloudPC_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function UDKBase.CloudMenuMicroTrans.OnProductPurchaseComplete
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UCloudMenuMicroTrans::OnProductPurchaseComplete(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnProductPurchaseComplete = nullptr;

	if (!uFnOnProductPurchaseComplete)
	{
		uFnOnProductPurchaseComplete = UFunction::FindFunction("Function UDKBase.CloudMenuMicroTrans.OnProductPurchaseComplete");
	}

	UCloudMenuMicroTrans_execOnProductPurchaseComplete_Params OnProductPurchaseComplete_Params;
	memset(&OnProductPurchaseComplete_Params, 0, sizeof(OnProductPurchaseComplete_Params));
	memcpy_s(&OnProductPurchaseComplete_Params.Result, sizeof(OnProductPurchaseComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnProductPurchaseComplete, &OnProductPurchaseComplete_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnProductPurchaseComplete_Params.Result, sizeof(OnProductPurchaseComplete_Params.Result));
};

// Function UDKBase.CloudMenuMicroTrans.OnProductQueryComplete
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FPlatformInterfaceDelegateResult Result                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UCloudMenuMicroTrans::OnProductQueryComplete(struct FPlatformInterfaceDelegateResult& Result)
{
	static UFunction* uFnOnProductQueryComplete = nullptr;

	if (!uFnOnProductQueryComplete)
	{
		uFnOnProductQueryComplete = UFunction::FindFunction("Function UDKBase.CloudMenuMicroTrans.OnProductQueryComplete");
	}

	UCloudMenuMicroTrans_execOnProductQueryComplete_Params OnProductQueryComplete_Params;
	memset(&OnProductQueryComplete_Params, 0, sizeof(OnProductQueryComplete_Params));
	memcpy_s(&OnProductQueryComplete_Params.Result, sizeof(OnProductQueryComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnProductQueryComplete, &OnProductQueryComplete_Params, nullptr);

	memcpy_s(&Result, sizeof(Result), &OnProductQueryComplete_Params.Result, sizeof(OnProductQueryComplete_Params.Result));
};

// Function UDKBase.CloudMenuMicroTrans.Closed
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UCloudMenuMicroTrans::Closed()
{
	static UFunction* uFnClosed = nullptr;

	if (!uFnClosed)
	{
		uFnClosed = UFunction::FindFunction("Function UDKBase.CloudMenuMicroTrans.Closed");
	}

	UCloudMenuMicroTrans_execClosed_Params Closed_Params;
	memset(&Closed_Params, 0, sizeof(Closed_Params));

	this->ProcessEvent(uFnClosed, &Closed_Params, nullptr);
};

// Function UDKBase.CloudMenuMicroTrans.OnTouch
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobileMenuObject*       Sender                         (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)

void UCloudMenuMicroTrans::eventOnTouch(class UMobileMenuObject* Sender, ETouchType EventType, float TouchX, float TouchY)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function UDKBase.CloudMenuMicroTrans.OnTouch");
	}

	UCloudMenuMicroTrans_eventOnTouch_Params OnTouch_Params;
	memset(&OnTouch_Params, 0, sizeof(OnTouch_Params));
	memcpy_s(&OnTouch_Params.Sender, sizeof(OnTouch_Params.Sender), &Sender, sizeof(Sender));
	memcpy_s(&OnTouch_Params.EventType, sizeof(OnTouch_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&OnTouch_Params.TouchX, sizeof(OnTouch_Params.TouchX), &TouchX, sizeof(TouchX));
	memcpy_s(&OnTouch_Params.TouchY, sizeof(OnTouch_Params.TouchY), &TouchY, sizeof(TouchY));

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);
};

// Function UDKBase.CloudMenuMicroTrans.InitMenuScene
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// int32_t                        ScreenWidth                    (CPF_Parm)
// int32_t                        ScreenHeight                   (CPF_Parm)
// bool                           bIsFirstInitialization         (CPF_Parm)

void UCloudMenuMicroTrans::eventInitMenuScene(class UMobilePlayerInput* PlayerInput, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* uFnInitMenuScene = nullptr;

	if (!uFnInitMenuScene)
	{
		uFnInitMenuScene = UFunction::FindFunction("Function UDKBase.CloudMenuMicroTrans.InitMenuScene");
	}

	UCloudMenuMicroTrans_eventInitMenuScene_Params InitMenuScene_Params;
	memset(&InitMenuScene_Params, 0, sizeof(InitMenuScene_Params));
	memcpy_s(&InitMenuScene_Params.PlayerInput, sizeof(InitMenuScene_Params.PlayerInput), &PlayerInput, sizeof(PlayerInput));
	memcpy_s(&InitMenuScene_Params.ScreenWidth, sizeof(InitMenuScene_Params.ScreenWidth), &ScreenWidth, sizeof(ScreenWidth));
	memcpy_s(&InitMenuScene_Params.ScreenHeight, sizeof(InitMenuScene_Params.ScreenHeight), &ScreenHeight, sizeof(ScreenHeight));
	InitMenuScene_Params.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent(uFnInitMenuScene, &InitMenuScene_Params, nullptr);
};

// Function UDKBase.MobileGameCrowdAgent.OnSetMaterial
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_SetMaterial*     Action                         (CPF_Parm)

void AMobileGameCrowdAgent::OnSetMaterial(class USeqAct_SetMaterial* Action)
{
	static UFunction* uFnOnSetMaterial = nullptr;

	if (!uFnOnSetMaterial)
	{
		uFnOnSetMaterial = UFunction::FindFunction("Function UDKBase.MobileGameCrowdAgent.OnSetMaterial");
	}

	AMobileGameCrowdAgent_execOnSetMaterial_Params OnSetMaterial_Params;
	memset(&OnSetMaterial_Params, 0, sizeof(OnSetMaterial_Params));
	memcpy_s(&OnSetMaterial_Params.Action, sizeof(OnSetMaterial_Params.Action), &Action, sizeof(Action));

	this->ProcessEvent(uFnOnSetMaterial, &OnSetMaterial_Params, nullptr);
};

// Function UDKBase.MobileGameCrowdAgent.PlayDeath
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 KillMomentum                   (CPF_Parm)

void AMobileGameCrowdAgent::PlayDeath(struct FVector KillMomentum)
{
	static UFunction* uFnPlayDeath = nullptr;

	if (!uFnPlayDeath)
	{
		uFnPlayDeath = UFunction::FindFunction("Function UDKBase.MobileGameCrowdAgent.PlayDeath");
	}

	AMobileGameCrowdAgent_execPlayDeath_Params PlayDeath_Params;
	memset(&PlayDeath_Params, 0, sizeof(PlayDeath_Params));
	memcpy_s(&PlayDeath_Params.KillMomentum, sizeof(PlayDeath_Params.KillMomentum), &KillMomentum, sizeof(KillMomentum));

	this->ProcessEvent(uFnPlayDeath, &PlayDeath_Params, nullptr);
};

// Function UDKBase.MobilePlaceablePawn.GetPawnViewLocation
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector AMobilePlaceablePawn::GetPawnViewLocation()
{
	static UFunction* uFnGetPawnViewLocation = nullptr;

	if (!uFnGetPawnViewLocation)
	{
		uFnGetPawnViewLocation = UFunction::FindFunction("Function UDKBase.MobilePlaceablePawn.GetPawnViewLocation");
	}

	AMobilePlaceablePawn_execGetPawnViewLocation_Params GetPawnViewLocation_Params;
	memset(&GetPawnViewLocation_Params, 0, sizeof(GetPawnViewLocation_Params));

	this->ProcessEvent(uFnGetPawnViewLocation, &GetPawnViewLocation_Params, nullptr);

	return GetPawnViewLocation_Params.ReturnValue;
};

// Function UDKBase.MobilePlaceablePawn.CalcCamera
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          fDeltaTime                     (CPF_Parm)
// struct FVector                 out_CamLoc                     (CPF_Parm | CPF_OutParm)
// struct FRotator                out_CamRot                     (CPF_Parm | CPF_OutParm)
// float                          out_FOV                        (CPF_Parm | CPF_OutParm)

bool AMobilePlaceablePawn::CalcCamera(float fDeltaTime, struct FVector& out_CamLoc, struct FRotator& out_CamRot, float& out_FOV)
{
	static UFunction* uFnCalcCamera = nullptr;

	if (!uFnCalcCamera)
	{
		uFnCalcCamera = UFunction::FindFunction("Function UDKBase.MobilePlaceablePawn.CalcCamera");
	}

	AMobilePlaceablePawn_execCalcCamera_Params CalcCamera_Params;
	memset(&CalcCamera_Params, 0, sizeof(CalcCamera_Params));
	memcpy_s(&CalcCamera_Params.fDeltaTime, sizeof(CalcCamera_Params.fDeltaTime), &fDeltaTime, sizeof(fDeltaTime));
	memcpy_s(&CalcCamera_Params.out_CamLoc, sizeof(CalcCamera_Params.out_CamLoc), &out_CamLoc, sizeof(out_CamLoc));
	memcpy_s(&CalcCamera_Params.out_CamRot, sizeof(CalcCamera_Params.out_CamRot), &out_CamRot, sizeof(out_CamRot));
	memcpy_s(&CalcCamera_Params.out_FOV, sizeof(CalcCamera_Params.out_FOV), &out_FOV, sizeof(out_FOV));

	this->ProcessEvent(uFnCalcCamera, &CalcCamera_Params, nullptr);

	memcpy_s(&out_CamLoc, sizeof(out_CamLoc), &CalcCamera_Params.out_CamLoc, sizeof(CalcCamera_Params.out_CamLoc));
	memcpy_s(&out_CamRot, sizeof(out_CamRot), &CalcCamera_Params.out_CamRot, sizeof(CalcCamera_Params.out_CamRot));
	memcpy_s(&out_FOV, sizeof(out_FOV), &CalcCamera_Params.out_FOV, sizeof(CalcCamera_Params.out_FOV));

	return CalcCamera_Params.ReturnValue;
};

// Function UDKBase.MobilePlaceablePawn.RestoreAnimSetsToDefault
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AMobilePlaceablePawn::eventRestoreAnimSetsToDefault()
{
	static UFunction* uFnRestoreAnimSetsToDefault = nullptr;

	if (!uFnRestoreAnimSetsToDefault)
	{
		uFnRestoreAnimSetsToDefault = UFunction::FindFunction("Function UDKBase.MobilePlaceablePawn.RestoreAnimSetsToDefault");
	}

	AMobilePlaceablePawn_eventRestoreAnimSetsToDefault_Params RestoreAnimSetsToDefault_Params;
	memset(&RestoreAnimSetsToDefault_Params, 0, sizeof(RestoreAnimSetsToDefault_Params));

	this->ProcessEvent(uFnRestoreAnimSetsToDefault, &RestoreAnimSetsToDefault_Params, nullptr);

	return RestoreAnimSetsToDefault_Params.ReturnValue;
};

// Function UDKBase.MobilePlaceablePawn.FixedView
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobilePlaceablePawn::FixedView()
{
	static UFunction* uFnFixedView = nullptr;

	if (!uFnFixedView)
	{
		uFnFixedView = UFunction::FindFunction("Function UDKBase.MobilePlaceablePawn.FixedView");
	}

	AMobilePlaceablePawn_execFixedView_Params FixedView_Params;
	memset(&FixedView_Params, 0, sizeof(FixedView_Params));

	this->ProcessEvent(uFnFixedView, &FixedView_Params, nullptr);
};

// Function UDKBase.MobileProjectile.GetPawnOwner
// [0x00020100] (FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class APawn* AMobileProjectile::GetPawnOwner()
{
	static UFunction* uFnGetPawnOwner = nullptr;

	if (!uFnGetPawnOwner)
	{
		uFnGetPawnOwner = UFunction::FindFunction("Function UDKBase.MobileProjectile.GetPawnOwner");
	}

	AMobileProjectile_execGetPawnOwner_Params GetPawnOwner_Params;
	memset(&GetPawnOwner_Params, 0, sizeof(GetPawnOwner_Params));

	this->ProcessEvent(uFnGetPawnOwner, &GetPawnOwner_Params, nullptr);

	return GetPawnOwner_Params.ReturnValue;
};

// Function UDKBase.MobileProjectile.CalcCamera
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          fDeltaTime                     (CPF_Parm)
// struct FVector                 out_CamLoc                     (CPF_Parm | CPF_OutParm)
// struct FRotator                out_CamRot                     (CPF_Parm | CPF_OutParm)
// float                          out_FOV                        (CPF_Parm | CPF_OutParm)

bool AMobileProjectile::CalcCamera(float fDeltaTime, struct FVector& out_CamLoc, struct FRotator& out_CamRot, float& out_FOV)
{
	static UFunction* uFnCalcCamera = nullptr;

	if (!uFnCalcCamera)
	{
		uFnCalcCamera = UFunction::FindFunction("Function UDKBase.MobileProjectile.CalcCamera");
	}

	AMobileProjectile_execCalcCamera_Params CalcCamera_Params;
	memset(&CalcCamera_Params, 0, sizeof(CalcCamera_Params));
	memcpy_s(&CalcCamera_Params.fDeltaTime, sizeof(CalcCamera_Params.fDeltaTime), &fDeltaTime, sizeof(fDeltaTime));
	memcpy_s(&CalcCamera_Params.out_CamLoc, sizeof(CalcCamera_Params.out_CamLoc), &out_CamLoc, sizeof(out_CamLoc));
	memcpy_s(&CalcCamera_Params.out_CamRot, sizeof(CalcCamera_Params.out_CamRot), &out_CamRot, sizeof(out_CamRot));
	memcpy_s(&CalcCamera_Params.out_FOV, sizeof(CalcCamera_Params.out_FOV), &out_FOV, sizeof(out_FOV));

	this->ProcessEvent(uFnCalcCamera, &CalcCamera_Params, nullptr);

	memcpy_s(&out_CamLoc, sizeof(out_CamLoc), &CalcCamera_Params.out_CamLoc, sizeof(CalcCamera_Params.out_CamLoc));
	memcpy_s(&out_CamRot, sizeof(out_CamRot), &CalcCamera_Params.out_CamRot, sizeof(CalcCamera_Params.out_CamRot));
	memcpy_s(&out_FOV, sizeof(out_FOV), &CalcCamera_Params.out_FOV, sizeof(CalcCamera_Params.out_FOV));

	return CalcCamera_Params.ReturnValue;
};

// Function UDKBase.MobileProjectile.MyOnParticleSystemFinished
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UParticleSystemComponent* PSC                            (CPF_Parm | CPF_EditInline)

void AMobileProjectile::MyOnParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static UFunction* uFnMyOnParticleSystemFinished = nullptr;

	if (!uFnMyOnParticleSystemFinished)
	{
		uFnMyOnParticleSystemFinished = UFunction::FindFunction("Function UDKBase.MobileProjectile.MyOnParticleSystemFinished");
	}

	AMobileProjectile_execMyOnParticleSystemFinished_Params MyOnParticleSystemFinished_Params;
	memset(&MyOnParticleSystemFinished_Params, 0, sizeof(MyOnParticleSystemFinished_Params));
	memcpy_s(&MyOnParticleSystemFinished_Params.PSC, sizeof(MyOnParticleSystemFinished_Params.PSC), &PSC, sizeof(PSC));

	this->ProcessEvent(uFnMyOnParticleSystemFinished, &MyOnParticleSystemFinished_Params, nullptr);
};

// Function UDKBase.MobileProjectile.Destroyed
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileProjectile::Destroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function UDKBase.MobileProjectile.Destroyed");
	}

	AMobileProjectile_execDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function UDKBase.MobileProjectile.HideProjectile
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileProjectile::HideProjectile()
{
	static UFunction* uFnHideProjectile = nullptr;

	if (!uFnHideProjectile)
	{
		uFnHideProjectile = UFunction::FindFunction("Function UDKBase.MobileProjectile.HideProjectile");
	}

	AMobileProjectile_execHideProjectile_Params HideProjectile_Params;
	memset(&HideProjectile_Params, 0, sizeof(HideProjectile_Params));

	this->ProcessEvent(uFnHideProjectile, &HideProjectile_Params, nullptr);
};

// Function UDKBase.MobileProjectile.TornOff
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileProjectile::eventTornOff()
{
	static UFunction* uFnTornOff = nullptr;

	if (!uFnTornOff)
	{
		uFnTornOff = UFunction::FindFunction("Function UDKBase.MobileProjectile.TornOff");
	}

	AMobileProjectile_eventTornOff_Params TornOff_Params;
	memset(&TornOff_Params, 0, sizeof(TornOff_Params));

	this->ProcessEvent(uFnTornOff, &TornOff_Params, nullptr);
};

// Function UDKBase.MobileProjectile.ShutDown
// [0x00820102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void AMobileProjectile::ShutDown()
{
	static UFunction* uFnShutDown = nullptr;

	if (!uFnShutDown)
	{
		uFnShutDown = UFunction::FindFunction("Function UDKBase.MobileProjectile.ShutDown");
	}

	AMobileProjectile_execShutDown_Params ShutDown_Params;
	memset(&ShutDown_Params, 0, sizeof(ShutDown_Params));

	this->ProcessEvent(uFnShutDown, &ShutDown_Params, nullptr);
};

// Function UDKBase.MobileProjectile.SpawnExplosionEffects
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AMobileProjectile::SpawnExplosionEffects(struct FVector HitLocation, struct FVector HitNormal)
{
	static UFunction* uFnSpawnExplosionEffects = nullptr;

	if (!uFnSpawnExplosionEffects)
	{
		uFnSpawnExplosionEffects = UFunction::FindFunction("Function UDKBase.MobileProjectile.SpawnExplosionEffects");
	}

	AMobileProjectile_execSpawnExplosionEffects_Params SpawnExplosionEffects_Params;
	memset(&SpawnExplosionEffects_Params, 0, sizeof(SpawnExplosionEffects_Params));
	memcpy_s(&SpawnExplosionEffects_Params.HitLocation, sizeof(SpawnExplosionEffects_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&SpawnExplosionEffects_Params.HitNormal, sizeof(SpawnExplosionEffects_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	this->ProcessEvent(uFnSpawnExplosionEffects, &SpawnExplosionEffects_Params, nullptr);
};

// Function UDKBase.MobileProjectile.SetExplosionEffectParameters
// [0x00020100] (FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UParticleSystemComponent* ProjExplosion                  (CPF_Parm | CPF_EditInline)

void AMobileProjectile::SetExplosionEffectParameters(class UParticleSystemComponent* ProjExplosion)
{
	static UFunction* uFnSetExplosionEffectParameters = nullptr;

	if (!uFnSetExplosionEffectParameters)
	{
		uFnSetExplosionEffectParameters = UFunction::FindFunction("Function UDKBase.MobileProjectile.SetExplosionEffectParameters");
	}

	AMobileProjectile_execSetExplosionEffectParameters_Params SetExplosionEffectParameters_Params;
	memset(&SetExplosionEffectParameters_Params, 0, sizeof(SetExplosionEffectParameters_Params));
	memcpy_s(&SetExplosionEffectParameters_Params.ProjExplosion, sizeof(SetExplosionEffectParameters_Params.ProjExplosion), &ProjExplosion, sizeof(ProjExplosion));

	this->ProcessEvent(uFnSetExplosionEffectParameters, &SetExplosionEffectParameters_Params, nullptr);
};

// Function UDKBase.MobileProjectile.SpawnFlightEffects
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileProjectile::SpawnFlightEffects()
{
	static UFunction* uFnSpawnFlightEffects = nullptr;

	if (!uFnSpawnFlightEffects)
	{
		uFnSpawnFlightEffects = UFunction::FindFunction("Function UDKBase.MobileProjectile.SpawnFlightEffects");
	}

	AMobileProjectile_execSpawnFlightEffects_Params SpawnFlightEffects_Params;
	memset(&SpawnFlightEffects_Params, 0, sizeof(SpawnFlightEffects_Params));

	this->ProcessEvent(uFnSpawnFlightEffects, &SpawnFlightEffects_Params, nullptr);
};

// Function UDKBase.MobileProjectile.Explode
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AMobileProjectile::Explode(struct FVector HitLocation, struct FVector HitNormal)
{
	static UFunction* uFnExplode = nullptr;

	if (!uFnExplode)
	{
		uFnExplode = UFunction::FindFunction("Function UDKBase.MobileProjectile.Explode");
	}

	AMobileProjectile_execExplode_Params Explode_Params;
	memset(&Explode_Params, 0, sizeof(Explode_Params));
	memcpy_s(&Explode_Params.HitLocation, sizeof(Explode_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&Explode_Params.HitNormal, sizeof(Explode_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	this->ProcessEvent(uFnExplode, &Explode_Params, nullptr);
};

// Function UDKBase.MobileProjectile.ProcessTouch
// [0x00020100] (FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  Other                          (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AMobileProjectile::ProcessTouch(class AActor* Other, struct FVector HitLocation, struct FVector HitNormal)
{
	static UFunction* uFnProcessTouch = nullptr;

	if (!uFnProcessTouch)
	{
		uFnProcessTouch = UFunction::FindFunction("Function UDKBase.MobileProjectile.ProcessTouch");
	}

	AMobileProjectile_execProcessTouch_Params ProcessTouch_Params;
	memset(&ProcessTouch_Params, 0, sizeof(ProcessTouch_Params));
	memcpy_s(&ProcessTouch_Params.Other, sizeof(ProcessTouch_Params.Other), &Other, sizeof(Other));
	memcpy_s(&ProcessTouch_Params.HitLocation, sizeof(ProcessTouch_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&ProcessTouch_Params.HitNormal, sizeof(ProcessTouch_Params.HitNormal), &HitNormal, sizeof(HitNormal));

	this->ProcessEvent(uFnProcessTouch, &ProcessTouch_Params, nullptr);
};

// Function UDKBase.MobileProjectile.Init
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 Direction                      (CPF_Parm)

void AMobileProjectile::Init(struct FVector Direction)
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function UDKBase.MobileProjectile.Init");
	}

	AMobileProjectile_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));
	memcpy_s(&Init_Params.Direction, sizeof(Init_Params.Direction), &Direction, sizeof(Direction));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function UDKBase.MobileProjectile.SetInitialState
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileProjectile::eventSetInitialState()
{
	static UFunction* uFnSetInitialState = nullptr;

	if (!uFnSetInitialState)
	{
		uFnSetInitialState = UFunction::FindFunction("Function UDKBase.MobileProjectile.SetInitialState");
	}

	AMobileProjectile_eventSetInitialState_Params SetInitialState_Params;
	memset(&SetInitialState_Params, 0, sizeof(SetInitialState_Params));

	this->ProcessEvent(uFnSetInitialState, &SetInitialState_Params, nullptr);
};

// Function UDKBase.MobileProjectile.PostBeginPlay
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AMobileProjectile::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function UDKBase.MobileProjectile.PostBeginPlay");
	}

	AMobileProjectile_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function UDKBase.MobileProjectile.Landed
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)
// class AActor*                  FloorActor                     (CPF_Parm)

void AMobileProjectile::eventLanded(struct FVector HitLocation, struct FVector HitNormal, class AActor* FloorActor)
{
	static UFunction* uFnLanded = nullptr;

	if (!uFnLanded)
	{
		uFnLanded = UFunction::FindFunction("Function UDKBase.MobileProjectile.Landed");
	}

	AMobileProjectile_eventLanded_Params Landed_Params;
	memset(&Landed_Params, 0, sizeof(Landed_Params));
	memcpy_s(&Landed_Params.HitLocation, sizeof(Landed_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&Landed_Params.HitNormal, sizeof(Landed_Params.HitNormal), &HitNormal, sizeof(HitNormal));
	memcpy_s(&Landed_Params.FloorActor, sizeof(Landed_Params.FloorActor), &FloorActor, sizeof(FloorActor));

	this->ProcessEvent(uFnLanded, &Landed_Params, nullptr);
};

// Function UDKBase.UDKAnimNodeSequenceByBoneRotation.OnBecomeRelevant
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void UUDKAnimNodeSequenceByBoneRotation::eventOnBecomeRelevant()
{
	static UFunction* uFnOnBecomeRelevant = nullptr;

	if (!uFnOnBecomeRelevant)
	{
		uFnOnBecomeRelevant = UFunction::FindFunction("Function UDKBase.UDKAnimNodeSequenceByBoneRotation.OnBecomeRelevant");
	}

	UUDKAnimNodeSequenceByBoneRotation_eventOnBecomeRelevant_Params OnBecomeRelevant_Params;
	memset(&OnBecomeRelevant_Params, 0, sizeof(OnBecomeRelevant_Params));

	this->ProcessEvent(uFnOnBecomeRelevant, &OnBecomeRelevant_Params, nullptr);
};

// Function UDKBase.UDKMobileInputZone.ProcessGameplayInput
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// int32_t                        Handle                         (CPF_Parm)
// ETouchType                     EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)

bool UUDKMobileInputZone::ProcessGameplayInput(class UMobileInputZone* Zone, float DeltaTime, int32_t Handle, ETouchType EventType, struct FVector2D TouchLocation)
{
	static UFunction* uFnProcessGameplayInput = nullptr;

	if (!uFnProcessGameplayInput)
	{
		uFnProcessGameplayInput = UFunction::FindFunction("Function UDKBase.UDKMobileInputZone.ProcessGameplayInput");
	}

	UUDKMobileInputZone_execProcessGameplayInput_Params ProcessGameplayInput_Params;
	memset(&ProcessGameplayInput_Params, 0, sizeof(ProcessGameplayInput_Params));
	memcpy_s(&ProcessGameplayInput_Params.Zone, sizeof(ProcessGameplayInput_Params.Zone), &Zone, sizeof(Zone));
	memcpy_s(&ProcessGameplayInput_Params.DeltaTime, sizeof(ProcessGameplayInput_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&ProcessGameplayInput_Params.Handle, sizeof(ProcessGameplayInput_Params.Handle), &Handle, sizeof(Handle));
	memcpy_s(&ProcessGameplayInput_Params.EventType, sizeof(ProcessGameplayInput_Params.EventType), &EventType, sizeof(EventType));
	memcpy_s(&ProcessGameplayInput_Params.TouchLocation, sizeof(ProcessGameplayInput_Params.TouchLocation), &TouchLocation, sizeof(TouchLocation));

	this->ProcessEvent(uFnProcessGameplayInput, &ProcessGameplayInput_Params, nullptr);

	return ProcessGameplayInput_Params.ReturnValue;
};

// Function UDKBase.UDKMobileInputZone.TraceFromScreenToWorld
// [0x00C24002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FVector2D               ScreenPos                      (CPF_Parm)
// struct FVector                 Extent                         (CPF_OptionalParm | CPF_Parm)
// class AActor*                  outHitActor                    (CPF_Parm | CPF_OutParm)
// struct FVector                 OutHitLocation                 (CPF_Parm | CPF_OutParm)

void UUDKMobileInputZone::TraceFromScreenToWorld(struct FVector2D ScreenPos, struct FVector Extent, class AActor*& outHitActor, struct FVector& OutHitLocation)
{
	static UFunction* uFnTraceFromScreenToWorld = nullptr;

	if (!uFnTraceFromScreenToWorld)
	{
		uFnTraceFromScreenToWorld = UFunction::FindFunction("Function UDKBase.UDKMobileInputZone.TraceFromScreenToWorld");
	}

	UUDKMobileInputZone_execTraceFromScreenToWorld_Params TraceFromScreenToWorld_Params;
	memset(&TraceFromScreenToWorld_Params, 0, sizeof(TraceFromScreenToWorld_Params));
	memcpy_s(&TraceFromScreenToWorld_Params.ScreenPos, sizeof(TraceFromScreenToWorld_Params.ScreenPos), &ScreenPos, sizeof(ScreenPos));
	memcpy_s(&TraceFromScreenToWorld_Params.Extent, sizeof(TraceFromScreenToWorld_Params.Extent), &Extent, sizeof(Extent));
	memcpy_s(&TraceFromScreenToWorld_Params.outHitActor, sizeof(TraceFromScreenToWorld_Params.outHitActor), &outHitActor, sizeof(outHitActor));
	memcpy_s(&TraceFromScreenToWorld_Params.OutHitLocation, sizeof(TraceFromScreenToWorld_Params.OutHitLocation), &OutHitLocation, sizeof(OutHitLocation));

	this->ProcessEvent(uFnTraceFromScreenToWorld, &TraceFromScreenToWorld_Params, nullptr);

	memcpy_s(&outHitActor, sizeof(outHitActor), &TraceFromScreenToWorld_Params.outHitActor, sizeof(TraceFromScreenToWorld_Params.outHitActor));
	memcpy_s(&OutHitLocation, sizeof(OutHitLocation), &TraceFromScreenToWorld_Params.OutHitLocation, sizeof(TraceFromScreenToWorld_Params.OutHitLocation));
};

// Function UDKBase.UDKMobileInputZone.IsTouchingPlayerPawn
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UUDKMobileInputZone::IsTouchingPlayerPawn()
{
	static UFunction* uFnIsTouchingPlayerPawn = nullptr;

	if (!uFnIsTouchingPlayerPawn)
	{
		uFnIsTouchingPlayerPawn = UFunction::FindFunction("Function UDKBase.UDKMobileInputZone.IsTouchingPlayerPawn");
	}

	UUDKMobileInputZone_execIsTouchingPlayerPawn_Params IsTouchingPlayerPawn_Params;
	memset(&IsTouchingPlayerPawn_Params, 0, sizeof(IsTouchingPlayerPawn_Params));

	this->ProcessEvent(uFnIsTouchingPlayerPawn, &IsTouchingPlayerPawn_Params, nullptr);

	return IsTouchingPlayerPawn_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
