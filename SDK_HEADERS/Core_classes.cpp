/*
#############################################################################################
# Outlast2 (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: Core_classes.cpp
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

TArray<class UObject*>* UObject::GObjObjects()
{
	TArray<UObject*>* recastedArray = reinterpret_cast<TArray<UObject*>*>(GObjects);
	return recastedArray;
}

std::string UObject::GetName()
{
	return this->Name.ToString();
}

std::string UObject::GetNameCPP()
{
	std::string nameCPP;

	if (this->IsA<UClass>())
	{
		UClass* uClass = static_cast<UClass*>(this);

		while (uClass)
		{
			std::string className = uClass->GetName();

			if (className == "Actor")
			{
				nameCPP += "A";
				break;
			}
			else if (className == "Object")
			{
				nameCPP += "U";
				break;
			}

			uClass = static_cast<UClass*>(uClass->SuperField);
		}
	}
	else
	{
		nameCPP += "F";
	}

	nameCPP += this->GetName();

	return nameCPP;
}

std::string UObject::GetFullName()
{
	std::string fullName = this->GetName();

	for (UObject* uOuter = this->Outer; uOuter; uOuter = uOuter->Outer)
	{
		fullName = (uOuter->GetName() + "." + fullName);
	}

	fullName = (this->Class->GetName() + " " + fullName);

	return fullName;
}

UObject* UObject::GetPackageObj()
{
	UObject* uPackage = nullptr;

	for (UObject* uOuter = this->Outer; uOuter; uOuter = uOuter->Outer)
	{
		uPackage = uOuter;
	}

	return uPackage;
}

UClass* UObject::FindClass(const const std::string& classFullName)
{
	static bool initialized = false;
	static std::map<const std::string, UClass*> foundClasses{};

	if (!initialized)
	{
		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject)
			{
				const std::string objectFullName = uObject->GetFullName();

				if (objectFullName.find("Class") == 0)
				{
					foundClasses[objectFullName] = static_cast<UClass*>(uObject);
				}
			}
		}

		initialized = true;
	}

	if (foundClasses.find(classFullName) != foundClasses.end())
	{
		return foundClasses[classFullName];
	}

	return nullptr;
}

bool UObject::IsA(class UClass* uClass)
{
	for (UClass* uSuperClass = this->Class; uSuperClass; uSuperClass = static_cast<UClass*>(uSuperClass->SuperField))
	{
		if (uSuperClass == uClass)
		{
			return true;
		}
	}

	return false;
}

bool UObject::IsA(int32_t objInternalInteger)
{
	UClass* uClass = UObject::GObjObjects()->at(objInternalInteger)->Class;

	if (uClass)
	{
		return this->IsA(uClass);
	}

	return false;
}

template<typename T> T GetVirtualFunction(const void* instance, size_t index)
{
	auto vtable = *static_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<T>(vtable[index]);
}

void UObject::ProcessEvent(class UFunction* uFunction, void* uParams, void* uResult)
{
	GetVirtualFunction<void(*)(class UObject*, class UFunction*, void*)>(this, 67)(this, uFunction, uParams);
}

// Function Core.Object.ProfNodeEvent
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  EventName                      (CPF_Parm | CPF_NeedCtorLink)

void UObject::ProfNodeEvent(class FString EventName)
{
	static UFunction* uFnProfNodeEvent = nullptr;

	if (!uFnProfNodeEvent)
	{
		uFnProfNodeEvent = UFunction::FindFunction("Function Core.Object.ProfNodeEvent");
	}

	UObject_execProfNodeEvent_Params ProfNodeEvent_Params;
	memset(&ProfNodeEvent_Params, 0, sizeof(ProfNodeEvent_Params));
	memcpy_s(&ProfNodeEvent_Params.EventName, sizeof(ProfNodeEvent_Params.EventName), &EventName, sizeof(EventName));

	uFnProfNodeEvent->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnProfNodeEvent, &ProfNodeEvent_Params, nullptr);
	uFnProfNodeEvent->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeSetDepthThreshold
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Depth                          (CPF_Parm)

void UObject::ProfNodeSetDepthThreshold(int32_t Depth)
{
	static UFunction* uFnProfNodeSetDepthThreshold = nullptr;

	if (!uFnProfNodeSetDepthThreshold)
	{
		uFnProfNodeSetDepthThreshold = UFunction::FindFunction("Function Core.Object.ProfNodeSetDepthThreshold");
	}

	UObject_execProfNodeSetDepthThreshold_Params ProfNodeSetDepthThreshold_Params;
	memset(&ProfNodeSetDepthThreshold_Params, 0, sizeof(ProfNodeSetDepthThreshold_Params));
	memcpy_s(&ProfNodeSetDepthThreshold_Params.Depth, sizeof(ProfNodeSetDepthThreshold_Params.Depth), &Depth, sizeof(Depth));

	uFnProfNodeSetDepthThreshold->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnProfNodeSetDepthThreshold, &ProfNodeSetDepthThreshold_Params, nullptr);
	uFnProfNodeSetDepthThreshold->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeSetTimeThresholdSeconds
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Threshold                      (CPF_Parm)

void UObject::ProfNodeSetTimeThresholdSeconds(float Threshold)
{
	static UFunction* uFnProfNodeSetTimeThresholdSeconds = nullptr;

	if (!uFnProfNodeSetTimeThresholdSeconds)
	{
		uFnProfNodeSetTimeThresholdSeconds = UFunction::FindFunction("Function Core.Object.ProfNodeSetTimeThresholdSeconds");
	}

	UObject_execProfNodeSetTimeThresholdSeconds_Params ProfNodeSetTimeThresholdSeconds_Params;
	memset(&ProfNodeSetTimeThresholdSeconds_Params, 0, sizeof(ProfNodeSetTimeThresholdSeconds_Params));
	memcpy_s(&ProfNodeSetTimeThresholdSeconds_Params.Threshold, sizeof(ProfNodeSetTimeThresholdSeconds_Params.Threshold), &Threshold, sizeof(Threshold));

	uFnProfNodeSetTimeThresholdSeconds->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnProfNodeSetTimeThresholdSeconds, &ProfNodeSetTimeThresholdSeconds_Params, nullptr);
	uFnProfNodeSetTimeThresholdSeconds->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeStop
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        AssumedTimerIndex              (CPF_OptionalParm | CPF_Parm)

void UObject::ProfNodeStop(int32_t AssumedTimerIndex)
{
	static UFunction* uFnProfNodeStop = nullptr;

	if (!uFnProfNodeStop)
	{
		uFnProfNodeStop = UFunction::FindFunction("Function Core.Object.ProfNodeStop");
	}

	UObject_execProfNodeStop_Params ProfNodeStop_Params;
	memset(&ProfNodeStop_Params, 0, sizeof(ProfNodeStop_Params));
	memcpy_s(&ProfNodeStop_Params.AssumedTimerIndex, sizeof(ProfNodeStop_Params.AssumedTimerIndex), &AssumedTimerIndex, sizeof(AssumedTimerIndex));

	uFnProfNodeStop->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnProfNodeStop, &ProfNodeStop_Params, nullptr);
	uFnProfNodeStop->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeStart
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  TimerName                      (CPF_Parm | CPF_NeedCtorLink)

int32_t UObject::ProfNodeStart(class FString TimerName)
{
	static UFunction* uFnProfNodeStart = nullptr;

	if (!uFnProfNodeStart)
	{
		uFnProfNodeStart = UFunction::FindFunction("Function Core.Object.ProfNodeStart");
	}

	UObject_execProfNodeStart_Params ProfNodeStart_Params;
	memset(&ProfNodeStart_Params, 0, sizeof(ProfNodeStart_Params));
	memcpy_s(&ProfNodeStart_Params.TimerName, sizeof(ProfNodeStart_Params.TimerName), &TimerName, sizeof(TimerName));

	uFnProfNodeStart->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnProfNodeStart, &ProfNodeStart_Params, nullptr);
	uFnProfNodeStart->FunctionFlags |= 0x400;

	return ProfNodeStart_Params.ReturnValue;
};

// Function Core.Object.GetStringFromGuid
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FGuid                   InGuid                         (CPF_Const | CPF_Parm | CPF_OutParm)

class FString UObject::GetStringFromGuid(struct FGuid& InGuid)
{
	static UFunction* uFnGetStringFromGuid = nullptr;

	if (!uFnGetStringFromGuid)
	{
		uFnGetStringFromGuid = UFunction::FindFunction("Function Core.Object.GetStringFromGuid");
	}

	UObject_execGetStringFromGuid_Params GetStringFromGuid_Params;
	memset(&GetStringFromGuid_Params, 0, sizeof(GetStringFromGuid_Params));
	memcpy_s(&GetStringFromGuid_Params.InGuid, sizeof(GetStringFromGuid_Params.InGuid), &InGuid, sizeof(InGuid));

	uFnGetStringFromGuid->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetStringFromGuid, &GetStringFromGuid_Params, nullptr);
	uFnGetStringFromGuid->FunctionFlags |= 0x400;

	memcpy_s(&InGuid, sizeof(InGuid), &GetStringFromGuid_Params.InGuid, sizeof(GetStringFromGuid_Params.InGuid));

	return GetStringFromGuid_Params.ReturnValue;
};

// Function Core.Object.GetGuidFromString
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FGuid                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InGuidString                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FGuid UObject::GetGuidFromString(class FString& InGuidString)
{
	static UFunction* uFnGetGuidFromString = nullptr;

	if (!uFnGetGuidFromString)
	{
		uFnGetGuidFromString = UFunction::FindFunction("Function Core.Object.GetGuidFromString");
	}

	UObject_execGetGuidFromString_Params GetGuidFromString_Params;
	memset(&GetGuidFromString_Params, 0, sizeof(GetGuidFromString_Params));
	memcpy_s(&GetGuidFromString_Params.InGuidString, sizeof(GetGuidFromString_Params.InGuidString), &InGuidString, sizeof(InGuidString));

	uFnGetGuidFromString->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetGuidFromString, &GetGuidFromString_Params, nullptr);
	uFnGetGuidFromString->FunctionFlags |= 0x400;

	memcpy_s(&InGuidString, sizeof(InGuidString), &GetGuidFromString_Params.InGuidString, sizeof(GetGuidFromString_Params.InGuidString));

	return GetGuidFromString_Params.ReturnValue;
};

// Function Core.Object.CreateGuid
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FGuid                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FGuid UObject::CreateGuid()
{
	static UFunction* uFnCreateGuid = nullptr;

	if (!uFnCreateGuid)
	{
		uFnCreateGuid = UFunction::FindFunction("Function Core.Object.CreateGuid");
	}

	UObject_execCreateGuid_Params CreateGuid_Params;
	memset(&CreateGuid_Params, 0, sizeof(CreateGuid_Params));

	uFnCreateGuid->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnCreateGuid, &CreateGuid_Params, nullptr);
	uFnCreateGuid->FunctionFlags |= 0x400;

	return CreateGuid_Params.ReturnValue;
};

// Function Core.Object.IsGuidValid
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FGuid                   InGuid                         (CPF_Const | CPF_Parm | CPF_OutParm)

bool UObject::IsGuidValid(struct FGuid& InGuid)
{
	static UFunction* uFnIsGuidValid = nullptr;

	if (!uFnIsGuidValid)
	{
		uFnIsGuidValid = UFunction::FindFunction("Function Core.Object.IsGuidValid");
	}

	UObject_execIsGuidValid_Params IsGuidValid_Params;
	memset(&IsGuidValid_Params, 0, sizeof(IsGuidValid_Params));
	memcpy_s(&IsGuidValid_Params.InGuid, sizeof(IsGuidValid_Params.InGuid), &InGuid, sizeof(InGuid));

	uFnIsGuidValid->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnIsGuidValid, &IsGuidValid_Params, nullptr);
	uFnIsGuidValid->FunctionFlags |= 0x400;

	memcpy_s(&InGuid, sizeof(InGuid), &IsGuidValid_Params.InGuid, sizeof(IsGuidValid_Params.InGuid));

	return IsGuidValid_Params.ReturnValue;
};

// Function Core.Object.InvalidateGuid
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FGuid                   InGuid                         (CPF_Parm | CPF_OutParm)

void UObject::InvalidateGuid(struct FGuid& InGuid)
{
	static UFunction* uFnInvalidateGuid = nullptr;

	if (!uFnInvalidateGuid)
	{
		uFnInvalidateGuid = UFunction::FindFunction("Function Core.Object.InvalidateGuid");
	}

	UObject_execInvalidateGuid_Params InvalidateGuid_Params;
	memset(&InvalidateGuid_Params, 0, sizeof(InvalidateGuid_Params));
	memcpy_s(&InvalidateGuid_Params.InGuid, sizeof(InvalidateGuid_Params.InGuid), &InGuid, sizeof(InGuid));

	uFnInvalidateGuid->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnInvalidateGuid, &InvalidateGuid_Params, nullptr);
	uFnInvalidateGuid->FunctionFlags |= 0x400;

	memcpy_s(&InGuid, sizeof(InGuid), &InvalidateGuid_Params.InGuid, sizeof(InvalidateGuid_Params.InGuid));
};

// Function Core.Object.GetLanguage
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UObject::GetLanguage()
{
	static UFunction* uFnGetLanguage = nullptr;

	if (!uFnGetLanguage)
	{
		uFnGetLanguage = UFunction::FindFunction("Function Core.Object.GetLanguage");
	}

	UObject_execGetLanguage_Params GetLanguage_Params;
	memset(&GetLanguage_Params, 0, sizeof(GetLanguage_Params));

	uFnGetLanguage->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetLanguage, &GetLanguage_Params, nullptr);
	uFnGetLanguage->FunctionFlags |= 0x400;

	return GetLanguage_Params.ReturnValue;
};

// Function Core.Object.GetRandomOptionSumFrequency
// [0x00420003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<float>                  FreqList                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UObject::GetRandomOptionSumFrequency(TArray<float>& FreqList)
{
	static UFunction* uFnGetRandomOptionSumFrequency = nullptr;

	if (!uFnGetRandomOptionSumFrequency)
	{
		uFnGetRandomOptionSumFrequency = UFunction::FindFunction("Function Core.Object.GetRandomOptionSumFrequency");
	}

	UObject_execGetRandomOptionSumFrequency_Params GetRandomOptionSumFrequency_Params;
	memset(&GetRandomOptionSumFrequency_Params, 0, sizeof(GetRandomOptionSumFrequency_Params));
	memcpy_s(&GetRandomOptionSumFrequency_Params.FreqList, sizeof(GetRandomOptionSumFrequency_Params.FreqList), &FreqList, sizeof(FreqList));

	this->ProcessEvent(uFnGetRandomOptionSumFrequency, &GetRandomOptionSumFrequency_Params, nullptr);

	memcpy_s(&FreqList, sizeof(FreqList), &GetRandomOptionSumFrequency_Params.FreqList, sizeof(GetRandomOptionSumFrequency_Params.FreqList));

	return GetRandomOptionSumFrequency_Params.ReturnValue;
};

// Function Core.Object.GetBuildChangelistNumber
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UObject::GetBuildChangelistNumber()
{
	static UFunction* uFnGetBuildChangelistNumber = nullptr;

	if (!uFnGetBuildChangelistNumber)
	{
		uFnGetBuildChangelistNumber = UFunction::FindFunction("Function Core.Object.GetBuildChangelistNumber");
	}

	UObject_execGetBuildChangelistNumber_Params GetBuildChangelistNumber_Params;
	memset(&GetBuildChangelistNumber_Params, 0, sizeof(GetBuildChangelistNumber_Params));

	uFnGetBuildChangelistNumber->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetBuildChangelistNumber, &GetBuildChangelistNumber_Params, nullptr);
	uFnGetBuildChangelistNumber->FunctionFlags |= 0x400;

	return GetBuildChangelistNumber_Params.ReturnValue;
};

// Function Core.Object.GetEngineVersion
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UObject::GetEngineVersion()
{
	static UFunction* uFnGetEngineVersion = nullptr;

	if (!uFnGetEngineVersion)
	{
		uFnGetEngineVersion = UFunction::FindFunction("Function Core.Object.GetEngineVersion");
	}

	UObject_execGetEngineVersion_Params GetEngineVersion_Params;
	memset(&GetEngineVersion_Params, 0, sizeof(GetEngineVersion_Params));

	uFnGetEngineVersion->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetEngineVersion, &GetEngineVersion_Params, nullptr);
	uFnGetEngineVersion->FunctionFlags |= 0x400;

	return GetEngineVersion_Params.ReturnValue;
};

// Function Core.Object.GetSystemTime
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Year                           (CPF_Parm | CPF_OutParm)
// int32_t                        Month                          (CPF_Parm | CPF_OutParm)
// int32_t                        DayOfWeek                      (CPF_Parm | CPF_OutParm)
// int32_t                        Day                            (CPF_Parm | CPF_OutParm)
// int32_t                        Hour                           (CPF_Parm | CPF_OutParm)
// int32_t                        Min                            (CPF_Parm | CPF_OutParm)
// int32_t                        Sec                            (CPF_Parm | CPF_OutParm)
// int32_t                        MSec                           (CPF_Parm | CPF_OutParm)

void UObject::GetSystemTime(int32_t& Year, int32_t& Month, int32_t& DayOfWeek, int32_t& Day, int32_t& Hour, int32_t& Min, int32_t& Sec, int32_t& MSec)
{
	static UFunction* uFnGetSystemTime = nullptr;

	if (!uFnGetSystemTime)
	{
		uFnGetSystemTime = UFunction::FindFunction("Function Core.Object.GetSystemTime");
	}

	UObject_execGetSystemTime_Params GetSystemTime_Params;
	memset(&GetSystemTime_Params, 0, sizeof(GetSystemTime_Params));
	memcpy_s(&GetSystemTime_Params.Year, sizeof(GetSystemTime_Params.Year), &Year, sizeof(Year));
	memcpy_s(&GetSystemTime_Params.Month, sizeof(GetSystemTime_Params.Month), &Month, sizeof(Month));
	memcpy_s(&GetSystemTime_Params.DayOfWeek, sizeof(GetSystemTime_Params.DayOfWeek), &DayOfWeek, sizeof(DayOfWeek));
	memcpy_s(&GetSystemTime_Params.Day, sizeof(GetSystemTime_Params.Day), &Day, sizeof(Day));
	memcpy_s(&GetSystemTime_Params.Hour, sizeof(GetSystemTime_Params.Hour), &Hour, sizeof(Hour));
	memcpy_s(&GetSystemTime_Params.Min, sizeof(GetSystemTime_Params.Min), &Min, sizeof(Min));
	memcpy_s(&GetSystemTime_Params.Sec, sizeof(GetSystemTime_Params.Sec), &Sec, sizeof(Sec));
	memcpy_s(&GetSystemTime_Params.MSec, sizeof(GetSystemTime_Params.MSec), &MSec, sizeof(MSec));

	uFnGetSystemTime->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetSystemTime, &GetSystemTime_Params, nullptr);
	uFnGetSystemTime->FunctionFlags |= 0x400;

	memcpy_s(&Year, sizeof(Year), &GetSystemTime_Params.Year, sizeof(GetSystemTime_Params.Year));
	memcpy_s(&Month, sizeof(Month), &GetSystemTime_Params.Month, sizeof(GetSystemTime_Params.Month));
	memcpy_s(&DayOfWeek, sizeof(DayOfWeek), &GetSystemTime_Params.DayOfWeek, sizeof(GetSystemTime_Params.DayOfWeek));
	memcpy_s(&Day, sizeof(Day), &GetSystemTime_Params.Day, sizeof(GetSystemTime_Params.Day));
	memcpy_s(&Hour, sizeof(Hour), &GetSystemTime_Params.Hour, sizeof(GetSystemTime_Params.Hour));
	memcpy_s(&Min, sizeof(Min), &GetSystemTime_Params.Min, sizeof(GetSystemTime_Params.Min));
	memcpy_s(&Sec, sizeof(Sec), &GetSystemTime_Params.Sec, sizeof(GetSystemTime_Params.Sec));
	memcpy_s(&MSec, sizeof(MSec), &GetSystemTime_Params.MSec, sizeof(GetSystemTime_Params.MSec));
};

// Function Core.Object.TimeStamp
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UObject::TimeStamp()
{
	static UFunction* uFnTimeStamp = nullptr;

	if (!uFnTimeStamp)
	{
		uFnTimeStamp = UFunction::FindFunction("Function Core.Object.TimeStamp");
	}

	UObject_execTimeStamp_Params TimeStamp_Params;
	memset(&TimeStamp_Params, 0, sizeof(TimeStamp_Params));

	uFnTimeStamp->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTimeStamp, &TimeStamp_Params, nullptr);
	uFnTimeStamp->FunctionFlags |= 0x400;

	return TimeStamp_Params.ReturnValue;
};

// Function Core.Object.TransformVectorByRotation
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                SourceRotation                 (CPF_Parm)
// struct FVector                 SourceVector                   (CPF_Parm)
// bool                           bInverse                       (CPF_OptionalParm | CPF_Parm)

struct FVector UObject::TransformVectorByRotation(struct FRotator SourceRotation, struct FVector SourceVector, bool bInverse)
{
	static UFunction* uFnTransformVectorByRotation = nullptr;

	if (!uFnTransformVectorByRotation)
	{
		uFnTransformVectorByRotation = UFunction::FindFunction("Function Core.Object.TransformVectorByRotation");
	}

	UObject_execTransformVectorByRotation_Params TransformVectorByRotation_Params;
	memset(&TransformVectorByRotation_Params, 0, sizeof(TransformVectorByRotation_Params));
	memcpy_s(&TransformVectorByRotation_Params.SourceRotation, sizeof(TransformVectorByRotation_Params.SourceRotation), &SourceRotation, sizeof(SourceRotation));
	memcpy_s(&TransformVectorByRotation_Params.SourceVector, sizeof(TransformVectorByRotation_Params.SourceVector), &SourceVector, sizeof(SourceVector));
	TransformVectorByRotation_Params.bInverse = bInverse;

	uFnTransformVectorByRotation->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTransformVectorByRotation, &TransformVectorByRotation_Params, nullptr);
	uFnTransformVectorByRotation->FunctionFlags |= 0x400;

	return TransformVectorByRotation_Params.ReturnValue;
};

// Function Core.Object.GetPackageName
// [0x00020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UObject::GetPackageName()
{
	static UFunction* uFnGetPackageName = nullptr;

	if (!uFnGetPackageName)
	{
		uFnGetPackageName = UFunction::FindFunction("Function Core.Object.GetPackageName");
	}

	UObject_execGetPackageName_Params GetPackageName_Params;
	memset(&GetPackageName_Params, 0, sizeof(GetPackageName_Params));

	this->ProcessEvent(uFnGetPackageName, &GetPackageName_Params, nullptr);

	return GetPackageName_Params.ReturnValue;
};

// Function Core.Object.IsPendingKill
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UObject::IsPendingKill()
{
	static UFunction* uFnIsPendingKill = nullptr;

	if (!uFnIsPendingKill)
	{
		uFnIsPendingKill = UFunction::FindFunction("Function Core.Object.IsPendingKill");
	}

	UObject_execIsPendingKill_Params IsPendingKill_Params;
	memset(&IsPendingKill_Params, 0, sizeof(IsPendingKill_Params));

	uFnIsPendingKill->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsPendingKill, &IsPendingKill_Params, nullptr);
	uFnIsPendingKill->FunctionFlags |= 0x400;

	return IsPendingKill_Params.ReturnValue;
};

// Function Core.Object.ByteToFloat
// [0x00024103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        inputByte                      (CPF_Parm)
// bool                           bSigned                        (CPF_OptionalParm | CPF_Parm)

float UObject::ByteToFloat(uint8_t inputByte, bool bSigned)
{
	static UFunction* uFnByteToFloat = nullptr;

	if (!uFnByteToFloat)
	{
		uFnByteToFloat = UFunction::FindFunction("Function Core.Object.ByteToFloat");
	}

	UObject_execByteToFloat_Params ByteToFloat_Params;
	memset(&ByteToFloat_Params, 0, sizeof(ByteToFloat_Params));
	memcpy_s(&ByteToFloat_Params.inputByte, sizeof(ByteToFloat_Params.inputByte), &inputByte, sizeof(inputByte));
	ByteToFloat_Params.bSigned = bSigned;

	this->ProcessEvent(uFnByteToFloat, &ByteToFloat_Params, nullptr);

	return ByteToFloat_Params.ReturnValue;
};

// Function Core.Object.FloatToByte
// [0x00024103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          inputFloat                     (CPF_Parm)
// bool                           bSigned                        (CPF_OptionalParm | CPF_Parm)

uint8_t UObject::FloatToByte(float inputFloat, bool bSigned)
{
	static UFunction* uFnFloatToByte = nullptr;

	if (!uFnFloatToByte)
	{
		uFnFloatToByte = UFunction::FindFunction("Function Core.Object.FloatToByte");
	}

	UObject_execFloatToByte_Params FloatToByte_Params;
	memset(&FloatToByte_Params, 0, sizeof(FloatToByte_Params));
	memcpy_s(&FloatToByte_Params.inputFloat, sizeof(FloatToByte_Params.inputFloat), &inputFloat, sizeof(inputFloat));
	FloatToByte_Params.bSigned = bSigned;

	this->ProcessEvent(uFnFloatToByte, &FloatToByte_Params, nullptr);

	return FloatToByte_Params.ReturnValue;
};

// Function Core.Object.UnwindHeading
// [0x00022103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::UnwindHeading(float A)
{
	static UFunction* uFnUnwindHeading = nullptr;

	if (!uFnUnwindHeading)
	{
		uFnUnwindHeading = UFunction::FindFunction("Function Core.Object.UnwindHeading");
	}

	UObject_execUnwindHeading_Params UnwindHeading_Params;
	memset(&UnwindHeading_Params, 0, sizeof(UnwindHeading_Params));
	memcpy_s(&UnwindHeading_Params.A, sizeof(UnwindHeading_Params.A), &A, sizeof(A));

	UObject::StaticClass()->ProcessEvent(uFnUnwindHeading, &UnwindHeading_Params, nullptr);

	return UnwindHeading_Params.ReturnValue;
};

// Function Core.Object.FindDeltaAngle
// [0x00022103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A1                             (CPF_Parm)
// float                          A2                             (CPF_Parm)

float UObject::FindDeltaAngle(float A1, float A2)
{
	static UFunction* uFnFindDeltaAngle = nullptr;

	if (!uFnFindDeltaAngle)
	{
		uFnFindDeltaAngle = UFunction::FindFunction("Function Core.Object.FindDeltaAngle");
	}

	UObject_execFindDeltaAngle_Params FindDeltaAngle_Params;
	memset(&FindDeltaAngle_Params, 0, sizeof(FindDeltaAngle_Params));
	memcpy_s(&FindDeltaAngle_Params.A1, sizeof(FindDeltaAngle_Params.A1), &A1, sizeof(A1));
	memcpy_s(&FindDeltaAngle_Params.A2, sizeof(FindDeltaAngle_Params.A2), &A2, sizeof(A2));

	UObject::StaticClass()->ProcessEvent(uFnFindDeltaAngle, &FindDeltaAngle_Params, nullptr);

	return FindDeltaAngle_Params.ReturnValue;
};

// Function Core.Object.GetHeadingAngle
// [0x00022103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Dir                            (CPF_Parm)

float UObject::GetHeadingAngle(struct FVector Dir)
{
	static UFunction* uFnGetHeadingAngle = nullptr;

	if (!uFnGetHeadingAngle)
	{
		uFnGetHeadingAngle = UFunction::FindFunction("Function Core.Object.GetHeadingAngle");
	}

	UObject_execGetHeadingAngle_Params GetHeadingAngle_Params;
	memset(&GetHeadingAngle_Params, 0, sizeof(GetHeadingAngle_Params));
	memcpy_s(&GetHeadingAngle_Params.Dir, sizeof(GetHeadingAngle_Params.Dir), &Dir, sizeof(Dir));

	UObject::StaticClass()->ProcessEvent(uFnGetHeadingAngle, &GetHeadingAngle_Params, nullptr);

	return GetHeadingAngle_Params.ReturnValue;
};

// Function Core.Object.GetAngularDegreesFromRadians
// [0x00422103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FVector2D               OutFOV                         (CPF_Parm | CPF_OutParm)

void UObject::GetAngularDegreesFromRadians(struct FVector2D& OutFOV)
{
	static UFunction* uFnGetAngularDegreesFromRadians = nullptr;

	if (!uFnGetAngularDegreesFromRadians)
	{
		uFnGetAngularDegreesFromRadians = UFunction::FindFunction("Function Core.Object.GetAngularDegreesFromRadians");
	}

	UObject_execGetAngularDegreesFromRadians_Params GetAngularDegreesFromRadians_Params;
	memset(&GetAngularDegreesFromRadians_Params, 0, sizeof(GetAngularDegreesFromRadians_Params));
	memcpy_s(&GetAngularDegreesFromRadians_Params.OutFOV, sizeof(GetAngularDegreesFromRadians_Params.OutFOV), &OutFOV, sizeof(OutFOV));

	UObject::StaticClass()->ProcessEvent(uFnGetAngularDegreesFromRadians, &GetAngularDegreesFromRadians_Params, nullptr);

	memcpy_s(&OutFOV, sizeof(OutFOV), &GetAngularDegreesFromRadians_Params.OutFOV, sizeof(GetAngularDegreesFromRadians_Params.OutFOV));
};

// Function Core.Object.GetAngularFromDotDist
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FVector2D               DotDist                        (CPF_Parm)
// struct FVector2D               OutAngDist                     (CPF_Parm | CPF_OutParm)

void UObject::GetAngularFromDotDist(struct FVector2D DotDist, struct FVector2D& OutAngDist)
{
	static UFunction* uFnGetAngularFromDotDist = nullptr;

	if (!uFnGetAngularFromDotDist)
	{
		uFnGetAngularFromDotDist = UFunction::FindFunction("Function Core.Object.GetAngularFromDotDist");
	}

	UObject_execGetAngularFromDotDist_Params GetAngularFromDotDist_Params;
	memset(&GetAngularFromDotDist_Params, 0, sizeof(GetAngularFromDotDist_Params));
	memcpy_s(&GetAngularFromDotDist_Params.DotDist, sizeof(GetAngularFromDotDist_Params.DotDist), &DotDist, sizeof(DotDist));
	memcpy_s(&GetAngularFromDotDist_Params.OutAngDist, sizeof(GetAngularFromDotDist_Params.OutAngDist), &OutAngDist, sizeof(OutAngDist));

	uFnGetAngularFromDotDist->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetAngularFromDotDist, &GetAngularFromDotDist_Params, nullptr);
	uFnGetAngularFromDotDist->FunctionFlags |= 0x400;

	memcpy_s(&OutAngDist, sizeof(OutAngDist), &GetAngularFromDotDist_Params.OutAngDist, sizeof(GetAngularFromDotDist_Params.OutAngDist));
};

// Function Core.Object.GetAngularDistance
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Direction                      (CPF_Parm)
// struct FVector                 AxisX                          (CPF_Parm)
// struct FVector                 AxisY                          (CPF_Parm)
// struct FVector                 AxisZ                          (CPF_Parm)
// struct FVector2D               OutAngularDist                 (CPF_Parm | CPF_OutParm)

bool UObject::GetAngularDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D& OutAngularDist)
{
	static UFunction* uFnGetAngularDistance = nullptr;

	if (!uFnGetAngularDistance)
	{
		uFnGetAngularDistance = UFunction::FindFunction("Function Core.Object.GetAngularDistance");
	}

	UObject_execGetAngularDistance_Params GetAngularDistance_Params;
	memset(&GetAngularDistance_Params, 0, sizeof(GetAngularDistance_Params));
	memcpy_s(&GetAngularDistance_Params.Direction, sizeof(GetAngularDistance_Params.Direction), &Direction, sizeof(Direction));
	memcpy_s(&GetAngularDistance_Params.AxisX, sizeof(GetAngularDistance_Params.AxisX), &AxisX, sizeof(AxisX));
	memcpy_s(&GetAngularDistance_Params.AxisY, sizeof(GetAngularDistance_Params.AxisY), &AxisY, sizeof(AxisY));
	memcpy_s(&GetAngularDistance_Params.AxisZ, sizeof(GetAngularDistance_Params.AxisZ), &AxisZ, sizeof(AxisZ));
	memcpy_s(&GetAngularDistance_Params.OutAngularDist, sizeof(GetAngularDistance_Params.OutAngularDist), &OutAngularDist, sizeof(OutAngularDist));

	uFnGetAngularDistance->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetAngularDistance, &GetAngularDistance_Params, nullptr);
	uFnGetAngularDistance->FunctionFlags |= 0x400;

	memcpy_s(&OutAngularDist, sizeof(OutAngularDist), &GetAngularDistance_Params.OutAngularDist, sizeof(GetAngularDistance_Params.OutAngularDist));

	return GetAngularDistance_Params.ReturnValue;
};

// Function Core.Object.GetDotDistance
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Direction                      (CPF_Parm)
// struct FVector                 AxisX                          (CPF_Parm)
// struct FVector                 AxisY                          (CPF_Parm)
// struct FVector                 AxisZ                          (CPF_Parm)
// struct FVector2D               OutDotDist                     (CPF_Parm | CPF_OutParm)

bool UObject::GetDotDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D& OutDotDist)
{
	static UFunction* uFnGetDotDistance = nullptr;

	if (!uFnGetDotDistance)
	{
		uFnGetDotDistance = UFunction::FindFunction("Function Core.Object.GetDotDistance");
	}

	UObject_execGetDotDistance_Params GetDotDistance_Params;
	memset(&GetDotDistance_Params, 0, sizeof(GetDotDistance_Params));
	memcpy_s(&GetDotDistance_Params.Direction, sizeof(GetDotDistance_Params.Direction), &Direction, sizeof(Direction));
	memcpy_s(&GetDotDistance_Params.AxisX, sizeof(GetDotDistance_Params.AxisX), &AxisX, sizeof(AxisX));
	memcpy_s(&GetDotDistance_Params.AxisY, sizeof(GetDotDistance_Params.AxisY), &AxisY, sizeof(AxisY));
	memcpy_s(&GetDotDistance_Params.AxisZ, sizeof(GetDotDistance_Params.AxisZ), &AxisZ, sizeof(AxisZ));
	memcpy_s(&GetDotDistance_Params.OutDotDist, sizeof(GetDotDistance_Params.OutDotDist), &OutDotDist, sizeof(OutDotDist));

	uFnGetDotDistance->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetDotDistance, &GetDotDistance_Params, nullptr);
	uFnGetDotDistance->FunctionFlags |= 0x400;

	memcpy_s(&OutDotDist, sizeof(OutDotDist), &GetDotDistance_Params.OutDotDist, sizeof(GetDotDistance_Params.OutDotDist));

	return GetDotDistance_Params.ReturnValue;
};

// Function Core.Object.PointProjectToPlane
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 C                              (CPF_Parm)

struct FVector UObject::PointProjectToPlane(struct FVector Point, struct FVector A, struct FVector B, struct FVector C)
{
	static UFunction* uFnPointProjectToPlane = nullptr;

	if (!uFnPointProjectToPlane)
	{
		uFnPointProjectToPlane = UFunction::FindFunction("Function Core.Object.PointProjectToPlane");
	}

	UObject_execPointProjectToPlane_Params PointProjectToPlane_Params;
	memset(&PointProjectToPlane_Params, 0, sizeof(PointProjectToPlane_Params));
	memcpy_s(&PointProjectToPlane_Params.Point, sizeof(PointProjectToPlane_Params.Point), &Point, sizeof(Point));
	memcpy_s(&PointProjectToPlane_Params.A, sizeof(PointProjectToPlane_Params.A), &A, sizeof(A));
	memcpy_s(&PointProjectToPlane_Params.B, sizeof(PointProjectToPlane_Params.B), &B, sizeof(B));
	memcpy_s(&PointProjectToPlane_Params.C, sizeof(PointProjectToPlane_Params.C), &C, sizeof(C));

	uFnPointProjectToPlane->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnPointProjectToPlane, &PointProjectToPlane_Params, nullptr);
	uFnPointProjectToPlane->FunctionFlags |= 0x400;

	return PointProjectToPlane_Params.ReturnValue;
};

// Function Core.Object.PointDistToPlane
// [0x00C24103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FRotator                Orientation                    (CPF_Parm)
// struct FVector                 Origin                         (CPF_Parm)
// struct FVector                 out_ClosestPoint               (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

float UObject::PointDistToPlane(struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector& out_ClosestPoint)
{
	static UFunction* uFnPointDistToPlane = nullptr;

	if (!uFnPointDistToPlane)
	{
		uFnPointDistToPlane = UFunction::FindFunction("Function Core.Object.PointDistToPlane");
	}

	UObject_execPointDistToPlane_Params PointDistToPlane_Params;
	memset(&PointDistToPlane_Params, 0, sizeof(PointDistToPlane_Params));
	memcpy_s(&PointDistToPlane_Params.Point, sizeof(PointDistToPlane_Params.Point), &Point, sizeof(Point));
	memcpy_s(&PointDistToPlane_Params.Orientation, sizeof(PointDistToPlane_Params.Orientation), &Orientation, sizeof(Orientation));
	memcpy_s(&PointDistToPlane_Params.Origin, sizeof(PointDistToPlane_Params.Origin), &Origin, sizeof(Origin));
	memcpy_s(&PointDistToPlane_Params.out_ClosestPoint, sizeof(PointDistToPlane_Params.out_ClosestPoint), &out_ClosestPoint, sizeof(out_ClosestPoint));

	this->ProcessEvent(uFnPointDistToPlane, &PointDistToPlane_Params, nullptr);

	memcpy_s(&out_ClosestPoint, sizeof(out_ClosestPoint), &PointDistToPlane_Params.out_ClosestPoint, sizeof(PointDistToPlane_Params.out_ClosestPoint));

	return PointDistToPlane_Params.ReturnValue;
};

// Function Core.Object.PointDistToSegment
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 StartPoint                     (CPF_Parm)
// struct FVector                 EndPoint                       (CPF_Parm)
// struct FVector                 OutClosestPoint                (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

float UObject::PointDistToSegment(struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector& OutClosestPoint)
{
	static UFunction* uFnPointDistToSegment = nullptr;

	if (!uFnPointDistToSegment)
	{
		uFnPointDistToSegment = UFunction::FindFunction("Function Core.Object.PointDistToSegment");
	}

	UObject_execPointDistToSegment_Params PointDistToSegment_Params;
	memset(&PointDistToSegment_Params, 0, sizeof(PointDistToSegment_Params));
	memcpy_s(&PointDistToSegment_Params.Point, sizeof(PointDistToSegment_Params.Point), &Point, sizeof(Point));
	memcpy_s(&PointDistToSegment_Params.StartPoint, sizeof(PointDistToSegment_Params.StartPoint), &StartPoint, sizeof(StartPoint));
	memcpy_s(&PointDistToSegment_Params.EndPoint, sizeof(PointDistToSegment_Params.EndPoint), &EndPoint, sizeof(EndPoint));
	memcpy_s(&PointDistToSegment_Params.OutClosestPoint, sizeof(PointDistToSegment_Params.OutClosestPoint), &OutClosestPoint, sizeof(OutClosestPoint));

	uFnPointDistToSegment->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPointDistToSegment, &PointDistToSegment_Params, nullptr);
	uFnPointDistToSegment->FunctionFlags |= 0x400;

	memcpy_s(&OutClosestPoint, sizeof(OutClosestPoint), &PointDistToSegment_Params.OutClosestPoint, sizeof(PointDistToSegment_Params.OutClosestPoint));

	return PointDistToSegment_Params.ReturnValue;
};

// Function Core.Object.PointDistToLine
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 Line                           (CPF_Parm)
// struct FVector                 Origin                         (CPF_Parm)
// struct FVector                 OutClosestPoint                (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

float UObject::PointDistToLine(struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector& OutClosestPoint)
{
	static UFunction* uFnPointDistToLine = nullptr;

	if (!uFnPointDistToLine)
	{
		uFnPointDistToLine = UFunction::FindFunction("Function Core.Object.PointDistToLine");
	}

	UObject_execPointDistToLine_Params PointDistToLine_Params;
	memset(&PointDistToLine_Params, 0, sizeof(PointDistToLine_Params));
	memcpy_s(&PointDistToLine_Params.Point, sizeof(PointDistToLine_Params.Point), &Point, sizeof(Point));
	memcpy_s(&PointDistToLine_Params.Line, sizeof(PointDistToLine_Params.Line), &Line, sizeof(Line));
	memcpy_s(&PointDistToLine_Params.Origin, sizeof(PointDistToLine_Params.Origin), &Origin, sizeof(Origin));
	memcpy_s(&PointDistToLine_Params.OutClosestPoint, sizeof(PointDistToLine_Params.OutClosestPoint), &OutClosestPoint, sizeof(OutClosestPoint));

	uFnPointDistToLine->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPointDistToLine, &PointDistToLine_Params, nullptr);
	uFnPointDistToLine->FunctionFlags |= 0x400;

	memcpy_s(&OutClosestPoint, sizeof(OutClosestPoint), &PointDistToLine_Params.OutClosestPoint, sizeof(PointDistToLine_Params.OutClosestPoint));

	return PointDistToLine_Params.ReturnValue;
};

// Function Core.Object.GetPerObjectConfigSections
// [0x00426401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  SearchClass                    (CPF_Parm)
// class UObject*                 ObjectOuter                    (CPF_OptionalParm | CPF_Parm)
// int32_t                        MaxResults                     (CPF_OptionalParm | CPF_Parm)
// TArray<class FString>          out_SectionNames               (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UObject::GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int32_t MaxResults, TArray<class FString>& out_SectionNames)
{
	static UFunction* uFnGetPerObjectConfigSections = nullptr;

	if (!uFnGetPerObjectConfigSections)
	{
		uFnGetPerObjectConfigSections = UFunction::FindFunction("Function Core.Object.GetPerObjectConfigSections");
	}

	UObject_execGetPerObjectConfigSections_Params GetPerObjectConfigSections_Params;
	memset(&GetPerObjectConfigSections_Params, 0, sizeof(GetPerObjectConfigSections_Params));
	memcpy_s(&GetPerObjectConfigSections_Params.SearchClass, sizeof(GetPerObjectConfigSections_Params.SearchClass), &SearchClass, sizeof(SearchClass));
	memcpy_s(&GetPerObjectConfigSections_Params.ObjectOuter, sizeof(GetPerObjectConfigSections_Params.ObjectOuter), &ObjectOuter, sizeof(ObjectOuter));
	memcpy_s(&GetPerObjectConfigSections_Params.MaxResults, sizeof(GetPerObjectConfigSections_Params.MaxResults), &MaxResults, sizeof(MaxResults));
	memcpy_s(&GetPerObjectConfigSections_Params.out_SectionNames, sizeof(GetPerObjectConfigSections_Params.out_SectionNames), &out_SectionNames, sizeof(out_SectionNames));

	uFnGetPerObjectConfigSections->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetPerObjectConfigSections, &GetPerObjectConfigSections_Params, nullptr);
	uFnGetPerObjectConfigSections->FunctionFlags |= 0x400;

	memcpy_s(&out_SectionNames, sizeof(out_SectionNames), &GetPerObjectConfigSections_Params.out_SectionNames, sizeof(GetPerObjectConfigSections_Params.out_SectionNames));

	return GetPerObjectConfigSections_Params.ReturnValue;
};

// Function Core.Object.ImportJSON
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  PropertyName                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  JSON                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObject::ImportJSON(class FString PropertyName, class FString& JSON)
{
	static UFunction* uFnImportJSON = nullptr;

	if (!uFnImportJSON)
	{
		uFnImportJSON = UFunction::FindFunction("Function Core.Object.ImportJSON");
	}

	UObject_execImportJSON_Params ImportJSON_Params;
	memset(&ImportJSON_Params, 0, sizeof(ImportJSON_Params));
	memcpy_s(&ImportJSON_Params.PropertyName, sizeof(ImportJSON_Params.PropertyName), &PropertyName, sizeof(PropertyName));
	memcpy_s(&ImportJSON_Params.JSON, sizeof(ImportJSON_Params.JSON), &JSON, sizeof(JSON));

	uFnImportJSON->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnImportJSON, &ImportJSON_Params, nullptr);
	uFnImportJSON->FunctionFlags |= 0x400;

	memcpy_s(&JSON, sizeof(JSON), &ImportJSON_Params.JSON, sizeof(ImportJSON_Params.JSON));
};

// Function Core.Object.StaticSaveConfig
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UObject::StaticSaveConfig()
{
	static UFunction* uFnStaticSaveConfig = nullptr;

	if (!uFnStaticSaveConfig)
	{
		uFnStaticSaveConfig = UFunction::FindFunction("Function Core.Object.StaticSaveConfig");
	}

	UObject_execStaticSaveConfig_Params StaticSaveConfig_Params;
	memset(&StaticSaveConfig_Params, 0, sizeof(StaticSaveConfig_Params));

	uFnStaticSaveConfig->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnStaticSaveConfig, &StaticSaveConfig_Params, nullptr);
	uFnStaticSaveConfig->FunctionFlags |= 0x400;
};

// Function Core.Object.SaveConfig
// [0x21800020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:

void UObject::SaveConfig()
{
	static UFunction* uFnSaveConfig = nullptr;

	if (!uFnSaveConfig)
	{
		uFnSaveConfig = UFunction::FindFunction("Function Core.Object.SaveConfig");
	}

	UObject_execSaveConfig_Params SaveConfig_Params;
	memset(&SaveConfig_Params, 0, sizeof(SaveConfig_Params));

	uFnSaveConfig->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSaveConfig, &SaveConfig_Params, nullptr);
	uFnSaveConfig->FunctionFlags |= 0x400;
};

// Function Core.Object.FindObject
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ObjectName                     (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  ObjectClass                    (CPF_Parm)

class UObject* UObject::FindObject(class FString ObjectName, class UClass* ObjectClass)
{
	static UFunction* uFnFindObject = nullptr;

	if (!uFnFindObject)
	{
		uFnFindObject = UFunction::FindFunction("Function Core.Object.FindObject");
	}

	UObject_execFindObject_Params FindObject_Params;
	memset(&FindObject_Params, 0, sizeof(FindObject_Params));
	memcpy_s(&FindObject_Params.ObjectName, sizeof(FindObject_Params.ObjectName), &ObjectName, sizeof(ObjectName));
	memcpy_s(&FindObject_Params.ObjectClass, sizeof(FindObject_Params.ObjectClass), &ObjectClass, sizeof(ObjectClass));

	uFnFindObject->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnFindObject, &FindObject_Params, nullptr);
	uFnFindObject->FunctionFlags |= 0x400;

	return FindObject_Params.ReturnValue;
};

// Function Core.Object.DynamicLoadObject
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ObjectName                     (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  ObjectClass                    (CPF_Parm)
// bool                           MayFail                        (CPF_OptionalParm | CPF_Parm)

class UObject* UObject::DynamicLoadObject(class FString ObjectName, class UClass* ObjectClass, bool MayFail)
{
	static UFunction* uFnDynamicLoadObject = nullptr;

	if (!uFnDynamicLoadObject)
	{
		uFnDynamicLoadObject = UFunction::FindFunction("Function Core.Object.DynamicLoadObject");
	}

	UObject_execDynamicLoadObject_Params DynamicLoadObject_Params;
	memset(&DynamicLoadObject_Params, 0, sizeof(DynamicLoadObject_Params));
	memcpy_s(&DynamicLoadObject_Params.ObjectName, sizeof(DynamicLoadObject_Params.ObjectName), &ObjectName, sizeof(ObjectName));
	memcpy_s(&DynamicLoadObject_Params.ObjectClass, sizeof(DynamicLoadObject_Params.ObjectClass), &ObjectClass, sizeof(ObjectClass));
	DynamicLoadObject_Params.MayFail = MayFail;

	uFnDynamicLoadObject->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDynamicLoadObject, &DynamicLoadObject_Params, nullptr);
	uFnDynamicLoadObject->FunctionFlags |= 0x400;

	return DynamicLoadObject_Params.ReturnValue;
};

// Function Core.Object.GetEnum
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 E                              (CPF_Parm)
// int32_t                        I                              (CPF_Parm | CPF_CoerceParm)

struct FName UObject::GetEnum(class UObject* E, int32_t I)
{
	static UFunction* uFnGetEnum = nullptr;

	if (!uFnGetEnum)
	{
		uFnGetEnum = UFunction::FindFunction("Function Core.Object.GetEnum");
	}

	UObject_execGetEnum_Params GetEnum_Params;
	memset(&GetEnum_Params, 0, sizeof(GetEnum_Params));
	memcpy_s(&GetEnum_Params.E, sizeof(GetEnum_Params.E), &E, sizeof(E));
	memcpy_s(&GetEnum_Params.I, sizeof(GetEnum_Params.I), &I, sizeof(I));

	uFnGetEnum->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetEnum, &GetEnum_Params, nullptr);
	uFnGetEnum->FunctionFlags |= 0x400;

	return GetEnum_Params.ReturnValue;
};

// Function Core.Object.Disable
// [0x7600020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   ProbeFunc                      (CPF_Parm)

void UObject::Disable(struct FName ProbeFunc)
{
	static UFunction* uFnDisable = nullptr;

	if (!uFnDisable)
	{
		uFnDisable = UFunction::FindFunction("Function Core.Object.Disable");
	}

	UObject_execDisable_Params Disable_Params;
	memset(&Disable_Params, 0, sizeof(Disable_Params));
	memcpy_s(&Disable_Params.ProbeFunc, sizeof(Disable_Params.ProbeFunc), &ProbeFunc, sizeof(ProbeFunc));

	uFnDisable->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDisable, &Disable_Params, nullptr);
	uFnDisable->FunctionFlags |= 0x400;
};

// Function Core.Object.Enable
// [0x7500020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   ProbeFunc                      (CPF_Parm)

void UObject::Enable(struct FName ProbeFunc)
{
	static UFunction* uFnEnable = nullptr;

	if (!uFnEnable)
	{
		uFnEnable = UFunction::FindFunction("Function Core.Object.Enable");
	}

	UObject_execEnable_Params Enable_Params;
	memset(&Enable_Params, 0, sizeof(Enable_Params));
	memcpy_s(&Enable_Params.ProbeFunc, sizeof(Enable_Params.ProbeFunc), &ProbeFunc, sizeof(ProbeFunc));

	uFnEnable->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEnable, &Enable_Params, nullptr);
	uFnEnable->FunctionFlags |= 0x400;
};

// Function Core.Object.ContinuedState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UObject::eventContinuedState()
{
	static UFunction* uFnContinuedState = nullptr;

	if (!uFnContinuedState)
	{
		uFnContinuedState = UFunction::FindFunction("Function Core.Object.ContinuedState");
	}

	UObject_eventContinuedState_Params ContinuedState_Params;
	memset(&ContinuedState_Params, 0, sizeof(ContinuedState_Params));

	this->ProcessEvent(uFnContinuedState, &ContinuedState_Params, nullptr);
};

// Function Core.Object.PausedState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UObject::eventPausedState()
{
	static UFunction* uFnPausedState = nullptr;

	if (!uFnPausedState)
	{
		uFnPausedState = UFunction::FindFunction("Function Core.Object.PausedState");
	}

	UObject_eventPausedState_Params PausedState_Params;
	memset(&PausedState_Params, 0, sizeof(PausedState_Params));

	this->ProcessEvent(uFnPausedState, &PausedState_Params, nullptr);
};

// Function Core.Object.PoppedState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UObject::eventPoppedState()
{
	static UFunction* uFnPoppedState = nullptr;

	if (!uFnPoppedState)
	{
		uFnPoppedState = UFunction::FindFunction("Function Core.Object.PoppedState");
	}

	UObject_eventPoppedState_Params PoppedState_Params;
	memset(&PoppedState_Params, 0, sizeof(PoppedState_Params));

	this->ProcessEvent(uFnPoppedState, &PoppedState_Params, nullptr);
};

// Function Core.Object.PushedState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UObject::eventPushedState()
{
	static UFunction* uFnPushedState = nullptr;

	if (!uFnPushedState)
	{
		uFnPushedState = UFunction::FindFunction("Function Core.Object.PushedState");
	}

	UObject_eventPushedState_Params PushedState_Params;
	memset(&PushedState_Params, 0, sizeof(PushedState_Params));

	this->ProcessEvent(uFnPushedState, &PushedState_Params, nullptr);
};

// Function Core.Object.EndState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   NextStateName                  (CPF_Parm)

void UObject::eventEndState(struct FName NextStateName)
{
	static UFunction* uFnEndState = nullptr;

	if (!uFnEndState)
	{
		uFnEndState = UFunction::FindFunction("Function Core.Object.EndState");
	}

	UObject_eventEndState_Params EndState_Params;
	memset(&EndState_Params, 0, sizeof(EndState_Params));
	memcpy_s(&EndState_Params.NextStateName, sizeof(EndState_Params.NextStateName), &NextStateName, sizeof(NextStateName));

	this->ProcessEvent(uFnEndState, &EndState_Params, nullptr);
};

// Function Core.Object.BeginState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   PreviousStateName              (CPF_Parm)

void UObject::eventBeginState(struct FName PreviousStateName)
{
	static UFunction* uFnBeginState = nullptr;

	if (!uFnBeginState)
	{
		uFnBeginState = UFunction::FindFunction("Function Core.Object.BeginState");
	}

	UObject_eventBeginState_Params BeginState_Params;
	memset(&BeginState_Params, 0, sizeof(BeginState_Params));
	memcpy_s(&BeginState_Params.PreviousStateName, sizeof(BeginState_Params.PreviousStateName), &PreviousStateName, sizeof(PreviousStateName));

	this->ProcessEvent(uFnBeginState, &BeginState_Params, nullptr);
};

// Function Core.Object.DumpStateStack
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UObject::DumpStateStack()
{
	static UFunction* uFnDumpStateStack = nullptr;

	if (!uFnDumpStateStack)
	{
		uFnDumpStateStack = UFunction::FindFunction("Function Core.Object.DumpStateStack");
	}

	UObject_execDumpStateStack_Params DumpStateStack_Params;
	memset(&DumpStateStack_Params, 0, sizeof(DumpStateStack_Params));

	uFnDumpStateStack->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDumpStateStack, &DumpStateStack_Params, nullptr);
	uFnDumpStateStack->FunctionFlags |= 0x400;
};

// Function Core.Object.PopState
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bPopAll                        (CPF_OptionalParm | CPF_Parm)

void UObject::PopState(bool bPopAll)
{
	static UFunction* uFnPopState = nullptr;

	if (!uFnPopState)
	{
		uFnPopState = UFunction::FindFunction("Function Core.Object.PopState");
	}

	UObject_execPopState_Params PopState_Params;
	memset(&PopState_Params, 0, sizeof(PopState_Params));
	PopState_Params.bPopAll = bPopAll;

	uFnPopState->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPopState, &PopState_Params, nullptr);
	uFnPopState->FunctionFlags |= 0x400;
};

// Function Core.Object.PushState
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   NewState                       (CPF_Parm)
// struct FName                   NewLabel                       (CPF_OptionalParm | CPF_Parm)

void UObject::PushState(struct FName NewState, struct FName NewLabel)
{
	static UFunction* uFnPushState = nullptr;

	if (!uFnPushState)
	{
		uFnPushState = UFunction::FindFunction("Function Core.Object.PushState");
	}

	UObject_execPushState_Params PushState_Params;
	memset(&PushState_Params, 0, sizeof(PushState_Params));
	memcpy_s(&PushState_Params.NewState, sizeof(PushState_Params.NewState), &NewState, sizeof(NewState));
	memcpy_s(&PushState_Params.NewLabel, sizeof(PushState_Params.NewLabel), &NewLabel, sizeof(NewLabel));

	uFnPushState->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPushState, &PushState_Params, nullptr);
	uFnPushState->FunctionFlags |= 0x400;
};

// Function Core.Object.GetStateName
// [0x11C00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UObject::GetStateName()
{
	static UFunction* uFnGetStateName = nullptr;

	if (!uFnGetStateName)
	{
		uFnGetStateName = UFunction::FindFunction("Function Core.Object.GetStateName");
	}

	UObject_execGetStateName_Params GetStateName_Params;
	memset(&GetStateName_Params, 0, sizeof(GetStateName_Params));

	uFnGetStateName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetStateName, &GetStateName_Params, nullptr);
	uFnGetStateName->FunctionFlags |= 0x400;

	return GetStateName_Params.ReturnValue;
};

// Function Core.Object.IsChildState
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   TestState                      (CPF_Parm)
// struct FName                   TestParentState                (CPF_Parm)

bool UObject::IsChildState(struct FName TestState, struct FName TestParentState)
{
	static UFunction* uFnIsChildState = nullptr;

	if (!uFnIsChildState)
	{
		uFnIsChildState = UFunction::FindFunction("Function Core.Object.IsChildState");
	}

	UObject_execIsChildState_Params IsChildState_Params;
	memset(&IsChildState_Params, 0, sizeof(IsChildState_Params));
	memcpy_s(&IsChildState_Params.TestState, sizeof(IsChildState_Params.TestState), &TestState, sizeof(TestState));
	memcpy_s(&IsChildState_Params.TestParentState, sizeof(IsChildState_Params.TestParentState), &TestParentState, sizeof(TestParentState));

	uFnIsChildState->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsChildState, &IsChildState_Params, nullptr);
	uFnIsChildState->FunctionFlags |= 0x400;

	return IsChildState_Params.ReturnValue;
};

// Function Core.Object.IsInState
// [0x11900024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   TestState                      (CPF_Parm)
// bool                           bTestStateStack                (CPF_OptionalParm | CPF_Parm)

bool UObject::IsInState(struct FName TestState, bool bTestStateStack)
{
	static UFunction* uFnIsInState = nullptr;

	if (!uFnIsInState)
	{
		uFnIsInState = UFunction::FindFunction("Function Core.Object.IsInState");
	}

	UObject_execIsInState_Params IsInState_Params;
	memset(&IsInState_Params, 0, sizeof(IsInState_Params));
	memcpy_s(&IsInState_Params.TestState, sizeof(IsInState_Params.TestState), &TestState, sizeof(TestState));
	IsInState_Params.bTestStateStack = bTestStateStack;

	uFnIsInState->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsInState, &IsInState_Params, nullptr);
	uFnIsInState->FunctionFlags |= 0x400;

	return IsInState_Params.ReturnValue;
};

// Function Core.Object.GotoState
// [0x7100024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FName                   NewState                       (CPF_OptionalParm | CPF_Parm)
// struct FName                   Label                          (CPF_OptionalParm | CPF_Parm)
// bool                           bForceEvents                   (CPF_OptionalParm | CPF_Parm)
// bool                           bKeepStack                     (CPF_OptionalParm | CPF_Parm)

void UObject::GotoState(struct FName NewState, struct FName Label, bool bForceEvents, bool bKeepStack)
{
	static UFunction* uFnGotoState = nullptr;

	if (!uFnGotoState)
	{
		uFnGotoState = UFunction::FindFunction("Function Core.Object.GotoState");
	}

	UObject_execGotoState_Params GotoState_Params;
	memset(&GotoState_Params, 0, sizeof(GotoState_Params));
	memcpy_s(&GotoState_Params.NewState, sizeof(GotoState_Params.NewState), &NewState, sizeof(NewState));
	memcpy_s(&GotoState_Params.Label, sizeof(GotoState_Params.Label), &Label, sizeof(Label));
	GotoState_Params.bForceEvents = bForceEvents;
	GotoState_Params.bKeepStack = bKeepStack;

	uFnGotoState->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGotoState, &GotoState_Params, nullptr);
	uFnGotoState->FunctionFlags |= 0x400;
};

// Function Core.Object.IsUTracing
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UObject::IsUTracing()
{
	static UFunction* uFnIsUTracing = nullptr;

	if (!uFnIsUTracing)
	{
		uFnIsUTracing = UFunction::FindFunction("Function Core.Object.IsUTracing");
	}

	UObject_execIsUTracing_Params IsUTracing_Params;
	memset(&IsUTracing_Params, 0, sizeof(IsUTracing_Params));

	uFnIsUTracing->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnIsUTracing, &IsUTracing_Params, nullptr);
	uFnIsUTracing->FunctionFlags |= 0x400;

	return IsUTracing_Params.ReturnValue;
};

// Function Core.Object.SetUTracing
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           bShouldUTrace                  (CPF_Parm)

void UObject::SetUTracing(bool bShouldUTrace)
{
	static UFunction* uFnSetUTracing = nullptr;

	if (!uFnSetUTracing)
	{
		uFnSetUTracing = UFunction::FindFunction("Function Core.Object.SetUTracing");
	}

	UObject_execSetUTracing_Params SetUTracing_Params;
	memset(&SetUTracing_Params, 0, sizeof(SetUTracing_Params));
	SetUTracing_Params.bShouldUTrace = bShouldUTrace;

	uFnSetUTracing->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSetUTracing, &SetUTracing_Params, nullptr);
	uFnSetUTracing->FunctionFlags |= 0x400;
};

// Function Core.Object.GetFuncName
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UObject::GetFuncName()
{
	static UFunction* uFnGetFuncName = nullptr;

	if (!uFnGetFuncName)
	{
		uFnGetFuncName = UFunction::FindFunction("Function Core.Object.GetFuncName");
	}

	UObject_execGetFuncName_Params GetFuncName_Params;
	memset(&GetFuncName_Params, 0, sizeof(GetFuncName_Params));

	uFnGetFuncName->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetFuncName, &GetFuncName_Params, nullptr);
	uFnGetFuncName->FunctionFlags |= 0x400;

	return GetFuncName_Params.ReturnValue;
};

// Function Core.Object.DebugBreak
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        UserFlags                      (CPF_OptionalParm | CPF_Parm)
// EDebugBreakType                DebuggerType                   (CPF_OptionalParm | CPF_Parm)

void UObject::DebugBreak(int32_t UserFlags, EDebugBreakType DebuggerType)
{
	static UFunction* uFnDebugBreak = nullptr;

	if (!uFnDebugBreak)
	{
		uFnDebugBreak = UFunction::FindFunction("Function Core.Object.DebugBreak");
	}

	UObject_execDebugBreak_Params DebugBreak_Params;
	memset(&DebugBreak_Params, 0, sizeof(DebugBreak_Params));
	memcpy_s(&DebugBreak_Params.UserFlags, sizeof(DebugBreak_Params.UserFlags), &UserFlags, sizeof(UserFlags));
	memcpy_s(&DebugBreak_Params.DebuggerType, sizeof(DebugBreak_Params.DebuggerType), &DebuggerType, sizeof(DebuggerType));

	uFnDebugBreak->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDebugBreak, &DebugBreak_Params, nullptr);
	uFnDebugBreak->FunctionFlags |= 0x400;
};

// Function Core.Object.GetScriptTrace
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UObject::GetScriptTrace()
{
	static UFunction* uFnGetScriptTrace = nullptr;

	if (!uFnGetScriptTrace)
	{
		uFnGetScriptTrace = UFunction::FindFunction("Function Core.Object.GetScriptTrace");
	}

	UObject_execGetScriptTrace_Params GetScriptTrace_Params;
	memset(&GetScriptTrace_Params, 0, sizeof(GetScriptTrace_Params));

	uFnGetScriptTrace->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetScriptTrace, &GetScriptTrace_Params, nullptr);
	uFnGetScriptTrace->FunctionFlags |= 0x400;

	return GetScriptTrace_Params.ReturnValue;
};

// Function Core.Object.ScriptTrace
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UObject::ScriptTrace()
{
	static UFunction* uFnScriptTrace = nullptr;

	if (!uFnScriptTrace)
	{
		uFnScriptTrace = UFunction::FindFunction("Function Core.Object.ScriptTrace");
	}

	UObject_execScriptTrace_Params ScriptTrace_Params;
	memset(&ScriptTrace_Params, 0, sizeof(ScriptTrace_Params));

	uFnScriptTrace->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnScriptTrace, &ScriptTrace_Params, nullptr);
	uFnScriptTrace->FunctionFlags |= 0x400;
};

// Function Core.Object.ParseLocalizedPropertyPath
// [0x00022003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  PathName                       (CPF_Parm | CPF_NeedCtorLink)

class FString UObject::ParseLocalizedPropertyPath(class FString PathName)
{
	static UFunction* uFnParseLocalizedPropertyPath = nullptr;

	if (!uFnParseLocalizedPropertyPath)
	{
		uFnParseLocalizedPropertyPath = UFunction::FindFunction("Function Core.Object.ParseLocalizedPropertyPath");
	}

	UObject_execParseLocalizedPropertyPath_Params ParseLocalizedPropertyPath_Params;
	memset(&ParseLocalizedPropertyPath_Params, 0, sizeof(ParseLocalizedPropertyPath_Params));
	memcpy_s(&ParseLocalizedPropertyPath_Params.PathName, sizeof(ParseLocalizedPropertyPath_Params.PathName), &PathName, sizeof(PathName));

	UObject::StaticClass()->ProcessEvent(uFnParseLocalizedPropertyPath, &ParseLocalizedPropertyPath_Params, nullptr);

	return ParseLocalizedPropertyPath_Params.ReturnValue;
};

// Function Core.Object.Localize
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  SectionName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  KeyName                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  PackageName                    (CPF_Parm | CPF_NeedCtorLink)

class FString UObject::Localize(class FString SectionName, class FString KeyName, class FString PackageName)
{
	static UFunction* uFnLocalize = nullptr;

	if (!uFnLocalize)
	{
		uFnLocalize = UFunction::FindFunction("Function Core.Object.Localize");
	}

	UObject_execLocalize_Params Localize_Params;
	memset(&Localize_Params, 0, sizeof(Localize_Params));
	memcpy_s(&Localize_Params.SectionName, sizeof(Localize_Params.SectionName), &SectionName, sizeof(SectionName));
	memcpy_s(&Localize_Params.KeyName, sizeof(Localize_Params.KeyName), &KeyName, sizeof(KeyName));
	memcpy_s(&Localize_Params.PackageName, sizeof(Localize_Params.PackageName), &PackageName, sizeof(PackageName));

	uFnLocalize->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLocalize, &Localize_Params, nullptr);
	uFnLocalize->FunctionFlags |= 0x400;

	return Localize_Params.ReturnValue;
};

// Function Core.Object.WarnInternal
// [0xE800042401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Private | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UObject::WarnInternal(class FString S)
{
	static UFunction* uFnWarnInternal = nullptr;

	if (!uFnWarnInternal)
	{
		uFnWarnInternal = UFunction::FindFunction("Function Core.Object.WarnInternal");
	}

	UObject_execWarnInternal_Params WarnInternal_Params;
	memset(&WarnInternal_Params, 0, sizeof(WarnInternal_Params));
	memcpy_s(&WarnInternal_Params.S, sizeof(WarnInternal_Params.S), &S, sizeof(S));

	uFnWarnInternal->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnWarnInternal, &WarnInternal_Params, nullptr);
	uFnWarnInternal->FunctionFlags |= 0x400;
};

// Function Core.Object.LogInternal
// [0xE700046401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Private | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FName                   Tag                            (CPF_OptionalParm | CPF_Parm)

void UObject::LogInternal(class FString S, struct FName Tag)
{
	static UFunction* uFnLogInternal = nullptr;

	if (!uFnLogInternal)
	{
		uFnLogInternal = UFunction::FindFunction("Function Core.Object.LogInternal");
	}

	UObject_execLogInternal_Params LogInternal_Params;
	memset(&LogInternal_Params, 0, sizeof(LogInternal_Params));
	memcpy_s(&LogInternal_Params.S, sizeof(LogInternal_Params.S), &S, sizeof(S));
	memcpy_s(&LogInternal_Params.Tag, sizeof(LogInternal_Params.Tag), &Tag, sizeof(Tag));

	uFnLogInternal->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLogInternal, &LogInternal_Params, nullptr);
	uFnLogInternal->FunctionFlags |= 0x400;
};

// Function Core.Object.Subtract_LinearColorLinearColor
// [0x00023003] (FUNC_Final | FUNC_Defined | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            A                              (CPF_Parm)
// struct FLinearColor            B                              (CPF_Parm)

struct FLinearColor UObject::Subtract_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B)
{
	static UFunction* uFnSubtract_LinearColorLinearColor = nullptr;

	if (!uFnSubtract_LinearColorLinearColor)
	{
		uFnSubtract_LinearColorLinearColor = UFunction::FindFunction("Function Core.Object.Subtract_LinearColorLinearColor");
	}

	UObject_execSubtract_LinearColorLinearColor_Params Subtract_LinearColorLinearColor_Params;
	memset(&Subtract_LinearColorLinearColor_Params, 0, sizeof(Subtract_LinearColorLinearColor_Params));
	memcpy_s(&Subtract_LinearColorLinearColor_Params.A, sizeof(Subtract_LinearColorLinearColor_Params.A), &A, sizeof(A));
	memcpy_s(&Subtract_LinearColorLinearColor_Params.B, sizeof(Subtract_LinearColorLinearColor_Params.B), &B, sizeof(B));

	UObject::StaticClass()->ProcessEvent(uFnSubtract_LinearColorLinearColor, &Subtract_LinearColorLinearColor_Params, nullptr);

	return Subtract_LinearColorLinearColor_Params.ReturnValue;
};

// Function Core.Object.Multiply_LinearColorFloat
// [0x00023003] (FUNC_Final | FUNC_Defined | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            LC                             (CPF_Parm)
// float                          Mult                           (CPF_Parm)

struct FLinearColor UObject::Multiply_LinearColorFloat(struct FLinearColor LC, float Mult)
{
	static UFunction* uFnMultiply_LinearColorFloat = nullptr;

	if (!uFnMultiply_LinearColorFloat)
	{
		uFnMultiply_LinearColorFloat = UFunction::FindFunction("Function Core.Object.Multiply_LinearColorFloat");
	}

	UObject_execMultiply_LinearColorFloat_Params Multiply_LinearColorFloat_Params;
	memset(&Multiply_LinearColorFloat_Params, 0, sizeof(Multiply_LinearColorFloat_Params));
	memcpy_s(&Multiply_LinearColorFloat_Params.LC, sizeof(Multiply_LinearColorFloat_Params.LC), &LC, sizeof(LC));
	memcpy_s(&Multiply_LinearColorFloat_Params.Mult, sizeof(Multiply_LinearColorFloat_Params.Mult), &Mult, sizeof(Mult));

	UObject::StaticClass()->ProcessEvent(uFnMultiply_LinearColorFloat, &Multiply_LinearColorFloat_Params, nullptr);

	return Multiply_LinearColorFloat_Params.ReturnValue;
};

// Function Core.Object.ColorToLinearColor
// [0x00022003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  OldColor                       (CPF_Parm)

struct FLinearColor UObject::ColorToLinearColor(struct FColor OldColor)
{
	static UFunction* uFnColorToLinearColor = nullptr;

	if (!uFnColorToLinearColor)
	{
		uFnColorToLinearColor = UFunction::FindFunction("Function Core.Object.ColorToLinearColor");
	}

	UObject_execColorToLinearColor_Params ColorToLinearColor_Params;
	memset(&ColorToLinearColor_Params, 0, sizeof(ColorToLinearColor_Params));
	memcpy_s(&ColorToLinearColor_Params.OldColor, sizeof(ColorToLinearColor_Params.OldColor), &OldColor, sizeof(OldColor));

	UObject::StaticClass()->ProcessEvent(uFnColorToLinearColor, &ColorToLinearColor_Params, nullptr);

	return ColorToLinearColor_Params.ReturnValue;
};

// Function Core.Object.MakeLinearColor
// [0x00822003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          R                              (CPF_Parm)
// float                          G                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm)

struct FLinearColor UObject::MakeLinearColor(float R, float G, float B, float A)
{
	static UFunction* uFnMakeLinearColor = nullptr;

	if (!uFnMakeLinearColor)
	{
		uFnMakeLinearColor = UFunction::FindFunction("Function Core.Object.MakeLinearColor");
	}

	UObject_execMakeLinearColor_Params MakeLinearColor_Params;
	memset(&MakeLinearColor_Params, 0, sizeof(MakeLinearColor_Params));
	memcpy_s(&MakeLinearColor_Params.R, sizeof(MakeLinearColor_Params.R), &R, sizeof(R));
	memcpy_s(&MakeLinearColor_Params.G, sizeof(MakeLinearColor_Params.G), &G, sizeof(G));
	memcpy_s(&MakeLinearColor_Params.B, sizeof(MakeLinearColor_Params.B), &B, sizeof(B));
	memcpy_s(&MakeLinearColor_Params.A, sizeof(MakeLinearColor_Params.A), &A, sizeof(A));

	UObject::StaticClass()->ProcessEvent(uFnMakeLinearColor, &MakeLinearColor_Params, nullptr);

	return MakeLinearColor_Params.ReturnValue;
};

// Function Core.Object.LerpColor
// [0x00822003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)

struct FColor UObject::LerpColor(struct FColor A, struct FColor B, float Alpha)
{
	static UFunction* uFnLerpColor = nullptr;

	if (!uFnLerpColor)
	{
		uFnLerpColor = UFunction::FindFunction("Function Core.Object.LerpColor");
	}

	UObject_execLerpColor_Params LerpColor_Params;
	memset(&LerpColor_Params, 0, sizeof(LerpColor_Params));
	memcpy_s(&LerpColor_Params.A, sizeof(LerpColor_Params.A), &A, sizeof(A));
	memcpy_s(&LerpColor_Params.B, sizeof(LerpColor_Params.B), &B, sizeof(B));
	memcpy_s(&LerpColor_Params.Alpha, sizeof(LerpColor_Params.Alpha), &Alpha, sizeof(Alpha));

	UObject::StaticClass()->ProcessEvent(uFnLerpColor, &LerpColor_Params, nullptr);

	return LerpColor_Params.ReturnValue;
};

// Function Core.Object.MakeColor
// [0x00826003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        R                              (CPF_Parm)
// uint8_t                        G                              (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)
// uint8_t                        A                              (CPF_OptionalParm | CPF_Parm)

struct FColor UObject::MakeColor(uint8_t R, uint8_t G, uint8_t B, uint8_t A)
{
	static UFunction* uFnMakeColor = nullptr;

	if (!uFnMakeColor)
	{
		uFnMakeColor = UFunction::FindFunction("Function Core.Object.MakeColor");
	}

	UObject_execMakeColor_Params MakeColor_Params;
	memset(&MakeColor_Params, 0, sizeof(MakeColor_Params));
	memcpy_s(&MakeColor_Params.R, sizeof(MakeColor_Params.R), &R, sizeof(R));
	memcpy_s(&MakeColor_Params.G, sizeof(MakeColor_Params.G), &G, sizeof(G));
	memcpy_s(&MakeColor_Params.B, sizeof(MakeColor_Params.B), &B, sizeof(B));
	memcpy_s(&MakeColor_Params.A, sizeof(MakeColor_Params.A), &A, sizeof(A));

	UObject::StaticClass()->ProcessEvent(uFnMakeColor, &MakeColor_Params, nullptr);

	return MakeColor_Params.ReturnValue;
};

// Function Core.Object.Add_ColorColor
// [0x00023003] (FUNC_Final | FUNC_Defined | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)

struct FColor UObject::Add_ColorColor(struct FColor A, struct FColor B)
{
	static UFunction* uFnAdd_ColorColor = nullptr;

	if (!uFnAdd_ColorColor)
	{
		uFnAdd_ColorColor = UFunction::FindFunction("Function Core.Object.Add_ColorColor");
	}

	UObject_execAdd_ColorColor_Params Add_ColorColor_Params;
	memset(&Add_ColorColor_Params, 0, sizeof(Add_ColorColor_Params));
	memcpy_s(&Add_ColorColor_Params.A, sizeof(Add_ColorColor_Params.A), &A, sizeof(A));
	memcpy_s(&Add_ColorColor_Params.B, sizeof(Add_ColorColor_Params.B), &B, sizeof(B));

	UObject::StaticClass()->ProcessEvent(uFnAdd_ColorColor, &Add_ColorColor_Params, nullptr);

	return Add_ColorColor_Params.ReturnValue;
};

// Function Core.Object.Multiply_ColorFloat
// [0x00023003] (FUNC_Final | FUNC_Defined | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FColor UObject::Multiply_ColorFloat(struct FColor A, float B)
{
	static UFunction* uFnMultiply_ColorFloat = nullptr;

	if (!uFnMultiply_ColorFloat)
	{
		uFnMultiply_ColorFloat = UFunction::FindFunction("Function Core.Object.Multiply_ColorFloat");
	}

	UObject_execMultiply_ColorFloat_Params Multiply_ColorFloat_Params;
	memset(&Multiply_ColorFloat_Params, 0, sizeof(Multiply_ColorFloat_Params));
	memcpy_s(&Multiply_ColorFloat_Params.A, sizeof(Multiply_ColorFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Multiply_ColorFloat_Params.B, sizeof(Multiply_ColorFloat_Params.B), &B, sizeof(B));

	UObject::StaticClass()->ProcessEvent(uFnMultiply_ColorFloat, &Multiply_ColorFloat_Params, nullptr);

	return Multiply_ColorFloat_Params.ReturnValue;
};

// Function Core.Object.Multiply_FloatColor
// [0x00023003] (FUNC_Final | FUNC_Defined | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)

struct FColor UObject::Multiply_FloatColor(float A, struct FColor B)
{
	static UFunction* uFnMultiply_FloatColor = nullptr;

	if (!uFnMultiply_FloatColor)
	{
		uFnMultiply_FloatColor = UFunction::FindFunction("Function Core.Object.Multiply_FloatColor");
	}

	UObject_execMultiply_FloatColor_Params Multiply_FloatColor_Params;
	memset(&Multiply_FloatColor_Params, 0, sizeof(Multiply_FloatColor_Params));
	memcpy_s(&Multiply_FloatColor_Params.A, sizeof(Multiply_FloatColor_Params.A), &A, sizeof(A));
	memcpy_s(&Multiply_FloatColor_Params.B, sizeof(Multiply_FloatColor_Params.B), &B, sizeof(B));

	UObject::StaticClass()->ProcessEvent(uFnMultiply_FloatColor, &Multiply_FloatColor_Params, nullptr);

	return Multiply_FloatColor_Params.ReturnValue;
};

// Function Core.Object.Subtract_ColorColor
// [0x00023003] (FUNC_Final | FUNC_Defined | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)

struct FColor UObject::Subtract_ColorColor(struct FColor A, struct FColor B)
{
	static UFunction* uFnSubtract_ColorColor = nullptr;

	if (!uFnSubtract_ColorColor)
	{
		uFnSubtract_ColorColor = UFunction::FindFunction("Function Core.Object.Subtract_ColorColor");
	}

	UObject_execSubtract_ColorColor_Params Subtract_ColorColor_Params;
	memset(&Subtract_ColorColor_Params, 0, sizeof(Subtract_ColorColor_Params));
	memcpy_s(&Subtract_ColorColor_Params.A, sizeof(Subtract_ColorColor_Params.A), &A, sizeof(A));
	memcpy_s(&Subtract_ColorColor_Params.B, sizeof(Subtract_ColorColor_Params.B), &B, sizeof(B));

	UObject::StaticClass()->ProcessEvent(uFnSubtract_ColorColor, &Subtract_ColorColor_Params, nullptr);

	return Subtract_ColorColor_Params.ReturnValue;
};

// Function Core.Object.EvalInterpCurveVector2D
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InVal                          (CPF_Parm)
// struct FInterpCurveVector2D    Vector2DCurve                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FVector2D UObject::EvalInterpCurveVector2D(float InVal, struct FInterpCurveVector2D& Vector2DCurve)
{
	static UFunction* uFnEvalInterpCurveVector2D = nullptr;

	if (!uFnEvalInterpCurveVector2D)
	{
		uFnEvalInterpCurveVector2D = UFunction::FindFunction("Function Core.Object.EvalInterpCurveVector2D");
	}

	UObject_execEvalInterpCurveVector2D_Params EvalInterpCurveVector2D_Params;
	memset(&EvalInterpCurveVector2D_Params, 0, sizeof(EvalInterpCurveVector2D_Params));
	memcpy_s(&EvalInterpCurveVector2D_Params.InVal, sizeof(EvalInterpCurveVector2D_Params.InVal), &InVal, sizeof(InVal));
	memcpy_s(&EvalInterpCurveVector2D_Params.Vector2DCurve, sizeof(EvalInterpCurveVector2D_Params.Vector2DCurve), &Vector2DCurve, sizeof(Vector2DCurve));

	uFnEvalInterpCurveVector2D->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnEvalInterpCurveVector2D, &EvalInterpCurveVector2D_Params, nullptr);
	uFnEvalInterpCurveVector2D->FunctionFlags |= 0x400;

	memcpy_s(&Vector2DCurve, sizeof(Vector2DCurve), &EvalInterpCurveVector2D_Params.Vector2DCurve, sizeof(EvalInterpCurveVector2D_Params.Vector2DCurve));

	return EvalInterpCurveVector2D_Params.ReturnValue;
};

// Function Core.Object.EvalInterpCurveVector
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InVal                          (CPF_Parm)
// struct FInterpCurveVector      VectorCurve                    (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FVector UObject::EvalInterpCurveVector(float InVal, struct FInterpCurveVector& VectorCurve)
{
	static UFunction* uFnEvalInterpCurveVector = nullptr;

	if (!uFnEvalInterpCurveVector)
	{
		uFnEvalInterpCurveVector = UFunction::FindFunction("Function Core.Object.EvalInterpCurveVector");
	}

	UObject_execEvalInterpCurveVector_Params EvalInterpCurveVector_Params;
	memset(&EvalInterpCurveVector_Params, 0, sizeof(EvalInterpCurveVector_Params));
	memcpy_s(&EvalInterpCurveVector_Params.InVal, sizeof(EvalInterpCurveVector_Params.InVal), &InVal, sizeof(InVal));
	memcpy_s(&EvalInterpCurveVector_Params.VectorCurve, sizeof(EvalInterpCurveVector_Params.VectorCurve), &VectorCurve, sizeof(VectorCurve));

	uFnEvalInterpCurveVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnEvalInterpCurveVector, &EvalInterpCurveVector_Params, nullptr);
	uFnEvalInterpCurveVector->FunctionFlags |= 0x400;

	memcpy_s(&VectorCurve, sizeof(VectorCurve), &EvalInterpCurveVector_Params.VectorCurve, sizeof(EvalInterpCurveVector_Params.VectorCurve));

	return EvalInterpCurveVector_Params.ReturnValue;
};

// Function Core.Object.EvalInterpCurveFloat
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InVal                          (CPF_Parm)
// struct FInterpCurveFloat       FloatCurve                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

float UObject::EvalInterpCurveFloat(float InVal, struct FInterpCurveFloat& FloatCurve)
{
	static UFunction* uFnEvalInterpCurveFloat = nullptr;

	if (!uFnEvalInterpCurveFloat)
	{
		uFnEvalInterpCurveFloat = UFunction::FindFunction("Function Core.Object.EvalInterpCurveFloat");
	}

	UObject_execEvalInterpCurveFloat_Params EvalInterpCurveFloat_Params;
	memset(&EvalInterpCurveFloat_Params, 0, sizeof(EvalInterpCurveFloat_Params));
	memcpy_s(&EvalInterpCurveFloat_Params.InVal, sizeof(EvalInterpCurveFloat_Params.InVal), &InVal, sizeof(InVal));
	memcpy_s(&EvalInterpCurveFloat_Params.FloatCurve, sizeof(EvalInterpCurveFloat_Params.FloatCurve), &FloatCurve, sizeof(FloatCurve));

	uFnEvalInterpCurveFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnEvalInterpCurveFloat, &EvalInterpCurveFloat_Params, nullptr);
	uFnEvalInterpCurveFloat->FunctionFlags |= 0x400;

	memcpy_s(&FloatCurve, sizeof(FloatCurve), &EvalInterpCurveFloat_Params.FloatCurve, sizeof(EvalInterpCurveFloat_Params.FloatCurve));

	return EvalInterpCurveFloat_Params.ReturnValue;
};

// Function Core.Object.vect2d
// [0x00822003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InX                            (CPF_Parm)
// float                          InY                            (CPF_Parm)

struct FVector2D UObject::vect2d(float InX, float InY)
{
	static UFunction* uFnvect2d = nullptr;

	if (!uFnvect2d)
	{
		uFnvect2d = UFunction::FindFunction("Function Core.Object.vect2d");
	}

	UObject_execvect2d_Params vect2d_Params;
	memset(&vect2d_Params, 0, sizeof(vect2d_Params));
	memcpy_s(&vect2d_Params.InX, sizeof(vect2d_Params.InX), &InX, sizeof(InX));
	memcpy_s(&vect2d_Params.InY, sizeof(vect2d_Params.InY), &InY, sizeof(InY));

	UObject::StaticClass()->ProcessEvent(uFnvect2d, &vect2d_Params, nullptr);

	return vect2d_Params.ReturnValue;
};

// Function Core.Object.GetMappedRangeValue
// [0x00022501] (FUNC_Final | FUNC_Simulated | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               InputRange                     (CPF_Parm)
// struct FVector2D               OutputRange                    (CPF_Parm)
// float                          Value                          (CPF_Parm)

float UObject::GetMappedRangeValue(struct FVector2D InputRange, struct FVector2D OutputRange, float Value)
{
	static UFunction* uFnGetMappedRangeValue = nullptr;

	if (!uFnGetMappedRangeValue)
	{
		uFnGetMappedRangeValue = UFunction::FindFunction("Function Core.Object.GetMappedRangeValue");
	}

	UObject_execGetMappedRangeValue_Params GetMappedRangeValue_Params;
	memset(&GetMappedRangeValue_Params, 0, sizeof(GetMappedRangeValue_Params));
	memcpy_s(&GetMappedRangeValue_Params.InputRange, sizeof(GetMappedRangeValue_Params.InputRange), &InputRange, sizeof(InputRange));
	memcpy_s(&GetMappedRangeValue_Params.OutputRange, sizeof(GetMappedRangeValue_Params.OutputRange), &OutputRange, sizeof(OutputRange));
	memcpy_s(&GetMappedRangeValue_Params.Value, sizeof(GetMappedRangeValue_Params.Value), &Value, sizeof(Value));

	uFnGetMappedRangeValue->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetMappedRangeValue, &GetMappedRangeValue_Params, nullptr);
	uFnGetMappedRangeValue->FunctionFlags |= 0x400;

	return GetMappedRangeValue_Params.ReturnValue;
};

// Function Core.Object.GetRangePctByValue
// [0x00022103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               Range                          (CPF_Parm)
// float                          Value                          (CPF_Parm)

float UObject::GetRangePctByValue(struct FVector2D Range, float Value)
{
	static UFunction* uFnGetRangePctByValue = nullptr;

	if (!uFnGetRangePctByValue)
	{
		uFnGetRangePctByValue = UFunction::FindFunction("Function Core.Object.GetRangePctByValue");
	}

	UObject_execGetRangePctByValue_Params GetRangePctByValue_Params;
	memset(&GetRangePctByValue_Params, 0, sizeof(GetRangePctByValue_Params));
	memcpy_s(&GetRangePctByValue_Params.Range, sizeof(GetRangePctByValue_Params.Range), &Range, sizeof(Range));
	memcpy_s(&GetRangePctByValue_Params.Value, sizeof(GetRangePctByValue_Params.Value), &Value, sizeof(Value));

	UObject::StaticClass()->ProcessEvent(uFnGetRangePctByValue, &GetRangePctByValue_Params, nullptr);

	return GetRangePctByValue_Params.ReturnValue;
};

// Function Core.Object.GetRangeValueByPct
// [0x00022103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               Range                          (CPF_Parm)
// float                          Pct                            (CPF_Parm)

float UObject::GetRangeValueByPct(struct FVector2D Range, float Pct)
{
	static UFunction* uFnGetRangeValueByPct = nullptr;

	if (!uFnGetRangeValueByPct)
	{
		uFnGetRangeValueByPct = UFunction::FindFunction("Function Core.Object.GetRangeValueByPct");
	}

	UObject_execGetRangeValueByPct_Params GetRangeValueByPct_Params;
	memset(&GetRangeValueByPct_Params, 0, sizeof(GetRangeValueByPct_Params));
	memcpy_s(&GetRangeValueByPct_Params.Range, sizeof(GetRangeValueByPct_Params.Range), &Range, sizeof(Range));
	memcpy_s(&GetRangeValueByPct_Params.Pct, sizeof(GetRangeValueByPct_Params.Pct), &Pct, sizeof(Pct));

	UObject::StaticClass()->ProcessEvent(uFnGetRangeValueByPct, &GetRangeValueByPct_Params, nullptr);

	return GetRangeValueByPct_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_Vector2DVector2D
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               B                              (CPF_Parm)
// struct FVector2D               A                              (CPF_Parm | CPF_OutParm)

struct FVector2D UObject::SubtractEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D& A)
{
	static UFunction* uFnSubtractEqual_Vector2DVector2D = nullptr;

	if (!uFnSubtractEqual_Vector2DVector2D)
	{
		uFnSubtractEqual_Vector2DVector2D = UFunction::FindFunction("Function Core.Object.SubtractEqual_Vector2DVector2D");
	}

	UObject_execSubtractEqual_Vector2DVector2D_Params SubtractEqual_Vector2DVector2D_Params;
	memset(&SubtractEqual_Vector2DVector2D_Params, 0, sizeof(SubtractEqual_Vector2DVector2D_Params));
	memcpy_s(&SubtractEqual_Vector2DVector2D_Params.B, sizeof(SubtractEqual_Vector2DVector2D_Params.B), &B, sizeof(B));
	memcpy_s(&SubtractEqual_Vector2DVector2D_Params.A, sizeof(SubtractEqual_Vector2DVector2D_Params.A), &A, sizeof(A));

	uFnSubtractEqual_Vector2DVector2D->iNative = 0;
	uFnSubtractEqual_Vector2DVector2D->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_Vector2DVector2D, &SubtractEqual_Vector2DVector2D_Params, nullptr);
	uFnSubtractEqual_Vector2DVector2D->FunctionFlags |= 0x400;
	uFnSubtractEqual_Vector2DVector2D->iNative = 34;

	memcpy_s(&A, sizeof(A), &SubtractEqual_Vector2DVector2D_Params.A, sizeof(SubtractEqual_Vector2DVector2D_Params.A));

	return SubtractEqual_Vector2DVector2D_Params.ReturnValue;
};

// Function Core.Object.AddEqual_Vector2DVector2D
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               B                              (CPF_Parm)
// struct FVector2D               A                              (CPF_Parm | CPF_OutParm)

struct FVector2D UObject::AddEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D& A)
{
	static UFunction* uFnAddEqual_Vector2DVector2D = nullptr;

	if (!uFnAddEqual_Vector2DVector2D)
	{
		uFnAddEqual_Vector2DVector2D = UFunction::FindFunction("Function Core.Object.AddEqual_Vector2DVector2D");
	}

	UObject_execAddEqual_Vector2DVector2D_Params AddEqual_Vector2DVector2D_Params;
	memset(&AddEqual_Vector2DVector2D_Params, 0, sizeof(AddEqual_Vector2DVector2D_Params));
	memcpy_s(&AddEqual_Vector2DVector2D_Params.B, sizeof(AddEqual_Vector2DVector2D_Params.B), &B, sizeof(B));
	memcpy_s(&AddEqual_Vector2DVector2D_Params.A, sizeof(AddEqual_Vector2DVector2D_Params.A), &A, sizeof(A));

	uFnAddEqual_Vector2DVector2D->iNative = 0;
	uFnAddEqual_Vector2DVector2D->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAddEqual_Vector2DVector2D, &AddEqual_Vector2DVector2D_Params, nullptr);
	uFnAddEqual_Vector2DVector2D->FunctionFlags |= 0x400;
	uFnAddEqual_Vector2DVector2D->iNative = 34;

	memcpy_s(&A, sizeof(A), &AddEqual_Vector2DVector2D_Params.A, sizeof(AddEqual_Vector2DVector2D_Params.A));

	return AddEqual_Vector2DVector2D_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_Vector2DFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FVector2D               A                              (CPF_Parm | CPF_OutParm)

struct FVector2D UObject::DivideEqual_Vector2DFloat(float B, struct FVector2D& A)
{
	static UFunction* uFnDivideEqual_Vector2DFloat = nullptr;

	if (!uFnDivideEqual_Vector2DFloat)
	{
		uFnDivideEqual_Vector2DFloat = UFunction::FindFunction("Function Core.Object.DivideEqual_Vector2DFloat");
	}

	UObject_execDivideEqual_Vector2DFloat_Params DivideEqual_Vector2DFloat_Params;
	memset(&DivideEqual_Vector2DFloat_Params, 0, sizeof(DivideEqual_Vector2DFloat_Params));
	memcpy_s(&DivideEqual_Vector2DFloat_Params.B, sizeof(DivideEqual_Vector2DFloat_Params.B), &B, sizeof(B));
	memcpy_s(&DivideEqual_Vector2DFloat_Params.A, sizeof(DivideEqual_Vector2DFloat_Params.A), &A, sizeof(A));

	uFnDivideEqual_Vector2DFloat->iNative = 0;
	uFnDivideEqual_Vector2DFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_Vector2DFloat, &DivideEqual_Vector2DFloat_Params, nullptr);
	uFnDivideEqual_Vector2DFloat->FunctionFlags |= 0x400;
	uFnDivideEqual_Vector2DFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &DivideEqual_Vector2DFloat_Params.A, sizeof(DivideEqual_Vector2DFloat_Params.A));

	return DivideEqual_Vector2DFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_Vector2DFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FVector2D               A                              (CPF_Parm | CPF_OutParm)

struct FVector2D UObject::MultiplyEqual_Vector2DFloat(float B, struct FVector2D& A)
{
	static UFunction* uFnMultiplyEqual_Vector2DFloat = nullptr;

	if (!uFnMultiplyEqual_Vector2DFloat)
	{
		uFnMultiplyEqual_Vector2DFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_Vector2DFloat");
	}

	UObject_execMultiplyEqual_Vector2DFloat_Params MultiplyEqual_Vector2DFloat_Params;
	memset(&MultiplyEqual_Vector2DFloat_Params, 0, sizeof(MultiplyEqual_Vector2DFloat_Params));
	memcpy_s(&MultiplyEqual_Vector2DFloat_Params.B, sizeof(MultiplyEqual_Vector2DFloat_Params.B), &B, sizeof(B));
	memcpy_s(&MultiplyEqual_Vector2DFloat_Params.A, sizeof(MultiplyEqual_Vector2DFloat_Params.A), &A, sizeof(A));

	uFnMultiplyEqual_Vector2DFloat->iNative = 0;
	uFnMultiplyEqual_Vector2DFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_Vector2DFloat, &MultiplyEqual_Vector2DFloat_Params, nullptr);
	uFnMultiplyEqual_Vector2DFloat->FunctionFlags |= 0x400;
	uFnMultiplyEqual_Vector2DFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &MultiplyEqual_Vector2DFloat_Params.A, sizeof(MultiplyEqual_Vector2DFloat_Params.A));

	return MultiplyEqual_Vector2DFloat_Params.ReturnValue;
};

// Function Core.Object.Divide_Vector2DFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FVector2D UObject::Divide_Vector2DFloat(struct FVector2D A, float B)
{
	static UFunction* uFnDivide_Vector2DFloat = nullptr;

	if (!uFnDivide_Vector2DFloat)
	{
		uFnDivide_Vector2DFloat = UFunction::FindFunction("Function Core.Object.Divide_Vector2DFloat");
	}

	UObject_execDivide_Vector2DFloat_Params Divide_Vector2DFloat_Params;
	memset(&Divide_Vector2DFloat_Params, 0, sizeof(Divide_Vector2DFloat_Params));
	memcpy_s(&Divide_Vector2DFloat_Params.A, sizeof(Divide_Vector2DFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Divide_Vector2DFloat_Params.B, sizeof(Divide_Vector2DFloat_Params.B), &B, sizeof(B));

	uFnDivide_Vector2DFloat->iNative = 0;
	uFnDivide_Vector2DFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDivide_Vector2DFloat, &Divide_Vector2DFloat_Params, nullptr);
	uFnDivide_Vector2DFloat->FunctionFlags |= 0x400;
	uFnDivide_Vector2DFloat->iNative = 16;

	return Divide_Vector2DFloat_Params.ReturnValue;
};

// Function Core.Object.Multiply_Vector2DFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FVector2D UObject::Multiply_Vector2DFloat(struct FVector2D A, float B)
{
	static UFunction* uFnMultiply_Vector2DFloat = nullptr;

	if (!uFnMultiply_Vector2DFloat)
	{
		uFnMultiply_Vector2DFloat = UFunction::FindFunction("Function Core.Object.Multiply_Vector2DFloat");
	}

	UObject_execMultiply_Vector2DFloat_Params Multiply_Vector2DFloat_Params;
	memset(&Multiply_Vector2DFloat_Params, 0, sizeof(Multiply_Vector2DFloat_Params));
	memcpy_s(&Multiply_Vector2DFloat_Params.A, sizeof(Multiply_Vector2DFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Multiply_Vector2DFloat_Params.B, sizeof(Multiply_Vector2DFloat_Params.B), &B, sizeof(B));

	uFnMultiply_Vector2DFloat->iNative = 0;
	uFnMultiply_Vector2DFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiply_Vector2DFloat, &Multiply_Vector2DFloat_Params, nullptr);
	uFnMultiply_Vector2DFloat->FunctionFlags |= 0x400;
	uFnMultiply_Vector2DFloat->iNative = 16;

	return Multiply_Vector2DFloat_Params.ReturnValue;
};

// Function Core.Object.Subtract_Vector2DVector2D
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// struct FVector2D               B                              (CPF_Parm)

struct FVector2D UObject::Subtract_Vector2DVector2D(struct FVector2D A, struct FVector2D B)
{
	static UFunction* uFnSubtract_Vector2DVector2D = nullptr;

	if (!uFnSubtract_Vector2DVector2D)
	{
		uFnSubtract_Vector2DVector2D = UFunction::FindFunction("Function Core.Object.Subtract_Vector2DVector2D");
	}

	UObject_execSubtract_Vector2DVector2D_Params Subtract_Vector2DVector2D_Params;
	memset(&Subtract_Vector2DVector2D_Params, 0, sizeof(Subtract_Vector2DVector2D_Params));
	memcpy_s(&Subtract_Vector2DVector2D_Params.A, sizeof(Subtract_Vector2DVector2D_Params.A), &A, sizeof(A));
	memcpy_s(&Subtract_Vector2DVector2D_Params.B, sizeof(Subtract_Vector2DVector2D_Params.B), &B, sizeof(B));

	uFnSubtract_Vector2DVector2D->iNative = 0;
	uFnSubtract_Vector2DVector2D->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtract_Vector2DVector2D, &Subtract_Vector2DVector2D_Params, nullptr);
	uFnSubtract_Vector2DVector2D->FunctionFlags |= 0x400;
	uFnSubtract_Vector2DVector2D->iNative = 16;

	return Subtract_Vector2DVector2D_Params.ReturnValue;
};

// Function Core.Object.Add_Vector2DVector2D
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// struct FVector2D               B                              (CPF_Parm)

struct FVector2D UObject::Add_Vector2DVector2D(struct FVector2D A, struct FVector2D B)
{
	static UFunction* uFnAdd_Vector2DVector2D = nullptr;

	if (!uFnAdd_Vector2DVector2D)
	{
		uFnAdd_Vector2DVector2D = UFunction::FindFunction("Function Core.Object.Add_Vector2DVector2D");
	}

	UObject_execAdd_Vector2DVector2D_Params Add_Vector2DVector2D_Params;
	memset(&Add_Vector2DVector2D_Params, 0, sizeof(Add_Vector2DVector2D_Params));
	memcpy_s(&Add_Vector2DVector2D_Params.A, sizeof(Add_Vector2DVector2D_Params.A), &A, sizeof(A));
	memcpy_s(&Add_Vector2DVector2D_Params.B, sizeof(Add_Vector2DVector2D_Params.B), &B, sizeof(B));

	uFnAdd_Vector2DVector2D->iNative = 0;
	uFnAdd_Vector2DVector2D->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAdd_Vector2DVector2D, &Add_Vector2DVector2D_Params, nullptr);
	uFnAdd_Vector2DVector2D->FunctionFlags |= 0x400;
	uFnAdd_Vector2DVector2D->iNative = 16;

	return Add_Vector2DVector2D_Params.ReturnValue;
};

// Function Core.Object.Subtract_QuatQuat
// [0x10F00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)

struct FQuat UObject::Subtract_QuatQuat(struct FQuat A, struct FQuat B)
{
	static UFunction* uFnSubtract_QuatQuat = nullptr;

	if (!uFnSubtract_QuatQuat)
	{
		uFnSubtract_QuatQuat = UFunction::FindFunction("Function Core.Object.Subtract_QuatQuat");
	}

	UObject_execSubtract_QuatQuat_Params Subtract_QuatQuat_Params;
	memset(&Subtract_QuatQuat_Params, 0, sizeof(Subtract_QuatQuat_Params));
	memcpy_s(&Subtract_QuatQuat_Params.A, sizeof(Subtract_QuatQuat_Params.A), &A, sizeof(A));
	memcpy_s(&Subtract_QuatQuat_Params.B, sizeof(Subtract_QuatQuat_Params.B), &B, sizeof(B));

	uFnSubtract_QuatQuat->iNative = 0;
	uFnSubtract_QuatQuat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtract_QuatQuat, &Subtract_QuatQuat_Params, nullptr);
	uFnSubtract_QuatQuat->FunctionFlags |= 0x400;
	uFnSubtract_QuatQuat->iNative = 16;

	return Subtract_QuatQuat_Params.ReturnValue;
};

// Function Core.Object.Add_QuatQuat
// [0x10E00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)

struct FQuat UObject::Add_QuatQuat(struct FQuat A, struct FQuat B)
{
	static UFunction* uFnAdd_QuatQuat = nullptr;

	if (!uFnAdd_QuatQuat)
	{
		uFnAdd_QuatQuat = UFunction::FindFunction("Function Core.Object.Add_QuatQuat");
	}

	UObject_execAdd_QuatQuat_Params Add_QuatQuat_Params;
	memset(&Add_QuatQuat_Params, 0, sizeof(Add_QuatQuat_Params));
	memcpy_s(&Add_QuatQuat_Params.A, sizeof(Add_QuatQuat_Params.A), &A, sizeof(A));
	memcpy_s(&Add_QuatQuat_Params.B, sizeof(Add_QuatQuat_Params.B), &B, sizeof(B));

	uFnAdd_QuatQuat->iNative = 0;
	uFnAdd_QuatQuat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAdd_QuatQuat, &Add_QuatQuat_Params, nullptr);
	uFnAdd_QuatQuat->FunctionFlags |= 0x400;
	uFnAdd_QuatQuat->iNative = 16;

	return Add_QuatQuat_Params.ReturnValue;
};

// Function Core.Object.QuatSlerp
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// bool                           bShortestPath                  (CPF_OptionalParm | CPF_Parm)

struct FQuat UObject::QuatSlerp(struct FQuat A, struct FQuat B, float Alpha, bool bShortestPath)
{
	static UFunction* uFnQuatSlerp = nullptr;

	if (!uFnQuatSlerp)
	{
		uFnQuatSlerp = UFunction::FindFunction("Function Core.Object.QuatSlerp");
	}

	UObject_execQuatSlerp_Params QuatSlerp_Params;
	memset(&QuatSlerp_Params, 0, sizeof(QuatSlerp_Params));
	memcpy_s(&QuatSlerp_Params.A, sizeof(QuatSlerp_Params.A), &A, sizeof(A));
	memcpy_s(&QuatSlerp_Params.B, sizeof(QuatSlerp_Params.B), &B, sizeof(B));
	memcpy_s(&QuatSlerp_Params.Alpha, sizeof(QuatSlerp_Params.Alpha), &Alpha, sizeof(Alpha));
	QuatSlerp_Params.bShortestPath = bShortestPath;

	uFnQuatSlerp->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnQuatSlerp, &QuatSlerp_Params, nullptr);
	uFnQuatSlerp->FunctionFlags |= 0x400;

	return QuatSlerp_Params.ReturnValue;
};

// Function Core.Object.QuatToRotator
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)

struct FRotator UObject::QuatToRotator(struct FQuat A)
{
	static UFunction* uFnQuatToRotator = nullptr;

	if (!uFnQuatToRotator)
	{
		uFnQuatToRotator = UFunction::FindFunction("Function Core.Object.QuatToRotator");
	}

	UObject_execQuatToRotator_Params QuatToRotator_Params;
	memset(&QuatToRotator_Params, 0, sizeof(QuatToRotator_Params));
	memcpy_s(&QuatToRotator_Params.A, sizeof(QuatToRotator_Params.A), &A, sizeof(A));

	uFnQuatToRotator->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnQuatToRotator, &QuatToRotator_Params, nullptr);
	uFnQuatToRotator->FunctionFlags |= 0x400;

	return QuatToRotator_Params.ReturnValue;
};

// Function Core.Object.QuatFromRotator
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)

struct FQuat UObject::QuatFromRotator(struct FRotator A)
{
	static UFunction* uFnQuatFromRotator = nullptr;

	if (!uFnQuatFromRotator)
	{
		uFnQuatFromRotator = UFunction::FindFunction("Function Core.Object.QuatFromRotator");
	}

	UObject_execQuatFromRotator_Params QuatFromRotator_Params;
	memset(&QuatFromRotator_Params, 0, sizeof(QuatFromRotator_Params));
	memcpy_s(&QuatFromRotator_Params.A, sizeof(QuatFromRotator_Params.A), &A, sizeof(A));

	uFnQuatFromRotator->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnQuatFromRotator, &QuatFromRotator_Params, nullptr);
	uFnQuatFromRotator->FunctionFlags |= 0x400;

	return QuatFromRotator_Params.ReturnValue;
};

// Function Core.Object.QuatFromAxisAndAngle
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Axis                           (CPF_Parm)
// float                          Angle                          (CPF_Parm)

struct FQuat UObject::QuatFromAxisAndAngle(struct FVector Axis, float Angle)
{
	static UFunction* uFnQuatFromAxisAndAngle = nullptr;

	if (!uFnQuatFromAxisAndAngle)
	{
		uFnQuatFromAxisAndAngle = UFunction::FindFunction("Function Core.Object.QuatFromAxisAndAngle");
	}

	UObject_execQuatFromAxisAndAngle_Params QuatFromAxisAndAngle_Params;
	memset(&QuatFromAxisAndAngle_Params, 0, sizeof(QuatFromAxisAndAngle_Params));
	memcpy_s(&QuatFromAxisAndAngle_Params.Axis, sizeof(QuatFromAxisAndAngle_Params.Axis), &Axis, sizeof(Axis));
	memcpy_s(&QuatFromAxisAndAngle_Params.Angle, sizeof(QuatFromAxisAndAngle_Params.Angle), &Angle, sizeof(Angle));

	uFnQuatFromAxisAndAngle->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnQuatFromAxisAndAngle, &QuatFromAxisAndAngle_Params, nullptr);
	uFnQuatFromAxisAndAngle->FunctionFlags |= 0x400;

	return QuatFromAxisAndAngle_Params.ReturnValue;
};

// Function Core.Object.QuatFindBetween
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FQuat UObject::QuatFindBetween(struct FVector A, struct FVector B)
{
	static UFunction* uFnQuatFindBetween = nullptr;

	if (!uFnQuatFindBetween)
	{
		uFnQuatFindBetween = UFunction::FindFunction("Function Core.Object.QuatFindBetween");
	}

	UObject_execQuatFindBetween_Params QuatFindBetween_Params;
	memset(&QuatFindBetween_Params, 0, sizeof(QuatFindBetween_Params));
	memcpy_s(&QuatFindBetween_Params.A, sizeof(QuatFindBetween_Params.A), &A, sizeof(A));
	memcpy_s(&QuatFindBetween_Params.B, sizeof(QuatFindBetween_Params.B), &B, sizeof(B));

	uFnQuatFindBetween->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnQuatFindBetween, &QuatFindBetween_Params, nullptr);
	uFnQuatFindBetween->FunctionFlags |= 0x400;

	return QuatFindBetween_Params.ReturnValue;
};

// Function Core.Object.QuatRotateVector
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::QuatRotateVector(struct FQuat A, struct FVector B)
{
	static UFunction* uFnQuatRotateVector = nullptr;

	if (!uFnQuatRotateVector)
	{
		uFnQuatRotateVector = UFunction::FindFunction("Function Core.Object.QuatRotateVector");
	}

	UObject_execQuatRotateVector_Params QuatRotateVector_Params;
	memset(&QuatRotateVector_Params, 0, sizeof(QuatRotateVector_Params));
	memcpy_s(&QuatRotateVector_Params.A, sizeof(QuatRotateVector_Params.A), &A, sizeof(A));
	memcpy_s(&QuatRotateVector_Params.B, sizeof(QuatRotateVector_Params.B), &B, sizeof(B));

	uFnQuatRotateVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnQuatRotateVector, &QuatRotateVector_Params, nullptr);
	uFnQuatRotateVector->FunctionFlags |= 0x400;

	return QuatRotateVector_Params.ReturnValue;
};

// Function Core.Object.QuatInvert
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)

struct FQuat UObject::QuatInvert(struct FQuat A)
{
	static UFunction* uFnQuatInvert = nullptr;

	if (!uFnQuatInvert)
	{
		uFnQuatInvert = UFunction::FindFunction("Function Core.Object.QuatInvert");
	}

	UObject_execQuatInvert_Params QuatInvert_Params;
	memset(&QuatInvert_Params, 0, sizeof(QuatInvert_Params));
	memcpy_s(&QuatInvert_Params.A, sizeof(QuatInvert_Params.A), &A, sizeof(A));

	uFnQuatInvert->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnQuatInvert, &QuatInvert_Params, nullptr);
	uFnQuatInvert->FunctionFlags |= 0x400;

	return QuatInvert_Params.ReturnValue;
};

// Function Core.Object.QuatDot
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)

float UObject::QuatDot(struct FQuat A, struct FQuat B)
{
	static UFunction* uFnQuatDot = nullptr;

	if (!uFnQuatDot)
	{
		uFnQuatDot = UFunction::FindFunction("Function Core.Object.QuatDot");
	}

	UObject_execQuatDot_Params QuatDot_Params;
	memset(&QuatDot_Params, 0, sizeof(QuatDot_Params));
	memcpy_s(&QuatDot_Params.A, sizeof(QuatDot_Params.A), &A, sizeof(A));
	memcpy_s(&QuatDot_Params.B, sizeof(QuatDot_Params.B), &B, sizeof(B));

	uFnQuatDot->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnQuatDot, &QuatDot_Params, nullptr);
	uFnQuatDot->FunctionFlags |= 0x400;

	return QuatDot_Params.ReturnValue;
};

// Function Core.Object.QuatProduct
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)

struct FQuat UObject::QuatProduct(struct FQuat A, struct FQuat B)
{
	static UFunction* uFnQuatProduct = nullptr;

	if (!uFnQuatProduct)
	{
		uFnQuatProduct = UFunction::FindFunction("Function Core.Object.QuatProduct");
	}

	UObject_execQuatProduct_Params QuatProduct_Params;
	memset(&QuatProduct_Params, 0, sizeof(QuatProduct_Params));
	memcpy_s(&QuatProduct_Params.A, sizeof(QuatProduct_Params.A), &A, sizeof(A));
	memcpy_s(&QuatProduct_Params.B, sizeof(QuatProduct_Params.B), &B, sizeof(B));

	uFnQuatProduct->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnQuatProduct, &QuatProduct_Params, nullptr);
	uFnQuatProduct->FunctionFlags |= 0x400;

	return QuatProduct_Params.ReturnValue;
};

// Function Core.Object.MatrixGetAxis
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// EAxis                          Axis                           (CPF_Parm)

struct FVector UObject::MatrixGetAxis(struct FMatrix TM, EAxis Axis)
{
	static UFunction* uFnMatrixGetAxis = nullptr;

	if (!uFnMatrixGetAxis)
	{
		uFnMatrixGetAxis = UFunction::FindFunction("Function Core.Object.MatrixGetAxis");
	}

	UObject_execMatrixGetAxis_Params MatrixGetAxis_Params;
	memset(&MatrixGetAxis_Params, 0, sizeof(MatrixGetAxis_Params));
	memcpy_s(&MatrixGetAxis_Params.TM, sizeof(MatrixGetAxis_Params.TM), &TM, sizeof(TM));
	memcpy_s(&MatrixGetAxis_Params.Axis, sizeof(MatrixGetAxis_Params.Axis), &Axis, sizeof(Axis));

	uFnMatrixGetAxis->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMatrixGetAxis, &MatrixGetAxis_Params, nullptr);
	uFnMatrixGetAxis->FunctionFlags |= 0x400;

	return MatrixGetAxis_Params.ReturnValue;
};

// Function Core.Object.MatrixGetOrigin
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)

struct FVector UObject::MatrixGetOrigin(struct FMatrix TM)
{
	static UFunction* uFnMatrixGetOrigin = nullptr;

	if (!uFnMatrixGetOrigin)
	{
		uFnMatrixGetOrigin = UFunction::FindFunction("Function Core.Object.MatrixGetOrigin");
	}

	UObject_execMatrixGetOrigin_Params MatrixGetOrigin_Params;
	memset(&MatrixGetOrigin_Params, 0, sizeof(MatrixGetOrigin_Params));
	memcpy_s(&MatrixGetOrigin_Params.TM, sizeof(MatrixGetOrigin_Params.TM), &TM, sizeof(TM));

	uFnMatrixGetOrigin->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMatrixGetOrigin, &MatrixGetOrigin_Params, nullptr);
	uFnMatrixGetOrigin->FunctionFlags |= 0x400;

	return MatrixGetOrigin_Params.ReturnValue;
};

// Function Core.Object.MatrixGetRotator
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)

struct FRotator UObject::MatrixGetRotator(struct FMatrix TM)
{
	static UFunction* uFnMatrixGetRotator = nullptr;

	if (!uFnMatrixGetRotator)
	{
		uFnMatrixGetRotator = UFunction::FindFunction("Function Core.Object.MatrixGetRotator");
	}

	UObject_execMatrixGetRotator_Params MatrixGetRotator_Params;
	memset(&MatrixGetRotator_Params, 0, sizeof(MatrixGetRotator_Params));
	memcpy_s(&MatrixGetRotator_Params.TM, sizeof(MatrixGetRotator_Params.TM), &TM, sizeof(TM));

	uFnMatrixGetRotator->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMatrixGetRotator, &MatrixGetRotator_Params, nullptr);
	uFnMatrixGetRotator->FunctionFlags |= 0x400;

	return MatrixGetRotator_Params.ReturnValue;
};

// Function Core.Object.MakeRotationMatrix
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                Rotation                       (CPF_Parm)

struct FMatrix UObject::MakeRotationMatrix(struct FRotator Rotation)
{
	static UFunction* uFnMakeRotationMatrix = nullptr;

	if (!uFnMakeRotationMatrix)
	{
		uFnMakeRotationMatrix = UFunction::FindFunction("Function Core.Object.MakeRotationMatrix");
	}

	UObject_execMakeRotationMatrix_Params MakeRotationMatrix_Params;
	memset(&MakeRotationMatrix_Params, 0, sizeof(MakeRotationMatrix_Params));
	memcpy_s(&MakeRotationMatrix_Params.Rotation, sizeof(MakeRotationMatrix_Params.Rotation), &Rotation, sizeof(Rotation));

	uFnMakeRotationMatrix->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMakeRotationMatrix, &MakeRotationMatrix_Params, nullptr);
	uFnMakeRotationMatrix->FunctionFlags |= 0x400;

	return MakeRotationMatrix_Params.ReturnValue;
};

// Function Core.Object.MakeRotationTranslationMatrix
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Translation                    (CPF_Parm)
// struct FRotator                Rotation                       (CPF_Parm)

struct FMatrix UObject::MakeRotationTranslationMatrix(struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* uFnMakeRotationTranslationMatrix = nullptr;

	if (!uFnMakeRotationTranslationMatrix)
	{
		uFnMakeRotationTranslationMatrix = UFunction::FindFunction("Function Core.Object.MakeRotationTranslationMatrix");
	}

	UObject_execMakeRotationTranslationMatrix_Params MakeRotationTranslationMatrix_Params;
	memset(&MakeRotationTranslationMatrix_Params, 0, sizeof(MakeRotationTranslationMatrix_Params));
	memcpy_s(&MakeRotationTranslationMatrix_Params.Translation, sizeof(MakeRotationTranslationMatrix_Params.Translation), &Translation, sizeof(Translation));
	memcpy_s(&MakeRotationTranslationMatrix_Params.Rotation, sizeof(MakeRotationTranslationMatrix_Params.Rotation), &Rotation, sizeof(Rotation));

	uFnMakeRotationTranslationMatrix->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMakeRotationTranslationMatrix, &MakeRotationTranslationMatrix_Params, nullptr);
	uFnMakeRotationTranslationMatrix->FunctionFlags |= 0x400;

	return MakeRotationTranslationMatrix_Params.ReturnValue;
};

// Function Core.Object.InverseTransformNormal
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::InverseTransformNormal(struct FMatrix TM, struct FVector A)
{
	static UFunction* uFnInverseTransformNormal = nullptr;

	if (!uFnInverseTransformNormal)
	{
		uFnInverseTransformNormal = UFunction::FindFunction("Function Core.Object.InverseTransformNormal");
	}

	UObject_execInverseTransformNormal_Params InverseTransformNormal_Params;
	memset(&InverseTransformNormal_Params, 0, sizeof(InverseTransformNormal_Params));
	memcpy_s(&InverseTransformNormal_Params.TM, sizeof(InverseTransformNormal_Params.TM), &TM, sizeof(TM));
	memcpy_s(&InverseTransformNormal_Params.A, sizeof(InverseTransformNormal_Params.A), &A, sizeof(A));

	uFnInverseTransformNormal->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnInverseTransformNormal, &InverseTransformNormal_Params, nullptr);
	uFnInverseTransformNormal->FunctionFlags |= 0x400;

	return InverseTransformNormal_Params.ReturnValue;
};

// Function Core.Object.TransformNormal
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::TransformNormal(struct FMatrix TM, struct FVector A)
{
	static UFunction* uFnTransformNormal = nullptr;

	if (!uFnTransformNormal)
	{
		uFnTransformNormal = UFunction::FindFunction("Function Core.Object.TransformNormal");
	}

	UObject_execTransformNormal_Params TransformNormal_Params;
	memset(&TransformNormal_Params, 0, sizeof(TransformNormal_Params));
	memcpy_s(&TransformNormal_Params.TM, sizeof(TransformNormal_Params.TM), &TM, sizeof(TM));
	memcpy_s(&TransformNormal_Params.A, sizeof(TransformNormal_Params.A), &A, sizeof(A));

	uFnTransformNormal->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnTransformNormal, &TransformNormal_Params, nullptr);
	uFnTransformNormal->FunctionFlags |= 0x400;

	return TransformNormal_Params.ReturnValue;
};

// Function Core.Object.InverseTransformVector
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::InverseTransformVector(struct FMatrix TM, struct FVector A)
{
	static UFunction* uFnInverseTransformVector = nullptr;

	if (!uFnInverseTransformVector)
	{
		uFnInverseTransformVector = UFunction::FindFunction("Function Core.Object.InverseTransformVector");
	}

	UObject_execInverseTransformVector_Params InverseTransformVector_Params;
	memset(&InverseTransformVector_Params, 0, sizeof(InverseTransformVector_Params));
	memcpy_s(&InverseTransformVector_Params.TM, sizeof(InverseTransformVector_Params.TM), &TM, sizeof(TM));
	memcpy_s(&InverseTransformVector_Params.A, sizeof(InverseTransformVector_Params.A), &A, sizeof(A));

	uFnInverseTransformVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnInverseTransformVector, &InverseTransformVector_Params, nullptr);
	uFnInverseTransformVector->FunctionFlags |= 0x400;

	return InverseTransformVector_Params.ReturnValue;
};

// Function Core.Object.TransformVector
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::TransformVector(struct FMatrix TM, struct FVector A)
{
	static UFunction* uFnTransformVector = nullptr;

	if (!uFnTransformVector)
	{
		uFnTransformVector = UFunction::FindFunction("Function Core.Object.TransformVector");
	}

	UObject_execTransformVector_Params TransformVector_Params;
	memset(&TransformVector_Params, 0, sizeof(TransformVector_Params));
	memcpy_s(&TransformVector_Params.TM, sizeof(TransformVector_Params.TM), &TM, sizeof(TM));
	memcpy_s(&TransformVector_Params.A, sizeof(TransformVector_Params.A), &A, sizeof(A));

	uFnTransformVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnTransformVector, &TransformVector_Params, nullptr);
	uFnTransformVector->FunctionFlags |= 0x400;

	return TransformVector_Params.ReturnValue;
};

// Function Core.Object.Multiply_MatrixMatrix
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 A                              (CPF_Parm)
// struct FMatrix                 B                              (CPF_Parm)

struct FMatrix UObject::Multiply_MatrixMatrix(struct FMatrix A, struct FMatrix B)
{
	static UFunction* uFnMultiply_MatrixMatrix = nullptr;

	if (!uFnMultiply_MatrixMatrix)
	{
		uFnMultiply_MatrixMatrix = UFunction::FindFunction("Function Core.Object.Multiply_MatrixMatrix");
	}

	UObject_execMultiply_MatrixMatrix_Params Multiply_MatrixMatrix_Params;
	memset(&Multiply_MatrixMatrix_Params, 0, sizeof(Multiply_MatrixMatrix_Params));
	memcpy_s(&Multiply_MatrixMatrix_Params.A, sizeof(Multiply_MatrixMatrix_Params.A), &A, sizeof(A));
	memcpy_s(&Multiply_MatrixMatrix_Params.B, sizeof(Multiply_MatrixMatrix_Params.B), &B, sizeof(B));

	uFnMultiply_MatrixMatrix->iNative = 0;
	uFnMultiply_MatrixMatrix->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiply_MatrixMatrix, &Multiply_MatrixMatrix_Params, nullptr);
	uFnMultiply_MatrixMatrix->FunctionFlags |= 0x400;
	uFnMultiply_MatrixMatrix->iNative = 34;

	return Multiply_MatrixMatrix_Params.ReturnValue;
};

// Function Core.Object.NotEqual_NameName
// [0xFF00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[26])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   A                              (CPF_Parm)
// struct FName                   B                              (CPF_Parm)

bool UObject::NotEqual_NameName(struct FName A, struct FName B)
{
	static UFunction* uFnNotEqual_NameName = nullptr;

	if (!uFnNotEqual_NameName)
	{
		uFnNotEqual_NameName = UFunction::FindFunction("Function Core.Object.NotEqual_NameName");
	}

	UObject_execNotEqual_NameName_Params NotEqual_NameName_Params;
	memset(&NotEqual_NameName_Params, 0, sizeof(NotEqual_NameName_Params));
	memcpy_s(&NotEqual_NameName_Params.A, sizeof(NotEqual_NameName_Params.A), &A, sizeof(A));
	memcpy_s(&NotEqual_NameName_Params.B, sizeof(NotEqual_NameName_Params.B), &B, sizeof(B));

	uFnNotEqual_NameName->iNative = 0;
	uFnNotEqual_NameName->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNotEqual_NameName, &NotEqual_NameName_Params, nullptr);
	uFnNotEqual_NameName->FunctionFlags |= 0x400;
	uFnNotEqual_NameName->iNative = 26;

	return NotEqual_NameName_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_NameName
// [0xFE00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   A                              (CPF_Parm)
// struct FName                   B                              (CPF_Parm)

bool UObject::EqualEqual_NameName(struct FName A, struct FName B)
{
	static UFunction* uFnEqualEqual_NameName = nullptr;

	if (!uFnEqualEqual_NameName)
	{
		uFnEqualEqual_NameName = UFunction::FindFunction("Function Core.Object.EqualEqual_NameName");
	}

	UObject_execEqualEqual_NameName_Params EqualEqual_NameName_Params;
	memset(&EqualEqual_NameName_Params, 0, sizeof(EqualEqual_NameName_Params));
	memcpy_s(&EqualEqual_NameName_Params.A, sizeof(EqualEqual_NameName_Params.A), &A, sizeof(A));
	memcpy_s(&EqualEqual_NameName_Params.B, sizeof(EqualEqual_NameName_Params.B), &B, sizeof(B));

	uFnEqualEqual_NameName->iNative = 0;
	uFnEqualEqual_NameName->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_NameName, &EqualEqual_NameName_Params, nullptr);
	uFnEqualEqual_NameName->FunctionFlags |= 0x400;
	uFnEqualEqual_NameName->iNative = 24;

	return EqualEqual_NameName_Params.ReturnValue;
};

// Function Core.Object.IsA
// [0xC500020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   ClassName                      (CPF_Parm)

bool UObject::IsA(struct FName ClassName)
{
	static UFunction* uFnIsA = nullptr;

	if (!uFnIsA)
	{
		uFnIsA = UFunction::FindFunction("Function Core.Object.IsA");
	}

	UObject_execIsA_Params IsA_Params;
	memset(&IsA_Params, 0, sizeof(IsA_Params));
	memcpy_s(&IsA_Params.ClassName, sizeof(IsA_Params.ClassName), &ClassName, sizeof(ClassName));

	uFnIsA->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsA, &IsA_Params, nullptr);
	uFnIsA->FunctionFlags |= 0x400;

	return IsA_Params.ReturnValue;
};

// Function Core.Object.ClassIsChildOf
// [0x10200022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  TestClass                      (CPF_Parm)
// class UClass*                  ParentClass                    (CPF_Parm)

bool UObject::ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass)
{
	static UFunction* uFnClassIsChildOf = nullptr;

	if (!uFnClassIsChildOf)
	{
		uFnClassIsChildOf = UFunction::FindFunction("Function Core.Object.ClassIsChildOf");
	}

	UObject_execClassIsChildOf_Params ClassIsChildOf_Params;
	memset(&ClassIsChildOf_Params, 0, sizeof(ClassIsChildOf_Params));
	memcpy_s(&ClassIsChildOf_Params.TestClass, sizeof(ClassIsChildOf_Params.TestClass), &TestClass, sizeof(TestClass));
	memcpy_s(&ClassIsChildOf_Params.ParentClass, sizeof(ClassIsChildOf_Params.ParentClass), &ParentClass, sizeof(ParentClass));

	uFnClassIsChildOf->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnClassIsChildOf, &ClassIsChildOf_Params, nullptr);
	uFnClassIsChildOf->FunctionFlags |= 0x400;

	return ClassIsChildOf_Params.ReturnValue;
};

// Function Core.Object.NotEqual_InterfaceInterface
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[26])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UInterface*              A                              (CPF_Parm)
// class UInterface*              B                              (CPF_Parm)

bool UObject::NotEqual_InterfaceInterface(class UInterface* A, class UInterface* B)
{
	static UFunction* uFnNotEqual_InterfaceInterface = nullptr;

	if (!uFnNotEqual_InterfaceInterface)
	{
		uFnNotEqual_InterfaceInterface = UFunction::FindFunction("Function Core.Object.NotEqual_InterfaceInterface");
	}

	UObject_execNotEqual_InterfaceInterface_Params NotEqual_InterfaceInterface_Params;
	memset(&NotEqual_InterfaceInterface_Params, 0, sizeof(NotEqual_InterfaceInterface_Params));
	memcpy_s(&NotEqual_InterfaceInterface_Params.A, sizeof(NotEqual_InterfaceInterface_Params.A), &A, sizeof(A));
	memcpy_s(&NotEqual_InterfaceInterface_Params.B, sizeof(NotEqual_InterfaceInterface_Params.B), &B, sizeof(B));

	uFnNotEqual_InterfaceInterface->iNative = 0;
	uFnNotEqual_InterfaceInterface->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNotEqual_InterfaceInterface, &NotEqual_InterfaceInterface_Params, nullptr);
	uFnNotEqual_InterfaceInterface->FunctionFlags |= 0x400;
	uFnNotEqual_InterfaceInterface->iNative = 26;

	return NotEqual_InterfaceInterface_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_InterfaceInterface
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UInterface*              A                              (CPF_Parm)
// class UInterface*              B                              (CPF_Parm)

bool UObject::EqualEqual_InterfaceInterface(class UInterface* A, class UInterface* B)
{
	static UFunction* uFnEqualEqual_InterfaceInterface = nullptr;

	if (!uFnEqualEqual_InterfaceInterface)
	{
		uFnEqualEqual_InterfaceInterface = UFunction::FindFunction("Function Core.Object.EqualEqual_InterfaceInterface");
	}

	UObject_execEqualEqual_InterfaceInterface_Params EqualEqual_InterfaceInterface_Params;
	memset(&EqualEqual_InterfaceInterface_Params, 0, sizeof(EqualEqual_InterfaceInterface_Params));
	memcpy_s(&EqualEqual_InterfaceInterface_Params.A, sizeof(EqualEqual_InterfaceInterface_Params.A), &A, sizeof(A));
	memcpy_s(&EqualEqual_InterfaceInterface_Params.B, sizeof(EqualEqual_InterfaceInterface_Params.B), &B, sizeof(B));

	uFnEqualEqual_InterfaceInterface->iNative = 0;
	uFnEqualEqual_InterfaceInterface->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_InterfaceInterface, &EqualEqual_InterfaceInterface_Params, nullptr);
	uFnEqualEqual_InterfaceInterface->FunctionFlags |= 0x400;
	uFnEqualEqual_InterfaceInterface->iNative = 24;

	return EqualEqual_InterfaceInterface_Params.ReturnValue;
};

// Function Core.Object.NotEqual_ObjectObject
// [0x7700023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[26])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 A                              (CPF_Parm)
// class UObject*                 B                              (CPF_Parm)

bool UObject::NotEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static UFunction* uFnNotEqual_ObjectObject = nullptr;

	if (!uFnNotEqual_ObjectObject)
	{
		uFnNotEqual_ObjectObject = UFunction::FindFunction("Function Core.Object.NotEqual_ObjectObject");
	}

	UObject_execNotEqual_ObjectObject_Params NotEqual_ObjectObject_Params;
	memset(&NotEqual_ObjectObject_Params, 0, sizeof(NotEqual_ObjectObject_Params));
	memcpy_s(&NotEqual_ObjectObject_Params.A, sizeof(NotEqual_ObjectObject_Params.A), &A, sizeof(A));
	memcpy_s(&NotEqual_ObjectObject_Params.B, sizeof(NotEqual_ObjectObject_Params.B), &B, sizeof(B));

	uFnNotEqual_ObjectObject->iNative = 0;
	uFnNotEqual_ObjectObject->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNotEqual_ObjectObject, &NotEqual_ObjectObject_Params, nullptr);
	uFnNotEqual_ObjectObject->FunctionFlags |= 0x400;
	uFnNotEqual_ObjectObject->iNative = 26;

	return NotEqual_ObjectObject_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_ObjectObject
// [0x7200023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 A                              (CPF_Parm)
// class UObject*                 B                              (CPF_Parm)

bool UObject::EqualEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static UFunction* uFnEqualEqual_ObjectObject = nullptr;

	if (!uFnEqualEqual_ObjectObject)
	{
		uFnEqualEqual_ObjectObject = UFunction::FindFunction("Function Core.Object.EqualEqual_ObjectObject");
	}

	UObject_execEqualEqual_ObjectObject_Params EqualEqual_ObjectObject_Params;
	memset(&EqualEqual_ObjectObject_Params, 0, sizeof(EqualEqual_ObjectObject_Params));
	memcpy_s(&EqualEqual_ObjectObject_Params.A, sizeof(EqualEqual_ObjectObject_Params.A), &A, sizeof(A));
	memcpy_s(&EqualEqual_ObjectObject_Params.B, sizeof(EqualEqual_ObjectObject_Params.B), &B, sizeof(B));

	uFnEqualEqual_ObjectObject->iNative = 0;
	uFnEqualEqual_ObjectObject->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_ObjectObject, &EqualEqual_ObjectObject_Params, nullptr);
	uFnEqualEqual_ObjectObject->FunctionFlags |= 0x400;
	uFnEqualEqual_ObjectObject->iNative = 24;

	return EqualEqual_ObjectObject_Params.ReturnValue;
};

// Function Core.Object.PathName
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class UObject*                 CheckObject                    (CPF_Parm)

class FString UObject::PathName(class UObject* CheckObject)
{
	static UFunction* uFnPathName = nullptr;

	if (!uFnPathName)
	{
		uFnPathName = UFunction::FindFunction("Function Core.Object.PathName");
	}

	UObject_execPathName_Params PathName_Params;
	memset(&PathName_Params, 0, sizeof(PathName_Params));
	memcpy_s(&PathName_Params.CheckObject, sizeof(PathName_Params.CheckObject), &CheckObject, sizeof(CheckObject));

	uFnPathName->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnPathName, &PathName_Params, nullptr);
	uFnPathName->FunctionFlags |= 0x400;

	return PathName_Params.ReturnValue;
};

// Function Core.Object.SplitString
// [0x00026003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// TArray<class FString>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Source                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Delimiter                      (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// bool                           bCullEmpty                     (CPF_OptionalParm | CPF_Parm)

TArray<class FString> UObject::SplitString(class FString Source, class FString Delimiter, bool bCullEmpty)
{
	static UFunction* uFnSplitString = nullptr;

	if (!uFnSplitString)
	{
		uFnSplitString = UFunction::FindFunction("Function Core.Object.SplitString");
	}

	UObject_execSplitString_Params SplitString_Params;
	memset(&SplitString_Params, 0, sizeof(SplitString_Params));
	memcpy_s(&SplitString_Params.Source, sizeof(SplitString_Params.Source), &Source, sizeof(Source));
	memcpy_s(&SplitString_Params.Delimiter, sizeof(SplitString_Params.Delimiter), &Delimiter, sizeof(Delimiter));
	SplitString_Params.bCullEmpty = bCullEmpty;

	UObject::StaticClass()->ProcessEvent(uFnSplitString, &SplitString_Params, nullptr);

	return SplitString_Params.ReturnValue;
};

// Function Core.Object.ParseStringIntoArray
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  BaseString                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  delim                          (CPF_Parm | CPF_NeedCtorLink)
// bool                           bCullEmpty                     (CPF_Parm)
// TArray<class FString>          Pieces                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObject::ParseStringIntoArray(class FString BaseString, class FString delim, bool bCullEmpty, TArray<class FString>& Pieces)
{
	static UFunction* uFnParseStringIntoArray = nullptr;

	if (!uFnParseStringIntoArray)
	{
		uFnParseStringIntoArray = UFunction::FindFunction("Function Core.Object.ParseStringIntoArray");
	}

	UObject_execParseStringIntoArray_Params ParseStringIntoArray_Params;
	memset(&ParseStringIntoArray_Params, 0, sizeof(ParseStringIntoArray_Params));
	memcpy_s(&ParseStringIntoArray_Params.BaseString, sizeof(ParseStringIntoArray_Params.BaseString), &BaseString, sizeof(BaseString));
	memcpy_s(&ParseStringIntoArray_Params.delim, sizeof(ParseStringIntoArray_Params.delim), &delim, sizeof(delim));
	ParseStringIntoArray_Params.bCullEmpty = bCullEmpty;
	memcpy_s(&ParseStringIntoArray_Params.Pieces, sizeof(ParseStringIntoArray_Params.Pieces), &Pieces, sizeof(Pieces));

	uFnParseStringIntoArray->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnParseStringIntoArray, &ParseStringIntoArray_Params, nullptr);
	uFnParseStringIntoArray->FunctionFlags |= 0x400;

	memcpy_s(&Pieces, sizeof(Pieces), &ParseStringIntoArray_Params.Pieces, sizeof(ParseStringIntoArray_Params.Pieces));
};

// Function Core.Object.JoinArray
// [0x00426003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// TArray<class FString>          StringArray                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  delim                          (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// bool                           bIgnoreBlanks                  (CPF_OptionalParm | CPF_Parm)
// class FString                  out_Result                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObject::JoinArray(TArray<class FString> StringArray, class FString delim, bool bIgnoreBlanks, class FString& out_Result)
{
	static UFunction* uFnJoinArray = nullptr;

	if (!uFnJoinArray)
	{
		uFnJoinArray = UFunction::FindFunction("Function Core.Object.JoinArray");
	}

	UObject_execJoinArray_Params JoinArray_Params;
	memset(&JoinArray_Params, 0, sizeof(JoinArray_Params));
	memcpy_s(&JoinArray_Params.StringArray, sizeof(JoinArray_Params.StringArray), &StringArray, sizeof(StringArray));
	memcpy_s(&JoinArray_Params.delim, sizeof(JoinArray_Params.delim), &delim, sizeof(delim));
	JoinArray_Params.bIgnoreBlanks = bIgnoreBlanks;
	memcpy_s(&JoinArray_Params.out_Result, sizeof(JoinArray_Params.out_Result), &out_Result, sizeof(out_Result));

	UObject::StaticClass()->ProcessEvent(uFnJoinArray, &JoinArray_Params, nullptr);

	memcpy_s(&out_Result, sizeof(out_Result), &JoinArray_Params.out_Result, sizeof(JoinArray_Params.out_Result));
};

// Function Core.Object.GetRightMost
// [0x00022003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Text                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

class FString UObject::GetRightMost(class FString Text)
{
	static UFunction* uFnGetRightMost = nullptr;

	if (!uFnGetRightMost)
	{
		uFnGetRightMost = UFunction::FindFunction("Function Core.Object.GetRightMost");
	}

	UObject_execGetRightMost_Params GetRightMost_Params;
	memset(&GetRightMost_Params, 0, sizeof(GetRightMost_Params));
	memcpy_s(&GetRightMost_Params.Text, sizeof(GetRightMost_Params.Text), &Text, sizeof(Text));

	UObject::StaticClass()->ProcessEvent(uFnGetRightMost, &GetRightMost_Params, nullptr);

	return GetRightMost_Params.ReturnValue;
};

// Function Core.Object.Split
// [0x00026003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Text                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  SplitStr                       (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// bool                           bOmitSplitStr                  (CPF_OptionalParm | CPF_Parm)

class FString UObject::Split(class FString Text, class FString SplitStr, bool bOmitSplitStr)
{
	static UFunction* uFnSplit = nullptr;

	if (!uFnSplit)
	{
		uFnSplit = UFunction::FindFunction("Function Core.Object.Split");
	}

	UObject_execSplit_Params Split_Params;
	memset(&Split_Params, 0, sizeof(Split_Params));
	memcpy_s(&Split_Params.Text, sizeof(Split_Params.Text), &Text, sizeof(Text));
	memcpy_s(&Split_Params.SplitStr, sizeof(Split_Params.SplitStr), &SplitStr, sizeof(SplitStr));
	Split_Params.bOmitSplitStr = bOmitSplitStr;

	UObject::StaticClass()->ProcessEvent(uFnSplit, &Split_Params, nullptr);

	return Split_Params.ReturnValue;
};

// Function Core.Object.Repl
// [0xC900026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Src                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  Match                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  With                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// bool                           bCaseSensitive                 (CPF_OptionalParm | CPF_Parm)

class FString UObject::Repl(class FString Src, class FString Match, class FString With, bool bCaseSensitive)
{
	static UFunction* uFnRepl = nullptr;

	if (!uFnRepl)
	{
		uFnRepl = UFunction::FindFunction("Function Core.Object.Repl");
	}

	UObject_execRepl_Params Repl_Params;
	memset(&Repl_Params, 0, sizeof(Repl_Params));
	memcpy_s(&Repl_Params.Src, sizeof(Repl_Params.Src), &Src, sizeof(Src));
	memcpy_s(&Repl_Params.Match, sizeof(Repl_Params.Match), &Match, sizeof(Match));
	memcpy_s(&Repl_Params.With, sizeof(Repl_Params.With), &With, sizeof(With));
	Repl_Params.bCaseSensitive = bCaseSensitive;

	uFnRepl->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnRepl, &Repl_Params, nullptr);
	uFnRepl->FunctionFlags |= 0x400;

	return Repl_Params.ReturnValue;
};

// Function Core.Object.Asc
// [0xED00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

int32_t UObject::Asc(class FString S)
{
	static UFunction* uFnAsc = nullptr;

	if (!uFnAsc)
	{
		uFnAsc = UFunction::FindFunction("Function Core.Object.Asc");
	}

	UObject_execAsc_Params Asc_Params;
	memset(&Asc_Params, 0, sizeof(Asc_Params));
	memcpy_s(&Asc_Params.S, sizeof(Asc_Params.S), &S, sizeof(S));

	uFnAsc->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAsc, &Asc_Params, nullptr);
	uFnAsc->FunctionFlags |= 0x400;

	return Asc_Params.ReturnValue;
};

// Function Core.Object.Chr
// [0xEC00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

class FString UObject::Chr(int32_t I)
{
	static UFunction* uFnChr = nullptr;

	if (!uFnChr)
	{
		uFnChr = UFunction::FindFunction("Function Core.Object.Chr");
	}

	UObject_execChr_Params Chr_Params;
	memset(&Chr_Params, 0, sizeof(Chr_Params));
	memcpy_s(&Chr_Params.I, sizeof(Chr_Params.I), &I, sizeof(I));

	uFnChr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnChr, &Chr_Params, nullptr);
	uFnChr->FunctionFlags |= 0x400;

	return Chr_Params.ReturnValue;
};

// Function Core.Object.Locs
// [0xEE00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

class FString UObject::Locs(class FString S)
{
	static UFunction* uFnLocs = nullptr;

	if (!uFnLocs)
	{
		uFnLocs = UFunction::FindFunction("Function Core.Object.Locs");
	}

	UObject_execLocs_Params Locs_Params;
	memset(&Locs_Params, 0, sizeof(Locs_Params));
	memcpy_s(&Locs_Params.S, sizeof(Locs_Params.S), &S, sizeof(S));

	uFnLocs->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLocs, &Locs_Params, nullptr);
	uFnLocs->FunctionFlags |= 0x400;

	return Locs_Params.ReturnValue;
};

// Function Core.Object.Caps
// [0xEB00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

class FString UObject::Caps(class FString S)
{
	static UFunction* uFnCaps = nullptr;

	if (!uFnCaps)
	{
		uFnCaps = UFunction::FindFunction("Function Core.Object.Caps");
	}

	UObject_execCaps_Params Caps_Params;
	memset(&Caps_Params, 0, sizeof(Caps_Params));
	memcpy_s(&Caps_Params.S, sizeof(Caps_Params.S), &S, sizeof(S));

	uFnCaps->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnCaps, &Caps_Params, nullptr);
	uFnCaps->FunctionFlags |= 0x400;

	return Caps_Params.ReturnValue;
};

// Function Core.Object.Right
// [0xEA00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

class FString UObject::Right(class FString S, int32_t I)
{
	static UFunction* uFnRight = nullptr;

	if (!uFnRight)
	{
		uFnRight = UFunction::FindFunction("Function Core.Object.Right");
	}

	UObject_execRight_Params Right_Params;
	memset(&Right_Params, 0, sizeof(Right_Params));
	memcpy_s(&Right_Params.S, sizeof(Right_Params.S), &S, sizeof(S));
	memcpy_s(&Right_Params.I, sizeof(Right_Params.I), &I, sizeof(I));

	uFnRight->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnRight, &Right_Params, nullptr);
	uFnRight->FunctionFlags |= 0x400;

	return Right_Params.ReturnValue;
};

// Function Core.Object.Left
// [0x8000022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

class FString UObject::Left(class FString S, int32_t I)
{
	static UFunction* uFnLeft = nullptr;

	if (!uFnLeft)
	{
		uFnLeft = UFunction::FindFunction("Function Core.Object.Left");
	}

	UObject_execLeft_Params Left_Params;
	memset(&Left_Params, 0, sizeof(Left_Params));
	memcpy_s(&Left_Params.S, sizeof(Left_Params.S), &S, sizeof(S));
	memcpy_s(&Left_Params.I, sizeof(Left_Params.I), &I, sizeof(I));

	uFnLeft->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLeft, &Left_Params, nullptr);
	uFnLeft->FunctionFlags |= 0x400;

	return Left_Params.ReturnValue;
};

// Function Core.Object.Mid
// [0x7F00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)
// int32_t                        J                              (CPF_OptionalParm | CPF_Parm)

class FString UObject::Mid(class FString S, int32_t I, int32_t J)
{
	static UFunction* uFnMid = nullptr;

	if (!uFnMid)
	{
		uFnMid = UFunction::FindFunction("Function Core.Object.Mid");
	}

	UObject_execMid_Params Mid_Params;
	memset(&Mid_Params, 0, sizeof(Mid_Params));
	memcpy_s(&Mid_Params.S, sizeof(Mid_Params.S), &S, sizeof(S));
	memcpy_s(&Mid_Params.I, sizeof(Mid_Params.I), &I, sizeof(I));
	memcpy_s(&Mid_Params.J, sizeof(Mid_Params.J), &J, sizeof(J));

	uFnMid->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMid, &Mid_Params, nullptr);
	uFnMid->FunctionFlags |= 0x400;

	return Mid_Params.ReturnValue;
};

// Function Core.Object.InStr
// [0x7E00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  T                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// bool                           bSearchFromRight               (CPF_OptionalParm | CPF_Parm)
// bool                           bIgnoreCase                    (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartPos                       (CPF_OptionalParm | CPF_Parm)

int32_t UObject::InStr(class FString S, class FString T, bool bSearchFromRight, bool bIgnoreCase, int32_t StartPos)
{
	static UFunction* uFnInStr = nullptr;

	if (!uFnInStr)
	{
		uFnInStr = UFunction::FindFunction("Function Core.Object.InStr");
	}

	UObject_execInStr_Params InStr_Params;
	memset(&InStr_Params, 0, sizeof(InStr_Params));
	memcpy_s(&InStr_Params.S, sizeof(InStr_Params.S), &S, sizeof(S));
	memcpy_s(&InStr_Params.T, sizeof(InStr_Params.T), &T, sizeof(T));
	InStr_Params.bSearchFromRight = bSearchFromRight;
	InStr_Params.bIgnoreCase = bIgnoreCase;
	memcpy_s(&InStr_Params.StartPos, sizeof(InStr_Params.StartPos), &StartPos, sizeof(StartPos));

	uFnInStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnInStr, &InStr_Params, nullptr);
	uFnInStr->FunctionFlags |= 0x400;

	return InStr_Params.ReturnValue;
};

// Function Core.Object.Len
// [0x7D00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

int32_t UObject::Len(class FString S)
{
	static UFunction* uFnLen = nullptr;

	if (!uFnLen)
	{
		uFnLen = UFunction::FindFunction("Function Core.Object.Len");
	}

	UObject_execLen_Params Len_Params;
	memset(&Len_Params, 0, sizeof(Len_Params));
	memcpy_s(&Len_Params.S, sizeof(Len_Params.S), &S, sizeof(S));

	uFnLen->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLen, &Len_Params, nullptr);
	uFnLen->FunctionFlags |= 0x400;

	return Len_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_StrStr
// [0x14400423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[45])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  A                              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class FString UObject::SubtractEqual_StrStr(class FString B, class FString& A)
{
	static UFunction* uFnSubtractEqual_StrStr = nullptr;

	if (!uFnSubtractEqual_StrStr)
	{
		uFnSubtractEqual_StrStr = UFunction::FindFunction("Function Core.Object.SubtractEqual_StrStr");
	}

	UObject_execSubtractEqual_StrStr_Params SubtractEqual_StrStr_Params;
	memset(&SubtractEqual_StrStr_Params, 0, sizeof(SubtractEqual_StrStr_Params));
	memcpy_s(&SubtractEqual_StrStr_Params.B, sizeof(SubtractEqual_StrStr_Params.B), &B, sizeof(B));
	memcpy_s(&SubtractEqual_StrStr_Params.A, sizeof(SubtractEqual_StrStr_Params.A), &A, sizeof(A));

	uFnSubtractEqual_StrStr->iNative = 0;
	uFnSubtractEqual_StrStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_StrStr, &SubtractEqual_StrStr_Params, nullptr);
	uFnSubtractEqual_StrStr->FunctionFlags |= 0x400;
	uFnSubtractEqual_StrStr->iNative = 45;

	memcpy_s(&A, sizeof(A), &SubtractEqual_StrStr_Params.A, sizeof(SubtractEqual_StrStr_Params.A));

	return SubtractEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.AtEqual_StrStr
// [0x14300423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[44])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  A                              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class FString UObject::AtEqual_StrStr(class FString B, class FString& A)
{
	static UFunction* uFnAtEqual_StrStr = nullptr;

	if (!uFnAtEqual_StrStr)
	{
		uFnAtEqual_StrStr = UFunction::FindFunction("Function Core.Object.AtEqual_StrStr");
	}

	UObject_execAtEqual_StrStr_Params AtEqual_StrStr_Params;
	memset(&AtEqual_StrStr_Params, 0, sizeof(AtEqual_StrStr_Params));
	memcpy_s(&AtEqual_StrStr_Params.B, sizeof(AtEqual_StrStr_Params.B), &B, sizeof(B));
	memcpy_s(&AtEqual_StrStr_Params.A, sizeof(AtEqual_StrStr_Params.A), &A, sizeof(A));

	uFnAtEqual_StrStr->iNative = 0;
	uFnAtEqual_StrStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAtEqual_StrStr, &AtEqual_StrStr_Params, nullptr);
	uFnAtEqual_StrStr->FunctionFlags |= 0x400;
	uFnAtEqual_StrStr->iNative = 44;

	memcpy_s(&A, sizeof(A), &AtEqual_StrStr_Params.A, sizeof(AtEqual_StrStr_Params.A));

	return AtEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.ConcatEqual_StrStr
// [0x14200423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[44])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  A                              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class FString UObject::ConcatEqual_StrStr(class FString B, class FString& A)
{
	static UFunction* uFnConcatEqual_StrStr = nullptr;

	if (!uFnConcatEqual_StrStr)
	{
		uFnConcatEqual_StrStr = UFunction::FindFunction("Function Core.Object.ConcatEqual_StrStr");
	}

	UObject_execConcatEqual_StrStr_Params ConcatEqual_StrStr_Params;
	memset(&ConcatEqual_StrStr_Params, 0, sizeof(ConcatEqual_StrStr_Params));
	memcpy_s(&ConcatEqual_StrStr_Params.B, sizeof(ConcatEqual_StrStr_Params.B), &B, sizeof(B));
	memcpy_s(&ConcatEqual_StrStr_Params.A, sizeof(ConcatEqual_StrStr_Params.A), &A, sizeof(A));

	uFnConcatEqual_StrStr->iNative = 0;
	uFnConcatEqual_StrStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnConcatEqual_StrStr, &ConcatEqual_StrStr_Params, nullptr);
	uFnConcatEqual_StrStr->FunctionFlags |= 0x400;
	uFnConcatEqual_StrStr->iNative = 44;

	memcpy_s(&A, sizeof(A), &ConcatEqual_StrStr_Params.A, sizeof(ConcatEqual_StrStr_Params.A));

	return ConcatEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.ComplementEqual_StrStr
// [0x7C00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::ComplementEqual_StrStr(class FString A, class FString B)
{
	static UFunction* uFnComplementEqual_StrStr = nullptr;

	if (!uFnComplementEqual_StrStr)
	{
		uFnComplementEqual_StrStr = UFunction::FindFunction("Function Core.Object.ComplementEqual_StrStr");
	}

	UObject_execComplementEqual_StrStr_Params ComplementEqual_StrStr_Params;
	memset(&ComplementEqual_StrStr_Params, 0, sizeof(ComplementEqual_StrStr_Params));
	memcpy_s(&ComplementEqual_StrStr_Params.A, sizeof(ComplementEqual_StrStr_Params.A), &A, sizeof(A));
	memcpy_s(&ComplementEqual_StrStr_Params.B, sizeof(ComplementEqual_StrStr_Params.B), &B, sizeof(B));

	uFnComplementEqual_StrStr->iNative = 0;
	uFnComplementEqual_StrStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnComplementEqual_StrStr, &ComplementEqual_StrStr_Params, nullptr);
	uFnComplementEqual_StrStr->FunctionFlags |= 0x400;
	uFnComplementEqual_StrStr->iNative = 24;

	return ComplementEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.NotEqual_StrStr
// [0x7B00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[26])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::NotEqual_StrStr(class FString A, class FString B)
{
	static UFunction* uFnNotEqual_StrStr = nullptr;

	if (!uFnNotEqual_StrStr)
	{
		uFnNotEqual_StrStr = UFunction::FindFunction("Function Core.Object.NotEqual_StrStr");
	}

	UObject_execNotEqual_StrStr_Params NotEqual_StrStr_Params;
	memset(&NotEqual_StrStr_Params, 0, sizeof(NotEqual_StrStr_Params));
	memcpy_s(&NotEqual_StrStr_Params.A, sizeof(NotEqual_StrStr_Params.A), &A, sizeof(A));
	memcpy_s(&NotEqual_StrStr_Params.B, sizeof(NotEqual_StrStr_Params.B), &B, sizeof(B));

	uFnNotEqual_StrStr->iNative = 0;
	uFnNotEqual_StrStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNotEqual_StrStr, &NotEqual_StrStr_Params, nullptr);
	uFnNotEqual_StrStr->FunctionFlags |= 0x400;
	uFnNotEqual_StrStr->iNative = 26;

	return NotEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_StrStr
// [0x7A00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::EqualEqual_StrStr(class FString A, class FString B)
{
	static UFunction* uFnEqualEqual_StrStr = nullptr;

	if (!uFnEqualEqual_StrStr)
	{
		uFnEqualEqual_StrStr = UFunction::FindFunction("Function Core.Object.EqualEqual_StrStr");
	}

	UObject_execEqualEqual_StrStr_Params EqualEqual_StrStr_Params;
	memset(&EqualEqual_StrStr_Params, 0, sizeof(EqualEqual_StrStr_Params));
	memcpy_s(&EqualEqual_StrStr_Params.A, sizeof(EqualEqual_StrStr_Params.A), &A, sizeof(A));
	memcpy_s(&EqualEqual_StrStr_Params.B, sizeof(EqualEqual_StrStr_Params.B), &B, sizeof(B));

	uFnEqualEqual_StrStr->iNative = 0;
	uFnEqualEqual_StrStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_StrStr, &EqualEqual_StrStr_Params, nullptr);
	uFnEqualEqual_StrStr->FunctionFlags |= 0x400;
	uFnEqualEqual_StrStr->iNative = 24;

	return EqualEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.GreaterEqual_StrStr
// [0x7900023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::GreaterEqual_StrStr(class FString A, class FString B)
{
	static UFunction* uFnGreaterEqual_StrStr = nullptr;

	if (!uFnGreaterEqual_StrStr)
	{
		uFnGreaterEqual_StrStr = UFunction::FindFunction("Function Core.Object.GreaterEqual_StrStr");
	}

	UObject_execGreaterEqual_StrStr_Params GreaterEqual_StrStr_Params;
	memset(&GreaterEqual_StrStr_Params, 0, sizeof(GreaterEqual_StrStr_Params));
	memcpy_s(&GreaterEqual_StrStr_Params.A, sizeof(GreaterEqual_StrStr_Params.A), &A, sizeof(A));
	memcpy_s(&GreaterEqual_StrStr_Params.B, sizeof(GreaterEqual_StrStr_Params.B), &B, sizeof(B));

	uFnGreaterEqual_StrStr->iNative = 0;
	uFnGreaterEqual_StrStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGreaterEqual_StrStr, &GreaterEqual_StrStr_Params, nullptr);
	uFnGreaterEqual_StrStr->FunctionFlags |= 0x400;
	uFnGreaterEqual_StrStr->iNative = 24;

	return GreaterEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.LessEqual_StrStr
// [0x7800023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::LessEqual_StrStr(class FString A, class FString B)
{
	static UFunction* uFnLessEqual_StrStr = nullptr;

	if (!uFnLessEqual_StrStr)
	{
		uFnLessEqual_StrStr = UFunction::FindFunction("Function Core.Object.LessEqual_StrStr");
	}

	UObject_execLessEqual_StrStr_Params LessEqual_StrStr_Params;
	memset(&LessEqual_StrStr_Params, 0, sizeof(LessEqual_StrStr_Params));
	memcpy_s(&LessEqual_StrStr_Params.A, sizeof(LessEqual_StrStr_Params.A), &A, sizeof(A));
	memcpy_s(&LessEqual_StrStr_Params.B, sizeof(LessEqual_StrStr_Params.B), &B, sizeof(B));

	uFnLessEqual_StrStr->iNative = 0;
	uFnLessEqual_StrStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLessEqual_StrStr, &LessEqual_StrStr_Params, nullptr);
	uFnLessEqual_StrStr->FunctionFlags |= 0x400;
	uFnLessEqual_StrStr->iNative = 24;

	return LessEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.Greater_StrStr
// [0x7400023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::Greater_StrStr(class FString A, class FString B)
{
	static UFunction* uFnGreater_StrStr = nullptr;

	if (!uFnGreater_StrStr)
	{
		uFnGreater_StrStr = UFunction::FindFunction("Function Core.Object.Greater_StrStr");
	}

	UObject_execGreater_StrStr_Params Greater_StrStr_Params;
	memset(&Greater_StrStr_Params, 0, sizeof(Greater_StrStr_Params));
	memcpy_s(&Greater_StrStr_Params.A, sizeof(Greater_StrStr_Params.A), &A, sizeof(A));
	memcpy_s(&Greater_StrStr_Params.B, sizeof(Greater_StrStr_Params.B), &B, sizeof(B));

	uFnGreater_StrStr->iNative = 0;
	uFnGreater_StrStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGreater_StrStr, &Greater_StrStr_Params, nullptr);
	uFnGreater_StrStr->FunctionFlags |= 0x400;
	uFnGreater_StrStr->iNative = 24;

	return Greater_StrStr_Params.ReturnValue;
};

// Function Core.Object.Less_StrStr
// [0x7300023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::Less_StrStr(class FString A, class FString B)
{
	static UFunction* uFnLess_StrStr = nullptr;

	if (!uFnLess_StrStr)
	{
		uFnLess_StrStr = UFunction::FindFunction("Function Core.Object.Less_StrStr");
	}

	UObject_execLess_StrStr_Params Less_StrStr_Params;
	memset(&Less_StrStr_Params, 0, sizeof(Less_StrStr_Params));
	memcpy_s(&Less_StrStr_Params.A, sizeof(Less_StrStr_Params.A), &A, sizeof(A));
	memcpy_s(&Less_StrStr_Params.B, sizeof(Less_StrStr_Params.B), &B, sizeof(B));

	uFnLess_StrStr->iNative = 0;
	uFnLess_StrStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLess_StrStr, &Less_StrStr_Params, nullptr);
	uFnLess_StrStr->FunctionFlags |= 0x400;
	uFnLess_StrStr->iNative = 24;

	return Less_StrStr_Params.ReturnValue;
};

// Function Core.Object.At_StrStr
// [0xA800023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[40])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  A                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

class FString UObject::At_StrStr(class FString A, class FString B)
{
	static UFunction* uFnAt_StrStr = nullptr;

	if (!uFnAt_StrStr)
	{
		uFnAt_StrStr = UFunction::FindFunction("Function Core.Object.At_StrStr");
	}

	UObject_execAt_StrStr_Params At_StrStr_Params;
	memset(&At_StrStr_Params, 0, sizeof(At_StrStr_Params));
	memcpy_s(&At_StrStr_Params.A, sizeof(At_StrStr_Params.A), &A, sizeof(A));
	memcpy_s(&At_StrStr_Params.B, sizeof(At_StrStr_Params.B), &B, sizeof(B));

	uFnAt_StrStr->iNative = 0;
	uFnAt_StrStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAt_StrStr, &At_StrStr_Params, nullptr);
	uFnAt_StrStr->FunctionFlags |= 0x400;
	uFnAt_StrStr->iNative = 40;

	return At_StrStr_Params.ReturnValue;
};

// Function Core.Object.Concat_StrStr
// [0x7000023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[40])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  A                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

class FString UObject::Concat_StrStr(class FString A, class FString B)
{
	static UFunction* uFnConcat_StrStr = nullptr;

	if (!uFnConcat_StrStr)
	{
		uFnConcat_StrStr = UFunction::FindFunction("Function Core.Object.Concat_StrStr");
	}

	UObject_execConcat_StrStr_Params Concat_StrStr_Params;
	memset(&Concat_StrStr_Params, 0, sizeof(Concat_StrStr_Params));
	memcpy_s(&Concat_StrStr_Params.A, sizeof(Concat_StrStr_Params.A), &A, sizeof(A));
	memcpy_s(&Concat_StrStr_Params.B, sizeof(Concat_StrStr_Params.B), &B, sizeof(B));

	uFnConcat_StrStr->iNative = 0;
	uFnConcat_StrStr->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnConcat_StrStr, &Concat_StrStr_Params, nullptr);
	uFnConcat_StrStr->FunctionFlags |= 0x400;
	uFnConcat_StrStr->iNative = 40;

	return Concat_StrStr_Params.ReturnValue;
};

// Function Core.Object.MakeRotator
// [0x00822003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Pitch                          (CPF_Parm)
// int32_t                        Yaw                            (CPF_Parm)
// int32_t                        Roll                           (CPF_Parm)

struct FRotator UObject::MakeRotator(int32_t Pitch, int32_t Yaw, int32_t Roll)
{
	static UFunction* uFnMakeRotator = nullptr;

	if (!uFnMakeRotator)
	{
		uFnMakeRotator = UFunction::FindFunction("Function Core.Object.MakeRotator");
	}

	UObject_execMakeRotator_Params MakeRotator_Params;
	memset(&MakeRotator_Params, 0, sizeof(MakeRotator_Params));
	memcpy_s(&MakeRotator_Params.Pitch, sizeof(MakeRotator_Params.Pitch), &Pitch, sizeof(Pitch));
	memcpy_s(&MakeRotator_Params.Yaw, sizeof(MakeRotator_Params.Yaw), &Yaw, sizeof(Yaw));
	memcpy_s(&MakeRotator_Params.Roll, sizeof(MakeRotator_Params.Roll), &Roll, sizeof(Roll));

	UObject::StaticClass()->ProcessEvent(uFnMakeRotator, &MakeRotator_Params, nullptr);

	return MakeRotator_Params.ReturnValue;
};

// Function Core.Object.SClampRotAxis
// [0x00422103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)
// int32_t                        ViewAxis                       (CPF_Parm)
// int32_t                        MaxLimit                       (CPF_Parm)
// int32_t                        MinLimit                       (CPF_Parm)
// float                          InterpolationSpeed             (CPF_Parm)
// int32_t                        out_DeltaViewAxis              (CPF_Parm | CPF_OutParm)

bool UObject::SClampRotAxis(float DeltaTime, int32_t ViewAxis, int32_t MaxLimit, int32_t MinLimit, float InterpolationSpeed, int32_t& out_DeltaViewAxis)
{
	static UFunction* uFnSClampRotAxis = nullptr;

	if (!uFnSClampRotAxis)
	{
		uFnSClampRotAxis = UFunction::FindFunction("Function Core.Object.SClampRotAxis");
	}

	UObject_execSClampRotAxis_Params SClampRotAxis_Params;
	memset(&SClampRotAxis_Params, 0, sizeof(SClampRotAxis_Params));
	memcpy_s(&SClampRotAxis_Params.DeltaTime, sizeof(SClampRotAxis_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&SClampRotAxis_Params.ViewAxis, sizeof(SClampRotAxis_Params.ViewAxis), &ViewAxis, sizeof(ViewAxis));
	memcpy_s(&SClampRotAxis_Params.MaxLimit, sizeof(SClampRotAxis_Params.MaxLimit), &MaxLimit, sizeof(MaxLimit));
	memcpy_s(&SClampRotAxis_Params.MinLimit, sizeof(SClampRotAxis_Params.MinLimit), &MinLimit, sizeof(MinLimit));
	memcpy_s(&SClampRotAxis_Params.InterpolationSpeed, sizeof(SClampRotAxis_Params.InterpolationSpeed), &InterpolationSpeed, sizeof(InterpolationSpeed));
	memcpy_s(&SClampRotAxis_Params.out_DeltaViewAxis, sizeof(SClampRotAxis_Params.out_DeltaViewAxis), &out_DeltaViewAxis, sizeof(out_DeltaViewAxis));

	UObject::StaticClass()->ProcessEvent(uFnSClampRotAxis, &SClampRotAxis_Params, nullptr);

	memcpy_s(&out_DeltaViewAxis, sizeof(out_DeltaViewAxis), &SClampRotAxis_Params.out_DeltaViewAxis, sizeof(SClampRotAxis_Params.out_DeltaViewAxis));

	return SClampRotAxis_Params.ReturnValue;
};

// Function Core.Object.ClampRotAxisFromRange
// [0x00022103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Current                        (CPF_Parm)
// int32_t                        Min                            (CPF_Parm)
// int32_t                        Max                            (CPF_Parm)

int32_t UObject::ClampRotAxisFromRange(int32_t Current, int32_t Min, int32_t Max)
{
	static UFunction* uFnClampRotAxisFromRange = nullptr;

	if (!uFnClampRotAxisFromRange)
	{
		uFnClampRotAxisFromRange = UFunction::FindFunction("Function Core.Object.ClampRotAxisFromRange");
	}

	UObject_execClampRotAxisFromRange_Params ClampRotAxisFromRange_Params;
	memset(&ClampRotAxisFromRange_Params, 0, sizeof(ClampRotAxisFromRange_Params));
	memcpy_s(&ClampRotAxisFromRange_Params.Current, sizeof(ClampRotAxisFromRange_Params.Current), &Current, sizeof(Current));
	memcpy_s(&ClampRotAxisFromRange_Params.Min, sizeof(ClampRotAxisFromRange_Params.Min), &Min, sizeof(Min));
	memcpy_s(&ClampRotAxisFromRange_Params.Max, sizeof(ClampRotAxisFromRange_Params.Max), &Max, sizeof(Max));

	UObject::StaticClass()->ProcessEvent(uFnClampRotAxisFromRange, &ClampRotAxisFromRange_Params, nullptr);

	return ClampRotAxisFromRange_Params.ReturnValue;
};

// Function Core.Object.ClampRotAxisFromBase
// [0x00022103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Current                        (CPF_Parm)
// int32_t                        Center                         (CPF_Parm)
// int32_t                        MaxDelta                       (CPF_Parm)

int32_t UObject::ClampRotAxisFromBase(int32_t Current, int32_t Center, int32_t MaxDelta)
{
	static UFunction* uFnClampRotAxisFromBase = nullptr;

	if (!uFnClampRotAxisFromBase)
	{
		uFnClampRotAxisFromBase = UFunction::FindFunction("Function Core.Object.ClampRotAxisFromBase");
	}

	UObject_execClampRotAxisFromBase_Params ClampRotAxisFromBase_Params;
	memset(&ClampRotAxisFromBase_Params, 0, sizeof(ClampRotAxisFromBase_Params));
	memcpy_s(&ClampRotAxisFromBase_Params.Current, sizeof(ClampRotAxisFromBase_Params.Current), &Current, sizeof(Current));
	memcpy_s(&ClampRotAxisFromBase_Params.Center, sizeof(ClampRotAxisFromBase_Params.Center), &Center, sizeof(Center));
	memcpy_s(&ClampRotAxisFromBase_Params.MaxDelta, sizeof(ClampRotAxisFromBase_Params.MaxDelta), &MaxDelta, sizeof(MaxDelta));

	UObject::StaticClass()->ProcessEvent(uFnClampRotAxisFromBase, &ClampRotAxisFromBase_Params, nullptr);

	return ClampRotAxisFromBase_Params.ReturnValue;
};

// Function Core.Object.ClampRotAxis
// [0x00422103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ViewAxis                       (CPF_Parm)
// int32_t                        MaxLimit                       (CPF_Parm)
// int32_t                        MinLimit                       (CPF_Parm)
// int32_t                        out_DeltaViewAxis              (CPF_Parm | CPF_OutParm)

void UObject::ClampRotAxis(int32_t ViewAxis, int32_t MaxLimit, int32_t MinLimit, int32_t& out_DeltaViewAxis)
{
	static UFunction* uFnClampRotAxis = nullptr;

	if (!uFnClampRotAxis)
	{
		uFnClampRotAxis = UFunction::FindFunction("Function Core.Object.ClampRotAxis");
	}

	UObject_execClampRotAxis_Params ClampRotAxis_Params;
	memset(&ClampRotAxis_Params, 0, sizeof(ClampRotAxis_Params));
	memcpy_s(&ClampRotAxis_Params.ViewAxis, sizeof(ClampRotAxis_Params.ViewAxis), &ViewAxis, sizeof(ViewAxis));
	memcpy_s(&ClampRotAxis_Params.MaxLimit, sizeof(ClampRotAxis_Params.MaxLimit), &MaxLimit, sizeof(MaxLimit));
	memcpy_s(&ClampRotAxis_Params.MinLimit, sizeof(ClampRotAxis_Params.MinLimit), &MinLimit, sizeof(MinLimit));
	memcpy_s(&ClampRotAxis_Params.out_DeltaViewAxis, sizeof(ClampRotAxis_Params.out_DeltaViewAxis), &out_DeltaViewAxis, sizeof(out_DeltaViewAxis));

	UObject::StaticClass()->ProcessEvent(uFnClampRotAxis, &ClampRotAxis_Params, nullptr);

	memcpy_s(&out_DeltaViewAxis, sizeof(out_DeltaViewAxis), &ClampRotAxis_Params.out_DeltaViewAxis, sizeof(ClampRotAxis_Params.out_DeltaViewAxis));
};

// Function Core.Object.RSize
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                R                              (CPF_Parm)

float UObject::RSize(struct FRotator R)
{
	static UFunction* uFnRSize = nullptr;

	if (!uFnRSize)
	{
		uFnRSize = UFunction::FindFunction("Function Core.Object.RSize");
	}

	UObject_execRSize_Params RSize_Params;
	memset(&RSize_Params, 0, sizeof(RSize_Params));
	memcpy_s(&RSize_Params.R, sizeof(RSize_Params.R), &R, sizeof(R));

	uFnRSize->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnRSize, &RSize_Params, nullptr);
	uFnRSize->FunctionFlags |= 0x400;

	return RSize_Params.ReturnValue;
};

// Function Core.Object.RDiff
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

float UObject::RDiff(struct FRotator A, struct FRotator B)
{
	static UFunction* uFnRDiff = nullptr;

	if (!uFnRDiff)
	{
		uFnRDiff = UFunction::FindFunction("Function Core.Object.RDiff");
	}

	UObject_execRDiff_Params RDiff_Params;
	memset(&RDiff_Params, 0, sizeof(RDiff_Params));
	memcpy_s(&RDiff_Params.A, sizeof(RDiff_Params.A), &A, sizeof(A));
	memcpy_s(&RDiff_Params.B, sizeof(RDiff_Params.B), &B, sizeof(B));

	uFnRDiff->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnRDiff, &RDiff_Params, nullptr);
	uFnRDiff->FunctionFlags |= 0x400;

	return RDiff_Params.ReturnValue;
};

// Function Core.Object.NormalizeRotAxis
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Angle                          (CPF_Parm)

int32_t UObject::NormalizeRotAxis(int32_t Angle)
{
	static UFunction* uFnNormalizeRotAxis = nullptr;

	if (!uFnNormalizeRotAxis)
	{
		uFnNormalizeRotAxis = UFunction::FindFunction("Function Core.Object.NormalizeRotAxis");
	}

	UObject_execNormalizeRotAxis_Params NormalizeRotAxis_Params;
	memset(&NormalizeRotAxis_Params, 0, sizeof(NormalizeRotAxis_Params));
	memcpy_s(&NormalizeRotAxis_Params.Angle, sizeof(NormalizeRotAxis_Params.Angle), &Angle, sizeof(Angle));

	uFnNormalizeRotAxis->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNormalizeRotAxis, &NormalizeRotAxis_Params, nullptr);
	uFnNormalizeRotAxis->FunctionFlags |= 0x400;

	return NormalizeRotAxis_Params.ReturnValue;
};

// Function Core.Object.RInterpTo
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                Current                        (CPF_Parm)
// struct FRotator                Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)
// bool                           bConstantInterpSpeed           (CPF_OptionalParm | CPF_Parm)

struct FRotator UObject::RInterpTo(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, bool bConstantInterpSpeed)
{
	static UFunction* uFnRInterpTo = nullptr;

	if (!uFnRInterpTo)
	{
		uFnRInterpTo = UFunction::FindFunction("Function Core.Object.RInterpTo");
	}

	UObject_execRInterpTo_Params RInterpTo_Params;
	memset(&RInterpTo_Params, 0, sizeof(RInterpTo_Params));
	memcpy_s(&RInterpTo_Params.Current, sizeof(RInterpTo_Params.Current), &Current, sizeof(Current));
	memcpy_s(&RInterpTo_Params.Target, sizeof(RInterpTo_Params.Target), &Target, sizeof(Target));
	memcpy_s(&RInterpTo_Params.DeltaTime, sizeof(RInterpTo_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&RInterpTo_Params.InterpSpeed, sizeof(RInterpTo_Params.InterpSpeed), &InterpSpeed, sizeof(InterpSpeed));
	RInterpTo_Params.bConstantInterpSpeed = bConstantInterpSpeed;

	uFnRInterpTo->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnRInterpTo, &RInterpTo_Params, nullptr);
	uFnRInterpTo->FunctionFlags |= 0x400;

	return RInterpTo_Params.ReturnValue;
};

// Function Core.Object.RTransform
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                R                              (CPF_Parm)
// struct FRotator                RBasis                         (CPF_Parm)

struct FRotator UObject::RTransform(struct FRotator R, struct FRotator RBasis)
{
	static UFunction* uFnRTransform = nullptr;

	if (!uFnRTransform)
	{
		uFnRTransform = UFunction::FindFunction("Function Core.Object.RTransform");
	}

	UObject_execRTransform_Params RTransform_Params;
	memset(&RTransform_Params, 0, sizeof(RTransform_Params));
	memcpy_s(&RTransform_Params.R, sizeof(RTransform_Params.R), &R, sizeof(R));
	memcpy_s(&RTransform_Params.RBasis, sizeof(RTransform_Params.RBasis), &RBasis, sizeof(RBasis));

	uFnRTransform->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnRTransform, &RTransform_Params, nullptr);
	uFnRTransform->FunctionFlags |= 0x400;

	return RTransform_Params.ReturnValue;
};

// Function Core.Object.RLerp
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// bool                           bShortestPath                  (CPF_OptionalParm | CPF_Parm)

struct FRotator UObject::RLerp(struct FRotator A, struct FRotator B, float Alpha, bool bShortestPath)
{
	static UFunction* uFnRLerp = nullptr;

	if (!uFnRLerp)
	{
		uFnRLerp = UFunction::FindFunction("Function Core.Object.RLerp");
	}

	UObject_execRLerp_Params RLerp_Params;
	memset(&RLerp_Params, 0, sizeof(RLerp_Params));
	memcpy_s(&RLerp_Params.A, sizeof(RLerp_Params.A), &A, sizeof(A));
	memcpy_s(&RLerp_Params.B, sizeof(RLerp_Params.B), &B, sizeof(B));
	memcpy_s(&RLerp_Params.Alpha, sizeof(RLerp_Params.Alpha), &Alpha, sizeof(Alpha));
	RLerp_Params.bShortestPath = bShortestPath;

	uFnRLerp->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnRLerp, &RLerp_Params, nullptr);
	uFnRLerp->FunctionFlags |= 0x400;

	return RLerp_Params.ReturnValue;
};

// Function Core.Object.Normalize
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                Rot                            (CPF_Parm)

struct FRotator UObject::Normalize(struct FRotator Rot)
{
	static UFunction* uFnNormalize = nullptr;

	if (!uFnNormalize)
	{
		uFnNormalize = UFunction::FindFunction("Function Core.Object.Normalize");
	}

	UObject_execNormalize_Params Normalize_Params;
	memset(&Normalize_Params, 0, sizeof(Normalize_Params));
	memcpy_s(&Normalize_Params.Rot, sizeof(Normalize_Params.Rot), &Rot, sizeof(Rot));

	uFnNormalize->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNormalize, &Normalize_Params, nullptr);
	uFnNormalize->FunctionFlags |= 0x400;

	return Normalize_Params.ReturnValue;
};

// Function Core.Object.OrthoRotation
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 X                              (CPF_Parm)
// struct FVector                 Y                              (CPF_Parm)
// struct FVector                 Z                              (CPF_Parm)

struct FRotator UObject::OrthoRotation(struct FVector X, struct FVector Y, struct FVector Z)
{
	static UFunction* uFnOrthoRotation = nullptr;

	if (!uFnOrthoRotation)
	{
		uFnOrthoRotation = UFunction::FindFunction("Function Core.Object.OrthoRotation");
	}

	UObject_execOrthoRotation_Params OrthoRotation_Params;
	memset(&OrthoRotation_Params, 0, sizeof(OrthoRotation_Params));
	memcpy_s(&OrthoRotation_Params.X, sizeof(OrthoRotation_Params.X), &X, sizeof(X));
	memcpy_s(&OrthoRotation_Params.Y, sizeof(OrthoRotation_Params.Y), &Y, sizeof(Y));
	memcpy_s(&OrthoRotation_Params.Z, sizeof(OrthoRotation_Params.Z), &Z, sizeof(Z));

	uFnOrthoRotation->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnOrthoRotation, &OrthoRotation_Params, nullptr);
	uFnOrthoRotation->FunctionFlags |= 0x400;

	return OrthoRotation_Params.ReturnValue;
};

// Function Core.Object.RotRand
// [0x14000026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bRoll                          (CPF_OptionalParm | CPF_Parm)

struct FRotator UObject::RotRand(bool bRoll)
{
	static UFunction* uFnRotRand = nullptr;

	if (!uFnRotRand)
	{
		uFnRotRand = UFunction::FindFunction("Function Core.Object.RotRand");
	}

	UObject_execRotRand_Params RotRand_Params;
	memset(&RotRand_Params, 0, sizeof(RotRand_Params));
	RotRand_Params.bRoll = bRoll;

	uFnRotRand->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnRotRand, &RotRand_Params, nullptr);
	uFnRotRand->FunctionFlags |= 0x400;

	return RotRand_Params.ReturnValue;
};

// Function Core.Object.GetRotatorAxis
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// int32_t                        Axis                           (CPF_Parm)

struct FVector UObject::GetRotatorAxis(struct FRotator A, int32_t Axis)
{
	static UFunction* uFnGetRotatorAxis = nullptr;

	if (!uFnGetRotatorAxis)
	{
		uFnGetRotatorAxis = UFunction::FindFunction("Function Core.Object.GetRotatorAxis");
	}

	UObject_execGetRotatorAxis_Params GetRotatorAxis_Params;
	memset(&GetRotatorAxis_Params, 0, sizeof(GetRotatorAxis_Params));
	memcpy_s(&GetRotatorAxis_Params.A, sizeof(GetRotatorAxis_Params.A), &A, sizeof(A));
	memcpy_s(&GetRotatorAxis_Params.Axis, sizeof(GetRotatorAxis_Params.Axis), &Axis, sizeof(Axis));

	uFnGetRotatorAxis->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetRotatorAxis, &GetRotatorAxis_Params, nullptr);
	uFnGetRotatorAxis->FunctionFlags |= 0x400;

	return GetRotatorAxis_Params.ReturnValue;
};

// Function Core.Object.GetUnAxes
// [0xE600422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                A                              (CPF_Parm)
// struct FVector                 X                              (CPF_Parm | CPF_OutParm)
// struct FVector                 Y                              (CPF_Parm | CPF_OutParm)
// struct FVector                 Z                              (CPF_Parm | CPF_OutParm)

void UObject::GetUnAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z)
{
	static UFunction* uFnGetUnAxes = nullptr;

	if (!uFnGetUnAxes)
	{
		uFnGetUnAxes = UFunction::FindFunction("Function Core.Object.GetUnAxes");
	}

	UObject_execGetUnAxes_Params GetUnAxes_Params;
	memset(&GetUnAxes_Params, 0, sizeof(GetUnAxes_Params));
	memcpy_s(&GetUnAxes_Params.A, sizeof(GetUnAxes_Params.A), &A, sizeof(A));
	memcpy_s(&GetUnAxes_Params.X, sizeof(GetUnAxes_Params.X), &X, sizeof(X));
	memcpy_s(&GetUnAxes_Params.Y, sizeof(GetUnAxes_Params.Y), &Y, sizeof(Y));
	memcpy_s(&GetUnAxes_Params.Z, sizeof(GetUnAxes_Params.Z), &Z, sizeof(Z));

	uFnGetUnAxes->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetUnAxes, &GetUnAxes_Params, nullptr);
	uFnGetUnAxes->FunctionFlags |= 0x400;

	memcpy_s(&X, sizeof(X), &GetUnAxes_Params.X, sizeof(GetUnAxes_Params.X));
	memcpy_s(&Y, sizeof(Y), &GetUnAxes_Params.Y, sizeof(GetUnAxes_Params.Y));
	memcpy_s(&Z, sizeof(Z), &GetUnAxes_Params.Z, sizeof(GetUnAxes_Params.Z));
};

// Function Core.Object.GetAxes
// [0xE500422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                A                              (CPF_Parm)
// struct FVector                 X                              (CPF_Parm | CPF_OutParm)
// struct FVector                 Y                              (CPF_Parm | CPF_OutParm)
// struct FVector                 Z                              (CPF_Parm | CPF_OutParm)

void UObject::GetAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z)
{
	static UFunction* uFnGetAxes = nullptr;

	if (!uFnGetAxes)
	{
		uFnGetAxes = UFunction::FindFunction("Function Core.Object.GetAxes");
	}

	UObject_execGetAxes_Params GetAxes_Params;
	memset(&GetAxes_Params, 0, sizeof(GetAxes_Params));
	memcpy_s(&GetAxes_Params.A, sizeof(GetAxes_Params.A), &A, sizeof(A));
	memcpy_s(&GetAxes_Params.X, sizeof(GetAxes_Params.X), &X, sizeof(X));
	memcpy_s(&GetAxes_Params.Y, sizeof(GetAxes_Params.Y), &Y, sizeof(Y));
	memcpy_s(&GetAxes_Params.Z, sizeof(GetAxes_Params.Z), &Z, sizeof(Z));

	uFnGetAxes->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGetAxes, &GetAxes_Params, nullptr);
	uFnGetAxes->FunctionFlags |= 0x400;

	memcpy_s(&X, sizeof(X), &GetAxes_Params.X, sizeof(GetAxes_Params.X));
	memcpy_s(&Y, sizeof(Y), &GetAxes_Params.Y, sizeof(GetAxes_Params.Y));
	memcpy_s(&Z, sizeof(Z), &GetAxes_Params.Z, sizeof(GetAxes_Params.Z));
};

// Function Core.Object.ClockwiseFrom_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::ClockwiseFrom_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnClockwiseFrom_IntInt = nullptr;

	if (!uFnClockwiseFrom_IntInt)
	{
		uFnClockwiseFrom_IntInt = UFunction::FindFunction("Function Core.Object.ClockwiseFrom_IntInt");
	}

	UObject_execClockwiseFrom_IntInt_Params ClockwiseFrom_IntInt_Params;
	memset(&ClockwiseFrom_IntInt_Params, 0, sizeof(ClockwiseFrom_IntInt_Params));
	memcpy_s(&ClockwiseFrom_IntInt_Params.A, sizeof(ClockwiseFrom_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&ClockwiseFrom_IntInt_Params.B, sizeof(ClockwiseFrom_IntInt_Params.B), &B, sizeof(B));

	uFnClockwiseFrom_IntInt->iNative = 0;
	uFnClockwiseFrom_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnClockwiseFrom_IntInt, &ClockwiseFrom_IntInt_Params, nullptr);
	uFnClockwiseFrom_IntInt->FunctionFlags |= 0x400;
	uFnClockwiseFrom_IntInt->iNative = 24;

	return ClockwiseFrom_IntInt_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_RotatorRotator
// [0x13F00423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                B                              (CPF_Parm)
// struct FRotator                A                              (CPF_Parm | CPF_OutParm)

struct FRotator UObject::SubtractEqual_RotatorRotator(struct FRotator B, struct FRotator& A)
{
	static UFunction* uFnSubtractEqual_RotatorRotator = nullptr;

	if (!uFnSubtractEqual_RotatorRotator)
	{
		uFnSubtractEqual_RotatorRotator = UFunction::FindFunction("Function Core.Object.SubtractEqual_RotatorRotator");
	}

	UObject_execSubtractEqual_RotatorRotator_Params SubtractEqual_RotatorRotator_Params;
	memset(&SubtractEqual_RotatorRotator_Params, 0, sizeof(SubtractEqual_RotatorRotator_Params));
	memcpy_s(&SubtractEqual_RotatorRotator_Params.B, sizeof(SubtractEqual_RotatorRotator_Params.B), &B, sizeof(B));
	memcpy_s(&SubtractEqual_RotatorRotator_Params.A, sizeof(SubtractEqual_RotatorRotator_Params.A), &A, sizeof(A));

	uFnSubtractEqual_RotatorRotator->iNative = 0;
	uFnSubtractEqual_RotatorRotator->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_RotatorRotator, &SubtractEqual_RotatorRotator_Params, nullptr);
	uFnSubtractEqual_RotatorRotator->FunctionFlags |= 0x400;
	uFnSubtractEqual_RotatorRotator->iNative = 34;

	memcpy_s(&A, sizeof(A), &SubtractEqual_RotatorRotator_Params.A, sizeof(SubtractEqual_RotatorRotator_Params.A));

	return SubtractEqual_RotatorRotator_Params.ReturnValue;
};

// Function Core.Object.AddEqual_RotatorRotator
// [0x13E00423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                B                              (CPF_Parm)
// struct FRotator                A                              (CPF_Parm | CPF_OutParm)

struct FRotator UObject::AddEqual_RotatorRotator(struct FRotator B, struct FRotator& A)
{
	static UFunction* uFnAddEqual_RotatorRotator = nullptr;

	if (!uFnAddEqual_RotatorRotator)
	{
		uFnAddEqual_RotatorRotator = UFunction::FindFunction("Function Core.Object.AddEqual_RotatorRotator");
	}

	UObject_execAddEqual_RotatorRotator_Params AddEqual_RotatorRotator_Params;
	memset(&AddEqual_RotatorRotator_Params, 0, sizeof(AddEqual_RotatorRotator_Params));
	memcpy_s(&AddEqual_RotatorRotator_Params.B, sizeof(AddEqual_RotatorRotator_Params.B), &B, sizeof(B));
	memcpy_s(&AddEqual_RotatorRotator_Params.A, sizeof(AddEqual_RotatorRotator_Params.A), &A, sizeof(A));

	uFnAddEqual_RotatorRotator->iNative = 0;
	uFnAddEqual_RotatorRotator->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAddEqual_RotatorRotator, &AddEqual_RotatorRotator_Params, nullptr);
	uFnAddEqual_RotatorRotator->FunctionFlags |= 0x400;
	uFnAddEqual_RotatorRotator->iNative = 34;

	memcpy_s(&A, sizeof(A), &AddEqual_RotatorRotator_Params.A, sizeof(AddEqual_RotatorRotator_Params.A));

	return AddEqual_RotatorRotator_Params.ReturnValue;
};

// Function Core.Object.Subtract_RotatorRotator
// [0x13D00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[20])
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FRotator UObject::Subtract_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* uFnSubtract_RotatorRotator = nullptr;

	if (!uFnSubtract_RotatorRotator)
	{
		uFnSubtract_RotatorRotator = UFunction::FindFunction("Function Core.Object.Subtract_RotatorRotator");
	}

	UObject_execSubtract_RotatorRotator_Params Subtract_RotatorRotator_Params;
	memset(&Subtract_RotatorRotator_Params, 0, sizeof(Subtract_RotatorRotator_Params));
	memcpy_s(&Subtract_RotatorRotator_Params.A, sizeof(Subtract_RotatorRotator_Params.A), &A, sizeof(A));
	memcpy_s(&Subtract_RotatorRotator_Params.B, sizeof(Subtract_RotatorRotator_Params.B), &B, sizeof(B));

	uFnSubtract_RotatorRotator->iNative = 0;
	uFnSubtract_RotatorRotator->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtract_RotatorRotator, &Subtract_RotatorRotator_Params, nullptr);
	uFnSubtract_RotatorRotator->FunctionFlags |= 0x400;
	uFnSubtract_RotatorRotator->iNative = 20;

	return Subtract_RotatorRotator_Params.ReturnValue;
};

// Function Core.Object.Add_RotatorRotator
// [0x13C00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[20])
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FRotator UObject::Add_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* uFnAdd_RotatorRotator = nullptr;

	if (!uFnAdd_RotatorRotator)
	{
		uFnAdd_RotatorRotator = UFunction::FindFunction("Function Core.Object.Add_RotatorRotator");
	}

	UObject_execAdd_RotatorRotator_Params Add_RotatorRotator_Params;
	memset(&Add_RotatorRotator_Params, 0, sizeof(Add_RotatorRotator_Params));
	memcpy_s(&Add_RotatorRotator_Params.A, sizeof(Add_RotatorRotator_Params.A), &A, sizeof(A));
	memcpy_s(&Add_RotatorRotator_Params.B, sizeof(Add_RotatorRotator_Params.B), &B, sizeof(B));

	uFnAdd_RotatorRotator->iNative = 0;
	uFnAdd_RotatorRotator->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAdd_RotatorRotator, &Add_RotatorRotator_Params, nullptr);
	uFnAdd_RotatorRotator->FunctionFlags |= 0x400;
	uFnAdd_RotatorRotator->iNative = 20;

	return Add_RotatorRotator_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_RotatorFloat
// [0x12300423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FRotator                A                              (CPF_Parm | CPF_OutParm)

struct FRotator UObject::DivideEqual_RotatorFloat(float B, struct FRotator& A)
{
	static UFunction* uFnDivideEqual_RotatorFloat = nullptr;

	if (!uFnDivideEqual_RotatorFloat)
	{
		uFnDivideEqual_RotatorFloat = UFunction::FindFunction("Function Core.Object.DivideEqual_RotatorFloat");
	}

	UObject_execDivideEqual_RotatorFloat_Params DivideEqual_RotatorFloat_Params;
	memset(&DivideEqual_RotatorFloat_Params, 0, sizeof(DivideEqual_RotatorFloat_Params));
	memcpy_s(&DivideEqual_RotatorFloat_Params.B, sizeof(DivideEqual_RotatorFloat_Params.B), &B, sizeof(B));
	memcpy_s(&DivideEqual_RotatorFloat_Params.A, sizeof(DivideEqual_RotatorFloat_Params.A), &A, sizeof(A));

	uFnDivideEqual_RotatorFloat->iNative = 0;
	uFnDivideEqual_RotatorFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_RotatorFloat, &DivideEqual_RotatorFloat_Params, nullptr);
	uFnDivideEqual_RotatorFloat->FunctionFlags |= 0x400;
	uFnDivideEqual_RotatorFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &DivideEqual_RotatorFloat_Params.A, sizeof(DivideEqual_RotatorFloat_Params.A));

	return DivideEqual_RotatorFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_RotatorFloat
// [0x12200423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FRotator                A                              (CPF_Parm | CPF_OutParm)

struct FRotator UObject::MultiplyEqual_RotatorFloat(float B, struct FRotator& A)
{
	static UFunction* uFnMultiplyEqual_RotatorFloat = nullptr;

	if (!uFnMultiplyEqual_RotatorFloat)
	{
		uFnMultiplyEqual_RotatorFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_RotatorFloat");
	}

	UObject_execMultiplyEqual_RotatorFloat_Params MultiplyEqual_RotatorFloat_Params;
	memset(&MultiplyEqual_RotatorFloat_Params, 0, sizeof(MultiplyEqual_RotatorFloat_Params));
	memcpy_s(&MultiplyEqual_RotatorFloat_Params.B, sizeof(MultiplyEqual_RotatorFloat_Params.B), &B, sizeof(B));
	memcpy_s(&MultiplyEqual_RotatorFloat_Params.A, sizeof(MultiplyEqual_RotatorFloat_Params.A), &A, sizeof(A));

	uFnMultiplyEqual_RotatorFloat->iNative = 0;
	uFnMultiplyEqual_RotatorFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_RotatorFloat, &MultiplyEqual_RotatorFloat_Params, nullptr);
	uFnMultiplyEqual_RotatorFloat->FunctionFlags |= 0x400;
	uFnMultiplyEqual_RotatorFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &MultiplyEqual_RotatorFloat_Params.A, sizeof(MultiplyEqual_RotatorFloat_Params.A));

	return MultiplyEqual_RotatorFloat_Params.ReturnValue;
};

// Function Core.Object.Divide_RotatorFloat
// [0x12100023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FRotator UObject::Divide_RotatorFloat(struct FRotator A, float B)
{
	static UFunction* uFnDivide_RotatorFloat = nullptr;

	if (!uFnDivide_RotatorFloat)
	{
		uFnDivide_RotatorFloat = UFunction::FindFunction("Function Core.Object.Divide_RotatorFloat");
	}

	UObject_execDivide_RotatorFloat_Params Divide_RotatorFloat_Params;
	memset(&Divide_RotatorFloat_Params, 0, sizeof(Divide_RotatorFloat_Params));
	memcpy_s(&Divide_RotatorFloat_Params.A, sizeof(Divide_RotatorFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Divide_RotatorFloat_Params.B, sizeof(Divide_RotatorFloat_Params.B), &B, sizeof(B));

	uFnDivide_RotatorFloat->iNative = 0;
	uFnDivide_RotatorFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDivide_RotatorFloat, &Divide_RotatorFloat_Params, nullptr);
	uFnDivide_RotatorFloat->FunctionFlags |= 0x400;
	uFnDivide_RotatorFloat->iNative = 16;

	return Divide_RotatorFloat_Params.ReturnValue;
};

// Function Core.Object.Multiply_FloatRotator
// [0x12000023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FRotator UObject::Multiply_FloatRotator(float A, struct FRotator B)
{
	static UFunction* uFnMultiply_FloatRotator = nullptr;

	if (!uFnMultiply_FloatRotator)
	{
		uFnMultiply_FloatRotator = UFunction::FindFunction("Function Core.Object.Multiply_FloatRotator");
	}

	UObject_execMultiply_FloatRotator_Params Multiply_FloatRotator_Params;
	memset(&Multiply_FloatRotator_Params, 0, sizeof(Multiply_FloatRotator_Params));
	memcpy_s(&Multiply_FloatRotator_Params.A, sizeof(Multiply_FloatRotator_Params.A), &A, sizeof(A));
	memcpy_s(&Multiply_FloatRotator_Params.B, sizeof(Multiply_FloatRotator_Params.B), &B, sizeof(B));

	uFnMultiply_FloatRotator->iNative = 0;
	uFnMultiply_FloatRotator->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiply_FloatRotator, &Multiply_FloatRotator_Params, nullptr);
	uFnMultiply_FloatRotator->FunctionFlags |= 0x400;
	uFnMultiply_FloatRotator->iNative = 16;

	return Multiply_FloatRotator_Params.ReturnValue;
};

// Function Core.Object.Multiply_RotatorFloat
// [0x11F00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FRotator UObject::Multiply_RotatorFloat(struct FRotator A, float B)
{
	static UFunction* uFnMultiply_RotatorFloat = nullptr;

	if (!uFnMultiply_RotatorFloat)
	{
		uFnMultiply_RotatorFloat = UFunction::FindFunction("Function Core.Object.Multiply_RotatorFloat");
	}

	UObject_execMultiply_RotatorFloat_Params Multiply_RotatorFloat_Params;
	memset(&Multiply_RotatorFloat_Params, 0, sizeof(Multiply_RotatorFloat_Params));
	memcpy_s(&Multiply_RotatorFloat_Params.A, sizeof(Multiply_RotatorFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Multiply_RotatorFloat_Params.B, sizeof(Multiply_RotatorFloat_Params.B), &B, sizeof(B));

	uFnMultiply_RotatorFloat->iNative = 0;
	uFnMultiply_RotatorFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiply_RotatorFloat, &Multiply_RotatorFloat_Params, nullptr);
	uFnMultiply_RotatorFloat->FunctionFlags |= 0x400;
	uFnMultiply_RotatorFloat->iNative = 16;

	return Multiply_RotatorFloat_Params.ReturnValue;
};

// Function Core.Object.NotEqual_RotatorRotator
// [0xCB00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[26])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

bool UObject::NotEqual_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* uFnNotEqual_RotatorRotator = nullptr;

	if (!uFnNotEqual_RotatorRotator)
	{
		uFnNotEqual_RotatorRotator = UFunction::FindFunction("Function Core.Object.NotEqual_RotatorRotator");
	}

	UObject_execNotEqual_RotatorRotator_Params NotEqual_RotatorRotator_Params;
	memset(&NotEqual_RotatorRotator_Params, 0, sizeof(NotEqual_RotatorRotator_Params));
	memcpy_s(&NotEqual_RotatorRotator_Params.A, sizeof(NotEqual_RotatorRotator_Params.A), &A, sizeof(A));
	memcpy_s(&NotEqual_RotatorRotator_Params.B, sizeof(NotEqual_RotatorRotator_Params.B), &B, sizeof(B));

	uFnNotEqual_RotatorRotator->iNative = 0;
	uFnNotEqual_RotatorRotator->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNotEqual_RotatorRotator, &NotEqual_RotatorRotator_Params, nullptr);
	uFnNotEqual_RotatorRotator->FunctionFlags |= 0x400;
	uFnNotEqual_RotatorRotator->iNative = 26;

	return NotEqual_RotatorRotator_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_RotatorRotator
// [0x8E00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

bool UObject::EqualEqual_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* uFnEqualEqual_RotatorRotator = nullptr;

	if (!uFnEqualEqual_RotatorRotator)
	{
		uFnEqualEqual_RotatorRotator = UFunction::FindFunction("Function Core.Object.EqualEqual_RotatorRotator");
	}

	UObject_execEqualEqual_RotatorRotator_Params EqualEqual_RotatorRotator_Params;
	memset(&EqualEqual_RotatorRotator_Params, 0, sizeof(EqualEqual_RotatorRotator_Params));
	memcpy_s(&EqualEqual_RotatorRotator_Params.A, sizeof(EqualEqual_RotatorRotator_Params.A), &A, sizeof(A));
	memcpy_s(&EqualEqual_RotatorRotator_Params.B, sizeof(EqualEqual_RotatorRotator_Params.B), &B, sizeof(B));

	uFnEqualEqual_RotatorRotator->iNative = 0;
	uFnEqualEqual_RotatorRotator->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_RotatorRotator, &EqualEqual_RotatorRotator_Params, nullptr);
	uFnEqualEqual_RotatorRotator->FunctionFlags |= 0x400;
	uFnEqualEqual_RotatorRotator->iNative = 24;

	return EqualEqual_RotatorRotator_Params.ReturnValue;
};

// Function Core.Object.InCylinder
// [0x00824103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Origin                         (CPF_Parm)
// struct FRotator                Dir                            (CPF_Parm)
// float                          Width                          (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)
// bool                           bIgnoreZ                       (CPF_OptionalParm | CPF_Parm)

bool UObject::InCylinder(struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, bool bIgnoreZ)
{
	static UFunction* uFnInCylinder = nullptr;

	if (!uFnInCylinder)
	{
		uFnInCylinder = UFunction::FindFunction("Function Core.Object.InCylinder");
	}

	UObject_execInCylinder_Params InCylinder_Params;
	memset(&InCylinder_Params, 0, sizeof(InCylinder_Params));
	memcpy_s(&InCylinder_Params.Origin, sizeof(InCylinder_Params.Origin), &Origin, sizeof(Origin));
	memcpy_s(&InCylinder_Params.Dir, sizeof(InCylinder_Params.Dir), &Dir, sizeof(Dir));
	memcpy_s(&InCylinder_Params.Width, sizeof(InCylinder_Params.Width), &Width, sizeof(Width));
	memcpy_s(&InCylinder_Params.A, sizeof(InCylinder_Params.A), &A, sizeof(A));
	InCylinder_Params.bIgnoreZ = bIgnoreZ;

	this->ProcessEvent(uFnInCylinder, &InCylinder_Params, nullptr);

	return InCylinder_Params.ReturnValue;
};

// Function Core.Object.NoZDot
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

float UObject::NoZDot(struct FVector A, struct FVector B)
{
	static UFunction* uFnNoZDot = nullptr;

	if (!uFnNoZDot)
	{
		uFnNoZDot = UFunction::FindFunction("Function Core.Object.NoZDot");
	}

	UObject_execNoZDot_Params NoZDot_Params;
	memset(&NoZDot_Params, 0, sizeof(NoZDot_Params));
	memcpy_s(&NoZDot_Params.A, sizeof(NoZDot_Params.A), &A, sizeof(A));
	memcpy_s(&NoZDot_Params.B, sizeof(NoZDot_Params.B), &B, sizeof(B));

	uFnNoZDot->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNoZDot, &NoZDot_Params, nullptr);
	uFnNoZDot->FunctionFlags |= 0x400;

	return NoZDot_Params.ReturnValue;
};

// Function Core.Object.ClampLength
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 V                              (CPF_Parm)
// float                          MaxLength                      (CPF_Parm)

struct FVector UObject::ClampLength(struct FVector V, float MaxLength)
{
	static UFunction* uFnClampLength = nullptr;

	if (!uFnClampLength)
	{
		uFnClampLength = UFunction::FindFunction("Function Core.Object.ClampLength");
	}

	UObject_execClampLength_Params ClampLength_Params;
	memset(&ClampLength_Params, 0, sizeof(ClampLength_Params));
	memcpy_s(&ClampLength_Params.V, sizeof(ClampLength_Params.V), &V, sizeof(V));
	memcpy_s(&ClampLength_Params.MaxLength, sizeof(ClampLength_Params.MaxLength), &MaxLength, sizeof(MaxLength));

	uFnClampLength->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnClampLength, &ClampLength_Params, nullptr);
	uFnClampLength->FunctionFlags |= 0x400;

	return ClampLength_Params.ReturnValue;
};

// Function Core.Object.VInterpTo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Current                        (CPF_Parm)
// struct FVector                 Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)

struct FVector UObject::VInterpTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* uFnVInterpTo = nullptr;

	if (!uFnVInterpTo)
	{
		uFnVInterpTo = UFunction::FindFunction("Function Core.Object.VInterpTo");
	}

	UObject_execVInterpTo_Params VInterpTo_Params;
	memset(&VInterpTo_Params, 0, sizeof(VInterpTo_Params));
	memcpy_s(&VInterpTo_Params.Current, sizeof(VInterpTo_Params.Current), &Current, sizeof(Current));
	memcpy_s(&VInterpTo_Params.Target, sizeof(VInterpTo_Params.Target), &Target, sizeof(Target));
	memcpy_s(&VInterpTo_Params.DeltaTime, sizeof(VInterpTo_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&VInterpTo_Params.InterpSpeed, sizeof(VInterpTo_Params.InterpSpeed), &InterpSpeed, sizeof(InterpSpeed));

	uFnVInterpTo->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnVInterpTo, &VInterpTo_Params, nullptr);
	uFnVInterpTo->FunctionFlags |= 0x400;

	return VInterpTo_Params.ReturnValue;
};

// Function Core.Object.IsZero
// [0x5DD00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

bool UObject::IsZero(struct FVector A)
{
	static UFunction* uFnIsZero = nullptr;

	if (!uFnIsZero)
	{
		uFnIsZero = UFunction::FindFunction("Function Core.Object.IsZero");
	}

	UObject_execIsZero_Params IsZero_Params;
	memset(&IsZero_Params, 0, sizeof(IsZero_Params));
	memcpy_s(&IsZero_Params.A, sizeof(IsZero_Params.A), &A, sizeof(A));

	uFnIsZero->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnIsZero, &IsZero_Params, nullptr);
	uFnIsZero->FunctionFlags |= 0x400;

	return IsZero_Params.ReturnValue;
};

// Function Core.Object.ProjectOnTo
// [0x5DC00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 X                              (CPF_Parm)
// struct FVector                 Y                              (CPF_Parm)

struct FVector UObject::ProjectOnTo(struct FVector X, struct FVector Y)
{
	static UFunction* uFnProjectOnTo = nullptr;

	if (!uFnProjectOnTo)
	{
		uFnProjectOnTo = UFunction::FindFunction("Function Core.Object.ProjectOnTo");
	}

	UObject_execProjectOnTo_Params ProjectOnTo_Params;
	memset(&ProjectOnTo_Params, 0, sizeof(ProjectOnTo_Params));
	memcpy_s(&ProjectOnTo_Params.X, sizeof(ProjectOnTo_Params.X), &X, sizeof(X));
	memcpy_s(&ProjectOnTo_Params.Y, sizeof(ProjectOnTo_Params.Y), &Y, sizeof(Y));

	uFnProjectOnTo->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnProjectOnTo, &ProjectOnTo_Params, nullptr);
	uFnProjectOnTo->FunctionFlags |= 0x400;

	return ProjectOnTo_Params.ReturnValue;
};

// Function Core.Object.MirrorVectorByNormal
// [0x12C00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 InVect                         (CPF_Parm)
// struct FVector                 InNormal                       (CPF_Parm)

struct FVector UObject::MirrorVectorByNormal(struct FVector InVect, struct FVector InNormal)
{
	static UFunction* uFnMirrorVectorByNormal = nullptr;

	if (!uFnMirrorVectorByNormal)
	{
		uFnMirrorVectorByNormal = UFunction::FindFunction("Function Core.Object.MirrorVectorByNormal");
	}

	UObject_execMirrorVectorByNormal_Params MirrorVectorByNormal_Params;
	memset(&MirrorVectorByNormal_Params, 0, sizeof(MirrorVectorByNormal_Params));
	memcpy_s(&MirrorVectorByNormal_Params.InVect, sizeof(MirrorVectorByNormal_Params.InVect), &InVect, sizeof(InVect));
	memcpy_s(&MirrorVectorByNormal_Params.InNormal, sizeof(MirrorVectorByNormal_Params.InNormal), &InNormal, sizeof(InNormal));

	uFnMirrorVectorByNormal->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMirrorVectorByNormal, &MirrorVectorByNormal_Params, nullptr);
	uFnMirrorVectorByNormal->FunctionFlags |= 0x400;

	return MirrorVectorByNormal_Params.ReturnValue;
};

// Function Core.Object.VRandCone2
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Dir                            (CPF_Parm)
// float                          HorizontalConeHalfAngleRadians (CPF_Parm)
// float                          VerticalConeHalfAngleRadians   (CPF_Parm)

struct FVector UObject::VRandCone2(struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians)
{
	static UFunction* uFnVRandCone2 = nullptr;

	if (!uFnVRandCone2)
	{
		uFnVRandCone2 = UFunction::FindFunction("Function Core.Object.VRandCone2");
	}

	UObject_execVRandCone2_Params VRandCone2_Params;
	memset(&VRandCone2_Params, 0, sizeof(VRandCone2_Params));
	memcpy_s(&VRandCone2_Params.Dir, sizeof(VRandCone2_Params.Dir), &Dir, sizeof(Dir));
	memcpy_s(&VRandCone2_Params.HorizontalConeHalfAngleRadians, sizeof(VRandCone2_Params.HorizontalConeHalfAngleRadians), &HorizontalConeHalfAngleRadians, sizeof(HorizontalConeHalfAngleRadians));
	memcpy_s(&VRandCone2_Params.VerticalConeHalfAngleRadians, sizeof(VRandCone2_Params.VerticalConeHalfAngleRadians), &VerticalConeHalfAngleRadians, sizeof(VerticalConeHalfAngleRadians));

	uFnVRandCone2->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnVRandCone2, &VRandCone2_Params, nullptr);
	uFnVRandCone2->FunctionFlags |= 0x400;

	return VRandCone2_Params.ReturnValue;
};

// Function Core.Object.VRandCone
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Dir                            (CPF_Parm)
// float                          ConeHalfAngleRadians           (CPF_Parm)

struct FVector UObject::VRandCone(struct FVector Dir, float ConeHalfAngleRadians)
{
	static UFunction* uFnVRandCone = nullptr;

	if (!uFnVRandCone)
	{
		uFnVRandCone = UFunction::FindFunction("Function Core.Object.VRandCone");
	}

	UObject_execVRandCone_Params VRandCone_Params;
	memset(&VRandCone_Params, 0, sizeof(VRandCone_Params));
	memcpy_s(&VRandCone_Params.Dir, sizeof(VRandCone_Params.Dir), &Dir, sizeof(Dir));
	memcpy_s(&VRandCone_Params.ConeHalfAngleRadians, sizeof(VRandCone_Params.ConeHalfAngleRadians), &ConeHalfAngleRadians, sizeof(ConeHalfAngleRadians));

	uFnVRandCone->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnVRandCone, &VRandCone_Params, nullptr);
	uFnVRandCone->FunctionFlags |= 0x400;

	return VRandCone_Params.ReturnValue;
};

// Function Core.Object.VRand
// [0xFC00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector UObject::VRand()
{
	static UFunction* uFnVRand = nullptr;

	if (!uFnVRand)
	{
		uFnVRand = UFunction::FindFunction("Function Core.Object.VRand");
	}

	UObject_execVRand_Params VRand_Params;
	memset(&VRand_Params, 0, sizeof(VRand_Params));

	uFnVRand->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnVRand, &VRand_Params, nullptr);
	uFnVRand->FunctionFlags |= 0x400;

	return VRand_Params.ReturnValue;
};

// Function Core.Object.VLerp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)

struct FVector UObject::VLerp(struct FVector A, struct FVector B, float Alpha)
{
	static UFunction* uFnVLerp = nullptr;

	if (!uFnVLerp)
	{
		uFnVLerp = UFunction::FindFunction("Function Core.Object.VLerp");
	}

	UObject_execVLerp_Params VLerp_Params;
	memset(&VLerp_Params, 0, sizeof(VLerp_Params));
	memcpy_s(&VLerp_Params.A, sizeof(VLerp_Params.A), &A, sizeof(A));
	memcpy_s(&VLerp_Params.B, sizeof(VLerp_Params.B), &B, sizeof(B));
	memcpy_s(&VLerp_Params.Alpha, sizeof(VLerp_Params.Alpha), &Alpha, sizeof(Alpha));

	uFnVLerp->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnVLerp, &VLerp_Params, nullptr);
	uFnVLerp->FunctionFlags |= 0x400;

	return VLerp_Params.ReturnValue;
};

// Function Core.Object.Normal2D
// [0xE300022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::Normal2D(struct FVector A)
{
	static UFunction* uFnNormal2D = nullptr;

	if (!uFnNormal2D)
	{
		uFnNormal2D = UFunction::FindFunction("Function Core.Object.Normal2D");
	}

	UObject_execNormal2D_Params Normal2D_Params;
	memset(&Normal2D_Params, 0, sizeof(Normal2D_Params));
	memcpy_s(&Normal2D_Params.A, sizeof(Normal2D_Params.A), &A, sizeof(A));

	uFnNormal2D->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNormal2D, &Normal2D_Params, nullptr);
	uFnNormal2D->FunctionFlags |= 0x400;

	return Normal2D_Params.ReturnValue;
};

// Function Core.Object.Normal
// [0xE200022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::Normal(struct FVector A)
{
	static UFunction* uFnNormal = nullptr;

	if (!uFnNormal)
	{
		uFnNormal = UFunction::FindFunction("Function Core.Object.Normal");
	}

	UObject_execNormal_Params Normal_Params;
	memset(&Normal_Params, 0, sizeof(Normal_Params));
	memcpy_s(&Normal_Params.A, sizeof(Normal_Params.A), &A, sizeof(A));

	uFnNormal->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNormal, &Normal_Params, nullptr);
	uFnNormal->FunctionFlags |= 0x400;

	return Normal_Params.ReturnValue;
};

// Function Core.Object.VSizeSq2D
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

float UObject::VSizeSq2D(struct FVector A)
{
	static UFunction* uFnVSizeSq2D = nullptr;

	if (!uFnVSizeSq2D)
	{
		uFnVSizeSq2D = UFunction::FindFunction("Function Core.Object.VSizeSq2D");
	}

	UObject_execVSizeSq2D_Params VSizeSq2D_Params;
	memset(&VSizeSq2D_Params, 0, sizeof(VSizeSq2D_Params));
	memcpy_s(&VSizeSq2D_Params.A, sizeof(VSizeSq2D_Params.A), &A, sizeof(A));

	uFnVSizeSq2D->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnVSizeSq2D, &VSizeSq2D_Params, nullptr);
	uFnVSizeSq2D->FunctionFlags |= 0x400;

	return VSizeSq2D_Params.ReturnValue;
};

// Function Core.Object.VSizeSq
// [0xE400022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

float UObject::VSizeSq(struct FVector A)
{
	static UFunction* uFnVSizeSq = nullptr;

	if (!uFnVSizeSq)
	{
		uFnVSizeSq = UFunction::FindFunction("Function Core.Object.VSizeSq");
	}

	UObject_execVSizeSq_Params VSizeSq_Params;
	memset(&VSizeSq_Params, 0, sizeof(VSizeSq_Params));
	memcpy_s(&VSizeSq_Params.A, sizeof(VSizeSq_Params.A), &A, sizeof(A));

	uFnVSizeSq->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnVSizeSq, &VSizeSq_Params, nullptr);
	uFnVSizeSq->FunctionFlags |= 0x400;

	return VSizeSq_Params.ReturnValue;
};

// Function Core.Object.VSize2D
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

float UObject::VSize2D(struct FVector A)
{
	static UFunction* uFnVSize2D = nullptr;

	if (!uFnVSize2D)
	{
		uFnVSize2D = UFunction::FindFunction("Function Core.Object.VSize2D");
	}

	UObject_execVSize2D_Params VSize2D_Params;
	memset(&VSize2D_Params, 0, sizeof(VSize2D_Params));
	memcpy_s(&VSize2D_Params.A, sizeof(VSize2D_Params.A), &A, sizeof(A));

	uFnVSize2D->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnVSize2D, &VSize2D_Params, nullptr);
	uFnVSize2D->FunctionFlags |= 0x400;

	return VSize2D_Params.ReturnValue;
};

// Function Core.Object.VSize
// [0xE100022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

float UObject::VSize(struct FVector A)
{
	static UFunction* uFnVSize = nullptr;

	if (!uFnVSize)
	{
		uFnVSize = UFunction::FindFunction("Function Core.Object.VSize");
	}

	UObject_execVSize_Params VSize_Params;
	memset(&VSize_Params, 0, sizeof(VSize_Params));
	memcpy_s(&VSize_Params.A, sizeof(VSize_Params.A), &A, sizeof(A));

	uFnVSize->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnVSize, &VSize_Params, nullptr);
	uFnVSize->FunctionFlags |= 0x400;

	return VSize_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_VectorVector
// [0xE000423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::SubtractEqual_VectorVector(struct FVector B, struct FVector& A)
{
	static UFunction* uFnSubtractEqual_VectorVector = nullptr;

	if (!uFnSubtractEqual_VectorVector)
	{
		uFnSubtractEqual_VectorVector = UFunction::FindFunction("Function Core.Object.SubtractEqual_VectorVector");
	}

	UObject_execSubtractEqual_VectorVector_Params SubtractEqual_VectorVector_Params;
	memset(&SubtractEqual_VectorVector_Params, 0, sizeof(SubtractEqual_VectorVector_Params));
	memcpy_s(&SubtractEqual_VectorVector_Params.B, sizeof(SubtractEqual_VectorVector_Params.B), &B, sizeof(B));
	memcpy_s(&SubtractEqual_VectorVector_Params.A, sizeof(SubtractEqual_VectorVector_Params.A), &A, sizeof(A));

	uFnSubtractEqual_VectorVector->iNative = 0;
	uFnSubtractEqual_VectorVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_VectorVector, &SubtractEqual_VectorVector_Params, nullptr);
	uFnSubtractEqual_VectorVector->FunctionFlags |= 0x400;
	uFnSubtractEqual_VectorVector->iNative = 34;

	memcpy_s(&A, sizeof(A), &SubtractEqual_VectorVector_Params.A, sizeof(SubtractEqual_VectorVector_Params.A));

	return SubtractEqual_VectorVector_Params.ReturnValue;
};

// Function Core.Object.AddEqual_VectorVector
// [0xDF00423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::AddEqual_VectorVector(struct FVector B, struct FVector& A)
{
	static UFunction* uFnAddEqual_VectorVector = nullptr;

	if (!uFnAddEqual_VectorVector)
	{
		uFnAddEqual_VectorVector = UFunction::FindFunction("Function Core.Object.AddEqual_VectorVector");
	}

	UObject_execAddEqual_VectorVector_Params AddEqual_VectorVector_Params;
	memset(&AddEqual_VectorVector_Params, 0, sizeof(AddEqual_VectorVector_Params));
	memcpy_s(&AddEqual_VectorVector_Params.B, sizeof(AddEqual_VectorVector_Params.B), &B, sizeof(B));
	memcpy_s(&AddEqual_VectorVector_Params.A, sizeof(AddEqual_VectorVector_Params.A), &A, sizeof(A));

	uFnAddEqual_VectorVector->iNative = 0;
	uFnAddEqual_VectorVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAddEqual_VectorVector, &AddEqual_VectorVector_Params, nullptr);
	uFnAddEqual_VectorVector->FunctionFlags |= 0x400;
	uFnAddEqual_VectorVector->iNative = 34;

	memcpy_s(&A, sizeof(A), &AddEqual_VectorVector_Params.A, sizeof(AddEqual_VectorVector_Params.A));

	return AddEqual_VectorVector_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_VectorFloat
// [0xDE00423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::DivideEqual_VectorFloat(float B, struct FVector& A)
{
	static UFunction* uFnDivideEqual_VectorFloat = nullptr;

	if (!uFnDivideEqual_VectorFloat)
	{
		uFnDivideEqual_VectorFloat = UFunction::FindFunction("Function Core.Object.DivideEqual_VectorFloat");
	}

	UObject_execDivideEqual_VectorFloat_Params DivideEqual_VectorFloat_Params;
	memset(&DivideEqual_VectorFloat_Params, 0, sizeof(DivideEqual_VectorFloat_Params));
	memcpy_s(&DivideEqual_VectorFloat_Params.B, sizeof(DivideEqual_VectorFloat_Params.B), &B, sizeof(B));
	memcpy_s(&DivideEqual_VectorFloat_Params.A, sizeof(DivideEqual_VectorFloat_Params.A), &A, sizeof(A));

	uFnDivideEqual_VectorFloat->iNative = 0;
	uFnDivideEqual_VectorFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_VectorFloat, &DivideEqual_VectorFloat_Params, nullptr);
	uFnDivideEqual_VectorFloat->FunctionFlags |= 0x400;
	uFnDivideEqual_VectorFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &DivideEqual_VectorFloat_Params.A, sizeof(DivideEqual_VectorFloat_Params.A));

	return DivideEqual_VectorFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_VectorVector
// [0x12900423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::MultiplyEqual_VectorVector(struct FVector B, struct FVector& A)
{
	static UFunction* uFnMultiplyEqual_VectorVector = nullptr;

	if (!uFnMultiplyEqual_VectorVector)
	{
		uFnMultiplyEqual_VectorVector = UFunction::FindFunction("Function Core.Object.MultiplyEqual_VectorVector");
	}

	UObject_execMultiplyEqual_VectorVector_Params MultiplyEqual_VectorVector_Params;
	memset(&MultiplyEqual_VectorVector_Params, 0, sizeof(MultiplyEqual_VectorVector_Params));
	memcpy_s(&MultiplyEqual_VectorVector_Params.B, sizeof(MultiplyEqual_VectorVector_Params.B), &B, sizeof(B));
	memcpy_s(&MultiplyEqual_VectorVector_Params.A, sizeof(MultiplyEqual_VectorVector_Params.A), &A, sizeof(A));

	uFnMultiplyEqual_VectorVector->iNative = 0;
	uFnMultiplyEqual_VectorVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_VectorVector, &MultiplyEqual_VectorVector_Params, nullptr);
	uFnMultiplyEqual_VectorVector->FunctionFlags |= 0x400;
	uFnMultiplyEqual_VectorVector->iNative = 34;

	memcpy_s(&A, sizeof(A), &MultiplyEqual_VectorVector_Params.A, sizeof(MultiplyEqual_VectorVector_Params.A));

	return MultiplyEqual_VectorVector_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_VectorFloat
// [0xDD00423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::MultiplyEqual_VectorFloat(float B, struct FVector& A)
{
	static UFunction* uFnMultiplyEqual_VectorFloat = nullptr;

	if (!uFnMultiplyEqual_VectorFloat)
	{
		uFnMultiplyEqual_VectorFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_VectorFloat");
	}

	UObject_execMultiplyEqual_VectorFloat_Params MultiplyEqual_VectorFloat_Params;
	memset(&MultiplyEqual_VectorFloat_Params, 0, sizeof(MultiplyEqual_VectorFloat_Params));
	memcpy_s(&MultiplyEqual_VectorFloat_Params.B, sizeof(MultiplyEqual_VectorFloat_Params.B), &B, sizeof(B));
	memcpy_s(&MultiplyEqual_VectorFloat_Params.A, sizeof(MultiplyEqual_VectorFloat_Params.A), &A, sizeof(A));

	uFnMultiplyEqual_VectorFloat->iNative = 0;
	uFnMultiplyEqual_VectorFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_VectorFloat, &MultiplyEqual_VectorFloat_Params, nullptr);
	uFnMultiplyEqual_VectorFloat->FunctionFlags |= 0x400;
	uFnMultiplyEqual_VectorFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &MultiplyEqual_VectorFloat_Params.A, sizeof(MultiplyEqual_VectorFloat_Params.A));

	return MultiplyEqual_VectorFloat_Params.ReturnValue;
};

// Function Core.Object.Cross_VectorVector
// [0xDC00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Cross_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnCross_VectorVector = nullptr;

	if (!uFnCross_VectorVector)
	{
		uFnCross_VectorVector = UFunction::FindFunction("Function Core.Object.Cross_VectorVector");
	}

	UObject_execCross_VectorVector_Params Cross_VectorVector_Params;
	memset(&Cross_VectorVector_Params, 0, sizeof(Cross_VectorVector_Params));
	memcpy_s(&Cross_VectorVector_Params.A, sizeof(Cross_VectorVector_Params.A), &A, sizeof(A));
	memcpy_s(&Cross_VectorVector_Params.B, sizeof(Cross_VectorVector_Params.B), &B, sizeof(B));

	uFnCross_VectorVector->iNative = 0;
	uFnCross_VectorVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnCross_VectorVector, &Cross_VectorVector_Params, nullptr);
	uFnCross_VectorVector->FunctionFlags |= 0x400;
	uFnCross_VectorVector->iNative = 16;

	return Cross_VectorVector_Params.ReturnValue;
};

// Function Core.Object.Dot_VectorVector
// [0xDB00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

float UObject::Dot_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnDot_VectorVector = nullptr;

	if (!uFnDot_VectorVector)
	{
		uFnDot_VectorVector = UFunction::FindFunction("Function Core.Object.Dot_VectorVector");
	}

	UObject_execDot_VectorVector_Params Dot_VectorVector_Params;
	memset(&Dot_VectorVector_Params, 0, sizeof(Dot_VectorVector_Params));
	memcpy_s(&Dot_VectorVector_Params.A, sizeof(Dot_VectorVector_Params.A), &A, sizeof(A));
	memcpy_s(&Dot_VectorVector_Params.B, sizeof(Dot_VectorVector_Params.B), &B, sizeof(B));

	uFnDot_VectorVector->iNative = 0;
	uFnDot_VectorVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDot_VectorVector, &Dot_VectorVector_Params, nullptr);
	uFnDot_VectorVector->FunctionFlags |= 0x400;
	uFnDot_VectorVector->iNative = 16;

	return Dot_VectorVector_Params.ReturnValue;
};

// Function Core.Object.NotEqual_VectorVector
// [0xDA00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[26])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

bool UObject::NotEqual_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnNotEqual_VectorVector = nullptr;

	if (!uFnNotEqual_VectorVector)
	{
		uFnNotEqual_VectorVector = UFunction::FindFunction("Function Core.Object.NotEqual_VectorVector");
	}

	UObject_execNotEqual_VectorVector_Params NotEqual_VectorVector_Params;
	memset(&NotEqual_VectorVector_Params, 0, sizeof(NotEqual_VectorVector_Params));
	memcpy_s(&NotEqual_VectorVector_Params.A, sizeof(NotEqual_VectorVector_Params.A), &A, sizeof(A));
	memcpy_s(&NotEqual_VectorVector_Params.B, sizeof(NotEqual_VectorVector_Params.B), &B, sizeof(B));

	uFnNotEqual_VectorVector->iNative = 0;
	uFnNotEqual_VectorVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNotEqual_VectorVector, &NotEqual_VectorVector_Params, nullptr);
	uFnNotEqual_VectorVector->FunctionFlags |= 0x400;
	uFnNotEqual_VectorVector->iNative = 26;

	return NotEqual_VectorVector_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_VectorVector
// [0xD900023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

bool UObject::EqualEqual_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnEqualEqual_VectorVector = nullptr;

	if (!uFnEqualEqual_VectorVector)
	{
		uFnEqualEqual_VectorVector = UFunction::FindFunction("Function Core.Object.EqualEqual_VectorVector");
	}

	UObject_execEqualEqual_VectorVector_Params EqualEqual_VectorVector_Params;
	memset(&EqualEqual_VectorVector_Params, 0, sizeof(EqualEqual_VectorVector_Params));
	memcpy_s(&EqualEqual_VectorVector_Params.A, sizeof(EqualEqual_VectorVector_Params.A), &A, sizeof(A));
	memcpy_s(&EqualEqual_VectorVector_Params.B, sizeof(EqualEqual_VectorVector_Params.B), &B, sizeof(B));

	uFnEqualEqual_VectorVector->iNative = 0;
	uFnEqualEqual_VectorVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_VectorVector, &EqualEqual_VectorVector_Params, nullptr);
	uFnEqualEqual_VectorVector->FunctionFlags |= 0x400;
	uFnEqualEqual_VectorVector->iNative = 24;

	return EqualEqual_VectorVector_Params.ReturnValue;
};

// Function Core.Object.GreaterGreater_VectorRotator
// [0x11400023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[22])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FVector UObject::GreaterGreater_VectorRotator(struct FVector A, struct FRotator B)
{
	static UFunction* uFnGreaterGreater_VectorRotator = nullptr;

	if (!uFnGreaterGreater_VectorRotator)
	{
		uFnGreaterGreater_VectorRotator = UFunction::FindFunction("Function Core.Object.GreaterGreater_VectorRotator");
	}

	UObject_execGreaterGreater_VectorRotator_Params GreaterGreater_VectorRotator_Params;
	memset(&GreaterGreater_VectorRotator_Params, 0, sizeof(GreaterGreater_VectorRotator_Params));
	memcpy_s(&GreaterGreater_VectorRotator_Params.A, sizeof(GreaterGreater_VectorRotator_Params.A), &A, sizeof(A));
	memcpy_s(&GreaterGreater_VectorRotator_Params.B, sizeof(GreaterGreater_VectorRotator_Params.B), &B, sizeof(B));

	uFnGreaterGreater_VectorRotator->iNative = 0;
	uFnGreaterGreater_VectorRotator->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGreaterGreater_VectorRotator, &GreaterGreater_VectorRotator_Params, nullptr);
	uFnGreaterGreater_VectorRotator->FunctionFlags |= 0x400;
	uFnGreaterGreater_VectorRotator->iNative = 22;

	return GreaterGreater_VectorRotator_Params.ReturnValue;
};

// Function Core.Object.LessLess_VectorRotator
// [0x11300023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[22])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FVector UObject::LessLess_VectorRotator(struct FVector A, struct FRotator B)
{
	static UFunction* uFnLessLess_VectorRotator = nullptr;

	if (!uFnLessLess_VectorRotator)
	{
		uFnLessLess_VectorRotator = UFunction::FindFunction("Function Core.Object.LessLess_VectorRotator");
	}

	UObject_execLessLess_VectorRotator_Params LessLess_VectorRotator_Params;
	memset(&LessLess_VectorRotator_Params, 0, sizeof(LessLess_VectorRotator_Params));
	memcpy_s(&LessLess_VectorRotator_Params.A, sizeof(LessLess_VectorRotator_Params.A), &A, sizeof(A));
	memcpy_s(&LessLess_VectorRotator_Params.B, sizeof(LessLess_VectorRotator_Params.B), &B, sizeof(B));

	uFnLessLess_VectorRotator->iNative = 0;
	uFnLessLess_VectorRotator->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLessLess_VectorRotator, &LessLess_VectorRotator_Params, nullptr);
	uFnLessLess_VectorRotator->FunctionFlags |= 0x400;
	uFnLessLess_VectorRotator->iNative = 22;

	return LessLess_VectorRotator_Params.ReturnValue;
};

// Function Core.Object.Subtract_VectorVector
// [0xD800023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[20])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Subtract_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnSubtract_VectorVector = nullptr;

	if (!uFnSubtract_VectorVector)
	{
		uFnSubtract_VectorVector = UFunction::FindFunction("Function Core.Object.Subtract_VectorVector");
	}

	UObject_execSubtract_VectorVector_Params Subtract_VectorVector_Params;
	memset(&Subtract_VectorVector_Params, 0, sizeof(Subtract_VectorVector_Params));
	memcpy_s(&Subtract_VectorVector_Params.A, sizeof(Subtract_VectorVector_Params.A), &A, sizeof(A));
	memcpy_s(&Subtract_VectorVector_Params.B, sizeof(Subtract_VectorVector_Params.B), &B, sizeof(B));

	uFnSubtract_VectorVector->iNative = 0;
	uFnSubtract_VectorVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtract_VectorVector, &Subtract_VectorVector_Params, nullptr);
	uFnSubtract_VectorVector->FunctionFlags |= 0x400;
	uFnSubtract_VectorVector->iNative = 20;

	return Subtract_VectorVector_Params.ReturnValue;
};

// Function Core.Object.Add_VectorVector
// [0xD700023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[20])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Add_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnAdd_VectorVector = nullptr;

	if (!uFnAdd_VectorVector)
	{
		uFnAdd_VectorVector = UFunction::FindFunction("Function Core.Object.Add_VectorVector");
	}

	UObject_execAdd_VectorVector_Params Add_VectorVector_Params;
	memset(&Add_VectorVector_Params, 0, sizeof(Add_VectorVector_Params));
	memcpy_s(&Add_VectorVector_Params.A, sizeof(Add_VectorVector_Params.A), &A, sizeof(A));
	memcpy_s(&Add_VectorVector_Params.B, sizeof(Add_VectorVector_Params.B), &B, sizeof(B));

	uFnAdd_VectorVector->iNative = 0;
	uFnAdd_VectorVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAdd_VectorVector, &Add_VectorVector_Params, nullptr);
	uFnAdd_VectorVector->FunctionFlags |= 0x400;
	uFnAdd_VectorVector->iNative = 20;

	return Add_VectorVector_Params.ReturnValue;
};

// Function Core.Object.Divide_VectorFloat
// [0xD600023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FVector UObject::Divide_VectorFloat(struct FVector A, float B)
{
	static UFunction* uFnDivide_VectorFloat = nullptr;

	if (!uFnDivide_VectorFloat)
	{
		uFnDivide_VectorFloat = UFunction::FindFunction("Function Core.Object.Divide_VectorFloat");
	}

	UObject_execDivide_VectorFloat_Params Divide_VectorFloat_Params;
	memset(&Divide_VectorFloat_Params, 0, sizeof(Divide_VectorFloat_Params));
	memcpy_s(&Divide_VectorFloat_Params.A, sizeof(Divide_VectorFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Divide_VectorFloat_Params.B, sizeof(Divide_VectorFloat_Params.B), &B, sizeof(B));

	uFnDivide_VectorFloat->iNative = 0;
	uFnDivide_VectorFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDivide_VectorFloat, &Divide_VectorFloat_Params, nullptr);
	uFnDivide_VectorFloat->FunctionFlags |= 0x400;
	uFnDivide_VectorFloat->iNative = 16;

	return Divide_VectorFloat_Params.ReturnValue;
};

// Function Core.Object.Multiply_VectorVector
// [0x12800023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Multiply_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnMultiply_VectorVector = nullptr;

	if (!uFnMultiply_VectorVector)
	{
		uFnMultiply_VectorVector = UFunction::FindFunction("Function Core.Object.Multiply_VectorVector");
	}

	UObject_execMultiply_VectorVector_Params Multiply_VectorVector_Params;
	memset(&Multiply_VectorVector_Params, 0, sizeof(Multiply_VectorVector_Params));
	memcpy_s(&Multiply_VectorVector_Params.A, sizeof(Multiply_VectorVector_Params.A), &A, sizeof(A));
	memcpy_s(&Multiply_VectorVector_Params.B, sizeof(Multiply_VectorVector_Params.B), &B, sizeof(B));

	uFnMultiply_VectorVector->iNative = 0;
	uFnMultiply_VectorVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiply_VectorVector, &Multiply_VectorVector_Params, nullptr);
	uFnMultiply_VectorVector->FunctionFlags |= 0x400;
	uFnMultiply_VectorVector->iNative = 16;

	return Multiply_VectorVector_Params.ReturnValue;
};

// Function Core.Object.Multiply_FloatVector
// [0xD500023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Multiply_FloatVector(float A, struct FVector B)
{
	static UFunction* uFnMultiply_FloatVector = nullptr;

	if (!uFnMultiply_FloatVector)
	{
		uFnMultiply_FloatVector = UFunction::FindFunction("Function Core.Object.Multiply_FloatVector");
	}

	UObject_execMultiply_FloatVector_Params Multiply_FloatVector_Params;
	memset(&Multiply_FloatVector_Params, 0, sizeof(Multiply_FloatVector_Params));
	memcpy_s(&Multiply_FloatVector_Params.A, sizeof(Multiply_FloatVector_Params.A), &A, sizeof(A));
	memcpy_s(&Multiply_FloatVector_Params.B, sizeof(Multiply_FloatVector_Params.B), &B, sizeof(B));

	uFnMultiply_FloatVector->iNative = 0;
	uFnMultiply_FloatVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiply_FloatVector, &Multiply_FloatVector_Params, nullptr);
	uFnMultiply_FloatVector->FunctionFlags |= 0x400;
	uFnMultiply_FloatVector->iNative = 16;

	return Multiply_FloatVector_Params.ReturnValue;
};

// Function Core.Object.Multiply_VectorFloat
// [0xD400023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FVector UObject::Multiply_VectorFloat(struct FVector A, float B)
{
	static UFunction* uFnMultiply_VectorFloat = nullptr;

	if (!uFnMultiply_VectorFloat)
	{
		uFnMultiply_VectorFloat = UFunction::FindFunction("Function Core.Object.Multiply_VectorFloat");
	}

	UObject_execMultiply_VectorFloat_Params Multiply_VectorFloat_Params;
	memset(&Multiply_VectorFloat_Params, 0, sizeof(Multiply_VectorFloat_Params));
	memcpy_s(&Multiply_VectorFloat_Params.A, sizeof(Multiply_VectorFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Multiply_VectorFloat_Params.B, sizeof(Multiply_VectorFloat_Params.B), &B, sizeof(B));

	uFnMultiply_VectorFloat->iNative = 0;
	uFnMultiply_VectorFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiply_VectorFloat, &Multiply_VectorFloat_Params, nullptr);
	uFnMultiply_VectorFloat->FunctionFlags |= 0x400;
	uFnMultiply_VectorFloat->iNative = 16;

	return Multiply_VectorFloat_Params.ReturnValue;
};

// Function Core.Object.Subtract_PreVector
// [0xD300023411] (FUNC_Final | FUNC_PreOperator | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::Subtract_PreVector(struct FVector A)
{
	static UFunction* uFnSubtract_PreVector = nullptr;

	if (!uFnSubtract_PreVector)
	{
		uFnSubtract_PreVector = UFunction::FindFunction("Function Core.Object.Subtract_PreVector");
	}

	UObject_execSubtract_PreVector_Params Subtract_PreVector_Params;
	memset(&Subtract_PreVector_Params, 0, sizeof(Subtract_PreVector_Params));
	memcpy_s(&Subtract_PreVector_Params.A, sizeof(Subtract_PreVector_Params.A), &A, sizeof(A));

	uFnSubtract_PreVector->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtract_PreVector, &Subtract_PreVector_Params, nullptr);
	uFnSubtract_PreVector->FunctionFlags |= 0x400;

	return Subtract_PreVector_Params.ReturnValue;
};

// Function Core.Object.FInterpConstantTo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Current                        (CPF_Parm)
// float                          Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)

float UObject::FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* uFnFInterpConstantTo = nullptr;

	if (!uFnFInterpConstantTo)
	{
		uFnFInterpConstantTo = UFunction::FindFunction("Function Core.Object.FInterpConstantTo");
	}

	UObject_execFInterpConstantTo_Params FInterpConstantTo_Params;
	memset(&FInterpConstantTo_Params, 0, sizeof(FInterpConstantTo_Params));
	memcpy_s(&FInterpConstantTo_Params.Current, sizeof(FInterpConstantTo_Params.Current), &Current, sizeof(Current));
	memcpy_s(&FInterpConstantTo_Params.Target, sizeof(FInterpConstantTo_Params.Target), &Target, sizeof(Target));
	memcpy_s(&FInterpConstantTo_Params.DeltaTime, sizeof(FInterpConstantTo_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&FInterpConstantTo_Params.InterpSpeed, sizeof(FInterpConstantTo_Params.InterpSpeed), &InterpSpeed, sizeof(InterpSpeed));

	uFnFInterpConstantTo->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnFInterpConstantTo, &FInterpConstantTo_Params, nullptr);
	uFnFInterpConstantTo->FunctionFlags |= 0x400;

	return FInterpConstantTo_Params.ReturnValue;
};

// Function Core.Object.FInterpTo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Current                        (CPF_Parm)
// float                          Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)

float UObject::FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* uFnFInterpTo = nullptr;

	if (!uFnFInterpTo)
	{
		uFnFInterpTo = UFunction::FindFunction("Function Core.Object.FInterpTo");
	}

	UObject_execFInterpTo_Params FInterpTo_Params;
	memset(&FInterpTo_Params, 0, sizeof(FInterpTo_Params));
	memcpy_s(&FInterpTo_Params.Current, sizeof(FInterpTo_Params.Current), &Current, sizeof(Current));
	memcpy_s(&FInterpTo_Params.Target, sizeof(FInterpTo_Params.Target), &Target, sizeof(Target));
	memcpy_s(&FInterpTo_Params.DeltaTime, sizeof(FInterpTo_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&FInterpTo_Params.InterpSpeed, sizeof(FInterpTo_Params.InterpSpeed), &InterpSpeed, sizeof(InterpSpeed));

	uFnFInterpTo->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnFInterpTo, &FInterpTo_Params, nullptr);
	uFnFInterpTo->FunctionFlags |= 0x400;

	return FInterpTo_Params.ReturnValue;
};

// Function Core.Object.FPctByRange
// [0x00022103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Value                          (CPF_Parm)
// float                          InMin                          (CPF_Parm)
// float                          InMax                          (CPF_Parm)

float UObject::FPctByRange(float Value, float InMin, float InMax)
{
	static UFunction* uFnFPctByRange = nullptr;

	if (!uFnFPctByRange)
	{
		uFnFPctByRange = UFunction::FindFunction("Function Core.Object.FPctByRange");
	}

	UObject_execFPctByRange_Params FPctByRange_Params;
	memset(&FPctByRange_Params, 0, sizeof(FPctByRange_Params));
	memcpy_s(&FPctByRange_Params.Value, sizeof(FPctByRange_Params.Value), &Value, sizeof(Value));
	memcpy_s(&FPctByRange_Params.InMin, sizeof(FPctByRange_Params.InMin), &InMin, sizeof(InMin));
	memcpy_s(&FPctByRange_Params.InMax, sizeof(FPctByRange_Params.InMax), &InMax, sizeof(InMax));

	UObject::StaticClass()->ProcessEvent(uFnFPctByRange, &FPctByRange_Params, nullptr);

	return FPctByRange_Params.ReturnValue;
};

// Function Core.Object.RandRange
// [0x00022103] (FUNC_Final | FUNC_Defined | FUNC_Simulated | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InMin                          (CPF_Parm)
// float                          InMax                          (CPF_Parm)

float UObject::RandRange(float InMin, float InMax)
{
	static UFunction* uFnRandRange = nullptr;

	if (!uFnRandRange)
	{
		uFnRandRange = UFunction::FindFunction("Function Core.Object.RandRange");
	}

	UObject_execRandRange_Params RandRange_Params;
	memset(&RandRange_Params, 0, sizeof(RandRange_Params));
	memcpy_s(&RandRange_Params.InMin, sizeof(RandRange_Params.InMin), &InMin, sizeof(InMin));
	memcpy_s(&RandRange_Params.InMax, sizeof(RandRange_Params.InMax), &InMax, sizeof(InMax));

	UObject::StaticClass()->ProcessEvent(uFnRandRange, &RandRange_Params, nullptr);

	return RandRange_Params.ReturnValue;
};

// Function Core.Object.FInterpEaseInOut
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          Exp                            (CPF_Parm)

float UObject::FInterpEaseInOut(float A, float B, float Alpha, float Exp)
{
	static UFunction* uFnFInterpEaseInOut = nullptr;

	if (!uFnFInterpEaseInOut)
	{
		uFnFInterpEaseInOut = UFunction::FindFunction("Function Core.Object.FInterpEaseInOut");
	}

	UObject_execFInterpEaseInOut_Params FInterpEaseInOut_Params;
	memset(&FInterpEaseInOut_Params, 0, sizeof(FInterpEaseInOut_Params));
	memcpy_s(&FInterpEaseInOut_Params.A, sizeof(FInterpEaseInOut_Params.A), &A, sizeof(A));
	memcpy_s(&FInterpEaseInOut_Params.B, sizeof(FInterpEaseInOut_Params.B), &B, sizeof(B));
	memcpy_s(&FInterpEaseInOut_Params.Alpha, sizeof(FInterpEaseInOut_Params.Alpha), &Alpha, sizeof(Alpha));
	memcpy_s(&FInterpEaseInOut_Params.Exp, sizeof(FInterpEaseInOut_Params.Exp), &Exp, sizeof(Exp));

	uFnFInterpEaseInOut->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnFInterpEaseInOut, &FInterpEaseInOut_Params, nullptr);
	uFnFInterpEaseInOut->FunctionFlags |= 0x400;

	return FInterpEaseInOut_Params.ReturnValue;
};

// Function Core.Object.FInterpEaseOut
// [0x00022003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          Exp                            (CPF_Parm)

float UObject::FInterpEaseOut(float A, float B, float Alpha, float Exp)
{
	static UFunction* uFnFInterpEaseOut = nullptr;

	if (!uFnFInterpEaseOut)
	{
		uFnFInterpEaseOut = UFunction::FindFunction("Function Core.Object.FInterpEaseOut");
	}

	UObject_execFInterpEaseOut_Params FInterpEaseOut_Params;
	memset(&FInterpEaseOut_Params, 0, sizeof(FInterpEaseOut_Params));
	memcpy_s(&FInterpEaseOut_Params.A, sizeof(FInterpEaseOut_Params.A), &A, sizeof(A));
	memcpy_s(&FInterpEaseOut_Params.B, sizeof(FInterpEaseOut_Params.B), &B, sizeof(B));
	memcpy_s(&FInterpEaseOut_Params.Alpha, sizeof(FInterpEaseOut_Params.Alpha), &Alpha, sizeof(Alpha));
	memcpy_s(&FInterpEaseOut_Params.Exp, sizeof(FInterpEaseOut_Params.Exp), &Exp, sizeof(Exp));

	UObject::StaticClass()->ProcessEvent(uFnFInterpEaseOut, &FInterpEaseOut_Params, nullptr);

	return FInterpEaseOut_Params.ReturnValue;
};

// Function Core.Object.FInterpEaseIn
// [0x00022003] (FUNC_Final | FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          Exp                            (CPF_Parm)

float UObject::FInterpEaseIn(float A, float B, float Alpha, float Exp)
{
	static UFunction* uFnFInterpEaseIn = nullptr;

	if (!uFnFInterpEaseIn)
	{
		uFnFInterpEaseIn = UFunction::FindFunction("Function Core.Object.FInterpEaseIn");
	}

	UObject_execFInterpEaseIn_Params FInterpEaseIn_Params;
	memset(&FInterpEaseIn_Params, 0, sizeof(FInterpEaseIn_Params));
	memcpy_s(&FInterpEaseIn_Params.A, sizeof(FInterpEaseIn_Params.A), &A, sizeof(A));
	memcpy_s(&FInterpEaseIn_Params.B, sizeof(FInterpEaseIn_Params.B), &B, sizeof(B));
	memcpy_s(&FInterpEaseIn_Params.Alpha, sizeof(FInterpEaseIn_Params.Alpha), &Alpha, sizeof(Alpha));
	memcpy_s(&FInterpEaseIn_Params.Exp, sizeof(FInterpEaseIn_Params.Exp), &Exp, sizeof(Exp));

	UObject::StaticClass()->ProcessEvent(uFnFInterpEaseIn, &FInterpEaseIn_Params, nullptr);

	return FInterpEaseIn_Params.ReturnValue;
};

// Function Core.Object.FCubicInterp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          P0                             (CPF_Parm)
// float                          T0                             (CPF_Parm)
// float                          P1                             (CPF_Parm)
// float                          T1                             (CPF_Parm)
// float                          A                              (CPF_Parm)

float UObject::FCubicInterp(float P0, float T0, float P1, float T1, float A)
{
	static UFunction* uFnFCubicInterp = nullptr;

	if (!uFnFCubicInterp)
	{
		uFnFCubicInterp = UFunction::FindFunction("Function Core.Object.FCubicInterp");
	}

	UObject_execFCubicInterp_Params FCubicInterp_Params;
	memset(&FCubicInterp_Params, 0, sizeof(FCubicInterp_Params));
	memcpy_s(&FCubicInterp_Params.P0, sizeof(FCubicInterp_Params.P0), &P0, sizeof(P0));
	memcpy_s(&FCubicInterp_Params.T0, sizeof(FCubicInterp_Params.T0), &T0, sizeof(T0));
	memcpy_s(&FCubicInterp_Params.P1, sizeof(FCubicInterp_Params.P1), &P1, sizeof(P1));
	memcpy_s(&FCubicInterp_Params.T1, sizeof(FCubicInterp_Params.T1), &T1, sizeof(T1));
	memcpy_s(&FCubicInterp_Params.A, sizeof(FCubicInterp_Params.A), &A, sizeof(A));

	uFnFCubicInterp->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnFCubicInterp, &FCubicInterp_Params, nullptr);
	uFnFCubicInterp->FunctionFlags |= 0x400;

	return FCubicInterp_Params.ReturnValue;
};

// Function Core.Object.FCeil
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

int32_t UObject::FCeil(float A)
{
	static UFunction* uFnFCeil = nullptr;

	if (!uFnFCeil)
	{
		uFnFCeil = UFunction::FindFunction("Function Core.Object.FCeil");
	}

	UObject_execFCeil_Params FCeil_Params;
	memset(&FCeil_Params, 0, sizeof(FCeil_Params));
	memcpy_s(&FCeil_Params.A, sizeof(FCeil_Params.A), &A, sizeof(A));

	uFnFCeil->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnFCeil, &FCeil_Params, nullptr);
	uFnFCeil->FunctionFlags |= 0x400;

	return FCeil_Params.ReturnValue;
};

// Function Core.Object.FFloor
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

int32_t UObject::FFloor(float A)
{
	static UFunction* uFnFFloor = nullptr;

	if (!uFnFFloor)
	{
		uFnFFloor = UFunction::FindFunction("Function Core.Object.FFloor");
	}

	UObject_execFFloor_Params FFloor_Params;
	memset(&FFloor_Params, 0, sizeof(FFloor_Params));
	memcpy_s(&FFloor_Params.A, sizeof(FFloor_Params.A), &A, sizeof(A));

	uFnFFloor->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnFFloor, &FFloor_Params, nullptr);
	uFnFFloor->FunctionFlags |= 0x400;

	return FFloor_Params.ReturnValue;
};

// Function Core.Object.Round
// [0xC700022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

int32_t UObject::Round(float A)
{
	static UFunction* uFnRound = nullptr;

	if (!uFnRound)
	{
		uFnRound = UFunction::FindFunction("Function Core.Object.Round");
	}

	UObject_execRound_Params Round_Params;
	memset(&Round_Params, 0, sizeof(Round_Params));
	memcpy_s(&Round_Params.A, sizeof(Round_Params.A), &A, sizeof(A));

	uFnRound->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnRound, &Round_Params, nullptr);
	uFnRound->FunctionFlags |= 0x400;

	return Round_Params.ReturnValue;
};

// Function Core.Object.Lerp
// [0xF700022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)

float UObject::Lerp(float A, float B, float Alpha)
{
	static UFunction* uFnLerp = nullptr;

	if (!uFnLerp)
	{
		uFnLerp = UFunction::FindFunction("Function Core.Object.Lerp");
	}

	UObject_execLerp_Params Lerp_Params;
	memset(&Lerp_Params, 0, sizeof(Lerp_Params));
	memcpy_s(&Lerp_Params.A, sizeof(Lerp_Params.A), &A, sizeof(A));
	memcpy_s(&Lerp_Params.B, sizeof(Lerp_Params.B), &B, sizeof(B));
	memcpy_s(&Lerp_Params.Alpha, sizeof(Lerp_Params.Alpha), &Alpha, sizeof(Alpha));

	uFnLerp->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLerp, &Lerp_Params, nullptr);
	uFnLerp->FunctionFlags |= 0x400;

	return Lerp_Params.ReturnValue;
};

// Function Core.Object.FClamp
// [0xF600022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          V                              (CPF_Parm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::FClamp(float V, float A, float B)
{
	static UFunction* uFnFClamp = nullptr;

	if (!uFnFClamp)
	{
		uFnFClamp = UFunction::FindFunction("Function Core.Object.FClamp");
	}

	UObject_execFClamp_Params FClamp_Params;
	memset(&FClamp_Params, 0, sizeof(FClamp_Params));
	memcpy_s(&FClamp_Params.V, sizeof(FClamp_Params.V), &V, sizeof(V));
	memcpy_s(&FClamp_Params.A, sizeof(FClamp_Params.A), &A, sizeof(A));
	memcpy_s(&FClamp_Params.B, sizeof(FClamp_Params.B), &B, sizeof(B));

	uFnFClamp->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnFClamp, &FClamp_Params, nullptr);
	uFnFClamp->FunctionFlags |= 0x400;

	return FClamp_Params.ReturnValue;
};

// Function Core.Object.FMax
// [0xF500022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::FMax(float A, float B)
{
	static UFunction* uFnFMax = nullptr;

	if (!uFnFMax)
	{
		uFnFMax = UFunction::FindFunction("Function Core.Object.FMax");
	}

	UObject_execFMax_Params FMax_Params;
	memset(&FMax_Params, 0, sizeof(FMax_Params));
	memcpy_s(&FMax_Params.A, sizeof(FMax_Params.A), &A, sizeof(A));
	memcpy_s(&FMax_Params.B, sizeof(FMax_Params.B), &B, sizeof(B));

	uFnFMax->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnFMax, &FMax_Params, nullptr);
	uFnFMax->FunctionFlags |= 0x400;

	return FMax_Params.ReturnValue;
};

// Function Core.Object.FMin
// [0xF400022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::FMin(float A, float B)
{
	static UFunction* uFnFMin = nullptr;

	if (!uFnFMin)
	{
		uFnFMin = UFunction::FindFunction("Function Core.Object.FMin");
	}

	UObject_execFMin_Params FMin_Params;
	memset(&FMin_Params, 0, sizeof(FMin_Params));
	memcpy_s(&FMin_Params.A, sizeof(FMin_Params.A), &A, sizeof(A));
	memcpy_s(&FMin_Params.B, sizeof(FMin_Params.B), &B, sizeof(B));

	uFnFMin->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnFMin, &FMin_Params, nullptr);
	uFnFMin->FunctionFlags |= 0x400;

	return FMin_Params.ReturnValue;
};

// Function Core.Object.FRand
// [0xC300022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UObject::FRand()
{
	static UFunction* uFnFRand = nullptr;

	if (!uFnFRand)
	{
		uFnFRand = UFunction::FindFunction("Function Core.Object.FRand");
	}

	UObject_execFRand_Params FRand_Params;
	memset(&FRand_Params, 0, sizeof(FRand_Params));

	uFnFRand->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnFRand, &FRand_Params, nullptr);
	uFnFRand->FunctionFlags |= 0x400;

	return FRand_Params.ReturnValue;
};

// Function Core.Object.Square
// [0xC200022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Square(float A)
{
	static UFunction* uFnSquare = nullptr;

	if (!uFnSquare)
	{
		uFnSquare = UFunction::FindFunction("Function Core.Object.Square");
	}

	UObject_execSquare_Params Square_Params;
	memset(&Square_Params, 0, sizeof(Square_Params));
	memcpy_s(&Square_Params.A, sizeof(Square_Params.A), &A, sizeof(A));

	uFnSquare->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSquare, &Square_Params, nullptr);
	uFnSquare->FunctionFlags |= 0x400;

	return Square_Params.ReturnValue;
};

// Function Core.Object.Sqrt
// [0xC100022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Sqrt(float A)
{
	static UFunction* uFnSqrt = nullptr;

	if (!uFnSqrt)
	{
		uFnSqrt = UFunction::FindFunction("Function Core.Object.Sqrt");
	}

	UObject_execSqrt_Params Sqrt_Params;
	memset(&Sqrt_Params, 0, sizeof(Sqrt_Params));
	memcpy_s(&Sqrt_Params.A, sizeof(Sqrt_Params.A), &A, sizeof(A));

	uFnSqrt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSqrt, &Sqrt_Params, nullptr);
	uFnSqrt->FunctionFlags |= 0x400;

	return Sqrt_Params.ReturnValue;
};

// Function Core.Object.Loge
// [0xC000022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Loge(float A)
{
	static UFunction* uFnLoge = nullptr;

	if (!uFnLoge)
	{
		uFnLoge = UFunction::FindFunction("Function Core.Object.Loge");
	}

	UObject_execLoge_Params Loge_Params;
	memset(&Loge_Params, 0, sizeof(Loge_Params));
	memcpy_s(&Loge_Params.A, sizeof(Loge_Params.A), &A, sizeof(A));

	uFnLoge->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLoge, &Loge_Params, nullptr);
	uFnLoge->FunctionFlags |= 0x400;

	return Loge_Params.ReturnValue;
};

// Function Core.Object.Exp
// [0xBF00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Exp(float A)
{
	static UFunction* uFnExp = nullptr;

	if (!uFnExp)
	{
		uFnExp = UFunction::FindFunction("Function Core.Object.Exp");
	}

	UObject_execExp_Params Exp_Params;
	memset(&Exp_Params, 0, sizeof(Exp_Params));
	memcpy_s(&Exp_Params.A, sizeof(Exp_Params.A), &A, sizeof(A));

	uFnExp->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnExp, &Exp_Params, nullptr);
	uFnExp->FunctionFlags |= 0x400;

	return Exp_Params.ReturnValue;
};

// Function Core.Object.Atan2
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Atan2(float A, float B)
{
	static UFunction* uFnAtan2 = nullptr;

	if (!uFnAtan2)
	{
		uFnAtan2 = UFunction::FindFunction("Function Core.Object.Atan2");
	}

	UObject_execAtan2_Params Atan2_Params;
	memset(&Atan2_Params, 0, sizeof(Atan2_Params));
	memcpy_s(&Atan2_Params.A, sizeof(Atan2_Params.A), &A, sizeof(A));
	memcpy_s(&Atan2_Params.B, sizeof(Atan2_Params.B), &B, sizeof(B));

	uFnAtan2->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAtan2, &Atan2_Params, nullptr);
	uFnAtan2->FunctionFlags |= 0x400;

	return Atan2_Params.ReturnValue;
};

// Function Core.Object.Atan
// [0xBE00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Atan(float A)
{
	static UFunction* uFnAtan = nullptr;

	if (!uFnAtan)
	{
		uFnAtan = UFunction::FindFunction("Function Core.Object.Atan");
	}

	UObject_execAtan_Params Atan_Params;
	memset(&Atan_Params, 0, sizeof(Atan_Params));
	memcpy_s(&Atan_Params.A, sizeof(Atan_Params.A), &A, sizeof(A));

	uFnAtan->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAtan, &Atan_Params, nullptr);
	uFnAtan->FunctionFlags |= 0x400;

	return Atan_Params.ReturnValue;
};

// Function Core.Object.Tan
// [0xBD00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Tan(float A)
{
	static UFunction* uFnTan = nullptr;

	if (!uFnTan)
	{
		uFnTan = UFunction::FindFunction("Function Core.Object.Tan");
	}

	UObject_execTan_Params Tan_Params;
	memset(&Tan_Params, 0, sizeof(Tan_Params));
	memcpy_s(&Tan_Params.A, sizeof(Tan_Params.A), &A, sizeof(A));

	uFnTan->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnTan, &Tan_Params, nullptr);
	uFnTan->FunctionFlags |= 0x400;

	return Tan_Params.ReturnValue;
};

// Function Core.Object.Acos
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Acos(float A)
{
	static UFunction* uFnAcos = nullptr;

	if (!uFnAcos)
	{
		uFnAcos = UFunction::FindFunction("Function Core.Object.Acos");
	}

	UObject_execAcos_Params Acos_Params;
	memset(&Acos_Params, 0, sizeof(Acos_Params));
	memcpy_s(&Acos_Params.A, sizeof(Acos_Params.A), &A, sizeof(A));

	uFnAcos->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAcos, &Acos_Params, nullptr);
	uFnAcos->FunctionFlags |= 0x400;

	return Acos_Params.ReturnValue;
};

// Function Core.Object.Cos
// [0xBC00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Cos(float A)
{
	static UFunction* uFnCos = nullptr;

	if (!uFnCos)
	{
		uFnCos = UFunction::FindFunction("Function Core.Object.Cos");
	}

	UObject_execCos_Params Cos_Params;
	memset(&Cos_Params, 0, sizeof(Cos_Params));
	memcpy_s(&Cos_Params.A, sizeof(Cos_Params.A), &A, sizeof(A));

	uFnCos->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnCos, &Cos_Params, nullptr);
	uFnCos->FunctionFlags |= 0x400;

	return Cos_Params.ReturnValue;
};

// Function Core.Object.Asin
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Asin(float A)
{
	static UFunction* uFnAsin = nullptr;

	if (!uFnAsin)
	{
		uFnAsin = UFunction::FindFunction("Function Core.Object.Asin");
	}

	UObject_execAsin_Params Asin_Params;
	memset(&Asin_Params, 0, sizeof(Asin_Params));
	memcpy_s(&Asin_Params.A, sizeof(Asin_Params.A), &A, sizeof(A));

	uFnAsin->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAsin, &Asin_Params, nullptr);
	uFnAsin->FunctionFlags |= 0x400;

	return Asin_Params.ReturnValue;
};

// Function Core.Object.Sin
// [0xBB00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Sin(float A)
{
	static UFunction* uFnSin = nullptr;

	if (!uFnSin)
	{
		uFnSin = UFunction::FindFunction("Function Core.Object.Sin");
	}

	UObject_execSin_Params Sin_Params;
	memset(&Sin_Params, 0, sizeof(Sin_Params));
	memcpy_s(&Sin_Params.A, sizeof(Sin_Params.A), &A, sizeof(A));

	uFnSin->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSin, &Sin_Params, nullptr);
	uFnSin->FunctionFlags |= 0x400;

	return Sin_Params.ReturnValue;
};

// Function Core.Object.Abs
// [0xBA00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Abs(float A)
{
	static UFunction* uFnAbs = nullptr;

	if (!uFnAbs)
	{
		uFnAbs = UFunction::FindFunction("Function Core.Object.Abs");
	}

	UObject_execAbs_Params Abs_Params;
	memset(&Abs_Params, 0, sizeof(Abs_Params));
	memcpy_s(&Abs_Params.A, sizeof(Abs_Params.A), &A, sizeof(A));

	uFnAbs->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAbs, &Abs_Params, nullptr);
	uFnAbs->FunctionFlags |= 0x400;

	return Abs_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_FloatFloat
// [0xB900423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm | CPF_OutParm)

float UObject::SubtractEqual_FloatFloat(float B, float& A)
{
	static UFunction* uFnSubtractEqual_FloatFloat = nullptr;

	if (!uFnSubtractEqual_FloatFloat)
	{
		uFnSubtractEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.SubtractEqual_FloatFloat");
	}

	UObject_execSubtractEqual_FloatFloat_Params SubtractEqual_FloatFloat_Params;
	memset(&SubtractEqual_FloatFloat_Params, 0, sizeof(SubtractEqual_FloatFloat_Params));
	memcpy_s(&SubtractEqual_FloatFloat_Params.B, sizeof(SubtractEqual_FloatFloat_Params.B), &B, sizeof(B));
	memcpy_s(&SubtractEqual_FloatFloat_Params.A, sizeof(SubtractEqual_FloatFloat_Params.A), &A, sizeof(A));

	uFnSubtractEqual_FloatFloat->iNative = 0;
	uFnSubtractEqual_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_FloatFloat, &SubtractEqual_FloatFloat_Params, nullptr);
	uFnSubtractEqual_FloatFloat->FunctionFlags |= 0x400;
	uFnSubtractEqual_FloatFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &SubtractEqual_FloatFloat_Params.A, sizeof(SubtractEqual_FloatFloat_Params.A));

	return SubtractEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.AddEqual_FloatFloat
// [0xB800423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm | CPF_OutParm)

float UObject::AddEqual_FloatFloat(float B, float& A)
{
	static UFunction* uFnAddEqual_FloatFloat = nullptr;

	if (!uFnAddEqual_FloatFloat)
	{
		uFnAddEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.AddEqual_FloatFloat");
	}

	UObject_execAddEqual_FloatFloat_Params AddEqual_FloatFloat_Params;
	memset(&AddEqual_FloatFloat_Params, 0, sizeof(AddEqual_FloatFloat_Params));
	memcpy_s(&AddEqual_FloatFloat_Params.B, sizeof(AddEqual_FloatFloat_Params.B), &B, sizeof(B));
	memcpy_s(&AddEqual_FloatFloat_Params.A, sizeof(AddEqual_FloatFloat_Params.A), &A, sizeof(A));

	uFnAddEqual_FloatFloat->iNative = 0;
	uFnAddEqual_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAddEqual_FloatFloat, &AddEqual_FloatFloat_Params, nullptr);
	uFnAddEqual_FloatFloat->FunctionFlags |= 0x400;
	uFnAddEqual_FloatFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &AddEqual_FloatFloat_Params.A, sizeof(AddEqual_FloatFloat_Params.A));

	return AddEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_FloatFloat
// [0xB700423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm | CPF_OutParm)

float UObject::DivideEqual_FloatFloat(float B, float& A)
{
	static UFunction* uFnDivideEqual_FloatFloat = nullptr;

	if (!uFnDivideEqual_FloatFloat)
	{
		uFnDivideEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.DivideEqual_FloatFloat");
	}

	UObject_execDivideEqual_FloatFloat_Params DivideEqual_FloatFloat_Params;
	memset(&DivideEqual_FloatFloat_Params, 0, sizeof(DivideEqual_FloatFloat_Params));
	memcpy_s(&DivideEqual_FloatFloat_Params.B, sizeof(DivideEqual_FloatFloat_Params.B), &B, sizeof(B));
	memcpy_s(&DivideEqual_FloatFloat_Params.A, sizeof(DivideEqual_FloatFloat_Params.A), &A, sizeof(A));

	uFnDivideEqual_FloatFloat->iNative = 0;
	uFnDivideEqual_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_FloatFloat, &DivideEqual_FloatFloat_Params, nullptr);
	uFnDivideEqual_FloatFloat->FunctionFlags |= 0x400;
	uFnDivideEqual_FloatFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &DivideEqual_FloatFloat_Params.A, sizeof(DivideEqual_FloatFloat_Params.A));

	return DivideEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_FloatFloat
// [0xB600423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm | CPF_OutParm)

float UObject::MultiplyEqual_FloatFloat(float B, float& A)
{
	static UFunction* uFnMultiplyEqual_FloatFloat = nullptr;

	if (!uFnMultiplyEqual_FloatFloat)
	{
		uFnMultiplyEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_FloatFloat");
	}

	UObject_execMultiplyEqual_FloatFloat_Params MultiplyEqual_FloatFloat_Params;
	memset(&MultiplyEqual_FloatFloat_Params, 0, sizeof(MultiplyEqual_FloatFloat_Params));
	memcpy_s(&MultiplyEqual_FloatFloat_Params.B, sizeof(MultiplyEqual_FloatFloat_Params.B), &B, sizeof(B));
	memcpy_s(&MultiplyEqual_FloatFloat_Params.A, sizeof(MultiplyEqual_FloatFloat_Params.A), &A, sizeof(A));

	uFnMultiplyEqual_FloatFloat->iNative = 0;
	uFnMultiplyEqual_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_FloatFloat, &MultiplyEqual_FloatFloat_Params, nullptr);
	uFnMultiplyEqual_FloatFloat->FunctionFlags |= 0x400;
	uFnMultiplyEqual_FloatFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &MultiplyEqual_FloatFloat_Params.A, sizeof(MultiplyEqual_FloatFloat_Params.A));

	return MultiplyEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.NotEqual_FloatFloat
// [0xB500023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[26])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::NotEqual_FloatFloat(float A, float B)
{
	static UFunction* uFnNotEqual_FloatFloat = nullptr;

	if (!uFnNotEqual_FloatFloat)
	{
		uFnNotEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.NotEqual_FloatFloat");
	}

	UObject_execNotEqual_FloatFloat_Params NotEqual_FloatFloat_Params;
	memset(&NotEqual_FloatFloat_Params, 0, sizeof(NotEqual_FloatFloat_Params));
	memcpy_s(&NotEqual_FloatFloat_Params.A, sizeof(NotEqual_FloatFloat_Params.A), &A, sizeof(A));
	memcpy_s(&NotEqual_FloatFloat_Params.B, sizeof(NotEqual_FloatFloat_Params.B), &B, sizeof(B));

	uFnNotEqual_FloatFloat->iNative = 0;
	uFnNotEqual_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNotEqual_FloatFloat, &NotEqual_FloatFloat_Params, nullptr);
	uFnNotEqual_FloatFloat->FunctionFlags |= 0x400;
	uFnNotEqual_FloatFloat->iNative = 26;

	return NotEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.ComplementEqual_FloatFloat
// [0xD200023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::ComplementEqual_FloatFloat(float A, float B)
{
	static UFunction* uFnComplementEqual_FloatFloat = nullptr;

	if (!uFnComplementEqual_FloatFloat)
	{
		uFnComplementEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.ComplementEqual_FloatFloat");
	}

	UObject_execComplementEqual_FloatFloat_Params ComplementEqual_FloatFloat_Params;
	memset(&ComplementEqual_FloatFloat_Params, 0, sizeof(ComplementEqual_FloatFloat_Params));
	memcpy_s(&ComplementEqual_FloatFloat_Params.A, sizeof(ComplementEqual_FloatFloat_Params.A), &A, sizeof(A));
	memcpy_s(&ComplementEqual_FloatFloat_Params.B, sizeof(ComplementEqual_FloatFloat_Params.B), &B, sizeof(B));

	uFnComplementEqual_FloatFloat->iNative = 0;
	uFnComplementEqual_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnComplementEqual_FloatFloat, &ComplementEqual_FloatFloat_Params, nullptr);
	uFnComplementEqual_FloatFloat->FunctionFlags |= 0x400;
	uFnComplementEqual_FloatFloat->iNative = 24;

	return ComplementEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_FloatFloat
// [0xB400023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::EqualEqual_FloatFloat(float A, float B)
{
	static UFunction* uFnEqualEqual_FloatFloat = nullptr;

	if (!uFnEqualEqual_FloatFloat)
	{
		uFnEqualEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.EqualEqual_FloatFloat");
	}

	UObject_execEqualEqual_FloatFloat_Params EqualEqual_FloatFloat_Params;
	memset(&EqualEqual_FloatFloat_Params, 0, sizeof(EqualEqual_FloatFloat_Params));
	memcpy_s(&EqualEqual_FloatFloat_Params.A, sizeof(EqualEqual_FloatFloat_Params.A), &A, sizeof(A));
	memcpy_s(&EqualEqual_FloatFloat_Params.B, sizeof(EqualEqual_FloatFloat_Params.B), &B, sizeof(B));

	uFnEqualEqual_FloatFloat->iNative = 0;
	uFnEqualEqual_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_FloatFloat, &EqualEqual_FloatFloat_Params, nullptr);
	uFnEqualEqual_FloatFloat->FunctionFlags |= 0x400;
	uFnEqualEqual_FloatFloat->iNative = 24;

	return EqualEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.GreaterEqual_FloatFloat
// [0xB300023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::GreaterEqual_FloatFloat(float A, float B)
{
	static UFunction* uFnGreaterEqual_FloatFloat = nullptr;

	if (!uFnGreaterEqual_FloatFloat)
	{
		uFnGreaterEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.GreaterEqual_FloatFloat");
	}

	UObject_execGreaterEqual_FloatFloat_Params GreaterEqual_FloatFloat_Params;
	memset(&GreaterEqual_FloatFloat_Params, 0, sizeof(GreaterEqual_FloatFloat_Params));
	memcpy_s(&GreaterEqual_FloatFloat_Params.A, sizeof(GreaterEqual_FloatFloat_Params.A), &A, sizeof(A));
	memcpy_s(&GreaterEqual_FloatFloat_Params.B, sizeof(GreaterEqual_FloatFloat_Params.B), &B, sizeof(B));

	uFnGreaterEqual_FloatFloat->iNative = 0;
	uFnGreaterEqual_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGreaterEqual_FloatFloat, &GreaterEqual_FloatFloat_Params, nullptr);
	uFnGreaterEqual_FloatFloat->FunctionFlags |= 0x400;
	uFnGreaterEqual_FloatFloat->iNative = 24;

	return GreaterEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.LessEqual_FloatFloat
// [0xB200023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::LessEqual_FloatFloat(float A, float B)
{
	static UFunction* uFnLessEqual_FloatFloat = nullptr;

	if (!uFnLessEqual_FloatFloat)
	{
		uFnLessEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.LessEqual_FloatFloat");
	}

	UObject_execLessEqual_FloatFloat_Params LessEqual_FloatFloat_Params;
	memset(&LessEqual_FloatFloat_Params, 0, sizeof(LessEqual_FloatFloat_Params));
	memcpy_s(&LessEqual_FloatFloat_Params.A, sizeof(LessEqual_FloatFloat_Params.A), &A, sizeof(A));
	memcpy_s(&LessEqual_FloatFloat_Params.B, sizeof(LessEqual_FloatFloat_Params.B), &B, sizeof(B));

	uFnLessEqual_FloatFloat->iNative = 0;
	uFnLessEqual_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLessEqual_FloatFloat, &LessEqual_FloatFloat_Params, nullptr);
	uFnLessEqual_FloatFloat->FunctionFlags |= 0x400;
	uFnLessEqual_FloatFloat->iNative = 24;

	return LessEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Greater_FloatFloat
// [0xB100023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::Greater_FloatFloat(float A, float B)
{
	static UFunction* uFnGreater_FloatFloat = nullptr;

	if (!uFnGreater_FloatFloat)
	{
		uFnGreater_FloatFloat = UFunction::FindFunction("Function Core.Object.Greater_FloatFloat");
	}

	UObject_execGreater_FloatFloat_Params Greater_FloatFloat_Params;
	memset(&Greater_FloatFloat_Params, 0, sizeof(Greater_FloatFloat_Params));
	memcpy_s(&Greater_FloatFloat_Params.A, sizeof(Greater_FloatFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Greater_FloatFloat_Params.B, sizeof(Greater_FloatFloat_Params.B), &B, sizeof(B));

	uFnGreater_FloatFloat->iNative = 0;
	uFnGreater_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGreater_FloatFloat, &Greater_FloatFloat_Params, nullptr);
	uFnGreater_FloatFloat->FunctionFlags |= 0x400;
	uFnGreater_FloatFloat->iNative = 24;

	return Greater_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Less_FloatFloat
// [0xB000023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::Less_FloatFloat(float A, float B)
{
	static UFunction* uFnLess_FloatFloat = nullptr;

	if (!uFnLess_FloatFloat)
	{
		uFnLess_FloatFloat = UFunction::FindFunction("Function Core.Object.Less_FloatFloat");
	}

	UObject_execLess_FloatFloat_Params Less_FloatFloat_Params;
	memset(&Less_FloatFloat_Params, 0, sizeof(Less_FloatFloat_Params));
	memcpy_s(&Less_FloatFloat_Params.A, sizeof(Less_FloatFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Less_FloatFloat_Params.B, sizeof(Less_FloatFloat_Params.B), &B, sizeof(B));

	uFnLess_FloatFloat->iNative = 0;
	uFnLess_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLess_FloatFloat, &Less_FloatFloat_Params, nullptr);
	uFnLess_FloatFloat->FunctionFlags |= 0x400;
	uFnLess_FloatFloat->iNative = 24;

	return Less_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Subtract_FloatFloat
// [0xAF00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[20])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Subtract_FloatFloat(float A, float B)
{
	static UFunction* uFnSubtract_FloatFloat = nullptr;

	if (!uFnSubtract_FloatFloat)
	{
		uFnSubtract_FloatFloat = UFunction::FindFunction("Function Core.Object.Subtract_FloatFloat");
	}

	UObject_execSubtract_FloatFloat_Params Subtract_FloatFloat_Params;
	memset(&Subtract_FloatFloat_Params, 0, sizeof(Subtract_FloatFloat_Params));
	memcpy_s(&Subtract_FloatFloat_Params.A, sizeof(Subtract_FloatFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Subtract_FloatFloat_Params.B, sizeof(Subtract_FloatFloat_Params.B), &B, sizeof(B));

	uFnSubtract_FloatFloat->iNative = 0;
	uFnSubtract_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtract_FloatFloat, &Subtract_FloatFloat_Params, nullptr);
	uFnSubtract_FloatFloat->FunctionFlags |= 0x400;
	uFnSubtract_FloatFloat->iNative = 20;

	return Subtract_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Add_FloatFloat
// [0xAE00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[20])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Add_FloatFloat(float A, float B)
{
	static UFunction* uFnAdd_FloatFloat = nullptr;

	if (!uFnAdd_FloatFloat)
	{
		uFnAdd_FloatFloat = UFunction::FindFunction("Function Core.Object.Add_FloatFloat");
	}

	UObject_execAdd_FloatFloat_Params Add_FloatFloat_Params;
	memset(&Add_FloatFloat_Params, 0, sizeof(Add_FloatFloat_Params));
	memcpy_s(&Add_FloatFloat_Params.A, sizeof(Add_FloatFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Add_FloatFloat_Params.B, sizeof(Add_FloatFloat_Params.B), &B, sizeof(B));

	uFnAdd_FloatFloat->iNative = 0;
	uFnAdd_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAdd_FloatFloat, &Add_FloatFloat_Params, nullptr);
	uFnAdd_FloatFloat->FunctionFlags |= 0x400;
	uFnAdd_FloatFloat->iNative = 20;

	return Add_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Percent_FloatFloat
// [0xAD00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[18])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Percent_FloatFloat(float A, float B)
{
	static UFunction* uFnPercent_FloatFloat = nullptr;

	if (!uFnPercent_FloatFloat)
	{
		uFnPercent_FloatFloat = UFunction::FindFunction("Function Core.Object.Percent_FloatFloat");
	}

	UObject_execPercent_FloatFloat_Params Percent_FloatFloat_Params;
	memset(&Percent_FloatFloat_Params, 0, sizeof(Percent_FloatFloat_Params));
	memcpy_s(&Percent_FloatFloat_Params.A, sizeof(Percent_FloatFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Percent_FloatFloat_Params.B, sizeof(Percent_FloatFloat_Params.B), &B, sizeof(B));

	uFnPercent_FloatFloat->iNative = 0;
	uFnPercent_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnPercent_FloatFloat, &Percent_FloatFloat_Params, nullptr);
	uFnPercent_FloatFloat->FunctionFlags |= 0x400;
	uFnPercent_FloatFloat->iNative = 18;

	return Percent_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Divide_FloatFloat
// [0xAC00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Divide_FloatFloat(float A, float B)
{
	static UFunction* uFnDivide_FloatFloat = nullptr;

	if (!uFnDivide_FloatFloat)
	{
		uFnDivide_FloatFloat = UFunction::FindFunction("Function Core.Object.Divide_FloatFloat");
	}

	UObject_execDivide_FloatFloat_Params Divide_FloatFloat_Params;
	memset(&Divide_FloatFloat_Params, 0, sizeof(Divide_FloatFloat_Params));
	memcpy_s(&Divide_FloatFloat_Params.A, sizeof(Divide_FloatFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Divide_FloatFloat_Params.B, sizeof(Divide_FloatFloat_Params.B), &B, sizeof(B));

	uFnDivide_FloatFloat->iNative = 0;
	uFnDivide_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDivide_FloatFloat, &Divide_FloatFloat_Params, nullptr);
	uFnDivide_FloatFloat->FunctionFlags |= 0x400;
	uFnDivide_FloatFloat->iNative = 16;

	return Divide_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Multiply_FloatFloat
// [0xAB00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Multiply_FloatFloat(float A, float B)
{
	static UFunction* uFnMultiply_FloatFloat = nullptr;

	if (!uFnMultiply_FloatFloat)
	{
		uFnMultiply_FloatFloat = UFunction::FindFunction("Function Core.Object.Multiply_FloatFloat");
	}

	UObject_execMultiply_FloatFloat_Params Multiply_FloatFloat_Params;
	memset(&Multiply_FloatFloat_Params, 0, sizeof(Multiply_FloatFloat_Params));
	memcpy_s(&Multiply_FloatFloat_Params.A, sizeof(Multiply_FloatFloat_Params.A), &A, sizeof(A));
	memcpy_s(&Multiply_FloatFloat_Params.B, sizeof(Multiply_FloatFloat_Params.B), &B, sizeof(B));

	uFnMultiply_FloatFloat->iNative = 0;
	uFnMultiply_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiply_FloatFloat, &Multiply_FloatFloat_Params, nullptr);
	uFnMultiply_FloatFloat->FunctionFlags |= 0x400;
	uFnMultiply_FloatFloat->iNative = 16;

	return Multiply_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyMultiply_FloatFloat
// [0xAA00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[12])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Base                           (CPF_Parm)
// float                          Exp                            (CPF_Parm)

float UObject::MultiplyMultiply_FloatFloat(float Base, float Exp)
{
	static UFunction* uFnMultiplyMultiply_FloatFloat = nullptr;

	if (!uFnMultiplyMultiply_FloatFloat)
	{
		uFnMultiplyMultiply_FloatFloat = UFunction::FindFunction("Function Core.Object.MultiplyMultiply_FloatFloat");
	}

	UObject_execMultiplyMultiply_FloatFloat_Params MultiplyMultiply_FloatFloat_Params;
	memset(&MultiplyMultiply_FloatFloat_Params, 0, sizeof(MultiplyMultiply_FloatFloat_Params));
	memcpy_s(&MultiplyMultiply_FloatFloat_Params.Base, sizeof(MultiplyMultiply_FloatFloat_Params.Base), &Base, sizeof(Base));
	memcpy_s(&MultiplyMultiply_FloatFloat_Params.Exp, sizeof(MultiplyMultiply_FloatFloat_Params.Exp), &Exp, sizeof(Exp));

	uFnMultiplyMultiply_FloatFloat->iNative = 0;
	uFnMultiplyMultiply_FloatFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiplyMultiply_FloatFloat, &MultiplyMultiply_FloatFloat_Params, nullptr);
	uFnMultiplyMultiply_FloatFloat->FunctionFlags |= 0x400;
	uFnMultiplyMultiply_FloatFloat->iNative = 12;

	return MultiplyMultiply_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Subtract_PreFloat
// [0xA900023411] (FUNC_Final | FUNC_PreOperator | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Subtract_PreFloat(float A)
{
	static UFunction* uFnSubtract_PreFloat = nullptr;

	if (!uFnSubtract_PreFloat)
	{
		uFnSubtract_PreFloat = UFunction::FindFunction("Function Core.Object.Subtract_PreFloat");
	}

	UObject_execSubtract_PreFloat_Params Subtract_PreFloat_Params;
	memset(&Subtract_PreFloat_Params, 0, sizeof(Subtract_PreFloat_Params));
	memcpy_s(&Subtract_PreFloat_Params.A, sizeof(Subtract_PreFloat_Params.A), &A, sizeof(A));

	uFnSubtract_PreFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtract_PreFloat, &Subtract_PreFloat_Params, nullptr);
	uFnSubtract_PreFloat->FunctionFlags |= 0x400;

	return Subtract_PreFloat_Params.ReturnValue;
};

// Function Core.Object.ToHex
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        A                              (CPF_Parm)

class FString UObject::ToHex(int32_t A)
{
	static UFunction* uFnToHex = nullptr;

	if (!uFnToHex)
	{
		uFnToHex = UFunction::FindFunction("Function Core.Object.ToHex");
	}

	UObject_execToHex_Params ToHex_Params;
	memset(&ToHex_Params, 0, sizeof(ToHex_Params));
	memcpy_s(&ToHex_Params.A, sizeof(ToHex_Params.A), &A, sizeof(A));

	uFnToHex->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnToHex, &ToHex_Params, nullptr);
	uFnToHex->FunctionFlags |= 0x400;

	return ToHex_Params.ReturnValue;
};

// Function Core.Object.Clamp
// [0xFB00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        V                              (CPF_Parm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Clamp(int32_t V, int32_t A, int32_t B)
{
	static UFunction* uFnClamp = nullptr;

	if (!uFnClamp)
	{
		uFnClamp = UFunction::FindFunction("Function Core.Object.Clamp");
	}

	UObject_execClamp_Params Clamp_Params;
	memset(&Clamp_Params, 0, sizeof(Clamp_Params));
	memcpy_s(&Clamp_Params.V, sizeof(Clamp_Params.V), &V, sizeof(V));
	memcpy_s(&Clamp_Params.A, sizeof(Clamp_Params.A), &A, sizeof(A));
	memcpy_s(&Clamp_Params.B, sizeof(Clamp_Params.B), &B, sizeof(B));

	uFnClamp->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnClamp, &Clamp_Params, nullptr);
	uFnClamp->FunctionFlags |= 0x400;

	return Clamp_Params.ReturnValue;
};

// Function Core.Object.Max
// [0xFA00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Max(int32_t A, int32_t B)
{
	static UFunction* uFnMax = nullptr;

	if (!uFnMax)
	{
		uFnMax = UFunction::FindFunction("Function Core.Object.Max");
	}

	UObject_execMax_Params Max_Params;
	memset(&Max_Params, 0, sizeof(Max_Params));
	memcpy_s(&Max_Params.A, sizeof(Max_Params.A), &A, sizeof(A));
	memcpy_s(&Max_Params.B, sizeof(Max_Params.B), &B, sizeof(B));

	uFnMax->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMax, &Max_Params, nullptr);
	uFnMax->FunctionFlags |= 0x400;

	return Max_Params.ReturnValue;
};

// Function Core.Object.Min
// [0xF900022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Min(int32_t A, int32_t B)
{
	static UFunction* uFnMin = nullptr;

	if (!uFnMin)
	{
		uFnMin = UFunction::FindFunction("Function Core.Object.Min");
	}

	UObject_execMin_Params Min_Params;
	memset(&Min_Params, 0, sizeof(Min_Params));
	memcpy_s(&Min_Params.A, sizeof(Min_Params.A), &A, sizeof(A));
	memcpy_s(&Min_Params.B, sizeof(Min_Params.B), &B, sizeof(B));

	uFnMin->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMin, &Min_Params, nullptr);
	uFnMin->FunctionFlags |= 0x400;

	return Min_Params.ReturnValue;
};

// Function Core.Object.Rand
// [0xA700022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Max                            (CPF_Parm)

int32_t UObject::Rand(int32_t Max)
{
	static UFunction* uFnRand = nullptr;

	if (!uFnRand)
	{
		uFnRand = UFunction::FindFunction("Function Core.Object.Rand");
	}

	UObject_execRand_Params Rand_Params;
	memset(&Rand_Params, 0, sizeof(Rand_Params));
	memcpy_s(&Rand_Params.Max, sizeof(Rand_Params.Max), &Max, sizeof(Max));

	uFnRand->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnRand, &Rand_Params, nullptr);
	uFnRand->FunctionFlags |= 0x400;

	return Rand_Params.ReturnValue;
};

// Function Core.Object.SubtractSubtract_Int
// [0xA600423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::SubtractSubtract_Int(int32_t& A)
{
	static UFunction* uFnSubtractSubtract_Int = nullptr;

	if (!uFnSubtractSubtract_Int)
	{
		uFnSubtractSubtract_Int = UFunction::FindFunction("Function Core.Object.SubtractSubtract_Int");
	}

	UObject_execSubtractSubtract_Int_Params SubtractSubtract_Int_Params;
	memset(&SubtractSubtract_Int_Params, 0, sizeof(SubtractSubtract_Int_Params));
	memcpy_s(&SubtractSubtract_Int_Params.A, sizeof(SubtractSubtract_Int_Params.A), &A, sizeof(A));

	uFnSubtractSubtract_Int->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtractSubtract_Int, &SubtractSubtract_Int_Params, nullptr);
	uFnSubtractSubtract_Int->FunctionFlags |= 0x400;

	memcpy_s(&A, sizeof(A), &SubtractSubtract_Int_Params.A, sizeof(SubtractSubtract_Int_Params.A));

	return SubtractSubtract_Int_Params.ReturnValue;
};

// Function Core.Object.AddAdd_Int
// [0xA500423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::AddAdd_Int(int32_t& A)
{
	static UFunction* uFnAddAdd_Int = nullptr;

	if (!uFnAddAdd_Int)
	{
		uFnAddAdd_Int = UFunction::FindFunction("Function Core.Object.AddAdd_Int");
	}

	UObject_execAddAdd_Int_Params AddAdd_Int_Params;
	memset(&AddAdd_Int_Params, 0, sizeof(AddAdd_Int_Params));
	memcpy_s(&AddAdd_Int_Params.A, sizeof(AddAdd_Int_Params.A), &A, sizeof(A));

	uFnAddAdd_Int->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAddAdd_Int, &AddAdd_Int_Params, nullptr);
	uFnAddAdd_Int->FunctionFlags |= 0x400;

	memcpy_s(&A, sizeof(A), &AddAdd_Int_Params.A, sizeof(AddAdd_Int_Params.A));

	return AddAdd_Int_Params.ReturnValue;
};

// Function Core.Object.SubtractSubtract_PreInt
// [0xA400423411] (FUNC_Final | FUNC_PreOperator | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::SubtractSubtract_PreInt(int32_t& A)
{
	static UFunction* uFnSubtractSubtract_PreInt = nullptr;

	if (!uFnSubtractSubtract_PreInt)
	{
		uFnSubtractSubtract_PreInt = UFunction::FindFunction("Function Core.Object.SubtractSubtract_PreInt");
	}

	UObject_execSubtractSubtract_PreInt_Params SubtractSubtract_PreInt_Params;
	memset(&SubtractSubtract_PreInt_Params, 0, sizeof(SubtractSubtract_PreInt_Params));
	memcpy_s(&SubtractSubtract_PreInt_Params.A, sizeof(SubtractSubtract_PreInt_Params.A), &A, sizeof(A));

	uFnSubtractSubtract_PreInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtractSubtract_PreInt, &SubtractSubtract_PreInt_Params, nullptr);
	uFnSubtractSubtract_PreInt->FunctionFlags |= 0x400;

	memcpy_s(&A, sizeof(A), &SubtractSubtract_PreInt_Params.A, sizeof(SubtractSubtract_PreInt_Params.A));

	return SubtractSubtract_PreInt_Params.ReturnValue;
};

// Function Core.Object.AddAdd_PreInt
// [0xA300423411] (FUNC_Final | FUNC_PreOperator | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::AddAdd_PreInt(int32_t& A)
{
	static UFunction* uFnAddAdd_PreInt = nullptr;

	if (!uFnAddAdd_PreInt)
	{
		uFnAddAdd_PreInt = UFunction::FindFunction("Function Core.Object.AddAdd_PreInt");
	}

	UObject_execAddAdd_PreInt_Params AddAdd_PreInt_Params;
	memset(&AddAdd_PreInt_Params, 0, sizeof(AddAdd_PreInt_Params));
	memcpy_s(&AddAdd_PreInt_Params.A, sizeof(AddAdd_PreInt_Params.A), &A, sizeof(A));

	uFnAddAdd_PreInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAddAdd_PreInt, &AddAdd_PreInt_Params, nullptr);
	uFnAddAdd_PreInt->FunctionFlags |= 0x400;

	memcpy_s(&A, sizeof(A), &AddAdd_PreInt_Params.A, sizeof(AddAdd_PreInt_Params.A));

	return AddAdd_PreInt_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_IntInt
// [0xA200423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        B                              (CPF_Parm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::SubtractEqual_IntInt(int32_t B, int32_t& A)
{
	static UFunction* uFnSubtractEqual_IntInt = nullptr;

	if (!uFnSubtractEqual_IntInt)
	{
		uFnSubtractEqual_IntInt = UFunction::FindFunction("Function Core.Object.SubtractEqual_IntInt");
	}

	UObject_execSubtractEqual_IntInt_Params SubtractEqual_IntInt_Params;
	memset(&SubtractEqual_IntInt_Params, 0, sizeof(SubtractEqual_IntInt_Params));
	memcpy_s(&SubtractEqual_IntInt_Params.B, sizeof(SubtractEqual_IntInt_Params.B), &B, sizeof(B));
	memcpy_s(&SubtractEqual_IntInt_Params.A, sizeof(SubtractEqual_IntInt_Params.A), &A, sizeof(A));

	uFnSubtractEqual_IntInt->iNative = 0;
	uFnSubtractEqual_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_IntInt, &SubtractEqual_IntInt_Params, nullptr);
	uFnSubtractEqual_IntInt->FunctionFlags |= 0x400;
	uFnSubtractEqual_IntInt->iNative = 34;

	memcpy_s(&A, sizeof(A), &SubtractEqual_IntInt_Params.A, sizeof(SubtractEqual_IntInt_Params.A));

	return SubtractEqual_IntInt_Params.ReturnValue;
};

// Function Core.Object.AddEqual_IntInt
// [0xA100423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        B                              (CPF_Parm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::AddEqual_IntInt(int32_t B, int32_t& A)
{
	static UFunction* uFnAddEqual_IntInt = nullptr;

	if (!uFnAddEqual_IntInt)
	{
		uFnAddEqual_IntInt = UFunction::FindFunction("Function Core.Object.AddEqual_IntInt");
	}

	UObject_execAddEqual_IntInt_Params AddEqual_IntInt_Params;
	memset(&AddEqual_IntInt_Params, 0, sizeof(AddEqual_IntInt_Params));
	memcpy_s(&AddEqual_IntInt_Params.B, sizeof(AddEqual_IntInt_Params.B), &B, sizeof(B));
	memcpy_s(&AddEqual_IntInt_Params.A, sizeof(AddEqual_IntInt_Params.A), &A, sizeof(A));

	uFnAddEqual_IntInt->iNative = 0;
	uFnAddEqual_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAddEqual_IntInt, &AddEqual_IntInt_Params, nullptr);
	uFnAddEqual_IntInt->FunctionFlags |= 0x400;
	uFnAddEqual_IntInt->iNative = 34;

	memcpy_s(&A, sizeof(A), &AddEqual_IntInt_Params.A, sizeof(AddEqual_IntInt_Params.A));

	return AddEqual_IntInt_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_IntFloat
// [0xA000423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::DivideEqual_IntFloat(float B, int32_t& A)
{
	static UFunction* uFnDivideEqual_IntFloat = nullptr;

	if (!uFnDivideEqual_IntFloat)
	{
		uFnDivideEqual_IntFloat = UFunction::FindFunction("Function Core.Object.DivideEqual_IntFloat");
	}

	UObject_execDivideEqual_IntFloat_Params DivideEqual_IntFloat_Params;
	memset(&DivideEqual_IntFloat_Params, 0, sizeof(DivideEqual_IntFloat_Params));
	memcpy_s(&DivideEqual_IntFloat_Params.B, sizeof(DivideEqual_IntFloat_Params.B), &B, sizeof(B));
	memcpy_s(&DivideEqual_IntFloat_Params.A, sizeof(DivideEqual_IntFloat_Params.A), &A, sizeof(A));

	uFnDivideEqual_IntFloat->iNative = 0;
	uFnDivideEqual_IntFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_IntFloat, &DivideEqual_IntFloat_Params, nullptr);
	uFnDivideEqual_IntFloat->FunctionFlags |= 0x400;
	uFnDivideEqual_IntFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &DivideEqual_IntFloat_Params.A, sizeof(DivideEqual_IntFloat_Params.A));

	return DivideEqual_IntFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_IntFloat
// [0x9F00423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::MultiplyEqual_IntFloat(float B, int32_t& A)
{
	static UFunction* uFnMultiplyEqual_IntFloat = nullptr;

	if (!uFnMultiplyEqual_IntFloat)
	{
		uFnMultiplyEqual_IntFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_IntFloat");
	}

	UObject_execMultiplyEqual_IntFloat_Params MultiplyEqual_IntFloat_Params;
	memset(&MultiplyEqual_IntFloat_Params, 0, sizeof(MultiplyEqual_IntFloat_Params));
	memcpy_s(&MultiplyEqual_IntFloat_Params.B, sizeof(MultiplyEqual_IntFloat_Params.B), &B, sizeof(B));
	memcpy_s(&MultiplyEqual_IntFloat_Params.A, sizeof(MultiplyEqual_IntFloat_Params.A), &A, sizeof(A));

	uFnMultiplyEqual_IntFloat->iNative = 0;
	uFnMultiplyEqual_IntFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_IntFloat, &MultiplyEqual_IntFloat_Params, nullptr);
	uFnMultiplyEqual_IntFloat->FunctionFlags |= 0x400;
	uFnMultiplyEqual_IntFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &MultiplyEqual_IntFloat_Params.A, sizeof(MultiplyEqual_IntFloat_Params.A));

	return MultiplyEqual_IntFloat_Params.ReturnValue;
};

// Function Core.Object.Or_IntInt
// [0x9E00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[28])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Or_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnOr_IntInt = nullptr;

	if (!uFnOr_IntInt)
	{
		uFnOr_IntInt = UFunction::FindFunction("Function Core.Object.Or_IntInt");
	}

	UObject_execOr_IntInt_Params Or_IntInt_Params;
	memset(&Or_IntInt_Params, 0, sizeof(Or_IntInt_Params));
	memcpy_s(&Or_IntInt_Params.A, sizeof(Or_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&Or_IntInt_Params.B, sizeof(Or_IntInt_Params.B), &B, sizeof(B));

	uFnOr_IntInt->iNative = 0;
	uFnOr_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnOr_IntInt, &Or_IntInt_Params, nullptr);
	uFnOr_IntInt->FunctionFlags |= 0x400;
	uFnOr_IntInt->iNative = 28;

	return Or_IntInt_Params.ReturnValue;
};

// Function Core.Object.Xor_IntInt
// [0x9D00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[28])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Xor_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnXor_IntInt = nullptr;

	if (!uFnXor_IntInt)
	{
		uFnXor_IntInt = UFunction::FindFunction("Function Core.Object.Xor_IntInt");
	}

	UObject_execXor_IntInt_Params Xor_IntInt_Params;
	memset(&Xor_IntInt_Params, 0, sizeof(Xor_IntInt_Params));
	memcpy_s(&Xor_IntInt_Params.A, sizeof(Xor_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&Xor_IntInt_Params.B, sizeof(Xor_IntInt_Params.B), &B, sizeof(B));

	uFnXor_IntInt->iNative = 0;
	uFnXor_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnXor_IntInt, &Xor_IntInt_Params, nullptr);
	uFnXor_IntInt->FunctionFlags |= 0x400;
	uFnXor_IntInt->iNative = 28;

	return Xor_IntInt_Params.ReturnValue;
};

// Function Core.Object.And_IntInt
// [0x9C00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[28])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::And_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnAnd_IntInt = nullptr;

	if (!uFnAnd_IntInt)
	{
		uFnAnd_IntInt = UFunction::FindFunction("Function Core.Object.And_IntInt");
	}

	UObject_execAnd_IntInt_Params And_IntInt_Params;
	memset(&And_IntInt_Params, 0, sizeof(And_IntInt_Params));
	memcpy_s(&And_IntInt_Params.A, sizeof(And_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&And_IntInt_Params.B, sizeof(And_IntInt_Params.B), &B, sizeof(B));

	uFnAnd_IntInt->iNative = 0;
	uFnAnd_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAnd_IntInt, &And_IntInt_Params, nullptr);
	uFnAnd_IntInt->FunctionFlags |= 0x400;
	uFnAnd_IntInt->iNative = 28;

	return And_IntInt_Params.ReturnValue;
};

// Function Core.Object.NotEqual_IntInt
// [0x9B00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[26])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::NotEqual_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnNotEqual_IntInt = nullptr;

	if (!uFnNotEqual_IntInt)
	{
		uFnNotEqual_IntInt = UFunction::FindFunction("Function Core.Object.NotEqual_IntInt");
	}

	UObject_execNotEqual_IntInt_Params NotEqual_IntInt_Params;
	memset(&NotEqual_IntInt_Params, 0, sizeof(NotEqual_IntInt_Params));
	memcpy_s(&NotEqual_IntInt_Params.A, sizeof(NotEqual_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&NotEqual_IntInt_Params.B, sizeof(NotEqual_IntInt_Params.B), &B, sizeof(B));

	uFnNotEqual_IntInt->iNative = 0;
	uFnNotEqual_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNotEqual_IntInt, &NotEqual_IntInt_Params, nullptr);
	uFnNotEqual_IntInt->FunctionFlags |= 0x400;
	uFnNotEqual_IntInt->iNative = 26;

	return NotEqual_IntInt_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_IntInt
// [0x9A00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::EqualEqual_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnEqualEqual_IntInt = nullptr;

	if (!uFnEqualEqual_IntInt)
	{
		uFnEqualEqual_IntInt = UFunction::FindFunction("Function Core.Object.EqualEqual_IntInt");
	}

	UObject_execEqualEqual_IntInt_Params EqualEqual_IntInt_Params;
	memset(&EqualEqual_IntInt_Params, 0, sizeof(EqualEqual_IntInt_Params));
	memcpy_s(&EqualEqual_IntInt_Params.A, sizeof(EqualEqual_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&EqualEqual_IntInt_Params.B, sizeof(EqualEqual_IntInt_Params.B), &B, sizeof(B));

	uFnEqualEqual_IntInt->iNative = 0;
	uFnEqualEqual_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_IntInt, &EqualEqual_IntInt_Params, nullptr);
	uFnEqualEqual_IntInt->FunctionFlags |= 0x400;
	uFnEqualEqual_IntInt->iNative = 24;

	return EqualEqual_IntInt_Params.ReturnValue;
};

// Function Core.Object.GreaterEqual_IntInt
// [0x9900023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::GreaterEqual_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnGreaterEqual_IntInt = nullptr;

	if (!uFnGreaterEqual_IntInt)
	{
		uFnGreaterEqual_IntInt = UFunction::FindFunction("Function Core.Object.GreaterEqual_IntInt");
	}

	UObject_execGreaterEqual_IntInt_Params GreaterEqual_IntInt_Params;
	memset(&GreaterEqual_IntInt_Params, 0, sizeof(GreaterEqual_IntInt_Params));
	memcpy_s(&GreaterEqual_IntInt_Params.A, sizeof(GreaterEqual_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&GreaterEqual_IntInt_Params.B, sizeof(GreaterEqual_IntInt_Params.B), &B, sizeof(B));

	uFnGreaterEqual_IntInt->iNative = 0;
	uFnGreaterEqual_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGreaterEqual_IntInt, &GreaterEqual_IntInt_Params, nullptr);
	uFnGreaterEqual_IntInt->FunctionFlags |= 0x400;
	uFnGreaterEqual_IntInt->iNative = 24;

	return GreaterEqual_IntInt_Params.ReturnValue;
};

// Function Core.Object.LessEqual_IntInt
// [0x9800023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::LessEqual_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnLessEqual_IntInt = nullptr;

	if (!uFnLessEqual_IntInt)
	{
		uFnLessEqual_IntInt = UFunction::FindFunction("Function Core.Object.LessEqual_IntInt");
	}

	UObject_execLessEqual_IntInt_Params LessEqual_IntInt_Params;
	memset(&LessEqual_IntInt_Params, 0, sizeof(LessEqual_IntInt_Params));
	memcpy_s(&LessEqual_IntInt_Params.A, sizeof(LessEqual_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&LessEqual_IntInt_Params.B, sizeof(LessEqual_IntInt_Params.B), &B, sizeof(B));

	uFnLessEqual_IntInt->iNative = 0;
	uFnLessEqual_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLessEqual_IntInt, &LessEqual_IntInt_Params, nullptr);
	uFnLessEqual_IntInt->FunctionFlags |= 0x400;
	uFnLessEqual_IntInt->iNative = 24;

	return LessEqual_IntInt_Params.ReturnValue;
};

// Function Core.Object.Greater_IntInt
// [0x9700023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::Greater_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnGreater_IntInt = nullptr;

	if (!uFnGreater_IntInt)
	{
		uFnGreater_IntInt = UFunction::FindFunction("Function Core.Object.Greater_IntInt");
	}

	UObject_execGreater_IntInt_Params Greater_IntInt_Params;
	memset(&Greater_IntInt_Params, 0, sizeof(Greater_IntInt_Params));
	memcpy_s(&Greater_IntInt_Params.A, sizeof(Greater_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&Greater_IntInt_Params.B, sizeof(Greater_IntInt_Params.B), &B, sizeof(B));

	uFnGreater_IntInt->iNative = 0;
	uFnGreater_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGreater_IntInt, &Greater_IntInt_Params, nullptr);
	uFnGreater_IntInt->FunctionFlags |= 0x400;
	uFnGreater_IntInt->iNative = 24;

	return Greater_IntInt_Params.ReturnValue;
};

// Function Core.Object.Less_IntInt
// [0x9600023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::Less_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnLess_IntInt = nullptr;

	if (!uFnLess_IntInt)
	{
		uFnLess_IntInt = UFunction::FindFunction("Function Core.Object.Less_IntInt");
	}

	UObject_execLess_IntInt_Params Less_IntInt_Params;
	memset(&Less_IntInt_Params, 0, sizeof(Less_IntInt_Params));
	memcpy_s(&Less_IntInt_Params.A, sizeof(Less_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&Less_IntInt_Params.B, sizeof(Less_IntInt_Params.B), &B, sizeof(B));

	uFnLess_IntInt->iNative = 0;
	uFnLess_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLess_IntInt, &Less_IntInt_Params, nullptr);
	uFnLess_IntInt->FunctionFlags |= 0x400;
	uFnLess_IntInt->iNative = 24;

	return Less_IntInt_Params.ReturnValue;
};

// Function Core.Object.GreaterGreaterGreater_IntInt
// [0xC400023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[22])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::GreaterGreaterGreater_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnGreaterGreaterGreater_IntInt = nullptr;

	if (!uFnGreaterGreaterGreater_IntInt)
	{
		uFnGreaterGreaterGreater_IntInt = UFunction::FindFunction("Function Core.Object.GreaterGreaterGreater_IntInt");
	}

	UObject_execGreaterGreaterGreater_IntInt_Params GreaterGreaterGreater_IntInt_Params;
	memset(&GreaterGreaterGreater_IntInt_Params, 0, sizeof(GreaterGreaterGreater_IntInt_Params));
	memcpy_s(&GreaterGreaterGreater_IntInt_Params.A, sizeof(GreaterGreaterGreater_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&GreaterGreaterGreater_IntInt_Params.B, sizeof(GreaterGreaterGreater_IntInt_Params.B), &B, sizeof(B));

	uFnGreaterGreaterGreater_IntInt->iNative = 0;
	uFnGreaterGreaterGreater_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGreaterGreaterGreater_IntInt, &GreaterGreaterGreater_IntInt_Params, nullptr);
	uFnGreaterGreaterGreater_IntInt->FunctionFlags |= 0x400;
	uFnGreaterGreaterGreater_IntInt->iNative = 22;

	return GreaterGreaterGreater_IntInt_Params.ReturnValue;
};

// Function Core.Object.GreaterGreater_IntInt
// [0x9500023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[22])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::GreaterGreater_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnGreaterGreater_IntInt = nullptr;

	if (!uFnGreaterGreater_IntInt)
	{
		uFnGreaterGreater_IntInt = UFunction::FindFunction("Function Core.Object.GreaterGreater_IntInt");
	}

	UObject_execGreaterGreater_IntInt_Params GreaterGreater_IntInt_Params;
	memset(&GreaterGreater_IntInt_Params, 0, sizeof(GreaterGreater_IntInt_Params));
	memcpy_s(&GreaterGreater_IntInt_Params.A, sizeof(GreaterGreater_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&GreaterGreater_IntInt_Params.B, sizeof(GreaterGreater_IntInt_Params.B), &B, sizeof(B));

	uFnGreaterGreater_IntInt->iNative = 0;
	uFnGreaterGreater_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnGreaterGreater_IntInt, &GreaterGreater_IntInt_Params, nullptr);
	uFnGreaterGreater_IntInt->FunctionFlags |= 0x400;
	uFnGreaterGreater_IntInt->iNative = 22;

	return GreaterGreater_IntInt_Params.ReturnValue;
};

// Function Core.Object.LessLess_IntInt
// [0x9400023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[22])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::LessLess_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnLessLess_IntInt = nullptr;

	if (!uFnLessLess_IntInt)
	{
		uFnLessLess_IntInt = UFunction::FindFunction("Function Core.Object.LessLess_IntInt");
	}

	UObject_execLessLess_IntInt_Params LessLess_IntInt_Params;
	memset(&LessLess_IntInt_Params, 0, sizeof(LessLess_IntInt_Params));
	memcpy_s(&LessLess_IntInt_Params.A, sizeof(LessLess_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&LessLess_IntInt_Params.B, sizeof(LessLess_IntInt_Params.B), &B, sizeof(B));

	uFnLessLess_IntInt->iNative = 0;
	uFnLessLess_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnLessLess_IntInt, &LessLess_IntInt_Params, nullptr);
	uFnLessLess_IntInt->FunctionFlags |= 0x400;
	uFnLessLess_IntInt->iNative = 22;

	return LessLess_IntInt_Params.ReturnValue;
};

// Function Core.Object.Subtract_IntInt
// [0x9300023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[20])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Subtract_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnSubtract_IntInt = nullptr;

	if (!uFnSubtract_IntInt)
	{
		uFnSubtract_IntInt = UFunction::FindFunction("Function Core.Object.Subtract_IntInt");
	}

	UObject_execSubtract_IntInt_Params Subtract_IntInt_Params;
	memset(&Subtract_IntInt_Params, 0, sizeof(Subtract_IntInt_Params));
	memcpy_s(&Subtract_IntInt_Params.A, sizeof(Subtract_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&Subtract_IntInt_Params.B, sizeof(Subtract_IntInt_Params.B), &B, sizeof(B));

	uFnSubtract_IntInt->iNative = 0;
	uFnSubtract_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtract_IntInt, &Subtract_IntInt_Params, nullptr);
	uFnSubtract_IntInt->FunctionFlags |= 0x400;
	uFnSubtract_IntInt->iNative = 20;

	return Subtract_IntInt_Params.ReturnValue;
};

// Function Core.Object.Add_IntInt
// [0x9200023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[20])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Add_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnAdd_IntInt = nullptr;

	if (!uFnAdd_IntInt)
	{
		uFnAdd_IntInt = UFunction::FindFunction("Function Core.Object.Add_IntInt");
	}

	UObject_execAdd_IntInt_Params Add_IntInt_Params;
	memset(&Add_IntInt_Params, 0, sizeof(Add_IntInt_Params));
	memcpy_s(&Add_IntInt_Params.A, sizeof(Add_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&Add_IntInt_Params.B, sizeof(Add_IntInt_Params.B), &B, sizeof(B));

	uFnAdd_IntInt->iNative = 0;
	uFnAdd_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAdd_IntInt, &Add_IntInt_Params, nullptr);
	uFnAdd_IntInt->FunctionFlags |= 0x400;
	uFnAdd_IntInt->iNative = 20;

	return Add_IntInt_Params.ReturnValue;
};

// Function Core.Object.Percent_IntInt
// [0xFD00023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[18])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Percent_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnPercent_IntInt = nullptr;

	if (!uFnPercent_IntInt)
	{
		uFnPercent_IntInt = UFunction::FindFunction("Function Core.Object.Percent_IntInt");
	}

	UObject_execPercent_IntInt_Params Percent_IntInt_Params;
	memset(&Percent_IntInt_Params, 0, sizeof(Percent_IntInt_Params));
	memcpy_s(&Percent_IntInt_Params.A, sizeof(Percent_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&Percent_IntInt_Params.B, sizeof(Percent_IntInt_Params.B), &B, sizeof(B));

	uFnPercent_IntInt->iNative = 0;
	uFnPercent_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnPercent_IntInt, &Percent_IntInt_Params, nullptr);
	uFnPercent_IntInt->FunctionFlags |= 0x400;
	uFnPercent_IntInt->iNative = 18;

	return Percent_IntInt_Params.ReturnValue;
};

// Function Core.Object.Divide_IntInt
// [0x9100023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Divide_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnDivide_IntInt = nullptr;

	if (!uFnDivide_IntInt)
	{
		uFnDivide_IntInt = UFunction::FindFunction("Function Core.Object.Divide_IntInt");
	}

	UObject_execDivide_IntInt_Params Divide_IntInt_Params;
	memset(&Divide_IntInt_Params, 0, sizeof(Divide_IntInt_Params));
	memcpy_s(&Divide_IntInt_Params.A, sizeof(Divide_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&Divide_IntInt_Params.B, sizeof(Divide_IntInt_Params.B), &B, sizeof(B));

	uFnDivide_IntInt->iNative = 0;
	uFnDivide_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDivide_IntInt, &Divide_IntInt_Params, nullptr);
	uFnDivide_IntInt->FunctionFlags |= 0x400;
	uFnDivide_IntInt->iNative = 16;

	return Divide_IntInt_Params.ReturnValue;
};

// Function Core.Object.Multiply_IntInt
// [0x9000023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[16])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Multiply_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnMultiply_IntInt = nullptr;

	if (!uFnMultiply_IntInt)
	{
		uFnMultiply_IntInt = UFunction::FindFunction("Function Core.Object.Multiply_IntInt");
	}

	UObject_execMultiply_IntInt_Params Multiply_IntInt_Params;
	memset(&Multiply_IntInt_Params, 0, sizeof(Multiply_IntInt_Params));
	memcpy_s(&Multiply_IntInt_Params.A, sizeof(Multiply_IntInt_Params.A), &A, sizeof(A));
	memcpy_s(&Multiply_IntInt_Params.B, sizeof(Multiply_IntInt_Params.B), &B, sizeof(B));

	uFnMultiply_IntInt->iNative = 0;
	uFnMultiply_IntInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiply_IntInt, &Multiply_IntInt_Params, nullptr);
	uFnMultiply_IntInt->FunctionFlags |= 0x400;
	uFnMultiply_IntInt->iNative = 16;

	return Multiply_IntInt_Params.ReturnValue;
};

// Function Core.Object.Subtract_PreInt
// [0x8F00023411] (FUNC_Final | FUNC_PreOperator | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)

int32_t UObject::Subtract_PreInt(int32_t A)
{
	static UFunction* uFnSubtract_PreInt = nullptr;

	if (!uFnSubtract_PreInt)
	{
		uFnSubtract_PreInt = UFunction::FindFunction("Function Core.Object.Subtract_PreInt");
	}

	UObject_execSubtract_PreInt_Params Subtract_PreInt_Params;
	memset(&Subtract_PreInt_Params, 0, sizeof(Subtract_PreInt_Params));
	memcpy_s(&Subtract_PreInt_Params.A, sizeof(Subtract_PreInt_Params.A), &A, sizeof(A));

	uFnSubtract_PreInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtract_PreInt, &Subtract_PreInt_Params, nullptr);
	uFnSubtract_PreInt->FunctionFlags |= 0x400;

	return Subtract_PreInt_Params.ReturnValue;
};

// Function Core.Object.Complement_PreInt
// [0x8D00023411] (FUNC_Final | FUNC_PreOperator | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)

int32_t UObject::Complement_PreInt(int32_t A)
{
	static UFunction* uFnComplement_PreInt = nullptr;

	if (!uFnComplement_PreInt)
	{
		uFnComplement_PreInt = UFunction::FindFunction("Function Core.Object.Complement_PreInt");
	}

	UObject_execComplement_PreInt_Params Complement_PreInt_Params;
	memset(&Complement_PreInt_Params, 0, sizeof(Complement_PreInt_Params));
	memcpy_s(&Complement_PreInt_Params.A, sizeof(Complement_PreInt_Params.A), &A, sizeof(A));

	uFnComplement_PreInt->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnComplement_PreInt, &Complement_PreInt_Params, nullptr);
	uFnComplement_PreInt->FunctionFlags |= 0x400;

	return Complement_PreInt_Params.ReturnValue;
};

// Function Core.Object.SubtractSubtract_Byte
// [0x8C00423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::SubtractSubtract_Byte(uint8_t& A)
{
	static UFunction* uFnSubtractSubtract_Byte = nullptr;

	if (!uFnSubtractSubtract_Byte)
	{
		uFnSubtractSubtract_Byte = UFunction::FindFunction("Function Core.Object.SubtractSubtract_Byte");
	}

	UObject_execSubtractSubtract_Byte_Params SubtractSubtract_Byte_Params;
	memset(&SubtractSubtract_Byte_Params, 0, sizeof(SubtractSubtract_Byte_Params));
	memcpy_s(&SubtractSubtract_Byte_Params.A, sizeof(SubtractSubtract_Byte_Params.A), &A, sizeof(A));

	uFnSubtractSubtract_Byte->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtractSubtract_Byte, &SubtractSubtract_Byte_Params, nullptr);
	uFnSubtractSubtract_Byte->FunctionFlags |= 0x400;

	memcpy_s(&A, sizeof(A), &SubtractSubtract_Byte_Params.A, sizeof(SubtractSubtract_Byte_Params.A));

	return SubtractSubtract_Byte_Params.ReturnValue;
};

// Function Core.Object.AddAdd_Byte
// [0x8B00423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::AddAdd_Byte(uint8_t& A)
{
	static UFunction* uFnAddAdd_Byte = nullptr;

	if (!uFnAddAdd_Byte)
	{
		uFnAddAdd_Byte = UFunction::FindFunction("Function Core.Object.AddAdd_Byte");
	}

	UObject_execAddAdd_Byte_Params AddAdd_Byte_Params;
	memset(&AddAdd_Byte_Params, 0, sizeof(AddAdd_Byte_Params));
	memcpy_s(&AddAdd_Byte_Params.A, sizeof(AddAdd_Byte_Params.A), &A, sizeof(A));

	uFnAddAdd_Byte->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAddAdd_Byte, &AddAdd_Byte_Params, nullptr);
	uFnAddAdd_Byte->FunctionFlags |= 0x400;

	memcpy_s(&A, sizeof(A), &AddAdd_Byte_Params.A, sizeof(AddAdd_Byte_Params.A));

	return AddAdd_Byte_Params.ReturnValue;
};

// Function Core.Object.SubtractSubtract_PreByte
// [0x8A00423411] (FUNC_Final | FUNC_PreOperator | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::SubtractSubtract_PreByte(uint8_t& A)
{
	static UFunction* uFnSubtractSubtract_PreByte = nullptr;

	if (!uFnSubtractSubtract_PreByte)
	{
		uFnSubtractSubtract_PreByte = UFunction::FindFunction("Function Core.Object.SubtractSubtract_PreByte");
	}

	UObject_execSubtractSubtract_PreByte_Params SubtractSubtract_PreByte_Params;
	memset(&SubtractSubtract_PreByte_Params, 0, sizeof(SubtractSubtract_PreByte_Params));
	memcpy_s(&SubtractSubtract_PreByte_Params.A, sizeof(SubtractSubtract_PreByte_Params.A), &A, sizeof(A));

	uFnSubtractSubtract_PreByte->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtractSubtract_PreByte, &SubtractSubtract_PreByte_Params, nullptr);
	uFnSubtractSubtract_PreByte->FunctionFlags |= 0x400;

	memcpy_s(&A, sizeof(A), &SubtractSubtract_PreByte_Params.A, sizeof(SubtractSubtract_PreByte_Params.A));

	return SubtractSubtract_PreByte_Params.ReturnValue;
};

// Function Core.Object.AddAdd_PreByte
// [0x8900423411] (FUNC_Final | FUNC_PreOperator | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::AddAdd_PreByte(uint8_t& A)
{
	static UFunction* uFnAddAdd_PreByte = nullptr;

	if (!uFnAddAdd_PreByte)
	{
		uFnAddAdd_PreByte = UFunction::FindFunction("Function Core.Object.AddAdd_PreByte");
	}

	UObject_execAddAdd_PreByte_Params AddAdd_PreByte_Params;
	memset(&AddAdd_PreByte_Params, 0, sizeof(AddAdd_PreByte_Params));
	memcpy_s(&AddAdd_PreByte_Params.A, sizeof(AddAdd_PreByte_Params.A), &A, sizeof(A));

	uFnAddAdd_PreByte->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAddAdd_PreByte, &AddAdd_PreByte_Params, nullptr);
	uFnAddAdd_PreByte->FunctionFlags |= 0x400;

	memcpy_s(&A, sizeof(A), &AddAdd_PreByte_Params.A, sizeof(AddAdd_PreByte_Params.A));

	return AddAdd_PreByte_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_ByteByte
// [0x8800423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        B                              (CPF_Parm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::SubtractEqual_ByteByte(uint8_t B, uint8_t& A)
{
	static UFunction* uFnSubtractEqual_ByteByte = nullptr;

	if (!uFnSubtractEqual_ByteByte)
	{
		uFnSubtractEqual_ByteByte = UFunction::FindFunction("Function Core.Object.SubtractEqual_ByteByte");
	}

	UObject_execSubtractEqual_ByteByte_Params SubtractEqual_ByteByte_Params;
	memset(&SubtractEqual_ByteByte_Params, 0, sizeof(SubtractEqual_ByteByte_Params));
	memcpy_s(&SubtractEqual_ByteByte_Params.B, sizeof(SubtractEqual_ByteByte_Params.B), &B, sizeof(B));
	memcpy_s(&SubtractEqual_ByteByte_Params.A, sizeof(SubtractEqual_ByteByte_Params.A), &A, sizeof(A));

	uFnSubtractEqual_ByteByte->iNative = 0;
	uFnSubtractEqual_ByteByte->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_ByteByte, &SubtractEqual_ByteByte_Params, nullptr);
	uFnSubtractEqual_ByteByte->FunctionFlags |= 0x400;
	uFnSubtractEqual_ByteByte->iNative = 34;

	memcpy_s(&A, sizeof(A), &SubtractEqual_ByteByte_Params.A, sizeof(SubtractEqual_ByteByte_Params.A));

	return SubtractEqual_ByteByte_Params.ReturnValue;
};

// Function Core.Object.AddEqual_ByteByte
// [0x8700423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        B                              (CPF_Parm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::AddEqual_ByteByte(uint8_t B, uint8_t& A)
{
	static UFunction* uFnAddEqual_ByteByte = nullptr;

	if (!uFnAddEqual_ByteByte)
	{
		uFnAddEqual_ByteByte = UFunction::FindFunction("Function Core.Object.AddEqual_ByteByte");
	}

	UObject_execAddEqual_ByteByte_Params AddEqual_ByteByte_Params;
	memset(&AddEqual_ByteByte_Params, 0, sizeof(AddEqual_ByteByte_Params));
	memcpy_s(&AddEqual_ByteByte_Params.B, sizeof(AddEqual_ByteByte_Params.B), &B, sizeof(B));
	memcpy_s(&AddEqual_ByteByte_Params.A, sizeof(AddEqual_ByteByte_Params.A), &A, sizeof(A));

	uFnAddEqual_ByteByte->iNative = 0;
	uFnAddEqual_ByteByte->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAddEqual_ByteByte, &AddEqual_ByteByte_Params, nullptr);
	uFnAddEqual_ByteByte->FunctionFlags |= 0x400;
	uFnAddEqual_ByteByte->iNative = 34;

	memcpy_s(&A, sizeof(A), &AddEqual_ByteByte_Params.A, sizeof(AddEqual_ByteByte_Params.A));

	return AddEqual_ByteByte_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_ByteByte
// [0x8600423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        B                              (CPF_Parm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::DivideEqual_ByteByte(uint8_t B, uint8_t& A)
{
	static UFunction* uFnDivideEqual_ByteByte = nullptr;

	if (!uFnDivideEqual_ByteByte)
	{
		uFnDivideEqual_ByteByte = UFunction::FindFunction("Function Core.Object.DivideEqual_ByteByte");
	}

	UObject_execDivideEqual_ByteByte_Params DivideEqual_ByteByte_Params;
	memset(&DivideEqual_ByteByte_Params, 0, sizeof(DivideEqual_ByteByte_Params));
	memcpy_s(&DivideEqual_ByteByte_Params.B, sizeof(DivideEqual_ByteByte_Params.B), &B, sizeof(B));
	memcpy_s(&DivideEqual_ByteByte_Params.A, sizeof(DivideEqual_ByteByte_Params.A), &A, sizeof(A));

	uFnDivideEqual_ByteByte->iNative = 0;
	uFnDivideEqual_ByteByte->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_ByteByte, &DivideEqual_ByteByte_Params, nullptr);
	uFnDivideEqual_ByteByte->FunctionFlags |= 0x400;
	uFnDivideEqual_ByteByte->iNative = 34;

	memcpy_s(&A, sizeof(A), &DivideEqual_ByteByte_Params.A, sizeof(DivideEqual_ByteByte_Params.A));

	return DivideEqual_ByteByte_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_ByteFloat
// [0xC600423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::MultiplyEqual_ByteFloat(float B, uint8_t& A)
{
	static UFunction* uFnMultiplyEqual_ByteFloat = nullptr;

	if (!uFnMultiplyEqual_ByteFloat)
	{
		uFnMultiplyEqual_ByteFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_ByteFloat");
	}

	UObject_execMultiplyEqual_ByteFloat_Params MultiplyEqual_ByteFloat_Params;
	memset(&MultiplyEqual_ByteFloat_Params, 0, sizeof(MultiplyEqual_ByteFloat_Params));
	memcpy_s(&MultiplyEqual_ByteFloat_Params.B, sizeof(MultiplyEqual_ByteFloat_Params.B), &B, sizeof(B));
	memcpy_s(&MultiplyEqual_ByteFloat_Params.A, sizeof(MultiplyEqual_ByteFloat_Params.A), &A, sizeof(A));

	uFnMultiplyEqual_ByteFloat->iNative = 0;
	uFnMultiplyEqual_ByteFloat->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_ByteFloat, &MultiplyEqual_ByteFloat_Params, nullptr);
	uFnMultiplyEqual_ByteFloat->FunctionFlags |= 0x400;
	uFnMultiplyEqual_ByteFloat->iNative = 34;

	memcpy_s(&A, sizeof(A), &MultiplyEqual_ByteFloat_Params.A, sizeof(MultiplyEqual_ByteFloat_Params.A));

	return MultiplyEqual_ByteFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_ByteByte
// [0x8500423401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags) (iNative[34])
// Parameter Info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        B                              (CPF_Parm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::MultiplyEqual_ByteByte(uint8_t B, uint8_t& A)
{
	static UFunction* uFnMultiplyEqual_ByteByte = nullptr;

	if (!uFnMultiplyEqual_ByteByte)
	{
		uFnMultiplyEqual_ByteByte = UFunction::FindFunction("Function Core.Object.MultiplyEqual_ByteByte");
	}

	UObject_execMultiplyEqual_ByteByte_Params MultiplyEqual_ByteByte_Params;
	memset(&MultiplyEqual_ByteByte_Params, 0, sizeof(MultiplyEqual_ByteByte_Params));
	memcpy_s(&MultiplyEqual_ByteByte_Params.B, sizeof(MultiplyEqual_ByteByte_Params.B), &B, sizeof(B));
	memcpy_s(&MultiplyEqual_ByteByte_Params.A, sizeof(MultiplyEqual_ByteByte_Params.A), &A, sizeof(A));

	uFnMultiplyEqual_ByteByte->iNative = 0;
	uFnMultiplyEqual_ByteByte->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_ByteByte, &MultiplyEqual_ByteByte_Params, nullptr);
	uFnMultiplyEqual_ByteByte->FunctionFlags |= 0x400;
	uFnMultiplyEqual_ByteByte->iNative = 34;

	memcpy_s(&A, sizeof(A), &MultiplyEqual_ByteByte_Params.A, sizeof(MultiplyEqual_ByteByte_Params.A));

	return MultiplyEqual_ByteByte_Params.ReturnValue;
};

// Function Core.Object.OrOr_BoolBool
// [0x8400023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[32])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           A                              (CPF_Parm)
// bool                           B                              (CPF_Parm | CPF_SkipParm)

bool UObject::OrOr_BoolBool(bool A, bool B)
{
	static UFunction* uFnOrOr_BoolBool = nullptr;

	if (!uFnOrOr_BoolBool)
	{
		uFnOrOr_BoolBool = UFunction::FindFunction("Function Core.Object.OrOr_BoolBool");
	}

	UObject_execOrOr_BoolBool_Params OrOr_BoolBool_Params;
	memset(&OrOr_BoolBool_Params, 0, sizeof(OrOr_BoolBool_Params));
	OrOr_BoolBool_Params.A = A;
	OrOr_BoolBool_Params.B = B;

	uFnOrOr_BoolBool->iNative = 0;
	uFnOrOr_BoolBool->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnOrOr_BoolBool, &OrOr_BoolBool_Params, nullptr);
	uFnOrOr_BoolBool->FunctionFlags |= 0x400;
	uFnOrOr_BoolBool->iNative = 32;

	return OrOr_BoolBool_Params.ReturnValue;
};

// Function Core.Object.XorXor_BoolBool
// [0x8300023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[30])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           A                              (CPF_Parm)
// bool                           B                              (CPF_Parm)

bool UObject::XorXor_BoolBool(bool A, bool B)
{
	static UFunction* uFnXorXor_BoolBool = nullptr;

	if (!uFnXorXor_BoolBool)
	{
		uFnXorXor_BoolBool = UFunction::FindFunction("Function Core.Object.XorXor_BoolBool");
	}

	UObject_execXorXor_BoolBool_Params XorXor_BoolBool_Params;
	memset(&XorXor_BoolBool_Params, 0, sizeof(XorXor_BoolBool_Params));
	XorXor_BoolBool_Params.A = A;
	XorXor_BoolBool_Params.B = B;

	uFnXorXor_BoolBool->iNative = 0;
	uFnXorXor_BoolBool->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnXorXor_BoolBool, &XorXor_BoolBool_Params, nullptr);
	uFnXorXor_BoolBool->FunctionFlags |= 0x400;
	uFnXorXor_BoolBool->iNative = 30;

	return XorXor_BoolBool_Params.ReturnValue;
};

// Function Core.Object.AndAnd_BoolBool
// [0x8200023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[30])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           A                              (CPF_Parm)
// bool                           B                              (CPF_Parm | CPF_SkipParm)

bool UObject::AndAnd_BoolBool(bool A, bool B)
{
	static UFunction* uFnAndAnd_BoolBool = nullptr;

	if (!uFnAndAnd_BoolBool)
	{
		uFnAndAnd_BoolBool = UFunction::FindFunction("Function Core.Object.AndAnd_BoolBool");
	}

	UObject_execAndAnd_BoolBool_Params AndAnd_BoolBool_Params;
	memset(&AndAnd_BoolBool_Params, 0, sizeof(AndAnd_BoolBool_Params));
	AndAnd_BoolBool_Params.A = A;
	AndAnd_BoolBool_Params.B = B;

	uFnAndAnd_BoolBool->iNative = 0;
	uFnAndAnd_BoolBool->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnAndAnd_BoolBool, &AndAnd_BoolBool_Params, nullptr);
	uFnAndAnd_BoolBool->FunctionFlags |= 0x400;
	uFnAndAnd_BoolBool->iNative = 30;

	return AndAnd_BoolBool_Params.ReturnValue;
};

// Function Core.Object.NotEqual_BoolBool
// [0xF300023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[26])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           A                              (CPF_Parm)
// bool                           B                              (CPF_Parm)

bool UObject::NotEqual_BoolBool(bool A, bool B)
{
	static UFunction* uFnNotEqual_BoolBool = nullptr;

	if (!uFnNotEqual_BoolBool)
	{
		uFnNotEqual_BoolBool = UFunction::FindFunction("Function Core.Object.NotEqual_BoolBool");
	}

	UObject_execNotEqual_BoolBool_Params NotEqual_BoolBool_Params;
	memset(&NotEqual_BoolBool_Params, 0, sizeof(NotEqual_BoolBool_Params));
	NotEqual_BoolBool_Params.A = A;
	NotEqual_BoolBool_Params.B = B;

	uFnNotEqual_BoolBool->iNative = 0;
	uFnNotEqual_BoolBool->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNotEqual_BoolBool, &NotEqual_BoolBool_Params, nullptr);
	uFnNotEqual_BoolBool->FunctionFlags |= 0x400;
	uFnNotEqual_BoolBool->iNative = 26;

	return NotEqual_BoolBool_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_BoolBool
// [0xF200023401] (FUNC_Final | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags) (iNative[24])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           A                              (CPF_Parm)
// bool                           B                              (CPF_Parm)

bool UObject::EqualEqual_BoolBool(bool A, bool B)
{
	static UFunction* uFnEqualEqual_BoolBool = nullptr;

	if (!uFnEqualEqual_BoolBool)
	{
		uFnEqualEqual_BoolBool = UFunction::FindFunction("Function Core.Object.EqualEqual_BoolBool");
	}

	UObject_execEqualEqual_BoolBool_Params EqualEqual_BoolBool_Params;
	memset(&EqualEqual_BoolBool_Params, 0, sizeof(EqualEqual_BoolBool_Params));
	EqualEqual_BoolBool_Params.A = A;
	EqualEqual_BoolBool_Params.B = B;

	uFnEqualEqual_BoolBool->iNative = 0;
	uFnEqualEqual_BoolBool->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_BoolBool, &EqualEqual_BoolBool_Params, nullptr);
	uFnEqualEqual_BoolBool->FunctionFlags |= 0x400;
	uFnEqualEqual_BoolBool->iNative = 24;

	return EqualEqual_BoolBool_Params.ReturnValue;
};

// Function Core.Object.Not_PreBool
// [0x8100023411] (FUNC_Final | FUNC_PreOperator | FUNC_Native | FUNC_Operator | FUNC_Static | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           A                              (CPF_Parm)

bool UObject::Not_PreBool(bool A)
{
	static UFunction* uFnNot_PreBool = nullptr;

	if (!uFnNot_PreBool)
	{
		uFnNot_PreBool = UFunction::FindFunction("Function Core.Object.Not_PreBool");
	}

	UObject_execNot_PreBool_Params Not_PreBool_Params;
	memset(&Not_PreBool_Params, 0, sizeof(Not_PreBool_Params));
	Not_PreBool_Params.A = A;

	uFnNot_PreBool->FunctionFlags &= ~0x400;
	UObject::StaticClass()->ProcessEvent(uFnNot_PreBool, &Not_PreBool_Params, nullptr);
	uFnNot_PreBool->FunctionFlags |= 0x400;

	return Not_PreBool_Params.ReturnValue;
};

UFunction* UFunction::FindFunction(const const std::string& functionFullName)
{
	static bool initialized = false;
	static std::map<const std::string, UFunction*> foundFunctions{};

	if (!initialized)
	{
		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject)
			{
				const std::string objectFullName = uObject->GetFullName();

				if (objectFullName.find("Function") == 0)
				{
					foundFunctions[objectFullName] = static_cast<UFunction*>(uObject);
				}
			}
		}

		initialized = true;
	}

	if (foundFunctions.find(functionFullName) != foundFunctions.end())
	{
		return foundFunctions[functionFullName];
	}

	return nullptr;
}

// Function Core.DistributionVector.GetVectorValue
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          F                              (CPF_OptionalParm | CPF_Parm)
// int32_t                        LastExtreme                    (CPF_OptionalParm | CPF_Parm)

struct FVector UDistributionVector::GetVectorValue(float F, int32_t LastExtreme)
{
	static UFunction* uFnGetVectorValue = nullptr;

	if (!uFnGetVectorValue)
	{
		uFnGetVectorValue = UFunction::FindFunction("Function Core.DistributionVector.GetVectorValue");
	}

	UDistributionVector_execGetVectorValue_Params GetVectorValue_Params;
	memset(&GetVectorValue_Params, 0, sizeof(GetVectorValue_Params));
	memcpy_s(&GetVectorValue_Params.F, sizeof(GetVectorValue_Params.F), &F, sizeof(F));
	memcpy_s(&GetVectorValue_Params.LastExtreme, sizeof(GetVectorValue_Params.LastExtreme), &LastExtreme, sizeof(LastExtreme));

	uFnGetVectorValue->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetVectorValue, &GetVectorValue_Params, nullptr);
	uFnGetVectorValue->FunctionFlags |= 0x400;

	return GetVectorValue_Params.ReturnValue;
};

// Function Core.DistributionFloat.GetFloatValue
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          F                              (CPF_OptionalParm | CPF_Parm)

float UDistributionFloat::GetFloatValue(float F)
{
	static UFunction* uFnGetFloatValue = nullptr;

	if (!uFnGetFloatValue)
	{
		uFnGetFloatValue = UFunction::FindFunction("Function Core.DistributionFloat.GetFloatValue");
	}

	UDistributionFloat_execGetFloatValue_Params GetFloatValue_Params;
	memset(&GetFloatValue_Params, 0, sizeof(GetFloatValue_Params));
	memcpy_s(&GetFloatValue_Params.F, sizeof(GetFloatValue_Params.F), &F, sizeof(F));

	uFnGetFloatValue->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFloatValue, &GetFloatValue_Params, nullptr);
	uFnGetFloatValue->FunctionFlags |= 0x400;

	return GetFloatValue_Params.ReturnValue;
};

// Function Core.HelpCommandlet.Main
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Params                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UHelpCommandlet::eventMain(class FString Params)
{
	static UFunction* uFnMain = nullptr;

	if (!uFnMain)
	{
		uFnMain = UFunction::FindFunction("Function Core.HelpCommandlet.Main");
	}

	UHelpCommandlet_eventMain_Params Main_Params;
	memset(&Main_Params, 0, sizeof(Main_Params));
	memcpy_s(&Main_Params.Params, sizeof(Main_Params.Params), &Params, sizeof(Params));

	this->ProcessEvent(uFnMain, &Main_Params, nullptr);

	return Main_Params.ReturnValue;
};

// Function Core.Commandlet.Main
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Params                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UCommandlet::eventMain(class FString Params)
{
	static UFunction* uFnMain = nullptr;

	if (!uFnMain)
	{
		uFnMain = UFunction::FindFunction("Function Core.Commandlet.Main");
	}

	UCommandlet_eventMain_Params Main_Params;
	memset(&Main_Params, 0, sizeof(Main_Params));
	memcpy_s(&Main_Params.Params, sizeof(Main_Params.Params), &Params, sizeof(Params));

	this->ProcessEvent(uFnMain, &Main_Params, nullptr);

	return Main_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
