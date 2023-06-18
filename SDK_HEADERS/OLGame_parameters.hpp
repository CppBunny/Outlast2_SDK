/*
#############################################################################################
# Outlast2 (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.2
# ========================================================================================= #
# File: OLGame_parameters.hpp
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

// Function OLGame.OLAITrigger.Touch
// [0x00020802] 
struct AOLAITrigger_eventTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAITrigger.NativeOnTouch
// [0x00020400] 
struct AOLAITrigger_execNativeOnTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAITrigger.PostBeginPlay
// [0x00020902] 
struct AOLAITrigger_eventPostBeginPlay_Params
{
	// class USpriteComponent*                            ASpriteComp;                                      		// 0x0000 (0x0008) [0x0000000004000000] (CPF_EditInline)
};

// Function OLGame.OLBasementWindow.OnToggle
// [0x00020102] 
struct AOLBasementWindow_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBashableObject.OnToggle
// [0x00020002] 
struct AOLBashableObject_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBlockingObject.OnToggle
// [0x00020002] 
struct AOLBlockingObject_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBlockingObject.OnDisable
// [0x00020400] 
struct AOLBlockingObject_execOnDisable_Params
{
};

// Function OLGame.OLBlockingObject.OnEnable
// [0x00020400] 
struct AOLBlockingObject_execOnEnable_Params
{
};

// Function OLGame.OLCamcorderFilesHud.SetPCInputLabel
// [0x00020802] 
struct UOLCamcorderFilesHud_eventSetPCInputLabel_Params
{
	class FString                                      navigationLabelUp;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      navigationLabelLeft;                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      navigationLabelDown;                              		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      navigationLabelRight;                             		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      nextLabel;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      previousLabel;                                    		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      backLabel;                                        		// 0x0060 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      displayLabel;                                     		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      playLabel;                                        		// 0x0080 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      selectLabelText;                                  		// 0x0090 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.SetPCInputLabelFunction
// [0x00020002] 
struct UOLCamcorderFilesHud_execSetPCInputLabelFunction_Params
{
	class FString                                      navigationLabelUp;                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      navigationLabelLeft;                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      navigationLabelDown;                              		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      navigationLabelRight;                             		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      nextLabel;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      previousLabel;                                    		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      backLabel;                                        		// 0x0060 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      displayLabel;                                     		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      playLabel;                                        		// 0x0080 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      selectLabelText;                                  		// 0x0090 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.selectConsole
// [0x00020002] 
struct UOLCamcorderFilesHud_execselectConsole_Params
{
	class FString                                      Console;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.UsingPC
// [0x00020802] 
struct UOLCamcorderFilesHud_eventUsingPC_Params
{
};

// Function OLGame.OLCamcorderFilesHud.UsingXboxOne
// [0x00020802] 
struct UOLCamcorderFilesHud_eventUsingXboxOne_Params
{
};

// Function OLGame.OLCamcorderFilesHud.UsingPS4
// [0x00020802] 
struct UOLCamcorderFilesHud_eventUsingPS4_Params
{
};

// Function OLGame.OLCamcorderFilesHud.SetSouthPaw
// [0x00020802] 
struct UOLCamcorderFilesHud_eventSetSouthPaw_Params
{
	uint32_t                                           bSouthPaw : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCamcorderFilesHud.SetLocalizedText
// [0x00020802] 
struct UOLCamcorderFilesHud_eventSetLocalizedText_Params
{
	class FString                                      zoomLabel;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      navigationLabel;                                  		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cleanTextLabel;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      selectLabel;                                      		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      backLabel;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      previousLabel;                                    		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      nextLabel;                                        		// 0x0060 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      playLabel;                                        		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      pauseLabel;                                       		// 0x0080 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      moveImage;                                        		// 0x0090 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.PopulateFolderList
// [0x00024400] 
struct UOLCamcorderFilesHud_execPopulateFolderList_Params
{
	uint32_t                                           bRefreshOnly : 1;                                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCamcorderFilesHud.WidgetInitialized
// [0x00020802] 
struct UOLCamcorderFilesHud_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLCamcorderFilesHud.HideImageNavigateLabel
// [0x00020802] 
struct UOLCamcorderFilesHud_eventHideImageNavigateLabel_Params
{
};

// Function OLGame.OLCamcorderFilesHud.ShowImageNavigateLabel
// [0x00020802] 
struct UOLCamcorderFilesHud_eventShowImageNavigateLabel_Params
{
};

// Function OLGame.OLCamcorderFilesHud.Pause
// [0x00020802] 
struct UOLCamcorderFilesHud_eventPause_Params
{
};

// Function OLGame.OLCamcorderFilesHud.TogglePlayPause
// [0x00020802] 
struct UOLCamcorderFilesHud_eventTogglePlayPause_Params
{
};

// Function OLGame.OLCamcorderFilesHud.InputTypeChanged
// [0x00020802] 
struct UOLCamcorderFilesHud_eventInputTypeChanged_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativeInputTypeChanged
// [0x00020400] 
struct UOLCamcorderFilesHud_execNativeInputTypeChanged_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativePlaySound
// [0x00020400] 
struct UOLCamcorderFilesHud_execNativePlaySound_Params
{
	class UAkEvent*                                    SndEvent;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCamcorderFilesHud.OnStop
// [0x00020002] 
struct UOLCamcorderFilesHud_execOnStop_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativeOnStop
// [0x00020400] 
struct UOLCamcorderFilesHud_execNativeOnStop_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativeFullStop
// [0x00020400] 
struct UOLCamcorderFilesHud_execNativeFullStop_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnPlay
// [0x00020002] 
struct UOLCamcorderFilesHud_execOnPlay_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativeOnPlay
// [0x00020400] 
struct UOLCamcorderFilesHud_execNativeOnPlay_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnDisplayChange
// [0x00020002] 
struct UOLCamcorderFilesHud_execOnDisplayChange_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativeOnDisplayChange
// [0x00020400] 
struct UOLCamcorderFilesHud_execNativeOnDisplayChange_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnMove
// [0x00020002] 
struct UOLCamcorderFilesHud_execOnMove_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnSelect
// [0x00020002] 
struct UOLCamcorderFilesHud_execOnSelect_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnBack
// [0x00020002] 
struct UOLCamcorderFilesHud_execOnBack_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnBackOnRootMenu
// [0x00020002] 
struct UOLCamcorderFilesHud_execOnBackOnRootMenu_Params
{
};

// Function OLGame.OLCamcorderFilesHud.NativeOnBackOnRootMenu
// [0x00020400] 
struct UOLCamcorderFilesHud_execNativeOnBackOnRootMenu_Params
{
};

// Function OLGame.OLCamcorderFilesHud.OnScrollToIndexChange
// [0x00020002] 
struct UOLCamcorderFilesHud_execOnScrollToIndexChange_Params
{
	int32_t                                            ListIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StartIndex;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            endIndex;                                         		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCamcorderFilesHud.NativeOnScrollToIndexChange
// [0x00024400] 
struct UOLCamcorderFilesHud_execNativeOnScrollToIndexChange_Params
{
	int32_t                                            ListIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StartIndex;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            endIndex;                                         		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bForce : 1;                                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCamcorderFilesHud.OnFullScaleImageChanged
// [0x00020002] 
struct UOLCamcorderFilesHud_execOnFullScaleImageChanged_Params
{
	uint32_t                                           bInView : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      photoName;                                        		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.NativeOnFullScaleImageChanged
// [0x00020400] 
struct UOLCamcorderFilesHud_execNativeOnFullScaleImageChanged_Params
{
	uint32_t                                           bInView : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      photoName;                                        		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.NativeQuickOpen
// [0x00020400] 
struct UOLCamcorderFilesHud_execNativeQuickOpen_Params
{
};

// Function OLGame.OLCamcorderFilesHud.SetLargePhotoURL
// [0x00020802] 
struct UOLCamcorderFilesHud_eventSetLargePhotoURL_Params
{
	int32_t                                            folderIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            imageIndex;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      largePhotoURL;                                    		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCamcorderFilesHud.SelectRecording
// [0x00020802] 
struct UOLCamcorderFilesHud_eventSelectRecording_Params
{
	int32_t                                            folderIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            imageIndex;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCamcorderFilesHud.SetAllowSingleFolder
// [0x00020802] 
struct UOLCamcorderFilesHud_eventSetAllowSingleFolder_Params
{
	uint32_t                                           bAllowSingleFolder : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.SetDisplayLabel
// [0x00020802] 
struct UOLCamcorderFilesHud_eventSetDisplayLabel_Params
{
	class FString                                      Label;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.SetVisible
// [0x00020802] 
struct UOLCamcorderFilesHud_eventSetVisible_Params
{
	uint32_t                                           bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCamcorderFilesHud.FlagRecordingAsRead
// [0x00020802] 
struct UOLCamcorderFilesHud_eventFlagRecordingAsRead_Params
{
	int32_t                                            folderIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            recordingIndex;                                   		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCamcorderFilesHud.DisplayChange
// [0x00020802] 
struct UOLCamcorderFilesHud_eventDisplayChange_Params
{
};

// Function OLGame.OLCamcorderFilesHud.RefreshData
// [0x00020802] 
struct UOLCamcorderFilesHud_eventRefreshData_Params
{
};

// Function OLGame.OLCamcorderFilesHud.SetListFocusIndex
// [0x00020802] 
struct UOLCamcorderFilesHud_eventSetListFocusIndex_Params
{
	int32_t                                            indexA;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            indexB;                                           		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            indexC;                                           		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            indexD;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            indexE;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            indexF;                                           		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.SetLargeImageSize
// [0x00020802] 
struct UOLCamcorderFilesHud_eventSetLargeImageSize_Params
{
	float                                              SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PosX;                                             		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PosY;                                             		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.DisallowInputChangeFocus
// [0x00020802] 
struct UOLCamcorderFilesHud_eventDisallowInputChangeFocus_Params
{
};

// Function OLGame.OLCamcorderFilesHud.AllowInputChangeFocus
// [0x00020802] 
struct UOLCamcorderFilesHud_eventAllowInputChangeFocus_Params
{
};

// Function OLGame.OLCamcorderFilesHud.PauseVideo
// [0x00020802] 
struct UOLCamcorderFilesHud_eventPauseVideo_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.ConfigUI
// [0x00020802] 
struct UOLCamcorderFilesHud_eventConfigUI_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.back
// [0x00020802] 
struct UOLCamcorderFilesHud_eventback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.BackToMainMenu
// [0x00020802] 
struct UOLCamcorderFilesHud_eventBackToMainMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.Next
// [0x00020802] 
struct UOLCamcorderFilesHud_eventNext_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.Previous
// [0x00020802] 
struct UOLCamcorderFilesHud_eventPrevious_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.RefreshLargeImage
// [0x00020802] 
struct UOLCamcorderFilesHud_eventRefreshLargeImage_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderFilesHud.FilterButtonInput
// [0x00020802] 
struct UOLCamcorderFilesHud_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderHud.UpdateRecordingTime
// [0x00020002] 
struct UOLCamcorderHud_execUpdateRecordingTime_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            TotalSeconds;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
	// class FString                                      Hours;                                            		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      Minutes;                                          		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      Seconds;                                          		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      HundredthsOfASecond;                              		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      DisplayedTime;                                    		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class AOLPlayerController*                         OLPC;                                             		// 0x0058 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLCamcorderHud.WidgetInitialized
// [0x00020802] 
struct UOLCamcorderHud_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCamcorderHud.HandleUnpaused
// [0x00020802] 
struct UOLCamcorderHud_eventHandleUnpaused_Params
{
};

// Function OLGame.OLCamcorderHud.HandlePaused
// [0x00020802] 
struct UOLCamcorderHud_eventHandlePaused_Params
{
};

// Function OLGame.OLCamcorderHud.SetVisible
// [0x00020802] 
struct UOLCamcorderHud_eventSetVisible_Params
{
	uint32_t                                           bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCameraActor.GetCameraView
// [0x00420102] 
struct AOLCameraActor_execGetCameraView_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTPOV                                       OutPOV;                                           		// 0x0004 (0x001C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLCameraActor.NativeGetCameraView
// [0x00420400] 
struct AOLCameraActor_execNativeGetCameraView_Params
{
	struct FTPOV                                       OutPOV;                                           		// 0x0000 (0x001C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLPlayerController.UnlockAchievement
// [0x00020802] 
struct AOLPlayerController_eventUnlockAchievement_Params
{
	uint8_t                                            achievement;                                      		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            ControllerId;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.NotifyDifficultyChanged
// [0x00020002] 
struct AOLPlayerController_execNotifyDifficultyChanged_Params
{
	// class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.UpdateDifficultyBasedValues
// [0x00020002] 
struct AOLPlayerController_execUpdateDifficultyBasedValues_Params
{
	// class AOLGame*                                     TheGame;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.CheckForProfileUpdate
// [0x00020802] 
struct AOLPlayerController_eventCheckForProfileUpdate_Params
{
};

// Function OLGame.OLPlayerController.UpdateLocalCacheOfProfileSettings
// [0x00020802] 
struct AOLPlayerController_eventUpdateLocalCacheOfProfileSettings_Params
{
	class UOLProfileSettings*                          EffectiveProfileSettings;                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// float                                              FloatValue;                                       		// 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                            IntValue;                                         		// 0x000C (0x0004) [0x0000000000000000]               
	// class UOLWinEngine*                                WinEngine;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.ClientSaveAllPlayerData
// [0xFFFF0000010241C2] 
struct AOLPlayerController_execClientSaveAllPlayerData_Params
{
	uint32_t                                           bShouldForce : 1;                                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bSkipCacheUpdate : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// class ULocalPlayer*                                LP;                                               		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.OnProfileWriteComplete
// [0x00020002] 
struct AOLPlayerController_execOnProfileWriteComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.ClearSaveProfileDelegate
// [0x00020002] 
struct AOLPlayerController_execClearSaveProfileDelegate_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOnlinePlayerInterface*                      PlayerInt;                                        		// 0x0014 (0x0010) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.ResetProfile
// [0x00020802] 
struct AOLPlayerController_eventResetProfile_Params
{
};

// Function OLGame.OLPlayerController.SaveProfile
// [0x00020802] 
struct AOLPlayerController_eventSaveProfile_Params
{
	// int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.OnControllerChanged
// [0x00020002] 
struct AOLPlayerController_execOnControllerChanged_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.NativeOnControllerChanged
// [0x00020400] 
struct AOLPlayerController_execNativeOnControllerChanged_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.UnregisterPlayerDataStores
// [0x00020102] 
struct AOLPlayerController_execUnregisterPlayerDataStores_Params
{
	// class ULocalPlayer*                                LP;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.RegisterCustomPlayerDataStores
// [0x00080102] 
struct AOLPlayerController_execRegisterCustomPlayerDataStores_Params
{
	// class ULocalPlayer*                                LP;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.CheatGiveAllCollectibles
// [0x00020400] 
struct AOLPlayerController_execCheatGiveAllCollectibles_Params
{
};

// Function OLGame.OLPlayerController.ShippingCheat_GiveAllCheckpoints
// [0x00020400] 
struct AOLPlayerController_execShippingCheat_GiveAllCheckpoints_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.QueueClearWorldState
// [0x00020002] 
struct AOLPlayerController_execQueueClearWorldState_Params
{
};

// Function OLGame.OLPlayerController.ClearSavedStates
// [0x00020400] 
struct AOLPlayerController_execClearSavedStates_Params
{
};

// Function OLGame.OLPlayerController.ClearAllProgress
// [0x00020400] 
struct AOLPlayerController_execClearAllProgress_Params
{
};

// Function OLGame.OLPlayerController.SaveBeforeQuitting
// [0x00020400] 
struct AOLPlayerController_execSaveBeforeQuitting_Params
{
};

// Function OLGame.OLPlayerController.ClientCommitMapChangeNoOverlay
// [0xFFFF0000010209C2] 
struct AOLPlayerController_eventClientCommitMapChangeNoOverlay_Params
{
};

// Function OLGame.OLPlayerController.ClientCommitMapChange
// [0xFFFF0000010209C2] 
struct AOLPlayerController_eventClientCommitMapChange_Params
{
};

// Function OLGame.OLPlayerController.StartNewGameAtCheckpoint
// [0x00420400] 
struct AOLPlayerController_execStartNewGameAtCheckpoint_Params
{
	class FString                                      CheckpointStr;                                    		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bSaveToDisk : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.ApplyCheckpointRecord
// [0x00420002] 
struct AOLPlayerController_execApplyCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                           		// 0x0000 (0x00D4) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.GetSaveGameNameFromRecord
// [0x00420002] 
struct AOLPlayerController_execGetSaveGameNameFromRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                           		// 0x0000 (0x00D4) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      SaveGameName;                                     		// 0x00D4 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.CreateCheckpointRecord
// [0x00420002] 
struct AOLPlayerController_execCreateCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                           		// 0x0000 (0x00D4) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.SetSaveGameName
// [0x00020400] 
struct AOLPlayerController_execSetSaveGameName_Params
{
	class FString                                      SaveGameName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.GetSaveGameName
// [0x00420400] 
struct AOLPlayerController_execGetSaveGameName_Params
{
	class FString                                      SaveGameName;                                     		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.NativeGetSaveGameNameFromRecord
// [0x00420400] 
struct AOLPlayerController_execNativeGetSaveGameNameFromRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                           		// 0x0000 (0x00D4) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      SaveGameName;                                     		// 0x00D4 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.NativeApplyCheckpointRecord
// [0x00420400] 
struct AOLPlayerController_execNativeApplyCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                           		// 0x0000 (0x00D4) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.NativeGetCurrentCheckpointRecord
// [0x00420400] 
struct AOLPlayerController_execNativeGetCurrentCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                           		// 0x0000 (0x00D4) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.StopAllSounds
// [0x00020400] 
struct AOLPlayerController_execStopAllSounds_Params
{
};

// Function OLGame.OLPlayerController.DrawHUD
// [0x00020002] 
struct AOLPlayerController_execDrawHUD_Params
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class AOLHUD*                                      OLHUD;                                            		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.FullScreenOverlayChanged
// [0x00020802] 
struct AOLPlayerController_eventFullScreenOverlayChanged_Params
{
};

// Function OLGame.OLPlayerController.ForcePause
// [0x00020802] 
struct AOLPlayerController_eventForcePause_Params
{
	uint32_t                                           bPause : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.ClientSetHUD
// [0xFFFF0000010201C2] 
struct AOLPlayerController_execClientSetHUD_Params
{
	class UClass*                                      newHUDType;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.OnSetMesh
// [0x00020802] 
struct AOLPlayerController_eventOnSetMesh_Params
{
	class USeqAct_SetMesh*                             Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.ClientSetCameraFade
// [0xFFFF0000010249C2] 
struct AOLPlayerController_eventClientSetCameraFade_Params
{
	uint32_t                                           _enableFading : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FColor                                      _FadeColor;                                       		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector2D                                   _FadeAlpha;                                       		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _FadeTime;                                        		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           _fadeAudio : 1;                                   		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLPlayerController.SetCinematicMode
// [0x00020002] 
struct AOLPlayerController_execSetCinematicMode_Params
{
	class USeqAct_ToggleCinematicMode*                 Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInCinematicMode : 1;                             		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bHidePlayer : 1;                                  		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bAffectsHUD : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bAffectsMovement : 1;                             		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bAffectsTurning : 1;                              		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bAffectsButtons : 1;                              		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.GetPlayerViewPoint
// [0x00420902] 
struct AOLPlayerController_eventGetPlayerViewPoint_Params
{
	struct FVector                                     POVLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    POVRotation;                                      		// 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLPlayerController.GetFOVAngle
// [0x00820802] 
struct AOLPlayerController_eventGetFOVAngle_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class ACameraActor*                                CamActor;                                         		// 0x0004 (0x0008) [0x0000000000000000]               
	// struct FVector                                     DummyPOVLocation;                                 		// 0x000C (0x000C) [0x0000000000000000]               
	// struct FRotator                                    DummyPOVRotation;                                 		// 0x0018 (0x000C) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.SpawnCamera
// [0x00020002] 
struct AOLPlayerController_execSpawnCamera_Params
{
	// class AActor*                                      OldViewTarget;                                    		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPlayerController.SetCameraMode
// [0x00020002] 
struct AOLPlayerController_execSetCameraMode_Params
{
	struct FName                                       NewCamMode;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.UsingFirstPersonCamera
// [0x00020002] 
struct AOLPlayerController_execUsingFirstPersonCamera_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.SetBehindView
// [0x00020002] 
struct AOLPlayerController_execSetBehindView_Params
{
	uint32_t                                           bNewBehindView : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.BehindView
// [0x00020202] 
struct AOLPlayerController_execBehindView_Params
{
};

// Function OLGame.OLPlayerController.NotifyProfileChanged
// [0x00020400] 
struct AOLPlayerController_execNotifyProfileChanged_Params
{
};

// Function OLGame.OLPlayerController.CleanTextFilterButtonInput
// [0x00020400] 
struct AOLPlayerController_execCleanTextFilterButtonInput_Params
{
	struct FName                                       ButtonName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.IsLookInputIgnored
// [0x00020802] 
struct AOLPlayerController_eventIsLookInputIgnored_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.ToggleCrawl
// [0x00020202] 
struct AOLPlayerController_execToggleCrawl_Params
{
};

// Function OLGame.OLPlayerController.PrototypeActionE
// [0x00020202] 
struct AOLPlayerController_execPrototypeActionE_Params
{
};

// Function OLGame.OLPlayerController.PrototypeActionD
// [0x00020202] 
struct AOLPlayerController_execPrototypeActionD_Params
{
};

// Function OLGame.OLPlayerController.PrototypeActionC
// [0x00020202] 
struct AOLPlayerController_execPrototypeActionC_Params
{
};

// Function OLGame.OLPlayerController.PrototypeActionB
// [0x00020202] 
struct AOLPlayerController_execPrototypeActionB_Params
{
};

// Function OLGame.OLPlayerController.PrototypeActionA
// [0x00020202] 
struct AOLPlayerController_execPrototypeActionA_Params
{
};

// Function OLGame.OLPlayerController.GammaCalibration
// [0x00020202] 
struct AOLPlayerController_execGammaCalibration_Params
{
};

// Function OLGame.OLPlayerController.ToggleInventory
// [0x00020202] 
struct AOLPlayerController_execToggleInventory_Params
{
};

// Function OLGame.OLPlayerController.ToggleMicrophone
// [0x00020202] 
struct AOLPlayerController_execToggleMicrophone_Params
{
};

// Function OLGame.OLPlayerController.ToggleRun
// [0x00020202] 
struct AOLPlayerController_execToggleRun_Params
{
};

// Function OLGame.OLPlayerController.PressedJump
// [0x00020202] 
struct AOLPlayerController_execPressedJump_Params
{
};

// Function OLGame.OLPlayerController.PressedUseBandage
// [0x00020202] 
struct AOLPlayerController_execPressedUseBandage_Params
{
};

// Function OLGame.OLPlayerController.ReleasedReloadBatteries
// [0x00020202] 
struct AOLPlayerController_execReleasedReloadBatteries_Params
{
};

// Function OLGame.OLPlayerController.PressedReloadBatteries
// [0x00020202] 
struct AOLPlayerController_execPressedReloadBatteries_Params
{
};

// Function OLGame.OLPlayerController.StopZoom
// [0x00020302] 
struct AOLPlayerController_execStopZoom_Params
{
};

// Function OLGame.OLPlayerController.StartZoomOut
// [0x00020302] 
struct AOLPlayerController_execStartZoomOut_Params
{
};

// Function OLGame.OLPlayerController.StartZoomIn
// [0x00020302] 
struct AOLPlayerController_execStartZoomIn_Params
{
};

// Function OLGame.OLPlayerController.ZoomOut
// [0x00020202] 
struct AOLPlayerController_execZoomOut_Params
{
};

// Function OLGame.OLPlayerController.ZoomIn
// [0x00020202] 
struct AOLPlayerController_execZoomIn_Params
{
};

// Function OLGame.OLPlayerController.ToggleCamcorder
// [0x00020202] 
struct AOLPlayerController_execToggleCamcorder_Params
{
};

// Function OLGame.OLPlayerController.ToggleNightVision
// [0x00020202] 
struct AOLPlayerController_execToggleNightVision_Params
{
};

// Function OLGame.OLPlayerController.ReleasedUseButton
// [0x00020202] 
struct AOLPlayerController_execReleasedUseButton_Params
{
};

// Function OLGame.OLPlayerController.PressedUseButton
// [0x00020202] 
struct AOLPlayerController_execPressedUseButton_Params
{
};

// Function OLGame.OLPlayerController.PerformedUseAction
// [0x00020102] 
struct AOLPlayerController_execPerformedUseAction_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.ResetWorldNoCheckpoint
// [0x00020400] 
struct AOLPlayerController_execResetWorldNoCheckpoint_Params
{
};

// Function OLGame.OLPlayerController.Destroyed
// [0x00020802] 
struct AOLPlayerController_eventDestroyed_Params
{
};

// Function OLGame.OLPlayerController.ClientRestart
// [0xFFFF0000010201C2] 
struct AOLPlayerController_execClientRestart_Params
{
	class APawn*                                       NewPawn;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.Reset
// [0x00020002] 
struct AOLPlayerController_execReset_Params
{
};

// Function OLGame.OLPlayerController.UnPossess
// [0x00020802] 
struct AOLPlayerController_eventUnPossess_Params
{
};

// Function OLGame.OLPlayerController.Possess
// [0x00020802] 
struct AOLPlayerController_eventPossess_Params
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPlayerController.PostBeginPlay
// [0x00020902] 
struct AOLPlayerController_eventPostBeginPlay_Params
{
};

// Function OLGame.OLPlayerController.ShowRecordingTime
// [0x00020400] 
struct AOLPlayerController_execShowRecordingTime_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.GetGraphicAPIString
// [0x00020400] 
struct AOLPlayerController_execGetGraphicAPIString_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLPlayerController.ShowGraphicAPIString
// [0x00020400] 
struct AOLPlayerController_execShowGraphicAPIString_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.HideLoadingOverlay
// [0x00020400] 
struct AOLPlayerController_execHideLoadingOverlay_Params
{
};

// Function OLGame.OLPlayerController.ShowLoadingOverlay
// [0x00020400] 
struct AOLPlayerController_execShowLoadingOverlay_Params
{
};

// Function OLGame.OLPlayerController.SetVolume
// [0x00020400] 
struct AOLPlayerController_execSetVolume_Params
{
	float                                              VolumeLevel;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.ApplyKeyBindings
// [0x00020400] 
struct AOLPlayerController_execApplyKeyBindings_Params
{
	class UOLProfileSettings*                          UserConfiguredSettings;                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.SetGamma
// [0x00020400] 
struct AOLPlayerController_execSetGamma_Params
{
	float                                              GammaValue;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerController.GetGamma
// [0x00020400] 
struct AOLPlayerController_execGetGamma_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerController.NativePlayerMove
// [0x00020400] 
struct AOLPlayerController_execNativePlayerMove_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheatManager.ToggleFakeLongSubtitles
// [0x00020202] 
struct UOLCheatManager_execToggleFakeLongSubtitles_Params
{
};

// Function OLGame.OLCheatManager.ToggleFakeRecordingReadFailure
// [0x00020202] 
struct UOLCheatManager_execToggleFakeRecordingReadFailure_Params
{
};

// Function OLGame.OLCheatManager.ToggleFakeRecordingWriteFailure
// [0x00020202] 
struct UOLCheatManager_execToggleFakeRecordingWriteFailure_Params
{
};

// Function OLGame.OLCheatManager.ClearAllDingoRecordings
// [0x00020600] 
struct UOLCheatManager_execClearAllDingoRecordings_Params
{
};

// Function OLGame.OLCheatManager.FakeDingoRecordingRight
// [0x00020600] 
struct UOLCheatManager_execFakeDingoRecordingRight_Params
{
};

// Function OLGame.OLCheatManager.DingoTest
// [0x00020600] 
struct UOLCheatManager_execDingoTest_Params
{
};

// Function OLGame.OLCheatManager.ResetTutorialReminderTimers
// [0x00020600] 
struct UOLCheatManager_execResetTutorialReminderTimers_Params
{
};

// Function OLGame.OLCheatManager.IsFakeNotFullyDownloaded
// [0x00020600] 
struct UOLCheatManager_execIsFakeNotFullyDownloaded_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCheatManager.ToggleGameFullyDownloaded
// [0x00020600] 
struct UOLCheatManager_execToggleGameFullyDownloaded_Params
{
};

// Function OLGame.OLCheatManager.TriggerNotDownloadScreen
// [0x00020600] 
struct UOLCheatManager_execTriggerNotDownloadScreen_Params
{
};

// Function OLGame.OLCheatManager.FakeControllerDisconnected
// [0x00020600] 
struct UOLCheatManager_execFakeControllerDisconnected_Params
{
	uint32_t                                           bDelayedPause : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCheatManager.ForceHandsCrucifixion
// [0x00020600] 
struct UOLCheatManager_execForceHandsCrucifixion_Params
{
};

// Function OLGame.OLCheatManager.DecrementDifficultyModeModifier
// [0x00020600] 
struct UOLCheatManager_execDecrementDifficultyModeModifier_Params
{
};

// Function OLGame.OLCheatManager.IncrementDifficultyModeModifier
// [0x00020600] 
struct UOLCheatManager_execIncrementDifficultyModeModifier_Params
{
};

// Function OLGame.OLCheatManager.DecrementDifficultyMode
// [0x00020600] 
struct UOLCheatManager_execDecrementDifficultyMode_Params
{
};

// Function OLGame.OLCheatManager.IncrementDifficultyMode
// [0x00020600] 
struct UOLCheatManager_execIncrementDifficultyMode_Params
{
};

// Function OLGame.OLCheatManager.ToggleCharacterPhysicDebug
// [0x00020202] 
struct UOLCheatManager_execToggleCharacterPhysicDebug_Params
{
};

// Function OLGame.OLCheatManager.TryGeneratePath
// [0x00824202] 
struct UOLCheatManager_execTryGeneratePath_Params
{
	float                                              PosX;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PosY;                                             		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PosZ;                                             		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bTight : 1;                                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              BufferDist;                                       		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	// uint32_t                                           bResult : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                     DestPos;                                          		// 0x0018 (0x000C) [0x0000000000000000]               
};

// Function OLGame.OLCheatManager.SetAIVerbosity
// [0x00020600] 
struct UOLCheatManager_execSetAIVerbosity_Params
{
	int32_t                                            NewVerbosity;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheatManager.KillSelectedEnemy
// [0x00020202] 
struct UOLCheatManager_execKillSelectedEnemy_Params
{
	// class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLCheatManager.KillAllEnemiesButSelected
// [0x00020202] 
struct UOLCheatManager_execKillAllEnemiesButSelected_Params
{
	// class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLCheatManager.KillAllEnemies
// [0x00020202] 
struct UOLCheatManager_execKillAllEnemies_Params
{
	// class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLCheatManager.CleanupAfterKillAll
// [0x00020400] 
struct UOLCheatManager_execCleanupAfterKillAll_Params
{
};

// Function OLGame.OLCheatManager.SetLanguage
// [0x00020600] 
struct UOLCheatManager_execSetLanguage_Params
{
	class FString                                      LanguageCode;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.ReloadSoundBanks
// [0x00020600] 
struct UOLCheatManager_execReloadSoundBanks_Params
{
	uint32_t                                           bFrenchVO : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCheatManager.ProcessCheatInput
// [0x00020802] 
struct UOLCheatManager_eventProcessCheatInput_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bPressed : 1;                                     		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCheatManager.StartGamepadCheckpoint
// [0x00020400] 
struct UOLCheatManager_execStartGamepadCheckpoint_Params
{
};

// Function OLGame.OLCheatManager.ScrollGamepadCPIdx
// [0x00020400] 
struct UOLCheatManager_execScrollGamepadCPIdx_Params
{
	uint32_t                                           bForward : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCheatManager.IsViewModeUnlit
// [0x00020400] 
struct UOLCheatManager_execIsViewModeUnlit_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCheatManager.ResetProfileProgression
// [0x00020202] 
struct UOLCheatManager_execResetProfileProgression_Params
{
};

// Function OLGame.OLCheatManager.SetLastCheckpointName
// [0x00020202] 
struct UOLCheatManager_execSetLastCheckpointName_Params
{
	class FString                                      CPName;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.SetLastCheckpointId
// [0x00020202] 
struct UOLCheatManager_execSetLastCheckpointId_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      CPName;                                           		// 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.SetFinishedGame
// [0x00020202] 
struct UOLCheatManager_execSetFinishedGame_Params
{
	uint32_t                                           hasFinishedGame : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           hasFinishedDLC : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCheatManager.OutlastPause
// [0x00020202] 
struct UOLCheatManager_execOutlastPause_Params
{
};

// Function OLGame.OLCheatManager.DebugClosestAI
// [0x00020600] 
struct UOLCheatManager_execDebugClosestAI_Params
{
};

// Function OLGame.OLCheatManager.ResetGS
// [0x00020600] 
struct UOLCheatManager_execResetGS_Params
{
};

// Function OLGame.OLCheatManager.DeactivateGS
// [0x00020600] 
struct UOLCheatManager_execDeactivateGS_Params
{
	struct FName                                       gsName;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheatManager.ActivateGS
// [0x00020600] 
struct UOLCheatManager_execActivateGS_Params
{
	struct FName                                       gsName;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheatManager.DumpGS
// [0x00020202] 
struct UOLCheatManager_execDumpGS_Params
{
};

// Function OLGame.OLCheatManager.DebugPhysMaterials
// [0x00020202] 
struct UOLCheatManager_execDebugPhysMaterials_Params
{
};

// Function OLGame.OLCheatManager.DebugPerception
// [0x00020202] 
struct UOLCheatManager_execDebugPerception_Params
{
};

// Function OLGame.OLCheatManager.OldBotPhysics
// [0x00020202] 
struct UOLCheatManager_execOldBotPhysics_Params
{
};

// Function OLGame.OLCheatManager.NewBotPhysics
// [0x00020202] 
struct UOLCheatManager_execNewBotPhysics_Params
{
};

// Function OLGame.OLCheatManager.OldHeroPhysics
// [0x00020202] 
struct UOLCheatManager_execOldHeroPhysics_Params
{
};

// Function OLGame.OLCheatManager.NewHeroPhysics
// [0x00020202] 
struct UOLCheatManager_execNewHeroPhysics_Params
{
};

// Function OLGame.OLCheatManager.OldPhysics
// [0x00020202] 
struct UOLCheatManager_execOldPhysics_Params
{
};

// Function OLGame.OLCheatManager.newPhysics
// [0x00020202] 
struct UOLCheatManager_execnewPhysics_Params
{
};

// Function OLGame.OLCheatManager.ToggleHeroInclusionForSimplifiedPhysics
// [0x00020202] 
struct UOLCheatManager_execToggleHeroInclusionForSimplifiedPhysics_Params
{
};

// Function OLGame.OLCheatManager.TogglePhysicsMode
// [0x00020202] 
struct UOLCheatManager_execTogglePhysicsMode_Params
{
};

// Function OLGame.OLCheatManager.SetSimplifiedPhysics
// [0x00020400] 
struct UOLCheatManager_execSetSimplifiedPhysics_Params
{
	uint32_t                                           bHero : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bBots : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bSimplified : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCheatManager.SetNewPhysics
// [0x00020400] 
struct UOLCheatManager_execSetNewPhysics_Params
{
	uint32_t                                           bHero : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bBots : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCheatManager.SuppressAllMessages
// [0x00020202] 
struct UOLCheatManager_execSuppressAllMessages_Params
{
};

// Function OLGame.OLCheatManager.AIEvents
// [0x00024600] 
struct UOLCheatManager_execAIEvents_Params
{
	int32_t                                            NumLines;                                         		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCheatManager.AILogs
// [0x00024600] 
struct UOLCheatManager_execAILogs_Params
{
	int32_t                                            NumLines;                                         		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCheatManager.DrawDebug
// [0x00020400] 
struct UOLCheatManager_execDrawDebug_Params
{
};

// Function OLGame.OLCheatManager.ToggleMute
// [0x00020600] 
struct UOLCheatManager_execToggleMute_Params
{
};

// Function OLGame.OLCheatManager.SetVolumeThreshold
// [0x00020600] 
struct UOLCheatManager_execSetVolumeThreshold_Params
{
	float                                              NewThreshold;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheatManager.MakeNoise
// [0x00024600] 
struct UOLCheatManager_execMakeNoise_Params
{
	float                                              NoiseAmount;                                      		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCheatManager.InflictDamage
// [0x00024202] 
struct UOLCheatManager_execInflictDamage_Params
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCheatManager.ResetTutorials
// [0x00020600] 
struct UOLCheatManager_execResetTutorials_Params
{
};

// Function OLGame.OLCheatManager.ResetWorldToSavedState
// [0x00020600] 
struct UOLCheatManager_execResetWorldToSavedState_Params
{
};

// Function OLGame.OLCheatManager.ResetWorldState
// [0x00020600] 
struct UOLCheatManager_execResetWorldState_Params
{
};

// Function OLGame.OLCheatManager.ResetPushables
// [0x00020600] 
struct UOLCheatManager_execResetPushables_Params
{
};

// Function OLGame.OLCheatManager.ResetDoors
// [0x00020600] 
struct UOLCheatManager_execResetDoors_Params
{
};

// Function OLGame.OLCheatManager.GammaDown
// [0x00020600] 
struct UOLCheatManager_execGammaDown_Params
{
};

// Function OLGame.OLCheatManager.GammaUp
// [0x00020600] 
struct UOLCheatManager_execGammaUp_Params
{
};

// Function OLGame.OLCheatManager.SetGamma
// [0x00020600] 
struct UOLCheatManager_execSetGamma_Params
{
	float                                              newGamma;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheatManager.LoadGame
// [0x00020202] 
struct UOLCheatManager_execLoadGame_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLWinEngine*                                WinEngine;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLCheatManager.SaveGame
// [0x00020202] 
struct UOLCheatManager_execSaveGame_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLWinEngine*                                WinEngine;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLCheatManager.LoseBandages
// [0x00020600] 
struct UOLCheatManager_execLoseBandages_Params
{
};

// Function OLGame.OLCheatManager.GiveItem
// [0x00020600] 
struct UOLCheatManager_execGiveItem_Params
{
	class FString                                      ItemName;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.ApplyCP
// [0x00020600] 
struct UOLCheatManager_execApplyCP_Params
{
	class FString                                      CPName;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.cplist
// [0x00020600] 
struct UOLCheatManager_execcplist_Params
{
};

// Function OLGame.OLCheatManager.cp
// [0x00020202] 
struct UOLCheatManager_execcp_Params
{
	class FString                                      CPName;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.Checkpoint
// [0x00020202] 
struct UOLCheatManager_execCheckpoint_Params
{
	class FString                                      CPName;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.KillFade
// [0x00020202] 
struct UOLCheatManager_execKillFade_Params
{
};

// Function OLGame.OLCheatManager.ToggleUnlimitedBatteries
// [0x00020202] 
struct UOLCheatManager_execToggleUnlimitedBatteries_Params
{
};

// Function OLGame.OLCheatManager.LoseAllProfileRecordingMoment
// [0x00020600] 
struct UOLCheatManager_execLoseAllProfileRecordingMoment_Params
{
};

// Function OLGame.OLCheatManager.LoseRecordingMoment
// [0x00020600] 
struct UOLCheatManager_execLoseRecordingMoment_Params
{
	class FString                                      moment;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.GetRecordingMoment
// [0x00020600] 
struct UOLCheatManager_execGetRecordingMoment_Params
{
	class FString                                      moment;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.GetAllRecordingMoments
// [0x00020600] 
struct UOLCheatManager_execGetAllRecordingMoments_Params
{
};

// Function OLGame.OLCheatManager.ResetBandageTime
// [0x00020600] 
struct UOLCheatManager_execResetBandageTime_Params
{
};

// Function OLGame.OLCheatManager.ForceHeroSkin
// [0x00020600] 
struct UOLCheatManager_execForceHeroSkin_Params
{
	int32_t                                            Type;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SubType;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheatManager.AddBandage
// [0x00020202] 
struct UOLCheatManager_execAddBandage_Params
{
	// int32_t                                            nbBandageAdded;                                   		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLCheatManager.RechargeNightVision
// [0x00020202] 
struct UOLCheatManager_execRechargeNightVision_Params
{
	// int32_t                                            nbBatAdded;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLCheatManager.Ghost
// [0x00020202] 
struct UOLCheatManager_execGhost_Params
{
};

// Function OLGame.OLCheatManager.GhostPawn
// [0x00020400] 
struct UOLCheatManager_execGhostPawn_Params
{
	uint32_t                                           ghosting : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLCheatManager.FasterGameSpeed
// [0x00020202] 
struct UOLCheatManager_execFasterGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.SlowerGameSpeed
// [0x00020202] 
struct UOLCheatManager_execSlowerGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.NormalGameSpeed
// [0x00020202] 
struct UOLCheatManager_execNormalGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.UpdateGameSpeed
// [0x00020002] 
struct UOLCheatManager_execUpdateGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.SingleFrame
// [0x00020600] 
struct UOLCheatManager_execSingleFrame_Params
{
};

// Function OLGame.OLCheatManager.TeleportToFreeCam
// [0x00020202] 
struct UOLCheatManager_execTeleportToFreeCam_Params
{
};

// Function OLGame.OLCheatManager.ToggleFixedCam
// [0x00020202] 
struct UOLCheatManager_execToggleFixedCam_Params
{
};

// Function OLGame.OLCheatManager.ToggleFreeCamNoPause
// [0x00020202] 
struct UOLCheatManager_execToggleFreeCamNoPause_Params
{
};

// Function OLGame.OLCheatManager.ToggleFreeCam
// [0x00020202] 
struct UOLCheatManager_execToggleFreeCam_Params
{
};

// Function OLGame.OLCheatManager.AutoSpike
// [0x00024202] 
struct UOLCheatManager_execAutoSpike_Params
{
	float                                              Spike;                                            		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Delay;                                            		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCheatManager.Spike
// [0x00024202] 
struct UOLCheatManager_execSpike_Params
{
	float                                              Spike;                                            		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCheatManager.BadFPS
// [0x00024202] 
struct UOLCheatManager_execBadFPS_Params
{
	float                                              slowdown;                                         		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLCheatManager.DebugAI
// [0x00020202] 
struct UOLCheatManager_execDebugAI_Params
{
};

// Function OLGame.OLCheatManager.ShowHeroDebug
// [0x00020202] 
struct UOLCheatManager_execShowHeroDebug_Params
{
};

// Function OLGame.OLCheatManager.ShowOLProfiler
// [0x00020202] 
struct UOLCheatManager_execShowOLProfiler_Params
{
};

// Function OLGame.OLCheatManager.ShowPerformance
// [0x00020202] 
struct UOLCheatManager_execShowPerformance_Params
{
};

// Function OLGame.OLCheatManager.ShowCollisions
// [0x00020202] 
struct UOLCheatManager_execShowCollisions_Params
{
};

// Function OLGame.OLCheatManager.ShowPaths
// [0x00020202] 
struct UOLCheatManager_execShowPaths_Params
{
};

// Function OLGame.OLCheatManager.ShowStatLevels
// [0x00020202] 
struct UOLCheatManager_execShowStatLevels_Params
{
};

// Function OLGame.OLCheatManager.DebugSubtitles
// [0x00020202] 
struct UOLCheatManager_execDebugSubtitles_Params
{
};

// Function OLGame.OLCheatManager.LogSoundEvents
// [0x00020600] 
struct UOLCheatManager_execLogSoundEvents_Params
{
};

// Function OLGame.OLCheatManager.DebugVO
// [0x00020202] 
struct UOLCheatManager_execDebugVO_Params
{
};

// Function OLGame.OLCheatManager.DebugGameState
// [0x00020202] 
struct UOLCheatManager_execDebugGameState_Params
{
};

// Function OLGame.OLCheatManager.DebugAIConfig
// [0x00020202] 
struct UOLCheatManager_execDebugAIConfig_Params
{
};

// Function OLGame.OLCheatManager.SlowStreaming
// [0x00020202] 
struct UOLCheatManager_execSlowStreaming_Params
{
};

// Function OLGame.OLCheatManager.DebugAIAnims
// [0x00020202] 
struct UOLCheatManager_execDebugAIAnims_Params
{
};

// Function OLGame.OLCheatManager.DebugInvestigation
// [0x00020202] 
struct UOLCheatManager_execDebugInvestigation_Params
{
};

// Function OLGame.OLCheatManager.DebugClearance
// [0x00020202] 
struct UOLCheatManager_execDebugClearance_Params
{
};

// Function OLGame.OLCheatManager.DebugSoundMeter
// [0x00020202] 
struct UOLCheatManager_execDebugSoundMeter_Params
{
};

// Function OLGame.OLCheatManager.ShowPrecomputedLightVolumes
// [0x00020202] 
struct UOLCheatManager_execShowPrecomputedLightVolumes_Params
{
};

// Function OLGame.OLCheatManager.DebugTrajectory
// [0x00020202] 
struct UOLCheatManager_execDebugTrajectory_Params
{
};

// Function OLGame.OLCheatManager.DebugKismet
// [0x00024202] 
struct UOLCheatManager_execDebugKismet_Params
{
	class FString                                      Filter;                                           		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.DebugCamera
// [0x00020202] 
struct UOLCheatManager_execDebugCamera_Params
{
};

// Function OLGame.OLCheatManager.DebugLineChecks
// [0x00020600] 
struct UOLCheatManager_execDebugLineChecks_Params
{
};

// Function OLGame.OLCheatManager.DumpKismetLog
// [0x00024600] 
struct UOLCheatManager_execDumpKismetLog_Params
{
	class FString                                      Filter;                                           		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.DebugSoundEnvironment
// [0x00024600] 
struct UOLCheatManager_execDebugSoundEnvironment_Params
{
	class FString                                      Filter;                                           		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.DebugGameplay
// [0x00020600] 
struct UOLCheatManager_execDebugGameplay_Params
{
};

// Function OLGame.OLCheatManager.SaveAllCheckpoints
// [0x00020600] 
struct UOLCheatManager_execSaveAllCheckpoints_Params
{
};

// Function OLGame.OLCheatManager.DeleteAllSaves
// [0x00020600] 
struct UOLCheatManager_execDeleteAllSaves_Params
{
};

// Function OLGame.OLCheatManager.KillAll
// [0x00020202] 
struct UOLCheatManager_execKillAll_Params
{
	class UClass*                                      aClass;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCheatManager.God
// [0x00020600] 
struct UOLCheatManager_execGod_Params
{
};

// Function OLGame.OLCheatManager.TakeScreenshot
// [0x00020202] 
struct UOLCheatManager_execTakeScreenshot_Params
{
};

// Function OLGame.OLCheatManager.CycleCollisionView
// [0x00020202] 
struct UOLCheatManager_execCycleCollisionView_Params
{
};

// Function OLGame.OLCheatManager.ViewShaderComplexity
// [0x00020202] 
struct UOLCheatManager_execViewShaderComplexity_Params
{
};

// Function OLGame.OLCheatManager.ViewDetailLighting
// [0x00020202] 
struct UOLCheatManager_execViewDetailLighting_Params
{
};

// Function OLGame.OLCheatManager.ViewLit
// [0x00020202] 
struct UOLCheatManager_execViewLit_Params
{
};

// Function OLGame.OLCheatManager.ViewUnlit
// [0x00020202] 
struct UOLCheatManager_execViewUnlit_Params
{
};

// Function OLGame.OLCheatManager.ViewWireframe
// [0x00020202] 
struct UOLCheatManager_execViewWireframe_Params
{
};

// Function OLGame.OLCheatManager.ToggleGamepadCheats
// [0x00020202] 
struct UOLCheatManager_execToggleGamepadCheats_Params
{
};

// Function OLGame.OLCheatManager.ToggleCheats
// [0x00020202] 
struct UOLCheatManager_execToggleCheats_Params
{
};

// Function OLGame.OLCheatManager.CheatMessage
// [0x00020802] 
struct UOLCheatManager_eventCheatMessage_Params
{
	class FString                                      Message;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLCheatManager.GetCheatManager
// [0x00022400] 
struct UOLCheatManager_execGetCheatManager_Params
{
	class UOLCheatManager*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLCheckpoint.OnPlayerSpawn
// [0x00020400] 
struct AOLCheckpoint_execOnPlayerSpawn_Params
{
};

// Function OLGame.OLCheckpointList.Script_IsUnreached
// [0x00422400] 
struct AOLCheckpointList_execScript_IsUnreached_Params
{
	struct FName                                       TestCheckpoint;                                   		// 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FName                                       CurrentCheckpoint;                                		// 0x0008 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLConsole.InputKey
// [0x00024002] 
struct UOLConsole_execInputKey_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Event;                                            		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLCheatManager*                             CheatMgr;                                         		// 0x001C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLConsole.AddCustomCommandsToAutoComplete
// [0x00020400] 
struct UOLConsole_execAddCustomCommandsToAutoComplete_Params
{
};

// Function OLGame.OLDamageActor.OnToggle
// [0x00020102] 
struct AOLDamageActor_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDLCManager.FindAndInstallDLC
// [0x00020400] 
struct UOLDLCManager_execFindAndInstallDLC_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDoor.BreakDoor
// [0x00020400] 
struct AOLDoor_execBreakDoor_Params
{
	class AOLPawn*                                     Breaker;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bReversed : 1;                                    		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bNoSound : 1;                                     		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLDoor.BashDoor
// [0x00020802] 
struct AOLDoor_eventBashDoor_Params
{
	uint32_t                                           bReversed : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLDoor.ShouldBreak
// [0x00020802] 
struct AOLDoor_eventShouldBreak_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDoor.InterpolationFinished
// [0x00020902] 
struct AOLDoor_eventInterpolationFinished_Params
{
	class USeqAct_Interp*                              InterpAction;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDoor.InterpolationStarted
// [0x00020902] 
struct AOLDoor_eventInterpolationStarted_Params
{
	class USeqAct_Interp*                              InterpAction;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UInterpGroupInst*                            GroupInst;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDoor.StopMatineeAnim
// [0x00020400] 
struct AOLDoor_execStopMatineeAnim_Params
{
	uint32_t                                           bHeroTriggered : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLDoor.StartMatineeAnim
// [0x00020400] 
struct AOLDoor_execStartMatineeAnim_Params
{
	uint32_t                                           bLooping : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLDoor.OnDestroy
// [0x00020102] 
struct AOLDoor_execOnDestroy_Params
{
	class USeqAct_Destroy*                             Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDoor.SoftDestroy
// [0x00020400] 
struct AOLDoor_execSoftDestroy_Params
{
};

// Function OLGame.OLDoor.NotifyHandlesToWait
// [0x00020400] 
struct AOLDoor_execNotifyHandlesToWait_Params
{
};

// Function OLGame.OLDoor.NotifyHandlesToRepath
// [0x00020400] 
struct AOLDoor_execNotifyHandlesToRepath_Params
{
};

// Function OLGame.OLDoor.ForcePushBlockingHero
// [0x00020400] 
struct AOLDoor_execForcePushBlockingHero_Params
{
};

// Function OLGame.OLDoor.FastOpen
// [0x00020400] 
struct AOLDoor_execFastOpen_Params
{
	class AOLPawn*                                     OpeningPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDoor.IsOnPullSide
// [0x00420400] 
struct AOLDoor_execIsOnPullSide_Params
{
	struct FVector                                     TestLocation;                                     		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDoor.GetOpenAngle
// [0x00020400] 
struct AOLDoor_execGetOpenAngle_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDoor.OnStateChanged
// [0x00020400] 
struct AOLDoor_execOnStateChanged_Params
{
};

// Function OLGame.OLDoor.TriggerEvent
// [0x00020400] 
struct AOLDoor_execTriggerEvent_Params
{
	uint8_t                                            EventType;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class AOLPawn*                                     Triggerer;                                        		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDoor.TriggerBreakDoorCameraShake
// [0x00020400] 
struct AOLDoor_execTriggerBreakDoorCameraShake_Params
{
};

// Function OLGame.OLDoor.StopShaking
// [0x00020400] 
struct AOLDoor_execStopShaking_Params
{
};

// Function OLGame.OLDoor.StartShaking
// [0x00024400] 
struct AOLDoor_execStartShaking_Params
{
	struct FDoorShakeData                              ShakeParams;                                      		// 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bSwitchToBreakingMesh : 1;                        		// 0x0040 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bReversed : 1;                                    		// 0x0044 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bFromAI : 1;                                      		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLDoor.IsBroken
// [0x00020002] 
struct AOLDoor_execIsBroken_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDoor.UnregisterNavmeshObstacle
// [0x00020401] 
struct AOLDoor_execUnregisterNavmeshObstacle_Params
{
};

// Function OLGame.OLDoor.RegisterNavMeshObstacle
// [0x00020401] 
struct AOLDoor_execRegisterNavMeshObstacle_Params
{
};

// Function OLGame.OLDoor.ScriptGetCenterLocation
// [0x00020400] 
struct AOLDoor_execScriptGetCenterLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDoorChimes.UnTouch
// [0x00020902] 
struct AOLDoorChimes_eventUnTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDoorChimes.Touch
// [0x00020902] 
struct AOLDoorChimes_eventTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDoorChimes.PlayChimes
// [0x00020802] 
struct AOLDoorChimes_eventPlayChimes_Params
{
	// class AOLHero*                                     Hero;                                             		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLEngine.UsingFixedSaveLocation
// [0x00020002] 
struct UOLEngine_execUsingFixedSaveLocation_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.SaveGameImmediate
// [0x00024400] 
struct UOLEngine_execSaveGameImmediate_Params
{
	uint32_t                                           bSaveToDisk : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      ForceSaveGameName;                                		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bNewSave : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      OverrideSaveCheckpointName;                       		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLEngine.InitiateSaveGame
// [0x00020400] 
struct UOLEngine_execInitiateSaveGame_Params
{
	uint32_t                                           bSaveToDisk : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLEngine.HasAnyValidSaveGame
// [0x00020400] 
struct UOLEngine_execHasAnyValidSaveGame_Params
{
	ELoadGameResult                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.HasValidSaveGame
// [0x00020400] 
struct UOLEngine_execHasValidSaveGame_Params
{
	ELoadGameResult                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.RefreshSaveFiles
// [0x00020400] 
struct UOLEngine_execRefreshSaveFiles_Params
{
};

// Function OLGame.OLEngine.IsGameFullyDownloaded
// [0x00020400] 
struct UOLEngine_execIsGameFullyDownloaded_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.TryStartDLCGame
// [0x00020400] 
struct UOLEngine_execTryStartDLCGame_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.ShouldShowNewDLCGame
// [0x00020400] 
struct UOLEngine_execShouldShowNewDLCGame_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.RefreshDLC
// [0x00020400] 
struct UOLEngine_execRefreshDLC_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEngine.CheckReloadForDLC
// [0x00020400] 
struct UOLEngine_execCheckReloadForDLC_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_OnPressedContinue
// [0x00020400] 
struct UOLDingoEngine_execDingo_OnPressedContinue_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDingoEngine.ReturnToPressStartScreen
// [0x00020400] 
struct UOLDingoEngine_execReturnToPressStartScreen_Params
{
};

// Function OLGame.OLDingoEngine.ShouldOpenPressStartScreen
// [0x00020400] 
struct UOLDingoEngine_execShouldOpenPressStartScreen_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_ShowLoginUIAndInitializeUser
// [0x00020002] 
struct UOLDingoEngine_execDingo_ShowLoginUIAndInitializeUser_Params
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.DingoNative_ShowLoginUIAndInitializeUser
// [0x00020400] 
struct UOLDingoEngine_execDingoNative_ShowLoginUIAndInitializeUser_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_ShouldShowLoginUI
// [0x00020400] 
struct UOLDingoEngine_execDingo_ShouldShowLoginUI_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_OnInitialPressStart
// [0x00020400] 
struct UOLDingoEngine_execDingo_OnInitialPressStart_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_AllowAllControllersInput
// [0x00020400] 
struct UOLDingoEngine_execDingo_AllowAllControllersInput_Params
{
};

// Function OLGame.OLDingoEngine.OnDingoUserInitialized
// [0x00020802] 
struct UOLDingoEngine_eventOnDingoUserInitialized_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLDingoEngine.Dingo_InitializeUser
// [0x00020002] 
struct UOLDingoEngine_execDingo_InitializeUser_Params
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLDingoEngine.DingoNative_StartInitializeUser
// [0x00020400] 
struct UOLDingoEngine_execDingoNative_StartInitializeUser_Params
{
};

// Function OLGame.OLDingoEngine.DingoUserInitializedCallback
// [0x00120000] 
struct UOLDingoEngine_execDingoUserInitializedCallback_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLDingoEngine.GiveRightForRecording
// [0x00020400] 
struct UOLDingoEngine_execGiveRightForRecording_Params
{
};

// Function OLGame.OLDingoEngine.ClearRecordings
// [0x00020400] 
struct UOLDingoEngine_execClearRecordings_Params
{
};

// Function OLGame.OLDingoEngine.HasEnoughRightsLeftForRecording
// [0x00020400] 
struct UOLDingoEngine_execHasEnoughRightsLeftForRecording_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.HasRightsForRecording
// [0x00020400] 
struct UOLDingoEngine_execHasRightsForRecording_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_GetActiveGamertag
// [0x00020400] 
struct UOLDingoEngine_execDingo_GetActiveGamertag_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLDingoEngine.Dingo_GetSaveFileIdStr
// [0x00020400] 
struct UOLDingoEngine_execDingo_GetSaveFileIdStr_Params
{
	class FString                                      SaveFileName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLDingoEngine.Dingo_GetSaveFileIconName
// [0x00020400] 
struct UOLDingoEngine_execDingo_GetSaveFileIconName_Params
{
	struct FName                                       CheckpointName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLDingoEngine.Dingo_ShowHelpUI
// [0x00020400] 
struct UOLDingoEngine_execDingo_ShowHelpUI_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_DeleteSaveGame
// [0x00020400] 
struct UOLDingoEngine_execDingo_DeleteSaveGame_Params
{
	class FString                                      SaveFileName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_SaveGameImmediateToNewSave
// [0x00020400] 
struct UOLDingoEngine_execDingo_SaveGameImmediateToNewSave_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_SaveGameImmediate
// [0x00020400] 
struct UOLDingoEngine_execDingo_SaveGameImmediate_Params
{
	class FString                                      SaveFileName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_StartNewGameWithNewSave
// [0x00020400] 
struct UOLDingoEngine_execDingo_StartNewGameWithNewSave_Params
{
	class FString                                      startCP;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_StartNewGameWithSave
// [0x00020400] 
struct UOLDingoEngine_execDingo_StartNewGameWithSave_Params
{
	class FString                                      startCP;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SaveFileName;                                     		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_LoadMostRecentSaveFile
// [0x00020400] 
struct UOLDingoEngine_execDingo_LoadMostRecentSaveFile_Params
{
	ELoadGameResult                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.Dingo_LoadSaveGame
// [0x00020400] 
struct UOLDingoEngine_execDingo_LoadSaveGame_Params
{
	class FString                                      SaveFileName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	ELoadGameResult                                    ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.IsGameFullyDownloaded
// [0x00020400] 
struct UOLDingoEngine_execIsGameFullyDownloaded_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.HasAnyValidSaveGame
// [0x00020400] 
struct UOLDingoEngine_execHasAnyValidSaveGame_Params
{
	ELoadGameResult                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.HasValidSaveGame
// [0x00020400] 
struct UOLDingoEngine_execHasValidSaveGame_Params
{
	ELoadGameResult                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLDingoEngine.RefreshSaveFiles
// [0x00020400] 
struct UOLDingoEngine_execRefreshSaveFiles_Params
{
};

// Function OLGame.OLOrbisEngine.SetMaxCheckpointId
// [0x00020400] 
struct UOLOrbisEngine_execSetMaxCheckpointId_Params
{
	int32_t                                            MaxCheckpoint;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLOrbisEngine.IsGameFullyDownloaded
// [0x00020400] 
struct UOLOrbisEngine_execIsGameFullyDownloaded_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLOrbisEngine.PS4_LoadMostRecentSaveFile
// [0x00020400] 
struct UOLOrbisEngine_execPS4_LoadMostRecentSaveFile_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLOrbisEngine.PS4_LoadCurrentSaveFile
// [0x00020400] 
struct UOLOrbisEngine_execPS4_LoadCurrentSaveFile_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLOrbisEngine.HasAnyValidSaveGame
// [0x00020400] 
struct UOLOrbisEngine_execHasAnyValidSaveGame_Params
{
	ELoadGameResult                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLOrbisEngine.HasValidSaveGame
// [0x00020400] 
struct UOLOrbisEngine_execHasValidSaveGame_Params
{
	ELoadGameResult                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLOrbisEngine.GetNumberOfSaveGames
// [0x00020400] 
struct UOLOrbisEngine_execGetNumberOfSaveGames_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLOrbisEngine.SelectAndLoadGame
// [0x00020002] 
struct UOLOrbisEngine_execSelectAndLoadGame_Params
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLOrbisEngine.NativeSelectAndLoadGame
// [0x00020400] 
struct UOLOrbisEngine_execNativeSelectAndLoadGame_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLOrbisEngine.NewSaveLocation
// [0x00020002] 
struct UOLOrbisEngine_execNewSaveLocation_Params
{
	class FString                                      startCP;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLOrbisEngine.NativeNewSaveLocation
// [0x00020400] 
struct UOLOrbisEngine_execNativeNewSaveLocation_Params
{
	class FString                                      startCP;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLOrbisEngine.SelectSaveLocation
// [0x00020002] 
struct UOLOrbisEngine_execSelectSaveLocation_Params
{
	class FString                                      startCP;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLOrbisEngine.NativeSelectSaveLocation
// [0x00020400] 
struct UOLOrbisEngine_execNativeSelectSaveLocation_Params
{
	class FString                                      startCP;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLOrbisEngine.FinishedSaveDataDialog
// [0x00020802] 
struct UOLOrbisEngine_eventFinishedSaveDataDialog_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLOrbisEngine.SaveDataDialogDoneCallback
// [0x00120000] 
struct UOLOrbisEngine_execSaveDataDialogDoneCallback_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLOrbisEngine.UsingFixedSaveLocation
// [0x00020002] 
struct UOLOrbisEngine_execUsingFixedSaveLocation_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLWinEngine.UpdateProfileKeyBindingsFromSystem
// [0x00020400] 
struct UOLWinEngine_execUpdateProfileKeyBindingsFromSystem_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLWinEngine.UpdateProfileFromSystemSettings
// [0x00020400] 
struct UOLWinEngine_execUpdateProfileFromSystemSettings_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLWinEngine.UpdateFullscreenFromSystemSettings
// [0x00020400] 
struct UOLWinEngine_execUpdateFullscreenFromSystemSettings_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLWinEngine.ApplySystemSettings
// [0x00020400] 
struct UOLWinEngine_execApplySystemSettings_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLWinEngine.DebugLoadGame
// [0x00020400] 
struct UOLWinEngine_execDebugLoadGame_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLWinEngine.DebugSaveGame
// [0x00020400] 
struct UOLWinEngine_execDebugSaveGame_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLWinEngine.SaveAllCheckpoints
// [0x00020400] 
struct UOLWinEngine_execSaveAllCheckpoints_Params
{
};

// Function OLGame.OLWinEngine.RefreshSaveFiles
// [0x00020400] 
struct UOLWinEngine_execRefreshSaveFiles_Params
{
};

// Function OLGame.OLWinEngine.DeleteSaveFile
// [0x00020400] 
struct UOLWinEngine_execDeleteSaveFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLWinEngine.LoadSaveFile
// [0x00020400] 
struct UOLWinEngine_execLoadSaveFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	ELoadGameResult                                    ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLWinEngine.HasAnyValidSaveGame
// [0x00020400] 
struct UOLWinEngine_execHasAnyValidSaveGame_Params
{
	ELoadGameResult                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLWinEngine.HasValidSaveGame
// [0x00020400] 
struct UOLWinEngine_execHasValidSaveGame_Params
{
	ELoadGameResult                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLFlashLight.OnToggle
// [0x00020102] 
struct AOLFlashLight_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLFlashLight.TurnOff
// [0x00020400] 
struct AOLFlashLight_execTurnOff_Params
{
	uint32_t                                           bHideMesh : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLFlashLight.TurnOn
// [0x00020400] 
struct AOLFlashLight_execTurnOn_Params
{
};

// Function OLGame.OLLantern.TurnOff
// [0x00020400] 
struct AOLLantern_execTurnOff_Params
{
	uint32_t                                           bHideMesh : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLLantern.TurnOn
// [0x00020400] 
struct AOLLantern_execTurnOn_Params
{
};

// Function OLGame.OLTorch.TurnOff
// [0x00020400] 
struct AOLTorch_execTurnOff_Params
{
	uint32_t                                           bHideMesh : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLTorch.TurnOn
// [0x00020400] 
struct AOLTorch_execTurnOn_Params
{
};

// Function OLGame.OLFloatingObjectBase.OnToggle
// [0x00020102] 
struct AOLFloatingObjectBase_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLFloorMaterialVolume.OnToggle
// [0x00020102] 
struct AOLFloorMaterialVolume_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLFXManager.SetFXForEnemyPawn
// [0x00020400] 
struct UOLFXManager_execSetFXForEnemyPawn_Params
{
	class AOLEnemyPawn*                                EnemyPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLFXManager.DeactivateNightVisionEffect
// [0x00020400] 
struct UOLFXManager_execDeactivateNightVisionEffect_Params
{
};

// Function OLGame.OLFXManager.ActivateCamcorderEffect
// [0x00020400] 
struct UOLFXManager_execActivateCamcorderEffect_Params
{
};

// Function OLGame.OLFXManager.ActivateNightVisionEffect
// [0x00020400] 
struct UOLFXManager_execActivateNightVisionEffect_Params
{
	uint32_t                                           bPowered : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLFXManager.SetPPSFromScript
// [0x00020400] 
struct UOLFXManager_execSetPPSFromScript_Params
{
	uint8_t                                            newPPS;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLFXManager.GetFXManager
// [0x00022400] 
struct UOLFXManager_execGetFXManager_Params
{
	class UOLFXManager*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.CloseHint
// [0x00020802] 
struct AOLGame_eventCloseHint_Params
{
};

// Function OLGame.OLGame.HideHint
// [0x00020802] 
struct AOLGame_eventHideHint_Params
{
};

// Function OLGame.OLGame.ShowHint
// [0x00020802] 
struct AOLGame_eventShowHint_Params
{
	class FString                                      MessageText;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLGame.ClearPause
// [0x00020802] 
struct AOLGame_eventClearPause_Params
{
	// class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLGame.SetPause
// [0x00024002] 
struct AOLGame_execSetPause_Params
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             CanUnpauseDelegate;                               		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bReturn : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLGame.HandleUnpaused
// [0x00020400] 
struct AOLGame_execHandleUnpaused_Params
{
};

// Function OLGame.OLGame.HandlePaused
// [0x00020400] 
struct AOLGame_execHandlePaused_Params
{
};

// Function OLGame.OLGame.SetGameSpeed
// [0x00020002] 
struct AOLGame_execSetGameSpeed_Params
{
	float                                              T;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLGame.TravelToStartupMap
// [0x00020802] 
struct AOLGame_eventTravelToStartupMap_Params
{
};

// Function OLGame.OLGame.OnTravelToStartupMap
// [0x00020400] 
struct AOLGame_execOnTravelToStartupMap_Params
{
};

// Function OLGame.OLGame.RestartPlayer
// [0x00020002] 
struct AOLGame_execRestartPlayer_Params
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]               
	// TArray<class USequenceObject*>                     Events;                                           		// 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class USeqEvent_PlayerSpawned*                     SpawnedEvent;                                     		// 0x001C (0x0008) [0x0000000000000000]               
	// class ANavigationPoint*                            StartSpot;                                        		// 0x0024 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLGame.EvtRestartPlayer
// [0x00020802] 
struct AOLGame_eventEvtRestartPlayer_Params
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLGame.UpdateGameType
// [0x00020400] 
struct AOLGame_execUpdateGameType_Params
{
};

// Function OLGame.OLGame.OnPlayerSpawned
// [0x00020802] 
struct AOLGame_eventOnPlayerSpawned_Params
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class ANavigationPoint*                            StartPoint;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class AOLCheckpoint*                               Checkpoint;                                       		// 0x0010 (0x0008) [0x0000000000000000]               
	// class AOLEnemyPawn*                                EnemyPawn;                                        		// 0x0018 (0x0008) [0x0000000000000000]               
	// class AOLArrow*                                    Arrow;                                            		// 0x0020 (0x0008) [0x0000000000000000]               
	// class AOLPlayerController*                         OLPC;                                             		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLGame.FindPlayerStart
// [0x00024002] 
struct AOLGame_execFindPlayerStart_Params
{
	class AController*                                 Player;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InTeam;                                           		// 0x0008 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      IncomingName;                                     		// 0x000C (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class ANavigationPoint*                            ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLCheckpoint*                               Checkpoint;                                       		// 0x0024 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLGame.NewPolish
// [0x00020600] 
struct AOLGame_execNewPolish_Params
{
};

// Function OLGame.OLGame.NewOptim
// [0x00020600] 
struct AOLGame_execNewOptim_Params
{
};

// Function OLGame.OLGame.NewTask
// [0x00020600] 
struct AOLGame_execNewTask_Params
{
};

// Function OLGame.OLGame.NewBug
// [0x00020600] 
struct AOLGame_execNewBug_Params
{
};

// Function OLGame.OLGame.GetDifficultyMode
// [0x00020400] 
struct AOLGame_execGetDifficultyMode_Params
{
	EDifficultyMode                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.GetFirstCheckpoint
// [0x00020400] 
struct AOLGame_execGetFirstCheckpoint_Params
{
	uint8_t                                            GameType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLGame.MatchCheckpoint
// [0x00020400] 
struct AOLGame_execMatchCheckpoint_Params
{
	class FString                                      PortalName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class AOLCheckpoint*                               ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.SetCurrentCheckpoint
// [0x00020400] 
struct AOLGame_execSetCurrentCheckpoint_Params
{
	struct FName                                       CheckpointName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLGame.CheckpointReached
// [0x00020400] 
struct AOLGame_execCheckpointReached_Params
{
	struct FName                                       CheckpointName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLGame.AllowCheats
// [0x00020002] 
struct AOLGame_execAllowCheats_Params
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.GenerateNewHint
// [0x00020400] 
struct AOLGame_execGenerateNewHint_Params
{
};

// Function OLGame.OLGame.IsDLCInstalled
// [0x00020400] 
struct AOLGame_execIsDLCInstalled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.IsPlayingDLC
// [0x00020400] 
struct AOLGame_execIsPlayingDLC_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.IsCensored
// [0x00020400] 
struct AOLGame_execIsCensored_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.IsPlaytest
// [0x00020400] 
struct AOLGame_execIsPlaytest_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.IsDemo
// [0x00020400] 
struct AOLGame_execIsDemo_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGame.SetGameType
// [0x00022802] 
struct AOLGame_eventSetGameType_Params
{
	class FString                                      MapName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Options;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Portal;                                           		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      ReturnValue;                                      		// 0x0030 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGameplayMarker.OnToggle
// [0x00020102] 
struct AOLGameplayMarker_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLGameplayMarker.PostBeginPlay
// [0x00020902] 
struct AOLGameplayMarker_eventPostBeginPlay_Params
{
	// class USpriteComponent*                            ASpriteComp;                                      		// 0x0000 (0x0008) [0x0000000004000000] (CPF_EditInline)
};

// Function OLGame.OLCSA.OnToggle
// [0x00020102] 
struct AOLCSA_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCSA.SetEnabled
// [0x00020400] 
struct AOLCSA_execSetEnabled_Params
{
	uint32_t                                           bNewEnabled : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLRecordingMarker.OnToggle
// [0x00020102] 
struct AOLRecordingMarker_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLRTPCDistanceModifier.OnToggle
// [0x00020102] 
struct AOLRTPCDistanceModifier_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLRTPCDistanceModifier.StopSound
// [0x00020400] 
struct AOLRTPCDistanceModifier_execStopSound_Params
{
};

// Function OLGame.OLRTPCDistanceModifier.StartSound
// [0x00020400] 
struct AOLRTPCDistanceModifier_execStartSound_Params
{
};

// Function OLGame.OLRTPCPlayerLookModifier.OnToggle
// [0x00020102] 
struct AOLRTPCPlayerLookModifier_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLRTPCPlayerLookModifier.StopSound
// [0x00020400] 
struct AOLRTPCPlayerLookModifier_execStopSound_Params
{
};

// Function OLGame.OLRTPCPlayerLookModifier.StartSound
// [0x00020400] 
struct AOLRTPCPlayerLookModifier_execStartSound_Params
{
};

// Function OLGame.OLGameplayStaticMeshActor.OnToggle
// [0x00020102] 
struct AOLGameplayStaticMeshActor_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLGameplayVolume.OnToggle
// [0x00020102] 
struct AOLGameplayVolume_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLDamageBlockingVolume.Touch
// [0x00020902] 
struct AOLDamageBlockingVolume_eventTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
	// class AOLHero*                                     Hero;                                             		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLDarknessVolume.OnToggle
// [0x00020102] 
struct AOLDarknessVolume_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLElectrifiedVolume.Touch
// [0x00020902] 
struct AOLElectrifiedVolume_eventTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
	// class AOLHero*                                     Hero;                                             		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPhysicsVolume.OnToggle
// [0x00020102] 
struct AOLPhysicsVolume_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPhysicsVolume.UpdateCollisionState
// [0x00020400] 
struct AOLPhysicsVolume_execUpdateCollisionState_Params
{
};

// Function OLGame.OLGameStateList.ResetAllGameState
// [0x00022400] 
struct AOLGameStateList_execResetAllGameState_Params
{
};

// Function OLGame.OLGameStateList.DumpGameState
// [0x00022400] 
struct AOLGameStateList_execDumpGameState_Params
{
};

// Function OLGame.OLGameViewportClient.DrawTransition
// [0x00020000] 
struct UOLGameViewportClient_execDrawTransition_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHidingBarrel.OnToggle
// [0x00020102] 
struct AOLHidingBarrel_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHidingBarrel.TriggerEvent
// [0x00020400] 
struct AOLHidingBarrel_execTriggerEvent_Params
{
	uint8_t                                            EventType;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class AOLPawn*                                     Triggerer;                                        		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHUD.SetLargeImageSize
// [0x00020802] 
struct AOLHUD_eventSetLargeImageSize_Params
{
	int32_t                                            imageWidth;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            imageHeight;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            X;                                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Y;                                                		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHUD.Tick
// [0x00020802] 
struct AOLHUD_eventTick_Params
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UOLUIFrontEnd_GammaScreen_Console*           GammaScreenConsole;                               		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.NotifyAltEnter
// [0x00020802] 
struct AOLHUD_eventNotifyAltEnter_Params
{
};

// Function OLGame.OLHUD.GamepadConfigChanged
// [0x00020002] 
struct AOLHUD_execGamepadConfigChanged_Params
{
};

// Function OLGame.OLHUD.OnLostFocusPause
// [0x00020802] 
struct AOLHUD_eventOnLostFocusPause_Params
{
	uint32_t                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// uint32_t                                           bGameIsPaused : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLHUD.ShowHUDMessages
// [0x00020002] 
struct AOLHUD_execShowHUDMessages_Params
{
};

// Function OLGame.OLHUD.HideHUDMessages
// [0x00020002] 
struct AOLHUD_execHideHUDMessages_Params
{
};

// Function OLGame.OLHUD.ShowingSubtitle
// [0x00020802] 
struct AOLHUD_eventShowingSubtitle_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.HideSubtitle
// [0x00020802] 
struct AOLHUD_eventHideSubtitle_Params
{
};

// Function OLGame.OLHUD.SetSubtitleHeight
// [0x00020802] 
struct AOLHUD_eventSetSubtitleHeight_Params
{
	uint32_t                                           High : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLHUD.ShowSubtitle
// [0x00020802] 
struct AOLHUD_eventShowSubtitle_Params
{
	class FString                                      MessageText;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLHUD.HideObjective
// [0x00020802] 
struct AOLHUD_eventHideObjective_Params
{
};

// Function OLGame.OLHUD.ShowObjective
// [0x00020802] 
struct AOLHUD_eventShowObjective_Params
{
	class FString                                      ObjectiveText;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLHUD.HideMessage
// [0x00020802] 
struct AOLHUD_eventHideMessage_Params
{
};

// Function OLGame.OLHUD.ShowMessage
// [0x00020802] 
struct AOLHUD_eventShowMessage_Params
{
	uint8_t                                            MessageType;                                      		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            MessagePriority;                                  		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      MessageText;                                      		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLHUD.ResetMessageScreenForResize
// [0x00020802] 
struct AOLHUD_eventResetMessageScreenForResize_Params
{
};

// Function OLGame.OLHUD.SetCleanTextData
// [0x00020802] 
struct AOLHUD_eventSetCleanTextData_Params
{
	class FString                                      TextName;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Title;                                            		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Text;                                             		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLHUD.SetPausedPromptMessage
// [0x00020802] 
struct AOLHUD_eventSetPausedPromptMessage_Params
{
	class FString                                      Messsage;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bBackToMainMenu : 1;                              		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLHUD.ShowMenuType
// [0x00020802] 
struct AOLHUD_eventShowMenuType_Params
{
	uint8_t                                            MenuType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.ShowPausedPromptMenu
// [0x00020802] 
struct AOLHUD_eventShowPausedPromptMenu_Params
{
	// class AOLGame*                                     TheGame;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.PostSoundEventEnter
// [0x00020400] 
struct AOLHUD_execPostSoundEventEnter_Params
{
};

// Function OLGame.OLHUD.PostSoundEventSelect
// [0x00020400] 
struct AOLHUD_execPostSoundEventSelect_Params
{
};

// Function OLGame.OLHUD.MuteSelectSound
// [0x00024400] 
struct AOLHUD_execMuteSelectSound_Params
{
	float                                              MuteTime;                                         		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLHUD.CanShowSubMenu
// [0x00020400] 
struct AOLHUD_execCanShowSubMenu_Params
{
	uint8_t                                            MenuType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.HideMenu
// [0x00020A02] 
struct AOLHUD_execHideMenu_Params
{
	// class AOLGame*                                     TheGame;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.ShowMenu
// [0x00020202] 
struct AOLHUD_execShowMenu_Params
{
	// class AOLGame*                                     TheGame;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.ShowMainMenu
// [0x00020202] 
struct AOLHUD_execShowMainMenu_Params
{
};

// Function OLGame.OLHUD.ReturnToPressStartMenu
// [0x00020802] 
struct AOLHUD_eventReturnToPressStartMenu_Params
{
};

// Function OLGame.OLHUD.ClosePauseMenu
// [0x00020802] 
struct AOLHUD_eventClosePauseMenu_Params
{
};

// Function OLGame.OLHUD.SimulateBackInput
// [0x00020802] 
struct AOLHUD_eventSimulateBackInput_Params
{
};

// Function OLGame.OLHUD.ReloadMenu
// [0x00020202] 
struct AOLHUD_execReloadMenu_Params
{
};

// Function OLGame.OLHUD.InputTypeChanged
// [0x00020802] 
struct AOLHUD_eventInputTypeChanged_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLHUD.SetPCQTELabels
// [0x00020802] 
struct AOLHUD_eventSetPCQTELabels_Params
{
	class FString                                      upStr;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      leftStr;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      downStr;                                          		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      rightStr;                                         		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLHUD.CleanReadPreviousPage
// [0x00020802] 
struct AOLHUD_eventCleanReadPreviousPage_Params
{
	// class UOLUIFrontEnd_CleanText*                     cleanTextMenu;                                    		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.CleanReadNextPage
// [0x00020802] 
struct AOLHUD_eventCleanReadNextPage_Params
{
	// class UOLUIFrontEnd_CleanText*                     cleanTextMenu;                                    		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.CloseCleanTextMenu
// [0x00020802] 
struct AOLHUD_eventCloseCleanTextMenu_Params
{
	// class UOLUIFrontEnd_CleanText*                     cleanTextMenu;                                    		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.IsAMenuOpen
// [0x00020802] 
struct AOLHUD_eventIsAMenuOpen_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.IsInCleanTextMenu
// [0x00020802] 
struct AOLHUD_eventIsInCleanTextMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.IsInCreditsMenu
// [0x00020802] 
struct AOLHUD_eventIsInCreditsMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.IsOnMainMenuScreen
// [0x00020802] 
struct AOLHUD_eventIsOnMainMenuScreen_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.IsMainMenuOpen
// [0x00020802] 
struct AOLHUD_eventIsMainMenuOpen_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.IsInPausedPromptMenu
// [0x00020802] 
struct AOLHUD_eventIsInPausedPromptMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.IsInPauseMenu
// [0x00020802] 
struct AOLHUD_eventIsInPauseMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.CanUnpauseInPauseMenu
// [0x00120002] 
struct AOLHUD_execCanUnpauseInPauseMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.ShowDebugInfo
// [0x00420002] 
struct AOLHUD_execShowDebugInfo_Params
{
	float                                              out_YL;                                           		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// class AOLPlayerController*                         OLPC;                                             		// 0x0008 (0x0008) [0x0000000000000000]               
	// float                                              SecondYPos;                                       		// 0x0010 (0x0004) [0x0000000000000000]               
	// float                                              OldOrgX;                                          		// 0x0014 (0x0004) [0x0000000000000000]               
	// class AOLGame*                                     TheGame;                                          		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.ShouldDisplayDebugMessages
// [0x00020400] 
struct AOLHUD_execShouldDisplayDebugMessages_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.DebugNextAI
// [0x00020202] 
struct AOLHUD_execDebugNextAI_Params
{
	// class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	// uint32_t                                           bFound : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AOLBot*                                      FirstBot;                                         		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.DebugPrevAI
// [0x00020202] 
struct AOLHUD_execDebugPrevAI_Params
{
	// class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AOLBot*                                      PreviousBot;                                      		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHUD.NotifyGameSaved
// [0x00020400] 
struct AOLHUD_execNotifyGameSaved_Params
{
};

// Function OLGame.OLHUD.SetGammaCalibrationActive
// [0x00020400] 
struct AOLHUD_execSetGammaCalibrationActive_Params
{
	uint32_t                                           bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLHUD.ShowingFullScreenOverlay
// [0x00020400] 
struct AOLHUD_execShowingFullScreenOverlay_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHUD.Draw
// [0x00020400] 
struct AOLHUD_execDraw_Params
{
};

// Function OLGame.OLInteractiveSkeletalFoliageActor.Touch
// [0x00020D00] 
struct AOLInteractiveSkeletalFoliageActor_eventTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLMainHud.WidgetInitialized
// [0x00020802] 
struct UOLMainHud_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPawn.DisplayDebug
// [0x00420102] 
struct AOLPawn_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLPawn.IsFirstPerson
// [0x00020102] 
struct AOLPawn_execIsFirstPerson_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class APlayerController*                           PC;                                               		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPawn.PlayLanded
// [0x00020002] 
struct AOLPawn_execPlayLanded_Params
{
	struct FVector                                     landingLocation;                                  		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ImpactVel;                                        		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.Landed
// [0x00820802] 
struct AOLPawn_eventLanded_Params
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      FloorActor;                                       		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// struct FVector                                     Impulse;                                          		// 0x0020 (0x000C) [0x0000000000000000]               
};

// Function OLGame.OLPawn.Destroyed
// [0x00020902] 
struct AOLPawn_eventDestroyed_Params
{
	// class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AActor*                                      A;                                                		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPawn.MAT_BeginAIGroup
// [0x00020802] 
struct AOLPawn_eventMAT_BeginAIGroup_Params
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    StartRot;                                         		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendTime;                                        		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bDiscardSideAdjustments : 1;                      		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPawn.AdjustToMatineeStageMark
// [0x00020400] 
struct AOLPawn_execAdjustToMatineeStageMark_Params
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    StartRot;                                         		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendTime;                                        		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bDiscardSideAdjustments : 1;                      		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPawn.PostInitAnimTree
// [0x00020902] 
struct AOLPawn_eventPostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function OLGame.OLPawn.PlayVOLine
// [0x00024400] 
struct AOLPawn_execPlayVOLine_Params
{
	class UAkEvent*                                    LineToPlay;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLPawn.GetMaterialBelowFeet
// [0x00024400] 
struct AOLPawn_execGetMaterialBelowFeet_Params
{
	int32_t                                            footIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bForceUpdate : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FName                                       ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPawn.ClientRestart
// [0x00820102] 
struct AOLPawn_execClientRestart_Params
{
	// struct FRotator                                    AdjustedRotation;                                 		// 0x0000 (0x000C) [0x0000000000000000]               
};

// Function OLGame.OLPawn.PlayFootStepSound
// [0x00020902] 
struct AOLPawn_eventPlayFootStepSound_Params
{
	int32_t                                            FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UAnimNotify_Footstep*                        footstepNotify;                                   		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.OnFootstep
// [0x00020400] 
struct AOLPawn_execOnFootstep_Params
{
	int32_t                                            FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UAnimNotify_Footstep*                        footstepNotify;                                   		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.SpawnFootstepDecal
// [0x00820802] 
struct AOLPawn_eventSpawnFootstepDecal_Params
{
	uint8_t                                            DecalType;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLeftFoot : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              Alpha;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UMaterialInstanceConstant*                   ParentMI;                                         		// 0x000C (0x0008) [0x0000000000000000]               
	// class UMaterialInstanceConstant*                   DecalMI;                                          		// 0x0014 (0x0008) [0x0000000000000000]               
	// struct FVector                                     DecalLocation;                                    		// 0x001C (0x000C) [0x0000000000000000]               
	// struct FRotator                                    DecalRotation;                                    		// 0x0028 (0x000C) [0x0000000000000000]               
	// float                                              DecalWidth;                                       		// 0x0034 (0x0004) [0x0000000000000000]               
	// float                                              DecalHeight;                                      		// 0x0038 (0x0004) [0x0000000000000000]               
	// float                                              DecalThickness;                                   		// 0x003C (0x0004) [0x0000000000000000]               
	// class UDecalComponent*                             NewDecalComp;                                     		// 0x0040 (0x0008) [0x0000000004000000] (CPF_EditInline)
	// uint32_t                                           bBlood : 1;                                       		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLPawn.ProcessNewFootstepDecal
// [0x00420400] 
struct AOLPawn_execProcessNewFootstepDecal_Params
{
	class UDecalComponent*                             NewDecalComp;                                     		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	uint8_t                                            DecalType;                                        		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     DecalLocation;                                    		// 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              DecalThickness;                                   		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLeftFoot : 1;                                    		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPawn.GetFootstepDecalTransform
// [0x00420400] 
struct AOLPawn_execGetFootstepDecalTransform_Params
{
	uint32_t                                           bLeftFoot : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FVector                                     DecalLocation;                                    		// 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    DecalRotation;                                    		// 0x0010 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLPawn.FaceRotation
// [0x00020102] 
struct AOLPawn_execFaceRotation_Params
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.GetEyeHeight
// [0x00020102] 
struct AOLPawn_execGetEyeHeight_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPawn.GetPawnAmbientSound
// [0x00020102] 
struct AOLPawn_execGetPawnAmbientSound_Params
{
	class USoundCue*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPawn.SetPawnAmbientSound
// [0x00020102] 
struct AOLPawn_execSetPawnAmbientSound_Params
{
	class USoundCue*                                   NewAmbientSound;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.Died
// [0x00020002] 
struct AOLPawn_execDied_Params
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPawn.EncroachedBy
// [0x00020800] 
struct AOLPawn_eventEncroachedBy_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.SetPawnRBChannels
// [0x00020102] 
struct AOLPawn_execSetPawnRBChannels_Params
{
	uint32_t                                           bRagdollMode : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLPawn.OnAnimEnd
// [0x00020902] 
struct AOLPawn_eventOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.ReattachMesh
// [0x00020102] 
struct AOLPawn_execReattachMesh_Params
{
};

// Function OLGame.OLPawn.UpdateShadowSettings
// [0x00020102] 
struct AOLPawn_execUpdateShadowSettings_Params
{
	uint32_t                                           bWantShadow : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// uint32_t                                           bNewCastShadow : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bNewCastDynamicShadow : 1;                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLPawn.PostBeginPlay
// [0x00820102] 
struct AOLPawn_execPostBeginPlay_Params
{
	// struct FRotator                                    R;                                                		// 0x0000 (0x000C) [0x0000000000000000]               
	// class APlayerController*                           PC;                                               		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLPawn.ProceduralAdjustNotify
// [0x00020400] 
struct AOLPawn_execProceduralAdjustNotify_Params
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.EnableCollisionNotify
// [0x00020400] 
struct AOLPawn_execEnableCollisionNotify_Params
{
};

// Function OLGame.OLPawn.RestoreCollisionSizeNotify
// [0x00020400] 
struct AOLPawn_execRestoreCollisionSizeNotify_Params
{
};

// Function OLGame.OLPawn.ChangeCollisionSizeNotify
// [0x00020400] 
struct AOLPawn_execChangeCollisionSizeNotify_Params
{
};

// Function OLGame.OLPawn.MoveInterruptibleNotify
// [0x00020400] 
struct AOLPawn_execMoveInterruptibleNotify_Params
{
};

// Function OLGame.OLPawn.NativePostBeginPlay
// [0x00020400] 
struct AOLPawn_execNativePostBeginPlay_Params
{
};

// Function OLGame.OLPawn.NativeOnAnimEnd
// [0x00020400] 
struct AOLPawn_execNativeOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPawn.StartSpecialMove
// [0x00024400] 
struct AOLPawn_execStartSpecialMove_Params
{
	uint8_t                                            moveType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     targetPosition;                                   		// 0x0004 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     TargetDirection;                                  		// 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            TargetType;                                       		// 0x001C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLPawn.IsSpecialMoveCompleted
// [0x00020400] 
struct AOLPawn_execIsSpecialMoveCompleted_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPawn.NativeDestroyed
// [0x00020400] 
struct AOLPawn_execNativeDestroyed_Params
{
};

// Function OLGame.OLHero.UnTouch
// [0x00020802] 
struct AOLHero_eventUnTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.Touch
// [0x00020802] 
struct AOLHero_eventTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.NativeUnTouch
// [0x00020400] 
struct AOLHero_execNativeUnTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.NativeTouch
// [0x00020400] 
struct AOLHero_execNativeTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.IsInMainMenu
// [0x00020400] 
struct AOLHero_execIsInMainMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.UpdateDifficultyBasedValues
// [0x00020002] 
struct AOLHero_execUpdateDifficultyBasedValues_Params
{
	// class AOLGame*                                     TheGame;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLHero.HandleTeleport
// [0x00024102] 
struct AOLHero_execHandleTeleport_Params
{
	TArray<class UObject*>                             DestList;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bUpdateRotation : 1;                              		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bCheckOverlap : 1;                                		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              TeleportDistance;                                 		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	TArray<class AVolume*>                             TeleportVolumes;                                  		// 0x001C (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            PreferredDestIndex;                               		// 0x002C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.OutsideWorldBounds
// [0x00020922] 
struct AOLHero_eventOutsideWorldBounds_Params
{
};

// Function OLGame.OLHero.FellOutOfWorld
// [0x00020900] 
struct AOLHero_eventFellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.MakeFootstepNoise
// [0x00020400] 
struct AOLHero_execMakeFootstepNoise_Params
{
	int32_t                                            footIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.SetMeshVisibility
// [0x00020102] 
struct AOLHero_execSetMeshVisibility_Params
{
	uint32_t                                           bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLHero.EndViewTarget
// [0x00020900] 
struct AOLHero_eventEndViewTarget_Params
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.BecomeViewTarget
// [0x00020902] 
struct AOLHero_eventBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.PlayLanded
// [0x00020002] 
struct AOLHero_execPlayLanded_Params
{
	struct FVector                                     landingLocation;                                  		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ImpactVel;                                        		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.NativePlayLanded
// [0x00020400] 
struct AOLHero_execNativePlayLanded_Params
{
	struct FVector                                     landingLocation;                                  		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ImpactVel;                                        		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.TakeFallingDamage
// [0x00020002] 
struct AOLHero_execTakeFallingDamage_Params
{
	struct FVector                                     fallLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.HealDamage
// [0x00020802] 
struct AOLHero_eventHealDamage_Params
{
	int32_t                                            Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 Healer;                                           		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TakeDamage
// [0x00024802] 
struct AOLHero_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLHero.DisplayDebug
// [0x00420102] 
struct AOLHero_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLHero.PostInitAnimTree
// [0x00020902] 
struct AOLHero_eventPostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function OLGame.OLHero.NativeInitAnimTree
// [0x00020400] 
struct AOLHero_execNativeInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function OLGame.OLHero.PossessedBy
// [0x00020002] 
struct AOLHero_execPossessedBy_Params
{
	class AController*                                 C;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLHero.RefreshInventory
// [0x00020400] 
struct AOLHero_execRefreshInventory_Params
{
};

// Function OLGame.OLHero.SetHeroWalkableFloor
// [0x00020600] 
struct AOLHero_execSetHeroWalkableFloor_Params
{
	float                                              Angle;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.TryForceEnterRaft
// [0x00024600] 
struct AOLHero_execTryForceEnterRaft_Params
{
	uint32_t                                           ignoreAssertIfUnsucessful : 1;                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLHero.OverrideRaftAttachmentMode
// [0x00020600] 
struct AOLHero_execOverrideRaftAttachmentMode_Params
{
	uint32_t                                           bManuallyControlled : 1;                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLHero.AllowRiverMovement
// [0x00020600] 
struct AOLHero_execAllowRiverMovement_Params
{
};

// Function OLGame.OLHero.DisallowRiverMovement
// [0x00020600] 
struct AOLHero_execDisallowRiverMovement_Params
{
	uint32_t                                           bClearVelocity : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLHero.QuickHeroTest
// [0x00020600] 
struct AOLHero_execQuickHeroTest_Params
{
};

// Function OLGame.OLHero.CanBeGrabbedUnder
// [0x00020400] 
struct AOLHero_execCanBeGrabbedUnder_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.CanBeFatalitized
// [0x00020400] 
struct AOLHero_execCanBeFatalitized_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.CanBeAttacked
// [0x00020400] 
struct AOLHero_execCanBeAttacked_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.BarrelEntryNotify
// [0x00020400] 
struct AOLHero_execBarrelEntryNotify_Params
{
};

// Function OLGame.OLHero.LandingMaybeStayCrouched
// [0x00020400] 
struct AOLHero_execLandingMaybeStayCrouched_Params
{
};

// Function OLGame.OLHero.EndOfHandWatchingNotify
// [0x00020400] 
struct AOLHero_execEndOfHandWatchingNotify_Params
{
};

// Function OLGame.OLHero.HandContactNotify
// [0x00020400] 
struct AOLHero_execHandContactNotify_Params
{
};

// Function OLGame.OLHero.InventoryToggleNotify
// [0x00020400] 
struct AOLHero_execInventoryToggleNotify_Params
{
};

// Function OLGame.OLHero.BodyBandageHideAllIfNotVisibleNotify
// [0x00020400] 
struct AOLHero_execBodyBandageHideAllIfNotVisibleNotify_Params
{
};

// Function OLGame.OLHero.BodyBandageHideAllNotify
// [0x00020400] 
struct AOLHero_execBodyBandageHideAllNotify_Params
{
};

// Function OLGame.OLHero.BodyBandageStepNotify
// [0x00020400] 
struct AOLHero_execBodyBandageStepNotify_Params
{
};

// Function OLGame.OLHero.ShowPickupNotify
// [0x00020400] 
struct AOLHero_execShowPickupNotify_Params
{
};

// Function OLGame.OLHero.HidePickupNotify
// [0x00020400] 
struct AOLHero_execHidePickupNotify_Params
{
};

// Function OLGame.OLHero.BandageDetachNotify
// [0x00020400] 
struct AOLHero_execBandageDetachNotify_Params
{
};

// Function OLGame.OLHero.BandageAttachNotify
// [0x00020400] 
struct AOLHero_execBandageAttachNotify_Params
{
};

// Function OLGame.OLHero.CSAActivationNotify
// [0x00020400] 
struct AOLHero_execCSAActivationNotify_Params
{
};

// Function OLGame.OLHero.BarrelCoverDetachNotify
// [0x00020400] 
struct AOLHero_execBarrelCoverDetachNotify_Params
{
};

// Function OLGame.OLHero.BarrelCoverAttachNotify
// [0x00020400] 
struct AOLHero_execBarrelCoverAttachNotify_Params
{
};

// Function OLGame.OLHero.GlassesPickedUpNotify
// [0x00020400] 
struct AOLHero_execGlassesPickedUpNotify_Params
{
};

// Function OLGame.OLHero.PutBackGlassesNotify
// [0x00020400] 
struct AOLHero_execPutBackGlassesNotify_Params
{
};

// Function OLGame.OLHero.LoseGlassesNotify
// [0x00020400] 
struct AOLHero_execLoseGlassesNotify_Params
{
};

// Function OLGame.OLHero.PostRaftBrokenNotify
// [0x00020400] 
struct AOLHero_execPostRaftBrokenNotify_Params
{
};

// Function OLGame.OLHero.RaftDetachNotify
// [0x00020400] 
struct AOLHero_execRaftDetachNotify_Params
{
};

// Function OLGame.OLHero.RaftAttachNotify
// [0x00020400] 
struct AOLHero_execRaftAttachNotify_Params
{
};

// Function OLGame.OLHero.ExitingWaterNotify
// [0x00020400] 
struct AOLHero_execExitingWaterNotify_Params
{
};

// Function OLGame.OLHero.EnteringWaterNotify
// [0x00020400] 
struct AOLHero_execEnteringWaterNotify_Params
{
};

// Function OLGame.OLHero.SlideUnderCommitStanceNotify
// [0x00020400] 
struct AOLHero_execSlideUnderCommitStanceNotify_Params
{
};

// Function OLGame.OLHero.HideCamcorderNotify
// [0x00020400] 
struct AOLHero_execHideCamcorderNotify_Params
{
};

// Function OLGame.OLHero.SetCamcorderVisibleNotify
// [0x00020400] 
struct AOLHero_execSetCamcorderVisibleNotify_Params
{
};

// Function OLGame.OLHero.ResetNeckOffsetNotify
// [0x00020400] 
struct AOLHero_execResetNeckOffsetNotify_Params
{
};

// Function OLGame.OLHero.DecapitatedNotify
// [0x00020400] 
struct AOLHero_execDecapitatedNotify_Params
{
};

// Function OLGame.OLHero.GroinInjuryNotify
// [0x00020400] 
struct AOLHero_execGroinInjuryNotify_Params
{
};

// Function OLGame.OLHero.DieNotify
// [0x00020400] 
struct AOLHero_execDieNotify_Params
{
};

// Function OLGame.OLHero.OverrideCameraSettingsNotify
// [0x00020400] 
struct AOLHero_execOverrideCameraSettingsNotify_Params
{
	class UOLAnimNotify_OverrideCameraParams*          camParamsNotify;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.BandageUsedNotify
// [0x00020400] 
struct AOLHero_execBandageUsedNotify_Params
{
};

// Function OLGame.OLHero.BatteriesReloadedNotify
// [0x00020400] 
struct AOLHero_execBatteriesReloadedNotify_Params
{
};

// Function OLGame.OLHero.CamcorderLoweredNotify
// [0x00020400] 
struct AOLHero_execCamcorderLoweredNotify_Params
{
};

// Function OLGame.OLHero.CamcorderRaisedNotify
// [0x00020400] 
struct AOLHero_execCamcorderRaisedNotify_Params
{
};

// Function OLGame.OLHero.CamcorderAvailableNotify
// [0x00020400] 
struct AOLHero_execCamcorderAvailableNotify_Params
{
};

// Function OLGame.OLHero.WardrobeDoorEndNotify
// [0x00020400] 
struct AOLHero_execWardrobeDoorEndNotify_Params
{
};

// Function OLGame.OLHero.WardrobeDoorNotify
// [0x00020400] 
struct AOLHero_execWardrobeDoorNotify_Params
{
};

// Function OLGame.OLHero.BarrelInteractionEndNotify
// [0x00020400] 
struct AOLHero_execBarrelInteractionEndNotify_Params
{
};

// Function OLGame.OLHero.BarrelInteractionNotify
// [0x00020400] 
struct AOLHero_execBarrelInteractionNotify_Params
{
};

// Function OLGame.OLHero.BasementWindowEndNotify
// [0x00020400] 
struct AOLHero_execBasementWindowEndNotify_Params
{
};

// Function OLGame.OLHero.BasementWindowNotify
// [0x00020400] 
struct AOLHero_execBasementWindowNotify_Params
{
};

// Function OLGame.OLHero.WindowAnimEndNotify
// [0x00020400] 
struct AOLHero_execWindowAnimEndNotify_Params
{
};

// Function OLGame.OLHero.WindowAnimStartNotify
// [0x00020400] 
struct AOLHero_execWindowAnimStartNotify_Params
{
};

// Function OLGame.OLHero.TryInteractDoorOpen
// [0x00020400] 
struct AOLHero_execTryInteractDoorOpen_Params
{
};

// Function OLGame.OLHero.DoorAnimNotify
// [0x00020400] 
struct AOLHero_execDoorAnimNotify_Params
{
};

// Function OLGame.OLHero.DropNotify
// [0x00020400] 
struct AOLHero_execDropNotify_Params
{
};

// Function OLGame.OLHero.PickupNotify
// [0x00020400] 
struct AOLHero_execPickupNotify_Params
{
};

// Function OLGame.OLHero.TryGrabFromUnder
// [0x00020400] 
struct AOLHero_execTryGrabFromUnder_Params
{
	class AOLEnemyPawn*                                Attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     StartLocation;                                    		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     AttackStartLocation;                              		// 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryGrabFromBed
// [0x00020400] 
struct AOLHero_execTryGrabFromBed_Params
{
	class AOLEnemyPawn*                                Attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryGrabFromLocker
// [0x00020400] 
struct AOLHero_execTryGrabFromLocker_Params
{
	class AOLEnemyPawn*                                Attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.ExitCinematicMode
// [0x00020400] 
struct AOLHero_execExitCinematicMode_Params
{
	class USeqAct_ToggleCinematicMode*                 seqAction;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.EnterCinematicMode
// [0x00020400] 
struct AOLHero_execEnterCinematicMode_Params
{
	class USeqAct_ToggleCinematicMode*                 seqAction;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.StartSpecialMove
// [0x00024400] 
struct AOLHero_execStartSpecialMove_Params
{
	uint8_t                                            moveType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     targetPosition;                                   		// 0x0004 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     TargetDirection;                                  		// 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            TargetType;                                       		// 0x001C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLHero.RespawnHero
// [0x00020400] 
struct AOLHero_execRespawnHero_Params
{
};

// Function OLGame.OLHero.OnPossess
// [0x00020400] 
struct AOLHero_execOnPossess_Params
{
};

// Function OLGame.OLHero.ConditionalMakeDoorChimesNoise
// [0x00020400] 
struct AOLHero_execConditionalMakeDoorChimesNoise_Params
{
	class AOLDoorChimes*                               DoorChimes;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.TakeKnockbackDamage
// [0x00020400] 
struct AOLHero_execTakeKnockbackDamage_Params
{
	int32_t                                            Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Knockback;                                        		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.TakeElectricDamage
// [0x00020400] 
struct AOLHero_execTakeElectricDamage_Params
{
	int32_t                                            Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Knockback;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UAkEvent*                                    ElectricSoundEvent;                               		// 0x0014 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.NativeTakeFallingDamage
// [0x00020400] 
struct AOLHero_execNativeTakeFallingDamage_Params
{
	struct FVector                                     fallLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.NativeTakeDamage
// [0x00024400] 
struct AOLHero_execNativeTakeDamage_Params
{
	int32_t                                            Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            DamageType;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     OverrideDamageDirection;                          		// 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bNonFatal : 1;                                    		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLHero.NativeDisplayDebug
// [0x00420400] 
struct AOLHero_execNativeDisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLHero.GetCamera
// [0x00420400] 
struct AOLHero_execGetCamera_Params
{
	struct FVector                                     out_CamLoc;                                       		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    out_CamRot;                                       		// 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_FOV;                                          		// 0x0018 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLHero.NativeOnAnimEnd
// [0x00020400] 
struct AOLHero_execNativeOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLHero.NativePostBeginPlay
// [0x00020400] 
struct AOLHero_execNativePostBeginPlay_Params
{
};

// Function OLGame.OLHero.NativeDestroyed
// [0x00020400] 
struct AOLHero_execNativeDestroyed_Params
{
};

// Function OLGame.OLHero.HandleSeamlessTeleport
// [0x00020400] 
struct AOLHero_execHandleSeamlessTeleport_Params
{
};

// Function OLGame.OLHero.ResetAfterTeleport
// [0x00020400] 
struct AOLHero_execResetAfterTeleport_Params
{
};

// Function OLGame.OLHero.IsSprinting
// [0x00020400] 
struct AOLHero_execIsSprinting_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.IsRunning
// [0x00020400] 
struct AOLHero_execIsRunning_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.TryRun
// [0x00020400] 
struct AOLHero_execTryRun_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.Walk
// [0x00020400] 
struct AOLHero_execWalk_Params
{
};

// Function OLGame.OLHero.GetViewRotation
// [0x00020D00] 
struct AOLHero_eventGetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLHero.GetPawnViewLocation
// [0x00020500] 
struct AOLHero_execGetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPickableDocument.RefreshUI
// [0x00020802] 
struct UOLPickableDocument_eventRefreshUI_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPickableDocument.WidgetInitialized
// [0x00020802] 
struct UOLPickableDocument_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLPickableObject.OnToggle
// [0x00020102] 
struct AOLPickableObject_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLCollectiblePickup.PostBeginPlay
// [0x00020002] 
struct AOLCollectiblePickup_execPostBeginPlay_Params
{
};

// Function OLGame.OLCollectiblePickup.ShouldShowCollectible
// [0x00020400] 
struct AOLCollectiblePickup_execShouldShowCollectible_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerInput.IsKeyPressed
// [0x00020400] 
struct UOLPlayerInput_execIsKeyPressed_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLPlayerInput.UnBindNoSave
// [0x00020802] 
struct UOLPlayerInput_eventUnBindNoSave_Params
{
	class FString                                      Command;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            BindIndex;                                        		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLPlayerInput.PreProcessInput
// [0x00020002] 
struct UOLPlayerInput_execPreProcessInput_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPlayerInput.StopLeanRight
// [0x00020302] 
struct UOLPlayerInput_execStopLeanRight_Params
{
};

// Function OLGame.OLPlayerInput.StopLeanLeft
// [0x00020302] 
struct UOLPlayerInput_execStopLeanLeft_Params
{
};

// Function OLGame.OLPlayerInput.StartLeanRight
// [0x00020302] 
struct UOLPlayerInput_execStartLeanRight_Params
{
};

// Function OLGame.OLPlayerInput.StartLeanLeft
// [0x00020302] 
struct UOLPlayerInput_execStartLeanLeft_Params
{
};

// Function OLGame.OLPlayerInput.StopRun
// [0x00020302] 
struct UOLPlayerInput_execStopRun_Params
{
};

// Function OLGame.OLPlayerInput.ChangeCamCorderHudDisplay
// [0x00020302] 
struct UOLPlayerInput_execChangeCamCorderHudDisplay_Params
{
};

// Function OLGame.OLPlayerInput.NativeChangeCamCorderHudDisplay
// [0x00020400] 
struct UOLPlayerInput_execNativeChangeCamCorderHudDisplay_Params
{
};

// Function OLGame.OLPlayerInput.StartRun
// [0x00020302] 
struct UOLPlayerInput_execStartRun_Params
{
};

// Function OLGame.OLPlayerInput.StartRunNative
// [0x00020400] 
struct UOLPlayerInput_execStartRunNative_Params
{
};

// Function OLGame.OLPlayerInput.ToggleDuck
// [0x00020302] 
struct UOLPlayerInput_execToggleDuck_Params
{
};

// Function OLGame.OLPlayerInput.UnDuck
// [0x00020302] 
struct UOLPlayerInput_execUnDuck_Params
{
};

// Function OLGame.OLPlayerInput.Duck
// [0x00020302] 
struct UOLPlayerInput_execDuck_Params
{
};

// Function OLGame.OLPlayerInput.ResetInput
// [0x00020400] 
struct UOLPlayerInput_execResetInput_Params
{
};

// Function OLGame.OLProfileSettings.AutoDetectPerformanceSettings
// [0x00020400] 
struct UOLProfileSettings_execAutoDetectPerformanceSettings_Params
{
};

// Function OLGame.OLProfileSettings.MatchMonitorResolution
// [0x00020400] 
struct UOLProfileSettings_execMatchMonitorResolution_Params
{
	uint32_t                                           bLimitForPerformance : 1;                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLProfileSettings.SetLanguageFromSteam
// [0x00020400] 
struct UOLProfileSettings_execSetLanguageFromSteam_Params
{
};

// Function OLGame.OLProfileSettings.SetToDefaults
// [0x00020C00] 
struct UOLProfileSettings_eventSetToDefaults_Params
{
};

// Function OLGame.OLProfileSettings.GetProfileSettingResolutions
// [0x00420400] 
struct UOLProfileSettings_execGetProfileSettingResolutions_Params
{
	int32_t                                            ProfileSettingId;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FName>                               ResolutionNames;                                  		// 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FIntPoint>                           Resolutions;                                      		// 0x0014 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLProfileSettings.GetProfileSettingValues
// [0x00420400] 
struct UOLProfileSettings_execGetProfileSettingValues_Params
{
	int32_t                                            ProfileSettingId;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FName>                               Values;                                           		// 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLProfileSettings.GetGammaSetting
// [0x00020002] 
struct UOLProfileSettings_execGetGammaSetting_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLPushableObject.OnToggle
// [0x00020102] 
struct AOLPushableObject_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPushableObject.OnTeleport
// [0x00020102] 
struct AOLPushableObject_execOnTeleport_Params
{
	class USeqAct_Teleport*                            Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLPushableObject.PostOnTeleport
// [0x00020400] 
struct AOLPushableObject_execPostOnTeleport_Params
{
};

// Function OLGame.OLPushableObject.PreOnTeleport
// [0x00020400] 
struct AOLPushableObject_execPreOnTeleport_Params
{
};

// Function OLGame.OLRecordingUtils.ShowCleanText
// [0x00022400] 
struct UOLRecordingUtils_execShowCleanText_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SortingType;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLRecordingUtils.CleanMemory
// [0x00022400] 
struct UOLRecordingUtils_execCleanMemory_Params
{
};

// Function OLGame.OLRecordingUtils.ConditionalResetMovieOverrideDuration
// [0x00422400] 
struct UOLRecordingUtils_execConditionalResetMovieOverrideDuration_Params
{
	TArray<class UTexture*>                            Textures;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            Type;                                             		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SortingType;                                      		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLRecordingUtils.HasMovieEnded
// [0x00022400] 
struct UOLRecordingUtils_execHasMovieEnded_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLRecordingUtils.StopMovieTexture
// [0x00422400] 
struct UOLRecordingUtils_execStopMovieTexture_Params
{
	TArray<class UTexture*>                            Textures;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bPause : 1;                                       		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class UAkEvent*                                    loopStop;                                         		// 0x0014 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLRecordingUtils.PlayMovieTexture
// [0x00422400] 
struct UOLRecordingUtils_execPlayMovieTexture_Params
{
	TArray<class UTexture*>                            Textures;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UAkEvent*                                    LoopStart;                                        		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLRecordingUtils.ResizeFullSizeImage
// [0x00422400] 
struct UOLRecordingUtils_execResizeFullSizeImage_Params
{
	class UGFxMoviePlayer*                             menu;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<class UTexture*>                            Textures;                                         		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            Type;                                             		// 0x0018 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SortingType;                                      		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLRecordingUtils.PlayMovieVO
// [0x00022400] 
struct UOLRecordingUtils_execPlayMovieVO_Params
{
	class UAkEvent*                                    VO;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLRecordingUtils.StopMovieVO
// [0x00022400] 
struct UOLRecordingUtils_execStopMovieVO_Params
{
	class UAkEvent*                                    VO;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLRecordingUtils.LoadMovieLoopStop
// [0x00022400] 
struct UOLRecordingUtils_execLoadMovieLoopStop_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SortingType;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UAkEvent*                                    ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLRecordingUtils.LoadMovieLoopStart
// [0x00022400] 
struct UOLRecordingUtils_execLoadMovieLoopStart_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SortingType;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UAkEvent*                                    ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLRecordingUtils.LoadMovieVO
// [0x00022400] 
struct UOLRecordingUtils_execLoadMovieVO_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SortingType;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UAkEvent*                                    ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLRecordingUtils.GetFullSizeRecordingTexture
// [0x00422400] 
struct UOLRecordingUtils_execGetFullSizeRecordingTexture_Params
{
	TArray<class UTexture*>                            Textures;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            Type;                                             		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SortingType;                                      		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UTexture*                                    ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLRecordingUtils.GetRecordingTexture
// [0x00022400] 
struct UOLRecordingUtils_execGetRecordingTexture_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SortingType;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UTexture*                                    ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLRecordingUtils.GetCategoryTexture
// [0x00022400] 
struct UOLRecordingUtils_execGetCategoryTexture_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SortingType;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UTexture*                                    ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLRecordingUtils.GetRecordings
// [0x00022400] 
struct UOLRecordingUtils_execGetRecordings_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Section;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<class FString>                              ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLRecordingUtils.GetRecordingSections
// [0x00022400] 
struct UOLRecordingUtils_execGetRecordingSections_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	TArray<class FString>                              ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLRecordingUtils.GetPathName
// [0x00022400] 
struct UOLRecordingUtils_execGetPathName_Params
{
	class UObject*                                     Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLRecordingUtils.HasRecordings
// [0x00022400] 
struct UOLRecordingUtils_execHasRecordings_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLRecordingUtils.IsVideoRecording
// [0x00022400] 
struct UOLRecordingUtils_execIsVideoRecording_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SortingType;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_Checkpoint.Activated
// [0x00020802] 
struct UOLSeqAct_Checkpoint_eventActivated_Params
{
};

// Function OLGame.OLSoundConnector.OnToggle
// [0x00020102] 
struct AOLSoundConnector_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLSoundEnvironmentManager.GetSoundEnvManager
// [0x00022400] 
struct UOLSoundEnvironmentManager_execGetSoundEnvManager_Params
{
	class UOLSoundEnvironmentManager*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSoundEnvironmentManager.Cleanup
// [0x00020400] 
struct UOLSoundEnvironmentManager_execCleanup_Params
{
};

// Function OLGame.OLSoundEnvironmentVolume.PostBeginPlay
// [0x00020802] 
struct AOLSoundEnvironmentVolume_eventPostBeginPlay_Params
{
};

// Function OLGame.OLTutorialManager.SetTutorialsEnabled
// [0x00020400] 
struct UOLTutorialManager_execSetTutorialsEnabled_Params
{
	uint32_t                                           bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLTutorialManager.Clear
// [0x00020400] 
struct UOLTutorialManager_execClear_Params
{
};

// Function OLGame.OLUtils.TriggerSoundEvent
// [0x00022400] 
struct UOLUtils_execTriggerSoundEvent_Params
{
	class UAkEvent*                                    SoundEvent;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUtils.ShouldSubtitlesBeHigh
// [0x00022400] 
struct UOLUtils_execShouldSubtitlesBeHigh_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsKeyBoundToCommand
// [0x00022400] 
struct UOLUtils_execIsKeyBoundToCommand_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Command;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.HasValidMovie
// [0x00022400] 
struct UOLUtils_execHasValidMovie_Params
{
	class UGFxObject*                                  GFxObject;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.ElapsedRealTime
// [0x00022400] 
struct UOLUtils_execElapsedRealTime_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.ElapsedTime
// [0x00022400] 
struct UOLUtils_execElapsedTime_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetRealTimeSeconds
// [0x00022400] 
struct UOLUtils_execGetRealTimeSeconds_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetWorldTimeSeconds
// [0x00022400] 
struct UOLUtils_execGetWorldTimeSeconds_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.LoadTexture
// [0x00022400] 
struct UOLUtils_execLoadTexture_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UObject*                                     Owner;                                            		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UTexture2D*                                  ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetChapterIndex
// [0x00022400] 
struct UOLUtils_execGetChapterIndex_Params
{
	struct FName                                       CheckpointName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetChapterName
// [0x00022400] 
struct UOLUtils_execGetChapterName_Params
{
	struct FName                                       CheckpointName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLUtils.GetCheckpointName
// [0x00022400] 
struct UOLUtils_execGetCheckpointName_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLUtils.GetCheckpointIndexFromString
// [0x00022400] 
struct UOLUtils_execGetCheckpointIndexFromString_Params
{
	class FString                                      CheckpointName;                                   		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetCheckpointIndex
// [0x00022400] 
struct UOLUtils_execGetCheckpointIndex_Params
{
	struct FName                                       CheckpointName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetOrbisEngine
// [0x00022400] 
struct UOLUtils_execGetOrbisEngine_Params
{
	class UOLOrbisEngine*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetDingoEngine
// [0x00022400] 
struct UOLUtils_execGetDingoEngine_Params
{
	class UOLDingoEngine*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetWinEngine
// [0x00022400] 
struct UOLUtils_execGetWinEngine_Params
{
	class UOLWinEngine*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetOLEngine
// [0x00022400] 
struct UOLUtils_execGetOLEngine_Params
{
	class UOLEngine*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetOLGame
// [0x00022400] 
struct UOLUtils_execGetOLGame_Params
{
	class AOLGame*                                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetOLWorld
// [0x00022400] 
struct UOLUtils_execGetOLWorld_Params
{
	class UOLWorld*                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetDifficultyConfig
// [0x00022400] 
struct UOLUtils_execGetDifficultyConfig_Params
{
	class UOLDifficultyConfig*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetAICoordinator
// [0x00022400] 
struct UOLUtils_execGetAICoordinator_Params
{
	class UOLAICoordinator*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetHero
// [0x00022400] 
struct UOLUtils_execGetHero_Params
{
	class AOLHero*                                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.GetOLPC
// [0x00022400] 
struct UOLUtils_execGetOLPC_Params
{
	class AOLPlayerController*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsBindableKey
// [0x00022400] 
struct UOLUtils_execIsBindableKey_Params
{
	struct FName                                       ButtonName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsInMainMenu
// [0x00022400] 
struct UOLUtils_execIsInMainMenu_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsPlayingDLC
// [0x00022400] 
struct UOLUtils_execIsPlayingDLC_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsDLCInstalled
// [0x00022400] 
struct UOLUtils_execIsDLCInstalled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsDingoController
// [0x00022400] 
struct UOLUtils_execIsDingoController_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsPS4Controller
// [0x00022400] 
struct UOLUtils_execIsPS4Controller_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsUsingGamepad
// [0x00022400] 
struct UOLUtils_execIsUsingGamepad_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsConsole
// [0x00022400] 
struct UOLUtils_execIsConsole_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsDingo
// [0x00022400] 
struct UOLUtils_execIsDingo_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUtils.IsPS4
// [0x00022400] 
struct UOLUtils_execIsPS4_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLWardrobe.TriggerEvent
// [0x00020400] 
struct AOLWardrobe_execTriggerEvent_Params
{
	uint8_t                                            EventType;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class AOLPawn*                                     Triggerer;                                        		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLWindow.OnDestroy
// [0x00020102] 
struct AOLWindow_execOnDestroy_Params
{
	class USeqAct_Destroy*                             Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLWindow.SoftDestroy
// [0x00020400] 
struct AOLWindow_execSoftDestroy_Params
{
};

// Function OLGame.OLWindow.ScriptOpenWindow
// [0x00020400] 
struct AOLWindow_execScriptOpenWindow_Params
{
	class AOLPawn*                                     Triggerer;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLWindow.ScriptBreakWindow
// [0x00020400] 
struct AOLWindow_execScriptBreakWindow_Params
{
	class AOLPawn*                                     Triggerer;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.DisplayDebug
// [0x00420102] 
struct AOLBot_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLBot.NativeDisplayDebug
// [0x00420400] 
struct AOLBot_execNativeDisplayDebug_Params
{
	class UCanvas*                                     aCanvas;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLBot.ShouldLogToConsole
// [0x00020400] 
struct AOLBot_execShouldLogToConsole_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.AILog_Internal
// [0x00024800] 
struct AOLBot_eventAILog_Internal_Params
{
	class FString                                      LogText;                                          		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	struct FName                                       LogCategory;                                      		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bForce : 1;                                       		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.DebugMessagePlayer
// [0x00020800] 
struct AOLBot_eventDebugMessagePlayer_Params
{
	class FString                                      msg;                                              		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function OLGame.OLBot.ToggleAIAlwaysSeePlayer
// [0x00020002] 
struct AOLBot_execToggleAIAlwaysSeePlayer_Params
{
	uint32_t                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLBot.OnToggleAIAlwaysSeePlayer
// [0x00020002] 
struct AOLBot_execOnToggleAIAlwaysSeePlayer_Params
{
	class UOLSeqAct_ToggleAIAlwaysSeePlayer*           Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.IgnoreTarget
// [0x00020802] 
struct AOLBot_eventIgnoreTarget_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.ToggleAIIgnorePlayer
// [0x00020802] 
struct AOLBot_eventToggleAIIgnorePlayer_Params
{
	uint32_t                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLBot.OnToggleAIIgnorePlayer
// [0x00020002] 
struct AOLBot_execOnToggleAIIgnorePlayer_Params
{
	class UOLSeqAct_ToggleAIIgnorePlayer*              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.StartWaitForDoor
// [0x00020802] 
struct AOLBot_eventStartWaitForDoor_Params
{
};

// Function OLGame.OLBot.TargetReachable
// [0x00820002] 
struct AOLBot_execTargetReachable_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FVector                                     Point;                                            		// 0x0004 (0x000C) [0x0000000000000000]               
	// float                                              Buffer;                                           		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLBot.StartDynamicMove
// [0x00020802] 
struct AOLBot_eventStartDynamicMove_Params
{
	struct FMovementData                               aData;                                            		// 0x0000 (0x0038) [0x0000000000000080] (CPF_Parm)    
	// class UOLAICmd_MoveAbility*                        MoveCmd;                                          		// 0x0038 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.StartMove
// [0x00020802] 
struct AOLBot_eventStartMove_Params
{
	struct FMovementData                               aData;                                            		// 0x0000 (0x0038) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility*                        MoveCmd;                                          		// 0x003C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.NotifyBump
// [0x00020802] 
struct AOLBot_eventNotifyBump_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bIsPasser : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AOLEnemyPawn*                                OtherPawn;                                        		// 0x001C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.NotifyPathChanged
// [0x00020802] 
struct AOLBot_eventNotifyPathChanged_Params
{
};

// Function OLGame.OLBot.GeneratePathWithMaxDist
// [0x00020802] 
struct AOLBot_eventGeneratePathWithMaxDist_Params
{
	struct FVector                                     Goal;                                             		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              WithinDistance;                                   		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              MaxPathDistance;                                  		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.GeneratePathToLocation
// [0x00024802] 
struct AOLBot_eventGeneratePathToLocation_Params
{
	struct FVector                                     Goal;                                             		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              WithinDistance;                                   		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAllowPartialPath : 1;                            		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.GeneratePathToActor
// [0x00024802] 
struct AOLBot_eventGeneratePathToActor_Params
{
	class AActor*                                      Goal;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              WithinDistance;                                   		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAllowPartialPath : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.AddBasePathContraints
// [0x00020002] 
struct AOLBot_execAddBasePathContraints_Params
{
};

// Function OLGame.OLBot.KnockbackTickNotify
// [0x00020802] 
struct AOLBot_eventKnockbackTickNotify_Params
{
};

// Function OLGame.OLBot.KnockbackStartNotify
// [0x00020802] 
struct AOLBot_eventKnockbackStartNotify_Params
{
};

// Function OLGame.OLBot.BreakDoorNotify
// [0x00020802] 
struct AOLBot_eventBreakDoorNotify_Params
{
	// class UOLAICmd_MoveAbility_Door*                   DoorCmd;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.BashDoorNotify
// [0x00020802] 
struct AOLBot_eventBashDoorNotify_Params
{
	// class UOLAICmd_MoveAbility_Door*                   DoorCmd;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLBot.AttackCycleEnd
// [0x00020002] 
struct AOLBot_execAttackCycleEnd_Params
{
};

// Function OLGame.OLBot.ClearAnimation
// [0x00020002] 
struct AOLBot_execClearAnimation_Params
{
};

// Function OLGame.OLBot.PlayFullBodyAnim
// [0x00024002] 
struct AOLBot_execPlayFullBodyAnim_Params
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bLooping : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              StartTime;                                        		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              EndTime;                                          		// 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.PushQueuedCommand
// [0x00020002] 
struct AOLBot_execPushQueuedCommand_Params
{
};

// Function OLGame.OLBot.QueueAICommand
// [0x00020802] 
struct AOLBot_eventQueueAICommand_Params
{
	class UGameAICommand*                              Cmd;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.UnPossess
// [0x00020002] 
struct AOLBot_execUnPossess_Params
{
};

// Function OLGame.OLBot.Possess
// [0x00020002] 
struct AOLBot_execPossess_Params
{
	class APawn*                                       aPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLBot.Destroyed
// [0x00020802] 
struct AOLBot_eventDestroyed_Params
{
};

// Function OLGame.OLBot.InitNavigationHandle
// [0x00020102] 
struct AOLBot_execInitNavigationHandle_Params
{
};

// Function OLGame.OLBot.PostBeginPlay
// [0x00020102] 
struct AOLBot_execPostBeginPlay_Params
{
};

// Function OLGame.OLBot.LogErrorNotOnNavmesh
// [0x00020400] 
struct AOLBot_execLogErrorNotOnNavmesh_Params
{
};

// Function OLGame.OLBot.LogErrorFailedMove
// [0x00020400] 
struct AOLBot_execLogErrorFailedMove_Params
{
};

// Function OLGame.OLBot.TestLogAIToConsole
// [0x00020400] 
struct AOLBot_execTestLogAIToConsole_Params
{
	int32_t                                            Verbosity;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.UpdateClosingDoorsState
// [0x00020400] 
struct AOLBot_execUpdateClosingDoorsState_Params
{
};

// Function OLGame.OLBot.CanUnlockDoor
// [0x00020400] 
struct AOLBot_execCanUnlockDoor_Params
{
	class AOLDoor*                                     aDoor;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.ShouldCloseDoor
// [0x00020400] 
struct AOLBot_execShouldCloseDoor_Params
{
	class AOLDoor*                                     aDoor;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.GetDoorApproachPoint
// [0x00420400] 
struct AOLBot_execGetDoorApproachPoint_Params
{
	class AOLDoor*                                     aDoor;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ApproachPoint;                                    		// 0x0008 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.GetClosestPointToActor
// [0x00424400] 
struct AOLBot_execGetClosestPointToActor_Params
{
	struct FVector                                     NewPoint;                                         		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AActor*                                      ActorToCheck;                                     		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              NewBuffer;                                        		// 0x0014 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bForceNudging : 1;                                		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.GetClosestPointOnNavMesh
// [0x00424400] 
struct AOLBot_execGetClosestPointOnNavMesh_Params
{
	struct FVector                                     out_NewPoint;                                     		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     PointToCheck;                                     		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bForceNudging : 1;                                		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.GetCurrentWaypoint
// [0x00020400] 
struct AOLBot_execGetCurrentWaypoint_Params
{
	class AOLWaypoint*                                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.GetMoveCommand
// [0x00020400] 
struct AOLBot_execGetMoveCommand_Params
{
	class UOLAICmd_MoveAbility*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsPerformingMoveAbility
// [0x00020400] 
struct AOLBot_execIsPerformingMoveAbility_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsPlayerOnVaultingPath
// [0x00020400] 
struct AOLBot_execIsPlayerOnVaultingPath_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsPlayerOnBrokenSideOfDoor
// [0x00020400] 
struct AOLBot_execIsPlayerOnBrokenSideOfDoor_Params
{
	class AOLDoor*                                     door;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsInDamageRange
// [0x00020400] 
struct AOLBot_execIsInDamageRange_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsInFinalAttackRange
// [0x00020400] 
struct AOLBot_execIsInFinalAttackRange_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsInApproachAttackRange
// [0x00020400] 
struct AOLBot_execIsInApproachAttackRange_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsInCrouchingAttackRange
// [0x00024400] 
struct AOLBot_execIsInCrouchingAttackRange_Params
{
	float                                              ForwardRangeFactor;                               		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsInCrawlingAttackRange
// [0x00024400] 
struct AOLBot_execIsInCrawlingAttackRange_Params
{
	float                                              ForwardRangeFactor;                               		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsInGrabUnderAttackRange
// [0x00020400] 
struct AOLBot_execIsInGrabUnderAttackRange_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.IsInAttackRange
// [0x00020400] 
struct AOLBot_execIsInAttackRange_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.TargetInSpecialLocation
// [0x00020400] 
struct AOLBot_execTargetInSpecialLocation_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.CanSeePlayer
// [0x00020400] 
struct AOLBot_execCanSeePlayer_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.TryTurnAtDestination
// [0x00020400] 
struct AOLBot_execTryTurnAtDestination_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.HasReachedDestination
// [0x00020400] 
struct AOLBot_execHasReachedDestination_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.OnMoveSucceeded
// [0x00020400] 
struct AOLBot_execOnMoveSucceeded_Params
{
};

// Function OLGame.OLBot.MoveDynamic
// [0x00020408] 
struct AOLBot_execMoveDynamic_Params
{
};

// Function OLGame.OLBot.MoveToPoint
// [0x00420408] 
struct AOLBot_execMoveToPoint_Params
{
	struct FVector                                     Dest;                                             		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class AActor*                                      ViewFocus;                                        		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              DesiredOffset;                                    		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLBot.MoveAlongPath
// [0x00024408] 
struct AOLBot_execMoveAlongPath_Params
{
	TArray<struct FVector>                             PathPoints;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class AActor*                                      FocusTarget;                                      		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.WaitForCrawlEngaged
// [0x00020409] 
struct AOLBot_execWaitForCrawlEngaged_Params
{
};

// Function OLGame.OLBot.WaitForSpecialMove
// [0x00024409] 
struct AOLBot_execWaitForSpecialMove_Params
{
	uint32_t                                           bNoDelay : 1;                                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.WaitForFullBodyAnim
// [0x00020409] 
struct AOLBot_execWaitForFullBodyAnim_Params
{
};

// Function OLGame.OLBot.TargetUnreacheable
// [0x00020400] 
struct AOLBot_execTargetUnreacheable_Params
{
};

// Function OLGame.OLBot.PushPlayer
// [0x00020400] 
struct AOLBot_execPushPlayer_Params
{
};

// Function OLGame.OLBot.TryKnockbackTarget
// [0x00020400] 
struct AOLBot_execTryKnockbackTarget_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.TryDamageTarget
// [0x00020400] 
struct AOLBot_execTryDamageTarget_Params
{
	uint32_t                                           bNonFatal : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.FinishMatinee
// [0x00020400] 
struct AOLBot_execFinishMatinee_Params
{
};

// Function OLGame.OLBot.BeginMatinee
// [0x00020400] 
struct AOLBot_execBeginMatinee_Params
{
};

// Function OLGame.OLBot.PerformAttackCheck
// [0x00024400] 
struct AOLBot_execPerformAttackCheck_Params
{
	uint32_t                                           bForSynchedAnim : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.PerformGrabCheck
// [0x00020400] 
struct AOLBot_execPerformGrabCheck_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.EndDoorTraversal
// [0x00020400] 
struct AOLBot_execEndDoorTraversal_Params
{
};

// Function OLGame.OLBot.StartDoorTraversal
// [0x00020400] 
struct AOLBot_execStartDoorTraversal_Params
{
	uint32_t                                           bReversed : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLBot.StopMoving
// [0x00024400] 
struct AOLBot_execStopMoving_Params
{
	uint32_t                                           bAborted : 1;                                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLBot.RegeneratePath
// [0x00020400] 
struct AOLBot_execRegeneratePath_Params
{
};

// Function OLGame.OLBot.SetNavmeshValidatedMovePoint
// [0x00024400] 
struct AOLBot_execSetNavmeshValidatedMovePoint_Params
{
	uint32_t                                           bForceNudging : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bQuiet : 1;                                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.GeneratePath
// [0x00024400] 
struct AOLBot_execGeneratePath_Params
{
	uint32_t                                           bQuiet : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLBot.ClearAllActivities
// [0x00020400] 
struct AOLBot_execClearAllActivities_Params
{
};

// Function OLGame.OLBot.ClearDestination
// [0x00020400] 
struct AOLBot_execClearDestination_Params
{
};

// Function OLGame.OLBot.ClearInvestigation
// [0x00020400] 
struct AOLBot_execClearInvestigation_Params
{
};

// Function OLGame.OLBot.ClearNextMove
// [0x00020400] 
struct AOLBot_execClearNextMove_Params
{
};

// Function OLGame.OLBot.ClearCurrentMove
// [0x00020400] 
struct AOLBot_execClearCurrentMove_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.TurnBeforePerform
// [0x00020400] 
struct UOLAICmd_MoveAbility_execTurnBeforePerform_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.MustTurnBeforePerform
// [0x00020400] 
struct UOLAICmd_MoveAbility_execMustTurnBeforePerform_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.ShouldWaitBeforeUsing
// [0x00020400] 
struct UOLAICmd_MoveAbility_execShouldWaitBeforeUsing_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.IsObjectInUse
// [0x00020400] 
struct UOLAICmd_MoveAbility_execIsObjectInUse_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.ModifyPath
// [0x00420400] 
struct UOLAICmd_MoveAbility_execModifyPath_Params
{
	struct FVector                                     NewDestination;                                   		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FVector>                             NewPath;                                          		// 0x000C (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OLGame.OLAICmd_MoveAbility.ModifyApproach
// [0x00420002] 
struct UOLAICmd_MoveAbility_execModifyApproach_Params
{
	struct FVector                                     NewDestination;                                   		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.Completed
// [0x00020002] 
struct UOLAICmd_MoveAbility_execCompleted_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.Popped
// [0x00020002] 
struct UOLAICmd_MoveAbility_execPopped_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.Pushed
// [0x00020002] 
struct UOLAICmd_MoveAbility_execPushed_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Bash.MoveThruBashable
// [0x00022802] 
struct UOLAICmd_MoveAbility_Bash_eventMoveThruBashable_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLBashableObject*                           InBashable;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InitialDestination;                               		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInReversed : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class UOLAICmd_MoveAbility_Bash*                   ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility_Bash*                   Cmd;                                              		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Door.AutomaticDoorOpen
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execAutomaticDoorOpen_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.CancelPlayerInteraction
// [0x00020400] 
struct UOLAICmd_MoveAbility_Door_execCancelPlayerInteraction_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.Cleanup
// [0x00020400] 
struct UOLAICmd_MoveAbility_Door_execCleanup_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.GetDoorBashCount
// [0x00020400] 
struct UOLAICmd_MoveAbility_Door_execGetDoorBashCount_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.ShouldWaitBeforeUsing
// [0x00020400] 
struct UOLAICmd_MoveAbility_Door_execShouldWaitBeforeUsing_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.IsObjectInUse
// [0x00020400] 
struct UOLAICmd_MoveAbility_Door_execIsObjectInUse_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.Cancel
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execCancel_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.Popped
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execPopped_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.ModifyApproach
// [0x00420002] 
struct UOLAICmd_MoveAbility_Door_execModifyApproach_Params
{
	struct FVector                                     NewDestination;                                   		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.IsDoorOpen
// [0x00020002] 
struct UOLAICmd_MoveAbility_Door_execIsDoorOpen_Params
{
	class AOLDoor*                                     TestDoor;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.MoveThruDoor
// [0x00022802] 
struct UOLAICmd_MoveAbility_Door_eventMoveThruDoor_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLDoor*                                     InDoor;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InitialDestination;                               		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInReversed : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class UOLAICmd_MoveAbility_Door*                   ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility_Door*                   Cmd;                                              		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_EnterBeam.MoveToBeam
// [0x00022802] 
struct UOLAICmd_MoveAbility_EnterBeam_eventMoveToBeam_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLBeamMarker*                               InMarker;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InitialDestination;                               		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UOLAICmd_MoveAbility_EnterBeam*              ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility_EnterBeam*              Cmd;                                              		// 0x0024 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_EnterCrawl.MoveToCrawl
// [0x00022802] 
struct UOLAICmd_MoveAbility_EnterCrawl_eventMoveToCrawl_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLCrawlMarker*                              InMarker;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InitialDestination;                               		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UOLAICmd_MoveAbility_EnterCrawl*             ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility_EnterCrawl*             Cmd;                                              		// 0x0024 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_EnterCrawl.ShouldWaitBeforeUsing
// [0x00020400] 
struct UOLAICmd_MoveAbility_EnterCrawl_execShouldWaitBeforeUsing_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Jump.MoveThruJump
// [0x00022802] 
struct UOLAICmd_MoveAbility_Jump_eventMoveThruJump_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLJumpMarker*                               InMarker;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InitialDestination;                               		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UOLAICmd_MoveAbility_Jump*                   ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility_Jump*                   Cmd;                                              		// 0x0024 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.MoveThruLedge
// [0x00022802] 
struct UOLAICmd_MoveAbility_Ledge_eventMoveThruLedge_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLLedgeMarker*                              InLedge;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InitialDestination;                               		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInReversed : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class UOLAICmd_MoveAbility_Ledge*                  ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility_Ledge*                  Cmd;                                              		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Vault.MoveThruLedge
// [0x00022802] 
struct UOLAICmd_MoveAbility_Vault_eventMoveThruLedge_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLAIVaultMarker*                            InMarker;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InitialDestination;                               		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInReversed : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class UOLAICmd_MoveAbility_Vault*                  ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility_Vault*                  Cmd;                                              		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAICmd_MoveAbility_Window.ShouldWaitBeforeUsing
// [0x00020400] 
struct UOLAICmd_MoveAbility_Window_execShouldWaitBeforeUsing_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Window.IsObjectInUse
// [0x00020400] 
struct UOLAICmd_MoveAbility_Window_execIsObjectInUse_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Window.Cancel
// [0x00020002] 
struct UOLAICmd_MoveAbility_Window_execCancel_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Window.Popped
// [0x00020002] 
struct UOLAICmd_MoveAbility_Window_execPopped_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Window.MoveThruWindow
// [0x00022802] 
struct UOLAICmd_MoveAbility_Window_eventMoveThruWindow_Params
{
	class AOLBot*                                      Bot;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AOLWindow*                                   InWindow;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InitialDestination;                               		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInReversed : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class UOLAICmd_MoveAbility_Window*                 ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLAICmd_MoveAbility_Window*                 Cmd;                                              		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLAIGroup.UseFallbackFormation
// [0x00020400] 
struct UOLAIGroup_execUseFallbackFormation_Params
{
};

// Function OLGame.OLAIGroup.UseDesiredFormation
// [0x00020400] 
struct UOLAIGroup_execUseDesiredFormation_Params
{
};

// Function OLGame.OLAIInvestigationVolume.ProcessActorSetVolume
// [0x00020802] 
struct AOLAIInvestigationVolume_eventProcessActorSetVolume_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLNavigationHandle.PointReachable
// [0x00024400] 
struct UOLNavigationHandle_execPointReachable_Params
{
	struct FVector                                     Point;                                            		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     OverrideStartPoint;                               		// 0x000C (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAllowHitsInEndCollisionBox : 1;                  		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavigationHandle.TrimPathByDistance
// [0x00424400] 
struct UOLNavigationHandle_execTrimPathByDistance_Params
{
	float                                              DistanceToTrim;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     out_NewDestination;                               		// 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bStopAtMeshObject : 1;                            		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavigationHandle.TrimPathToLastClosedDoor
// [0x00420400] 
struct UOLNavigationHandle_execTrimPathToLastClosedDoor_Params
{
	struct FVector                                     out_NewDestination;                               		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavigationHandle.ClearPath
// [0x00020400] 
struct UOLNavigationHandle_execClearPath_Params
{
};

// Function OLGame.OLNavigationHandle.PopMoveLocation
// [0x00020400] 
struct UOLNavigationHandle_execPopMoveLocation_Params
{
};

// Function OLGame.OLNavigationHandle.GetNextMovePath
// [0x00420400] 
struct UOLNavigationHandle_execGetNextMovePath_Params
{
	TArray<struct FVector>                             out_MovePath;                                     		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	float                                              ArrivalDistance;                                  		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavigationHandle.GetNextMoveLocation
// [0x00420400] 
struct UOLNavigationHandle_execGetNextMoveLocation_Params
{
	struct FVector                                     out_MoveDest;                                     		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ArrivalDistance;                                  		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavigationHandle.FindPath
// [0x00424400] 
struct UOLNavigationHandle_execFindPath_Params
{
	class AActor*                                      out_DestActor;                                    		// 0x0000 (0x0008) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	int32_t                                            out_DestItem;                                     		// 0x0008 (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLNavMeshPath_SimilarToLastPath.Recycle
// [0x00020802] 
struct UOLNavMeshPath_SimilarToLastPath_eventRecycle_Params
{
};

// Function OLGame.OLNavMeshPath_SimilarToLastPath.SimilarToLastPath
// [0x00022002] 
struct UOLNavMeshPath_SimilarToLastPath_execSimilarToLastPath_Params
{
	class UNavigationHandle*                           NavHandle;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLNavMeshPath_SimilarToLastPath*            Eval;                                             		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLEnemyPawn.FinishAIGroup
// [0x00020102] 
struct AOLEnemyPawn_execFinishAIGroup_Params
{
};

// Function OLGame.OLEnemyPawn.BeginAIGroup
// [0x00020102] 
struct AOLEnemyPawn_execBeginAIGroup_Params
{
};

// Function OLGame.OLEnemyPawn.OnAnimEnd
// [0x00020902] 
struct AOLEnemyPawn_eventOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.NativeOnAnimEnd
// [0x00020400] 
struct AOLEnemyPawn_execNativeOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.StartNormalAttack
// [0x00020400] 
struct AOLEnemyPawn_execStartNormalAttack_Params
{
};

// Function OLGame.OLEnemyPawn.StartDoorKnockback
// [0x00020400] 
struct AOLEnemyPawn_execStartDoorKnockback_Params
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLocker : 1;                                      		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLEnemyPawn.StartKnockback
// [0x00020400] 
struct AOLEnemyPawn_execStartKnockback_Params
{
	class AOLHero*                                     Hero;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.StartAvoid
// [0x00020400] 
struct AOLEnemyPawn_execStartAvoid_Params
{
	class AOLEnemyPawn*                                OtherPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.StopMoving
// [0x00020400] 
struct AOLEnemyPawn_execStopMoving_Params
{
};

// Function OLGame.OLEnemyPawn.StartMoving
// [0x00020400] 
struct AOLEnemyPawn_execStartMoving_Params
{
};

// Function OLGame.OLEnemyPawn.PlayFullBodyAnim
// [0x00024002] 
struct AOLEnemyPawn_execPlayFullBodyAnim_Params
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bLooping : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              StartTime;                                        		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              EndTime;                                          		// 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLEnemyPawn.PlayParticleEffect
// [0x00020802] 
struct AOLEnemyPawn_eventPlayParticleEffect_Params
{
	class UAnimNotify_PlayParticleEffect*              AnimNotifyData;                                   		// 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEnemyPawn.NativePlayParticleEffect
// [0x00020400] 
struct AOLEnemyPawn_execNativePlayParticleEffect_Params
{
	class UAnimNotify_PlayParticleEffect*              AnimNotifyData;                                   		// 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEnemyPawn.HideWeaponMatinee
// [0x00020802] 
struct AOLEnemyPawn_eventHideWeaponMatinee_Params
{
};

// Function OLGame.OLEnemyPawn.ShowWeaponMatinee
// [0x00020802] 
struct AOLEnemyPawn_eventShowWeaponMatinee_Params
{
};

// Function OLGame.OLEnemyPawn.PushNotify
// [0x00020802] 
struct AOLEnemyPawn_eventPushNotify_Params
{
};

// Function OLGame.OLEnemyPawn.KnockbackTickNotify
// [0x00020802] 
struct AOLEnemyPawn_eventKnockbackTickNotify_Params
{
};

// Function OLGame.OLEnemyPawn.KnockbackStartNotify
// [0x00020802] 
struct AOLEnemyPawn_eventKnockbackStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.BreakDoorNotify
// [0x00020802] 
struct AOLEnemyPawn_eventBreakDoorNotify_Params
{
};

// Function OLGame.OLEnemyPawn.BashDoorNotify
// [0x00020802] 
struct AOLEnemyPawn_eventBashDoorNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTargetRangeTickNotify
// [0x00020802] 
struct AOLEnemyPawn_eventDamageTargetRangeTickNotify_Params
{
};

// Function OLGame.OLEnemyPawn.HeadButtRangeStartNotify
// [0x00020802] 
struct AOLEnemyPawn_eventHeadButtRangeStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.PunchLHRangeStartNotify
// [0x00020802] 
struct AOLEnemyPawn_eventPunchLHRangeStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.PunchRHRangeStartNotify
// [0x00020802] 
struct AOLEnemyPawn_eventPunchRHRangeStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTargetRangeStartNotify
// [0x00020802] 
struct AOLEnemyPawn_eventDamageTargetRangeStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTargetNonFatal
// [0x00020802] 
struct AOLEnemyPawn_eventDamageTargetNonFatal_Params
{
};

// Function OLGame.OLEnemyPawn.KickPlayerRightFoot
// [0x00020802] 
struct AOLEnemyPawn_eventKickPlayerRightFoot_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTarget
// [0x00020802] 
struct AOLEnemyPawn_eventDamageTarget_Params
{
};

// Function OLGame.OLEnemyPawn.WindowBreakNotify
// [0x00020802] 
struct AOLEnemyPawn_eventWindowBreakNotify_Params
{
};

// Function OLGame.OLEnemyPawn.RestoreHiddenWeapon
// [0x00020400] 
struct AOLEnemyPawn_execRestoreHiddenWeapon_Params
{
};

// Function OLGame.OLEnemyPawn.TemporaryHideWeapon
// [0x00020400] 
struct AOLEnemyPawn_execTemporaryHideWeapon_Params
{
};

// Function OLGame.OLEnemyPawn.HideWeapon
// [0x00020400] 
struct AOLEnemyPawn_execHideWeapon_Params
{
};

// Function OLGame.OLEnemyPawn.ShowWeapon
// [0x00020400] 
struct AOLEnemyPawn_execShowWeapon_Params
{
};

// Function OLGame.OLEnemyPawn.ExitStairsStartBlendOutNotify
// [0x00020400] 
struct AOLEnemyPawn_execExitStairsStartBlendOutNotify_Params
{
};

// Function OLGame.OLEnemyPawn.EnterStairsStartBlendInNotify
// [0x00020400] 
struct AOLEnemyPawn_execEnterStairsStartBlendInNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DoorUnlockNotify
// [0x00020400] 
struct AOLEnemyPawn_execDoorUnlockNotify_Params
{
};

// Function OLGame.OLEnemyPawn.WardrobeDoorEndNotify
// [0x00020400] 
struct AOLEnemyPawn_execWardrobeDoorEndNotify_Params
{
};

// Function OLGame.OLEnemyPawn.WardrobeDoorNotify
// [0x00020400] 
struct AOLEnemyPawn_execWardrobeDoorNotify_Params
{
};

// Function OLGame.OLEnemyPawn.WindowAnimEndNotify
// [0x00020400] 
struct AOLEnemyPawn_execWindowAnimEndNotify_Params
{
};

// Function OLGame.OLEnemyPawn.WindowAnimStartNotify
// [0x00020400] 
struct AOLEnemyPawn_execWindowAnimStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.NativeDestroyed
// [0x00020400] 
struct AOLEnemyPawn_execNativeDestroyed_Params
{
};

// Function OLGame.OLEnemyPawn.PostInitAnimTree
// [0x00020902] 
struct AOLEnemyPawn_eventPostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function OLGame.OLEnemyPawn.PossessedBy
// [0x00020002] 
struct AOLEnemyPawn_execPossessedBy_Params
{
	class AController*                                 C;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLEnemyPawn.ZeroMovementVariables
// [0x00020102] 
struct AOLEnemyPawn_execZeroMovementVariables_Params
{
};

// Function OLGame.OLEnemyPawn.PostBeginPlay
// [0x00020902] 
struct AOLEnemyPawn_eventPostBeginPlay_Params
{
};

// Function OLGame.OLEnemyPawn.HasRegisteredNavMeshRecently
// [0x00020003] 
struct AOLEnemyPawn_execHasRegisteredNavMeshRecently_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEnemyPawn.UpdateNavMeshObstacle
// [0x00020003] 
struct AOLEnemyPawn_execUpdateNavMeshObstacle_Params
{
};

// Function OLGame.OLEnemyPawn.UnregisterNavmeshObstacle
// [0x00020401] 
struct AOLEnemyPawn_execUnregisterNavmeshObstacle_Params
{
};

// Function OLGame.OLEnemyPawn.RegisterNavMeshObstacle
// [0x00020401] 
struct AOLEnemyPawn_execRegisterNavMeshObstacle_Params
{
};

// Function OLGame.OLEnemyPawn.UpdateDifficultyBasedValues
// [0x00020400] 
struct AOLEnemyPawn_execUpdateDifficultyBasedValues_Params
{
};

// Function OLGame.OLEnemyPawn.OnMoveAbilityCompleted
// [0x00020400] 
struct AOLEnemyPawn_execOnMoveAbilityCompleted_Params
{
};

// Function OLGame.OLEnemyPawn.EnterCrawl
// [0x00020400] 
struct AOLEnemyPawn_execEnterCrawl_Params
{
	class AOLCrawlMarker*                              CrawlMarker;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bThroughPathfinding : 1;                          		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLEnemyPawn.ExitBeam
// [0x00020400] 
struct AOLEnemyPawn_execExitBeam_Params
{
};

// Function OLGame.OLEnemyPawn.EnterBeam
// [0x00020400] 
struct AOLEnemyPawn_execEnterBeam_Params
{
	class AOLBeamMarker*                               BeamMarker;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOLSeqAct_AIBeam*                            BeamSeqAct;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.StartJump
// [0x00020400] 
struct AOLEnemyPawn_execStartJump_Params
{
	class AOLJumpMarker*                               JumpMarker;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOLSeqAct_AIJump*                            JumpSeqAct;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.StartDoorSpecialMove
// [0x00020400] 
struct AOLEnemyPawn_execStartDoorSpecialMove_Params
{
	uint8_t                                            moveType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLEnemyPawn.BashThroughWindow
// [0x00020400] 
struct AOLEnemyPawn_execBashThroughWindow_Params
{
};

// Function OLGame.OLEnemyPawn.OpenActiveWindow
// [0x00020400] 
struct AOLEnemyPawn_execOpenActiveWindow_Params
{
};

// Function OLGame.OLEnemyPawn.CancelSpecialMove
// [0x00020400] 
struct AOLEnemyPawn_execCancelSpecialMove_Params
{
};

// Function OLGame.OLEnemyPawn.StartSpecialMove
// [0x00024400] 
struct AOLEnemyPawn_execStartSpecialMove_Params
{
	uint8_t                                            moveType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     targetPosition;                                   		// 0x0004 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     TargetDirection;                                  		// 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            TargetType;                                       		// 0x001C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLEnemyMartha.PlayParticleEffect
// [0x00020802] 
struct AOLEnemyMartha_eventPlayParticleEffect_Params
{
	class UAnimNotify_PlayParticleEffect*              AnimNotifyData;                                   		// 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLEnemyNickAndLaird.StopAnimatingArrow
// [0x00020400] 
struct AOLEnemyNickAndLaird_execStopAnimatingArrow_Params
{
};

// Function OLGame.OLEnemyNickAndLaird.SpawnAndAnimateNewArrow
// [0x00020400] 
struct AOLEnemyNickAndLaird_execSpawnAndAnimateNewArrow_Params
{
};

// Function OLGame.OLEnemyNickAndLaird.SpawnNewArrow
// [0x00020400] 
struct AOLEnemyNickAndLaird_execSpawnNewArrow_Params
{
};

// Function OLGame.OLEnemyNickAndLaird.ArrowLaunch
// [0x00020400] 
struct AOLEnemyNickAndLaird_execArrowLaunch_Params
{
};

// Function OLGame.OLWaypoint.AnimStartedEvent
// [0x00020400] 
struct AOLWaypoint_execAnimStartedEvent_Params
{
	class AActor*                                      InInstigator;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLWaypoint.WaypointReachedEvent
// [0x00020400] 
struct AOLWaypoint_execWaypointReachedEvent_Params
{
	class AActor*                                      InInstigator;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLAnimMappedSequence.SetAnim
// [0x00020400] 
struct UOLAnimMappedSequence_execSetAnim_Params
{
	struct FName                                       Sequence;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLSeqAct_AICondition.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_AICondition_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_AIForceCrawl.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_AIForceCrawl_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_AIGotoPoint.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_AIGotoPoint_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_AIInvestigatePoint.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_AIInvestigatePoint_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_AISetLeash.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_AISetLeash_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_AIStartPatrol.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_AIStartPatrol_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_AIUnspawnAtLocation.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_AIUnspawnAtLocation_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_Arrow.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_Arrow_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_Camcorder.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_Camcorder_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_CameraParticleEffect.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_CameraParticleEffect_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_CameraShake.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_CameraShake_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_DelayByDifficulty.ResetDelayActive
// [0x00020400] 
struct UOLSeqAct_DelayByDifficulty_execResetDelayActive_Params
{
};

// Function OLGame.OLSeqAct_DelayByDifficulty.Reset
// [0x00020002] 
struct UOLSeqAct_DelayByDifficulty_execReset_Params
{
};

// Function OLGame.OLSeqAct_Door.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_Door_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_GenericBlend.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_GenericBlend_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_HeroControl.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_HeroControl_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_HeroPlayAnim.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_HeroPlayAnim_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_HideInSight.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_HideInSight_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_InvisibleFootsteps.ShouldHandleDecal
// [0x00020002] 
struct UOLSeqAct_InvisibleFootsteps_execShouldHandleDecal_Params
{
	uint8_t                                            DecalType;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_InvisibleFootsteps.SpawnFootstepDecal
// [0x00420400] 
struct UOLSeqAct_InvisibleFootsteps_execSpawnFootstepDecal_Params
{
	uint32_t                                           bLeftFoot : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FVector                                     DecalLocation;                                    		// 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    DecalRotation;                                    		// 0x0010 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OLGame.OLSeqAct_LightEnvControl.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_LightEnvControl_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_NightVisionStatus.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_NightVisionStatus_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_PairedWalk.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_PairedWalk_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_PrepareMapTransition.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_PrepareMapTransition_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_Pushable.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_Pushable_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_SetObjective.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_SetObjective_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_Struggle.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_Struggle_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_WaitAndReact.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_WaitAndReact_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqAct_WaitForPlayerInput.GetObjClassVersion
// [0x00022802] 
struct UOLSeqAct_WaitForPlayerInput_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqCond_AIState.GetObjClassVersion
// [0x00022802] 
struct UOLSeqCond_AIState_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqCond_Checkpoint.GetObjClassVersion
// [0x00022802] 
struct UOLSeqCond_Checkpoint_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqCond_IsDemo.GetObjClassVersion
// [0x00022802] 
struct UOLSeqCond_IsDemo_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqCond_IsTouching.GetObjClassVersion
// [0x00022802] 
struct UOLSeqCond_IsTouching_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqCond_PlayerHealth.GetObjClassVersion
// [0x00022802] 
struct UOLSeqCond_PlayerHealth_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqEvent_ApplyCheckpointState.GetObjClassVersion
// [0x00022802] 
struct UOLSeqEvent_ApplyCheckpointState_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqEvent_Bashable.GetObjClassVersion
// [0x00022802] 
struct UOLSeqEvent_Bashable_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLSeqEvent_CSAActivated.Toggled
// [0x00020802] 
struct UOLSeqEvent_CSAActivated_eventToggled_Params
{
};

// Function OLGame.OLSeqEvent_Door.GetObjClassVersion
// [0x00022802] 
struct UOLSeqEvent_Door_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIMessage.SetPCQTELabels
// [0x00020802] 
struct UOLUIMessage_eventSetPCQTELabels_Params
{
	class FString                                      upStr;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      leftStr;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      downStr;                                          		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      rightStr;                                         		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIMessage.SetSubtitleHeight
// [0x00020002] 
struct UOLUIMessage_execSetSubtitleHeight_Params
{
	uint32_t                                           hight : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIMessage.TryClose
// [0x00020802] 
struct UOLUIMessage_eventTryClose_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIMessage.TryCloseInternal
// [0x00020002] 
struct UOLUIMessage_execTryCloseInternal_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIMessage.WidgetInitialized
// [0x00020802] 
struct UOLUIMessage_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIMessage.SetMessage
// [0x00020002] 
struct UOLUIMessage_execSetMessage_Params
{
	uint8_t                                            MessageType;                                      		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Message;                                          		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            southPaw;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIMessage.SetVisible
// [0x00020002] 
struct UOLUIMessage_execSetVisible_Params
{
	uint32_t                                           bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIMessage.OnClose
// [0x00020000] 
struct UOLUIMessage_execOnClose_Params
{
};

// Function OLGame.OLUIMessage.Start
// [0x00024002] 
struct UOLUIMessage_execStart_Params
{
	uint32_t                                           StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLGFxMoviePlayer.OnProfileWriteComplete
// [0x00020002] 
struct UOLGFxMoviePlayer_execOnProfileWriteComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UOnlinePlayerInterface*                      PlayerInt;                                        		// 0x0008 (0x0010) [0x0000000000000000]               
};

// Function OLGame.OLGFxMoviePlayer.SaveProfile
// [0x00024002] 
struct UOLGFxMoviePlayer_execSaveProfile_Params
{
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class AOLPlayerController*                         PlayerToSave;                                     		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UOnlinePlayerInterface*                      PlayerInt;                                        		// 0x0020 (0x0010) [0x0000000000000000]               
};

// Function OLGame.OLGFxMoviePlayer.GetOnlinePlayerInterface
// [0x00022003] 
struct UOLGFxMoviePlayer_execGetOnlinePlayerInterface_Params
{
	class UOnlinePlayerInterface*                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
	// class UOnlinePlayerInterface*                      Result;                                           		// 0x0018 (0x0010) [0x0000000000000000]               
};

// Function OLGame.OLGFxMoviePlayer.MuteSoundThemes
// [0x00820002] 
struct UOLGFxMoviePlayer_execMuteSoundThemes_Params
{
	uint32_t                                           bMute : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FSoundThemeBinding                          SoundTheme;                                       		// 0x0004 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLGFxMoviePlayer.GetGame
// [0x00022002] 
struct UOLGFxMoviePlayer_execGetGame_Params
{
	class AOLGame*                                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AWorldInfo*                                  World;                                            		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLGFxMoviePlayer.GetOLPC
// [0x00020002] 
struct UOLGFxMoviePlayer_execGetOLPC_Params
{
	class AOLPlayerController*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd.NotifyAltEnter
// [0x00020002] 
struct UOLUIFrontEnd_execNotifyAltEnter_Params
{
};

// Function OLGame.OLUIFrontEnd.GetLocalizedString
// [0x00020002] 
struct UOLUIFrontEnd_execGetLocalizedString_Params
{
	class FString                                      Category;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      KeyName;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      File;                                             		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0030 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.GetGamepadActionBoundToKey
// [0x00020002] 
struct UOLUIFrontEnd_execGetGamepadActionBoundToKey_Params
{
	class FString                                      KeyNameString;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ConfigType;                                       		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0014 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// struct FName                                       KeyName;                                          		// 0x0024 (0x0008) [0x0000000000000000]               
	// class UOLPlayerInput*                              PlayerInput;                                      		// 0x002C (0x0008) [0x0000000000000000]               
	// int32_t                                            BindIndex;                                        		// 0x0034 (0x0004) [0x0000000000000000]               
	// class FString                                      ActionString;                                     		// 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FKeyBind>                            GPBindings;                                       		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.HasInitializedGamma
// [0x00020002] 
struct UOLUIFrontEnd_execHasInitializedGamma_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            GammaInitialized;                                 		// 0x0004 (0x0004) [0x0000000000000000]               
	// class UOLProfileSettings*                          MyProfile;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd.GetFriendlyKeyBindingName
// [0x00020002] 
struct UOLUIFrontEnd_execGetFriendlyKeyBindingName_Params
{
	class FString                                      KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.StartKeyBindingCapture
// [0x00020002] 
struct UOLUIFrontEnd_execStartKeyBindingCapture_Params
{
};

// Function OLGame.OLUIFrontEnd.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd.ConfigureTargetView
// [0x00020002] 
struct UOLUIFrontEnd_execConfigureTargetView_Params
{
	class UOLUIFrontEnd_View*                          targetView;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd.ConfigureView
// [0x00020003] 
struct UOLUIFrontEnd_execConfigureView_Params
{
	class UOLUIFrontEnd_View*                          InView;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetName;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd.PopViewStub
// [0x00020003] 
struct UOLUIFrontEnd_execPopViewStub_Params
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd.PopView
// [0x00020002] 
struct UOLUIFrontEnd_execPopView_Params
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd.PushViewByName
// [0x00024003] 
struct UOLUIFrontEnd_execPushViewByName_Params
{
	struct FName                                       TargetViewName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOLUIFrontEnd_Screen*                        ParentView;                                       		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd.PushView
// [0x00020002] 
struct UOLUIFrontEnd_execPushView_Params
{
	class UOLUIFrontEnd_View*                          targetView;                                       		// 0x0000 (0x0008) [0x0000000000000880] (CPF_Parm | CPF_CoerceParm)
};

// Function OLGame.OLUIFrontEnd.LoadView
// [0x00820003] 
struct UOLUIFrontEnd_execLoadView_Params
{
	struct FViewInfo                                   InViewInfo;                                       		// 0x0000 (0x0028) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FASValue                                    asval;                                            		// 0x0028 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FASValue>                            args;                                             		// 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UGFxObject*                                  ViewContainer;                                    		// 0x0058 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  ViewLoader;                                       		// 0x0060 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd.LoadViews
// [0x00020003] 
struct UOLUIFrontEnd_execLoadViews_Params
{
	// uint8_t                                            I;                                                		// 0x0000 (0x0001) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd.CleanViews
// [0x00020000] 
struct UOLUIFrontEnd_execCleanViews_Params
{
};

// Function OLGame.OLUIFrontEnd.ConfigFrontEnd
// [0x00020003] 
struct UOLUIFrontEnd_execConfigFrontEnd_Params
{
};

// Function OLGame.OLUIFrontEnd.OnKeyBindingsChanged
// [0x00020002] 
struct UOLUIFrontEnd_execOnKeyBindingsChanged_Params
{
};

// Function OLGame.OLUIFrontEnd.AddCaptureKeys
// [0x00020002] 
struct UOLUIFrontEnd_execAddCaptureKeys_Params
{
	// class UOLProfileSettings*                          MyProfile;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	// class FString                                      EscapeMenuKeyString;                              		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.OnClose
// [0x00020802] 
struct UOLUIFrontEnd_eventOnClose_Params
{
};

// Function OLGame.OLUIFrontEnd.Start
// [0x00024002] 
struct UOLUIFrontEnd_execStart_Params
{
	uint32_t                                           StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.TickGameDownload
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execTickGameDownload_Params
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      MainMenuText;                                     		// 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0014 (0x0004) [0x0000000000000000]               
	// class UOLEngine*                                   Engine;                                           		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.Tick
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execTick_Params
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_MainMenu.ASInitButtonFocus
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execASInitButtonFocus_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.ASShowNewGameIntroText
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execASShowNewGameIntroText_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.ShowDeleteRecordingsConfirmationDialog
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execShowDeleteRecordingsConfirmationDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.ShowMessageDialog
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execShowMessageDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_MainMenu_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_MainMenu.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_MainMenu_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.ShowPressStartScreen
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execShowPressStartScreen_Params
{
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.ForceShowLoginUI
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execForceShowLoginUI_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnPressStart
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execOnPressStart_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0004 (0x0008) [0x0000000000000000]               
	// int32_t                                            NewControllerIdx;                                 		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnDingoUserInitialized
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execOnDingoUserInitialized_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnButtonClick
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnButtonClick_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.SetMainMenuText
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execSetMainMenuText_Params
{
	class FString                                      Message;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.PopulateButtons
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execPopulateButtons_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x000C (0x0008) [0x0000000000000000]               
	// class UOLEngine*                                   Engine;                                           		// 0x0014 (0x0008) [0x0000000000000000]               
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x001C (0x0008) [0x0000000000000000]               
	// class AWorldInfo*                                  WI;                                               		// 0x0024 (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     CurrentGame;                                      		// 0x002C (0x0008) [0x0000000000000000]               
	// uint8_t                                            SaveGameLoadState;                                		// 0x0034 (0x0001) [0x0000000000000000]               
	// uint8_t                                            LoadAnyGameLoadState;                             		// 0x0035 (0x0001) [0x0000000000000000]               
	// uint32_t                                           bHasValidContinueButton : 1;                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bHasContinueDisabled : 1;                         		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bHasValidLoadButton : 1;                          		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_MainMenu.back
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnRecordingsButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnRecordingsButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnExitButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnExitButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnCreditsButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnCreditsButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnOptionsButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnOptionsButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.Select_Options
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execSelect_Options_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnSaveListButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnSaveListButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnLoadButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnLoadButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLOrbisEngine*                              OrbisEngine;                                      		// 0x0034 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnOK
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnOK_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnOKButtonClick
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnOKButtonClick_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.GoToNextIntroText
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execGoToNextIntroText_Params
{
	class FString                                      NextText;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnChaptersButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnChaptersButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnStartDLCButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnStartDLCButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLEngine*                                   Engine;                                           		// 0x0034 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnStartButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnStartButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class AWorldInfo*                                  WI;                                               		// 0x0034 (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     CurrentGame;                                      		// 0x003C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.GameLoadedCallback
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execGameLoadedCallback_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.StartNewGame
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execStartNewGame_Params
{
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UOLWinEngine*                                WinEngine;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UOLOrbisEngine*                              OrbisEngine;                                      		// 0x0010 (0x0008) [0x0000000000000000]               
	// class UOLEngine*                                   GameEngine;                                       		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.DingoRecordingStorageDialogResult
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execDingoRecordingStorageDialogResult_Params
{
	int32_t                                            Type;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.DifficultySelected
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execDifficultySelected_Params
{
	// class UOLOrbisEngine*                              OrbisEngine;                                      		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.TrySkipSaveScreen
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execTrySkipSaveScreen_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLOrbisEngine*                              OrbisEngine;                                      		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.ShowGamertag
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execShowGamertag_Params
{
	class FString                                      Gamertag;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.HideGametag
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execHideGametag_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.SaveLocationSelected
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execSaveLocationSelected_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnBadCheckpointMsgAcknowledged
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execOnBadCheckpointMsgAcknowledged_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.ShowBadCheckpointMsg
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execShowBadCheckpointMsg_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnContinueButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_MainMenu_execOnContinueButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLEngine*                                   Engine;                                           		// 0x0034 (0x0008) [0x0000000000000000]               
	// class UOLWinEngine*                                WinEngine;                                        		// 0x003C (0x0008) [0x0000000000000000]               
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0044 (0x0008) [0x0000000000000000]               
	// class UOLOrbisEngine*                              OrbisEngine;                                      		// 0x004C (0x0008) [0x0000000000000000]               
	// uint32_t                                           bSuccess : 1;                                     		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint8_t                                            LoadResult;                                       		// 0x0058 (0x0001) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_MainMenu_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_MainMenu_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Screen.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_Screen_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Screen.LocalizeGeneric
// [0x00020002] 
struct UOLUIFrontEnd_Screen_execLocalizeGeneric_Params
{
	class FString                                      SectionName;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      KeyName;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Screen.LocalizeNarrative
// [0x00020002] 
struct UOLUIFrontEnd_Screen_execLocalizeNarrative_Params
{
	class FString                                      SectionName;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      KeyName;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Screen.IsDLCInstalled
// [0x00020002] 
struct UOLUIFrontEnd_Screen_execIsDLCInstalled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Screen.IsPlaytest
// [0x00020002] 
struct UOLUIFrontEnd_Screen_execIsPlaytest_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Screen.IsDemo
// [0x00020002] 
struct UOLUIFrontEnd_Screen_execIsDemo_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Screen.IsTopMostView
// [0x00020002] 
struct UOLUIFrontEnd_Screen_execIsTopMostView_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.InputTypeChanged
// [0x00020800] 
struct UOLUIFrontEnd_View_eventInputTypeChanged_Params
{
};

// Function OLGame.OLUIFrontEnd_View.ASHideDialogs
// [0x00020002] 
struct UOLUIFrontEnd_View_execASHideDialogs_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnKeyBindingCancelled
// [0x00020000] 
struct UOLUIFrontEnd_View_execOnKeyBindingCancelled_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnKeyBindingCaptured
// [0x00020000] 
struct UOLUIFrontEnd_View_execOnKeyBindingCaptured_Params
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_View.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_View_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_View_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.back
// [0x00020002] 
struct UOLUIFrontEnd_View_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.NotifyAltEnter
// [0x00020000] 
struct UOLUIFrontEnd_View_execNotifyAltEnter_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnViewDeactivated
// [0x00020000] 
struct UOLUIFrontEnd_View_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnViewActivated
// [0x00020000] 
struct UOLUIFrontEnd_View_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnTopMostView
// [0x00024000] 
struct UOLUIFrontEnd_View_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_View.OnViewLoaded
// [0x00020000] 
struct UOLUIFrontEnd_View_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_Credits_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bIsTopmostView : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Credits.SetCreditsText
// [0x00020002] 
struct UOLUIFrontEnd_Credits_execSetCreditsText_Params
{
	class FString                                      Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Credits.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_Credits_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Credits.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_Credits_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Credits.OnViewDeactivated
// [0x00020002] 
struct UOLUIFrontEnd_Credits_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.StartCredits
// [0x00020002] 
struct UOLUIFrontEnd_Credits_execStartCredits_Params
{
	uint32_t                                           bQuickstart : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_Credits.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_Credits_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_Credits.OnCreditsFadeOut
// [0x00020002] 
struct UOLUIFrontEnd_Credits_execOnCreditsFadeOut_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.OnCreditsFinished
// [0x00020002] 
struct UOLUIFrontEnd_Credits_execOnCreditsFinished_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.back
// [0x00020002] 
struct UOLUIFrontEnd_Credits_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_CleanText.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_CleanText_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLPlayerController*                         OLPC;                                             		// 0x0014 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_CleanText.Tick
// [0x00020002] 
struct UOLUIFrontEnd_CleanText_execTick_Params
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_CleanText.PreviousPage
// [0x00020002] 
struct UOLUIFrontEnd_CleanText_execPreviousPage_Params
{
};

// Function OLGame.OLUIFrontEnd_CleanText.NextPage
// [0x00020002] 
struct UOLUIFrontEnd_CleanText_execNextPage_Params
{
};

// Function OLGame.OLUIFrontEnd_CleanText.InitializeFocusControl
// [0x00020002] 
struct UOLUIFrontEnd_CleanText_execInitializeFocusControl_Params
{
	uint32_t                                           bIsController : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_CleanText.InputTypeChanged
// [0x00020802] 
struct UOLUIFrontEnd_CleanText_eventInputTypeChanged_Params
{
};

// Function OLGame.OLUIFrontEnd_CleanText.InitializeText
// [0x00020002] 
struct UOLUIFrontEnd_CleanText_execInitializeText_Params
{
	class FString                                      In_Title;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      In_Text;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           In_bIsGospel : 1;                                 		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_CleanText.back
// [0x00020002] 
struct UOLUIFrontEnd_CleanText_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_CleanText.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_CleanText_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_CleanText.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_CleanText_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_CleanText.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_CleanText_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_CleanText.InitializeView
// [0x00020002] 
struct UOLUIFrontEnd_CleanText_execInitializeView_Params
{
};

// Function OLGame.OLUIFrontEnd_CleanText.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_CleanText_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_Console.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_Console_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bResult : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Console.CleanViews
// [0x00020002] 
struct UOLUIFrontEnd_Console_execCleanViews_Params
{
	// uint8_t                                            I;                                                		// 0x0000 (0x0001) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.ASDisableBackButton
// [0x00040003] 
struct UOLUIFrontEnd_GammaScreen_Console_execASDisableBackButton_Params
{
	uint32_t                                           bDisable : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.GetCurrentGammaSetting
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execGetCurrentGammaSetting_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// float                                              GammaSetting;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.IsGammaInitialized
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execIsGammaInitialized_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Initialized;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_GammaScreen_Console_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Tick
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execTick_Params
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_GammaScreen_Console_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Change_Slider
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execChange_Slider_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// float                                              FloatValue;                                       		// 0x0034 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Pop
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewDeactivated
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.back
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnAccept
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execOnAccept_Params
{
	// float                                              GammaValue;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Accept
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execPress_Accept_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_GammaScreen_Console_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// float                                              CurrentGammaValue;                                		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_Console_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.InputTypeChanged
// [0x00020802] 
struct UOLUIFrontEnd_RecordingMenu_eventInputTypeChanged_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.selectConsole
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execselectConsole_Params
{
	class FString                                      Console;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.InitializeFocusControl
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execInitializeFocusControl_Params
{
	uint32_t                                           bIsController : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_RecordingMenu_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_RecordingMenu_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.LinkButtons
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execLinkButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetPlayButton
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execOnSetPlayButton_Params
{
	class UGFxClikWidget*                              Widget;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetPreviousButton
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execOnSetPreviousButton_Params
{
	class UGFxClikWidget*                              Widget;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetNextButton
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execOnSetNextButton_Params
{
	class UGFxClikWidget*                              Widget;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnSetBackButton
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execOnSetBackButton_Params
{
	class UGFxClikWidget*                              Widget;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.SetLargeImageSize
// [0x00020802] 
struct UOLUIFrontEnd_RecordingMenu_eventSetLargeImageSize_Params
{
	float                                              SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PosX;                                             		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PosY;                                             		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.PlayEvent
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execPlayEvent_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Play
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execPress_Play_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.PauseVideo
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execPauseVideo_Params
{
	uint32_t                                           bForce : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.StopVideo
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execStopVideo_Params
{
	uint32_t                                           bClearVO : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.PlayVideo
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execPlayVideo_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Previous
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execPress_Previous_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Previous
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execPrevious_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Next
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execPress_Next_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Next
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execNext_Params
{
	// int32_t                                            nextIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]               
	// TArray<class FString>                              recordings;                                       		// 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.back
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            SectionIndex;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.ShowChangeConfirmationDialog
// [0x00040003] 
struct UOLUIFrontEnd_RecordingMenu_execShowChangeConfirmationDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      noButtonLabel;                                    		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.ResetFocus
// [0x00040003] 
struct UOLUIFrontEnd_RecordingMenu_execResetFocus_Params
{
	int32_t                                            focusIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Tick
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.ShowFullSizeImage
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execShowFullSizeImage_Params
{
	class FString                                      ImageURL;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsVideo : 1;                                     		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnRecordingClicked
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execOnRecordingClicked_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.GetFullSizeTexture
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execGetFullSizeTexture_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UTexture*                                    ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnRecordingTypeClicked
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execOnRecordingTypeClicked_Params
{
	int32_t                                            TypeIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.PopulateChapterList
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execPopulateChapterList_Params
{
	uint32_t                                           bFocus : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProviderSections;                             		// 0x000C (0x0008) [0x0000000000000000]               
	// int32_t                                            Idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// TArray<class FString>                              recordings;                                       		// 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.InitiateThumbnailTextures
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execInitiateThumbnailTextures_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ThumbSortingType;                                 		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            I;                                                		// 0x0008 (0x0004) [0x0000000000000000]               
	// TArray<class FString>                              recordings;                                       		// 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.InitiateCategoriesTextures
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execInitiateCategoriesTextures_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.Pop
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnViewDeactivated
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnViewActivated
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.SetLocalizedStrings
// [0x00020002] 
struct UOLUIFrontEnd_RecordingMenu_execSetLocalizedStrings_Params
{
	class FString                                      Play;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Pause;                                            		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cleanText;                                        		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingMenu.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_RecordingMenu_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Tick
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.LinkButtons
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execLinkButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnSetBackButton
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execOnSetBackButton_Params
{
	class UGFxClikWidget*                              Widget;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_ChapterSelection_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.GetCurrentSectionCount
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execGetCurrentSectionCount_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            I;                                                		// 0x0004 (0x0004) [0x0000000000000000]               
	// int32_t                                            cpIndex;                                          		// 0x0008 (0x0004) [0x0000000000000000]               
	// TArray<int32_t>                                    uniqueSections;                                   		// 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      LastCheckpointName;                               		// 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            LastCheckpointIdx;                                		// 0x002C (0x0004) [0x0000000000000000]               
	// int32_t                                            bHasFinishedGame;                                 		// 0x0030 (0x0004) [0x0000000000000000]               
	// class UOLEngine*                                   Engine;                                           		// 0x0034 (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     TheGame;                                          		// 0x003C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.GetMaxSectionCount
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execGetMaxSectionCount_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            I;                                                		// 0x0004 (0x0004) [0x0000000000000000]               
	// TArray<int32_t>                                    uniqueSections;                                   		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class AOLGame*                                     TheGame;                                          		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.back
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            SectionIndex;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnGameTypeSelect
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execOnGameTypeSelect_Params
{
	int32_t                                            Type;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UOLOrbisEngine*                              OrbisEngine;                                      		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.SaveLocationSelected
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execSaveLocationSelected_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UOLOrbisEngine*                              OrbisEngine;                                      		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnChapterClicked
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execOnChapterClicked_Params
{
	int32_t                                            chapterIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            buttonIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      StartCPName;                                      		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint8_t                                            SaveGameStatus;                                   		// 0x0018 (0x0001) [0x0000000000000000]               
	// class UOLEngine*                                   OLEngine;                                         		// 0x001C (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     TheGame;                                          		// 0x0024 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.ShowChangeConfirmationDialog
// [0x00040003] 
struct UOLUIFrontEnd_ChapterSelection_execShowChangeConfirmationDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      noButtonLabel;                                    		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.ResetFocus
// [0x00040003] 
struct UOLUIFrontEnd_ChapterSelection_execResetFocus_Params
{
	int32_t                                            focusIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnSectionClicked
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execOnSectionClicked_Params
{
	int32_t                                            SectionIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.PopulateChapterList
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execPopulateChapterList_Params
{
	uint32_t                                           bFocus : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProviderSections;                             		// 0x000C (0x0008) [0x0000000000000000]               
	// class FString                                      LastCheckpointName;                               		// 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            LastCheckpointIdx;                                		// 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                            bHasFinishedGame;                                 		// 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                            bHasFinishedDLC;                                  		// 0x002C (0x0004) [0x0000000000000000]               
	// int32_t                                            Idx;                                              		// 0x0030 (0x0004) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0034 (0x0004) [0x0000000000000000]               
	// int32_t                                            cpIndex;                                          		// 0x0038 (0x0004) [0x0000000000000000]               
	// int32_t                                            sectionCount;                                     		// 0x003C (0x0004) [0x0000000000000000]               
	// class UOLEngine*                                   Engine;                                           		// 0x0040 (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     TheGame;                                          		// 0x0048 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.InitializeFocusControl
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execInitializeFocusControl_Params
{
	uint32_t                                           bIsController : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.InputTypeChanged
// [0x00020802] 
struct UOLUIFrontEnd_ChapterSelection_eventInputTypeChanged_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.GetChapterName
// [0x00022002] 
struct UOLUIFrontEnd_ChapterSelection_execGetChapterName_Params
{
	struct FName                                       CheckpointName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.HasValidChapters
// [0x00022002] 
struct UOLUIFrontEnd_ChapterSelection_execHasValidChapters_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class FString                                      LastCheckpointName;                               		// 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            LastCheckpointIdx;                                		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            bHasFinishedGame;                                 		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            bHasFinishedDLC;                                  		// 0x001C (0x0004) [0x0000000000000000]               
	// class AOLGame*                                     TheGame;                                          		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Pop
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewActivated
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.selectConsole
// [0x00020002] 
struct UOLUIFrontEnd_ChapterSelection_execselectConsole_Params
{
	class FString                                      Console;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_ChapterSelection_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_DifficultySelectionScreen_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ASShowConfirmInsaneDialog
// [0x00040003] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execASShowConfirmInsaneDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_DifficultySelectionScreen_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Pop
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewDeactivated
// [0x00020000] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ProceedToStartGame
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execProceedToStartGame_Params
{
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnConfirmedInsane
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execOnConfirmedInsane_Params
{
	uint32_t                                           bOk : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Insane
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPress_Insane_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Nightmare
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPress_Nightmare_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Hard
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPress_Hard_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Normal
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPress_Normal_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Easy
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execPress_Easy_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_DifficultySelectionScreen_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCancelled
// [0x00040003] 
struct UOLUIFrontEnd_Options_execASOnKeyBindingCancelled_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCaptured
// [0x00040003] 
struct UOLUIFrontEnd_Options_execASOnKeyBindingCaptured_Params
{
	class FString                                      KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowMessageDialog
// [0x00040003] 
struct UOLUIFrontEnd_Options_execShowMessageDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowKeyBindingConflictDialog
// [0x00040003] 
struct UOLUIFrontEnd_Options_execShowKeyBindingConflictDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowChangeConfirmationDialog
// [0x00040003] 
struct UOLUIFrontEnd_Options_execShowChangeConfirmationDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_Options_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bSelectionChanged : 1;                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bMoveTab : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Options.Tick
// [0x00020802] 
struct UOLUIFrontEnd_Options_eventTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options.CloseDialog
// [0x00020002] 
struct UOLUIFrontEnd_Options_execCloseDialog_Params
{
	int32_t                                            buttonIdx;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options.moveTab
// [0x00020002] 
struct UOLUIFrontEnd_Options_execmoveTab_Params
{
	int32_t                                            Side;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options.NotifyAltEnter
// [0x00020002] 
struct UOLUIFrontEnd_Options_execNotifyAltEnter_Params
{
	// int32_t                                            Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]               
	// int32_t                                            Fs;                                               		// 0x0004 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.OnSliderChanged
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnSliderChanged_Params
{
	int32_t                                            ProfileSettingId;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              SliderValue;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options.GetKeyBindingConflicts
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetKeyBindingConflicts_Params
{
	TArray<class FString>                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// TArray<class FString>                              KeysBound;                                        		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              Conflicts;                                        		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      Key;                                              		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0040 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.GetCurrentGFxList
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetCurrentGFxList_Params
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SetGamepadConfigExternally
// [0x00020002] 
struct UOLUIFrontEnd_Options_execSetGamepadConfigExternally_Params
{
	int32_t                                            ConfigIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            GamepadConfigOption;                              		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.GetGamepadConfig
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetGamepadConfig_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            GamepadConfigOption;                              		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCancelled
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnKeyBindingCancelled_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCaptured
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnKeyBindingCaptured_Params
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options.GetBorderlessFullscreenOptionIndex
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetBorderlessFullscreenOptionIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.GetFullscreenOptionIndex
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetFullscreenOptionIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.GetResolutionOptionIndex
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetResolutionOptionIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_Options_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Options.SetSelectionFocus
// [0x00020002] 
struct UOLUIFrontEnd_Options_execSetSelectionFocus_Params
{
	class UGFxObject*                                  MovieClip;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options.GetOLProfile
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetOLProfile_Params
{
	class UOLProfileSettings*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SaveSettingsToProfile
// [0x00020002] 
struct UOLUIFrontEnd_Options_execSaveSettingsToProfile_Params
{
	uint32_t                                           bApplyOnly : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bProfileIsDirty : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bGeneralOptionsDirty : 1;                         		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bGraphicsOptionsDirty : 1;                        		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bControlsOptionsDirty : 1;                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bWasJPN : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           bIsJPN : 1;                                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            CurrentLanguage;                                  		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.HasAnyPropertyChanged
// [0x00020002] 
struct UOLUIFrontEnd_Options_execHasAnyPropertyChanged_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bPropertyChanged : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Options.HasPropertyChangedInList
// [0x00820002] 
struct UOLUIFrontEnd_Options_execHasPropertyChangedInList_Params
{
	class UGFxObject*                                  OptionsList;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOptionInfo>                         OptionInfos;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLEngine*                                   TheEngine;                                        		// 0x001C (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionPSID;                                		// 0x0028 (0x0004) [0x0000000000000000]               
	// struct FOptionInfo                                 CurrentOptionInfo;                                		// 0x002C (0x003C) [0x0000000000400000] (CPF_NeedCtorLink)
	// float                                              OptionProfileValue_Float;                         		// 0x0068 (0x0004) [0x0000000000000000]               
	// int32_t                                            OptionProfileValue_Int;                           		// 0x006C (0x0004) [0x0000000000000000]               
	// int32_t                                            OptionProfileValue_Idx;                           		// 0x0070 (0x0004) [0x0000000000000000]               
	// int32_t                                            ConvertedIdx;                                     		// 0x0074 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentResX;                                      		// 0x0078 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentResY;                                      		// 0x007C (0x0004) [0x0000000000000000]               
	// class FString                                      OptionProfileValue_String;                        		// 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bPropertyChanged : 1;                             		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            CurrentDropdownValue;                             		// 0x0094 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.SaveSettingsForList
// [0x00820002] 
struct UOLUIFrontEnd_Options_execSaveSettingsForList_Params
{
	TArray<struct FOptionInfo>                         OptionInfos;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLEngine*                                   TheEngine;                                        		// 0x0014 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionPSID;                                		// 0x0020 (0x0004) [0x0000000000000000]               
	// struct FOptionInfo                                 CurrentOptionInfo;                                		// 0x0024 (0x003C) [0x0000000000400000] (CPF_NeedCtorLink)
	// float                                              OptionProfileValue_Float;                         		// 0x0060 (0x0004) [0x0000000000000000]               
	// int32_t                                            OptionProfileValue_Int;                           		// 0x0064 (0x0004) [0x0000000000000000]               
	// int32_t                                            OptionProfileValue_Idx;                           		// 0x0068 (0x0004) [0x0000000000000000]               
	// int32_t                                            ConvertedIdx;                                     		// 0x006C (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentResX;                                      		// 0x0070 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentResY;                                      		// 0x0074 (0x0004) [0x0000000000000000]               
	// class FString                                      OptionProfileValue_String;                        		// 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// uint32_t                                           bPropertyChanged : 1;                             		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                           OptionOldValue_Bool : 1;                          		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                            CurrentDropdownValue;                             		// 0x0090 (0x0004) [0x0000000000000000]               
	// uint8_t                                            OptionOldValue_Difficulty;                        		// 0x0094 (0x0001) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.TabChanged
// [0x00020002] 
struct UOLUIFrontEnd_Options_execTabChanged_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.StoreOptionValuesForList
// [0x00420002] 
struct UOLUIFrontEnd_Options_execStoreOptionValuesForList_Params
{
	class UGFxObject*                                  OptionsList;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FOptionInfo>                         OptionInfos;                                      		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentResX;                                      		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentResY;                                      		// 0x0020 (0x0004) [0x0000000000000000]               
	// float                                              FloatValue;                                       		// 0x0024 (0x0004) [0x0000000000000000]               
	// class FString                                      StringValue;                                      		// 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetOptionValueStringAt
// [0x00820002] 
struct UOLUIFrontEnd_Options_execGetOptionValueStringAt_Params
{
	class UGFxObject*                                  OptionsList;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x000C (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// TArray<struct FASValue>                            args;                                             		// 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FASValue                                    Retval;                                           		// 0x002C (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetOptionValueAt
// [0x00820002] 
struct UOLUIFrontEnd_Options_execGetOptionValueAt_Params
{
	class UGFxObject*                                  OptionsList;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// TArray<struct FASValue>                            args;                                             		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FASValue                                    Retval;                                           		// 0x0020 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.SetDefaultOptionValuesForList
// [0x00420002] 
struct UOLUIFrontEnd_Options_execSetDefaultOptionValuesForList_Params
{
	TArray<struct FOptionInfo>                         OptionInfos;                                      		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLEngine*                                   TheEngine;                                        		// 0x0014 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionPSID;                                		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionValueInt;                            		// 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                            ListIndex;                                        		// 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                            DefaultResX;                                      		// 0x002C (0x0004) [0x0000000000000000]               
	// int32_t                                            DefaultResY;                                      		// 0x0030 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentResX;                                      		// 0x0034 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentResY;                                      		// 0x0038 (0x0004) [0x0000000000000000]               
	// float                                              CurrentOptionValueFloat;                          		// 0x003C (0x0004) [0x0000000000000000]               
	// uint32_t                                           bPropertyChanged : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                              OptionProfileValue_Float;                         		// 0x0044 (0x0004) [0x0000000000000000]               
	// int32_t                                            OptionProfileValue_Int;                           		// 0x0048 (0x0004) [0x0000000000000000]               
	// int32_t                                            OptionProfileValue_Idx;                           		// 0x004C (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesForList
// [0x00420002] 
struct UOLUIFrontEnd_Options_execFillOptionValuesForList_Params
{
	TArray<struct FOptionInfo>                         OptionInfos;                                      		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class UOLEngine*                                   TheEngine;                                        		// 0x0010 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            J;                                                		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionPSID;                                		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionValueInt;                            		// 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentResX;                                      		// 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentResY;                                      		// 0x002C (0x0004) [0x0000000000000000]               
	// float                                              CurrentOptionValueFloat;                          		// 0x0030 (0x0004) [0x0000000000000000]               
	// class FString                                      CurrentOptionValueString;                         		// 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesFromProfile
// [0x00020002] 
struct UOLUIFrontEnd_Options_execFillOptionValuesFromProfile_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.PopulateControlsOptions
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPopulateControlsOptions_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.PopulateGraphicsOptions
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPopulateGraphicsOptions_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// int32_t                                            Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.PopulateGeneralOptions
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPopulateGeneralOptions_Params
{
	uint32_t                                           bIgnoreFocus : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                            I;                                                		// 0x0004 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.GetLabelTextFromOptionInfo
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetLabelTextFromOptionInfo_Params
{
	struct FOptionInfo                                 Info;                                             		// 0x0000 (0x003C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x003C (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetObjectFromOption
// [0x00020002] 
struct UOLUIFrontEnd_Options_execGetObjectFromOptionW_Params
{
	struct FOptionInfo                                 CurrentOptionInfo;                                		// 0x0000 (0x003C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      		// 0x003C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            J;                                                		// 0x0044 (0x0004) [0x0000000000000000]               
	// int32_t                                            CurrentOptionPSID;                                		// 0x0048 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x004C (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  OptionListProvider;                               		// 0x0054 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DropDownItemObj;                                  		// 0x005C (0x0008) [0x0000000000000000]               
	// TArray<struct FName>                               OptionValueNames;                                 		// 0x0064 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              OptionValueStrings;                               		// 0x0074 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<int32_t>                                    OptionValueEnabled;                               		// 0x0084 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FName                                       OptVal;                                           		// 0x0094 (0x0008) [0x0000000000000000]               
	// float                                              OptionType;                                       		// 0x009C (0x0004) [0x0000000000000000]               
	// uint32_t                                           bOverrideEnabled : 1;                             		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Options.PopulateTabButtons
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPopulateTabButtons_Params
{
	// class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.UseInsaneGameplayOptions
// [0x00020002] 
struct UOLUIFrontEnd_Options_execUseInsaneGameplayOptions_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.UseMainMenuGameplayOptions
// [0x00020002] 
struct UOLUIFrontEnd_Options_execUseMainMenuGameplayOptions_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.Press_OptionItemButton
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPress_OptionItemButton_Params
{
	int32_t                                            PSID;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options.Press_Reset
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPress_Reset_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLWinEngine*                                WinEngine;                                        		// 0x0034 (0x0008) [0x0000000000000000]               
	// uint32_t                                           bProfileChanged : 1;                              		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Options.Press_Gamma
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPress_Gamma_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.OnDiscardChanges
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnDiscardChanges_Params
{
	int32_t                                            bOk;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options.OnDismissKeyBindingConflictDialog
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnDismissKeyBindingConflictDialog_Params
{
	uint32_t                                           bOk : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_Options.Press_Apply
// [0x00020002] 
struct UOLUIFrontEnd_Options_execPress_Apply_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// TArray<class FString>                              KeyBindingConflicts;                              		// 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class FString>                              KeyBindingConflictsLocalized;                     		// 0x0044 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      KeyBindingConflictsString;                        		// 0x0054 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0064 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.OnMustRestartAccepted
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnMustRestartAccepted_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.ExitOptionsScreen
// [0x00020002] 
struct UOLUIFrontEnd_Options_execExitOptionsScreen_Params
{
	// float                                              Volume;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options.back
// [0x00020002] 
struct UOLUIFrontEnd_Options_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bAnyPropertyChanged : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Options.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_Options_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_Options.OnViewDeactivated
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.OnViewActivated
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_Options_execOnViewLoaded_Params
{
	// class UOLWinEngine*                                WinEngine;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_SaveLocationList_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.SetupActionButtonString
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execSetupActionButtonString_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.GetHighlightedIndex
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execGetHighlightedIndex_Params
{
	uint32_t                                           bAllowSelectedIndex : 1;                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ASTraceFocus
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execASTraceFocus_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ASInitButtonFocus
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execASInitButtonFocus_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ASShowConfirmDialog
// [0x00040003] 
struct UOLUIFrontEnd_SaveLocationList_execASShowConfirmDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ShowMessageDialog
// [0x00040003] 
struct UOLUIFrontEnd_SaveLocationList_execShowMessageDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.back
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_SaveLocationList_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            SelectedIdx;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0018 (0x0008) [0x0000000000000000]               
	// class UOLWinEngine*                                WinEngine;                                        		// 0x0020 (0x0008) [0x0000000000000000]               
	// uint32_t                                           bValidDeletion : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ReloadScreen
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execReloadScreen_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnConfirmedDelete
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execOnConfirmedDelete_Params
{
	uint32_t                                           bOk : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UOLWinEngine*                                WinEngine;                                        		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnConfirmedOverwrite
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execOnConfirmedOverwrite_Params
{
	uint32_t                                           bOk : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UOLWinEngine*                                WinEngine;                                        		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnMessageDialogAcknowledged
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execOnMessageDialogAcknowledged_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ShowContentNotAvailaible
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execShowContentNotAvailaible_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ShowBadCheckpointMsg
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execShowBadCheckpointMsg_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnButtonClick
// [0x00040003] 
struct UOLUIFrontEnd_SaveLocationList_execOnButtonClick_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0034 (0x0008) [0x0000000000000000]               
	// class UOLWinEngine*                                WinEngine;                                        		// 0x003C (0x0008) [0x0000000000000000]               
	// int32_t                                            SaveFileIdx;                                      		// 0x0044 (0x0004) [0x0000000000000000]               
	// int32_t                                            CheckpointId;                                     		// 0x0048 (0x0004) [0x0000000000000000]               
	// uint8_t                                            LoadResult;                                       		// 0x004C (0x0001) [0x0000000000000000]               
	// uint32_t                                           bLoadFromSpecificChapter : 1;                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.ResetFocus
// [0x00040003] 
struct UOLUIFrontEnd_SaveLocationList_execResetFocus_Params
{
	int32_t                                            focusIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.PopulateSaves
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execPopulateSaves_Params
{
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UOLWinEngine*                                WinEngine;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0014 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x001C (0x0008) [0x0000000000000000]               
	// int32_t                                            J;                                                		// 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                            dataProviderIndex;                                		// 0x0028 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.GetSaveFileDisplayName
// [0x00820002] 
struct UOLUIFrontEnd_SaveLocationList_execGetSaveFileDisplayName_Params
{
	struct FSaveFileInfo                               SaveFile;                                         		// 0x0000 (0x002C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x002C (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// struct FCheckpointTime                             SaveFileTime;                                     		// 0x003C (0x0010) [0x0000000000000000]               
	// class FString                                      DateString;                                       		// 0x004C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      TimeString;                                       		// 0x005C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Minutes;                                          		// 0x006C (0x0004) [0x0000000000000000]               
	// class FString                                      CheckpointName;                                   		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0080 (0x0008) [0x0000000000000000]               
	// class FString                                      SaveFileId;                                       		// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.GetDifficultyStr
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execGetDifficultyStr_Params
{
	int32_t                                            Difficulty;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.Pop
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.InputTypeChanged
// [0x00020802] 
struct UOLUIFrontEnd_SaveLocationList_eventInputTypeChanged_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnViewDeactivated
// [0x00020000] 
struct UOLUIFrontEnd_SaveLocationList_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_SaveLocationList_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.selectConsole
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execselectConsole_Params
{
	class FString                                      Console;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_SaveLocationList.TrySkipScreen
// [0x00020002] 
struct UOLUIFrontEnd_SaveLocationList_execTrySkipScreen_Params
{
	class FString                                      StartCPName;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0014 (0x0008) [0x0000000000000000]               
	// class UOLWinEngine*                                WinEngine;                                        		// 0x001C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_PausedPrompt.SetMessage
// [0x00020002] 
struct UOLUIFrontEnd_PausedPrompt_execSetMessage_Params
{
	class FString                                      Message;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PausedPrompt.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_PausedPrompt_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_PausedPrompt.OnPressContinue
// [0x00020002] 
struct UOLUIFrontEnd_PausedPrompt_execOnPressContinue_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_PausedPrompt.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_PausedPrompt_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_PausedPrompt.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_PausedPrompt_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_PauseMenu.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_PauseMenu_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bSelectionChanged : 1;                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_PauseMenu.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_PauseMenu_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_PauseMenu.Tick
// [0x00020802] 
struct UOLUIFrontEnd_PauseMenu_eventTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_PauseMenu.ASShowConfirmExitDialog
// [0x00040003] 
struct UOLUIFrontEnd_PauseMenu_execASShowConfirmExitDialog_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      okButtonLabel;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      cancelButtonLabel;                                		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      callbackName;                                     		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.CloseDialog
// [0x00020002] 
struct UOLUIFrontEnd_PauseMenu_execCloseDialog_Params
{
	int32_t                                            buttonIdx;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_PauseMenu.SetSelectionFocus
// [0x00020002] 
struct UOLUIFrontEnd_PauseMenu_execSetSelectionFocus_Params
{
	class UGFxObject*                                  MovieClip;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitConfirmed
// [0x00020002] 
struct UOLUIFrontEnd_PauseMenu_execOnExitConfirmed_Params
{
	uint32_t                                           bOk : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class AOLGame*                                     TheGame;                                          		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitToMenuButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_PauseMenu_execOnExitToMenuButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class AOLGame*                                     TheGame;                                          		// 0x0034 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_PauseMenu.back
// [0x00020002] 
struct UOLUIFrontEnd_PauseMenu_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveCompleted
// [0x00020002] 
struct UOLUIFrontEnd_PauseMenu_execOnSaveCompleted_Params
{
	uint32_t                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_PauseMenu_execOnSaveButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOLOrbisEngine*                              OrbisEngine;                                      		// 0x0034 (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     TheGame;                                          		// 0x003C (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnOptionsButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_PauseMenu_execOnOptionsButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnReturnButtonPress
// [0x00040003] 
struct UOLUIFrontEnd_PauseMenu_execOnReturnButtonPress_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnButtonClick
// [0x00040003] 
struct UOLUIFrontEnd_PauseMenu_execOnButtonClick_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.PopulateButtons
// [0x00020002] 
struct UOLUIFrontEnd_PauseMenu_execPopulateButtons_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// class UGFxObject*                                  Obj;                                              		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x000C (0x0008) [0x0000000000000000]               
	// class AOLGame*                                     TheGame;                                          		// 0x0014 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_PauseMenu_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_PauseMenu_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.GetCurrentGammaSetting
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execGetCurrentGammaSetting_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// float                                              GammaSetting;                                     		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen.IsGammaInitialized
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execIsGammaInitialized_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            Initialized;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_GammaScreen_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_GammaScreen.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_GammaScreen_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Change_Slider
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execChange_Slider_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// float                                              FloatValue;                                       		// 0x0034 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Pop
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewDeactivated
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.back
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnAccept
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execOnAccept_Params
{
	// float                                              GammaValue;                                       		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Accept
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execPress_Accept_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_GammaScreen_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// float                                              CurrentGammaValue;                                		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_GammaScreen_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.ASUpdateGamepadLabels
// [0x00040003] 
struct UOLUIFrontEnd_GamepadScreen_execASUpdateGamepadLabels_Params
{
	int32_t                                            ConfigType;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.TabChanged
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_execTabChanged_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_GamepadScreen_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.PopulateTabButtons
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_execPopulateTabButtons_Params
{
	// class UOLProfileSettings*                          MyProfile;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
	// TArray<struct FName>                               OptionValueNames;                                 		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Idx;                                              		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Pop
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewDeactivated
// [0x00020000] 
struct UOLUIFrontEnd_GamepadScreen_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Back
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_execPress_Back_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Accept
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_execPress_Accept_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_GamepadScreen_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_Options_Console_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_Options_Console.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_Options_Console_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOLDingoEngine*                              DingoEngine;                                      		// 0x0014 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetFullscreenOptionIndex
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execGetFullscreenOptionIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetResolutionOptionIndex
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execGetResolutionOptionIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.HasResolutionChanged
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execHasResolutionChanged_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.TabChanged
// [0x00020000] 
struct UOLUIFrontEnd_Options_Console_execTabChanged_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.ResetConsoleOptions
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execResetConsoleOptions_Params
{
	// uint32_t                                           bProfileChanged : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                              CurrentGammaValue;                                		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Reset
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execPress_Reset_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.FillOptionValuesFromProfile
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execFillOptionValuesFromProfile_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.PopulateControlsOptions
// [0x00020000] 
struct UOLUIFrontEnd_Options_Console_execPopulateControlsOptions_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.PopulateTabButtons
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execPopulateTabButtons_Params
{
	// class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Apply
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execPress_Apply_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_OptionItemButton
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execPress_OptionItemButton_Params
{
	int32_t                                            PSID;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Gamma
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execPress_Gamma_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.back
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_Options_Console_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnViewDeactivated
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnViewActivated
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execOnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_Options_Console_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.ASUpdateGamepadLabels
// [0x00040003] 
struct UOLUIFrontEnd_GamepadScreen_Console_execASUpdateGamepadLabels_Params
{
	int32_t                                            ConfigType;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.TabChanged
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_Console_execTabChanged_Params
{
	struct FEventData                                  ev;                                               		// 0x0000 (0x0034) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.WidgetInitialized
// [0x00020802] 
struct UOLUIFrontEnd_GamepadScreen_Console_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                           bWasHandled : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.FilterButtonInput
// [0x00020802] 
struct UOLUIFrontEnd_GamepadScreen_Console_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.PopulateTabButtons
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_Console_execPopulateTabButtons_Params
{
	// class UOLProfileSettings*                          MyProfile;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UGFxObject*                                  DataProvider;                                     		// 0x0008 (0x0008) [0x0000000000000000]               
	// TArray<struct FName>                               OptionValueNames;                                 		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Idx;                                              		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.Pop
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_Console_execPop_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewDeactivated
// [0x00020000] 
struct UOLUIFrontEnd_GamepadScreen_Console_execOnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.back
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_Console_execback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnTopMostView
// [0x00024002] 
struct UOLUIFrontEnd_GamepadScreen_Console_execOnTopMostView_Params
{
	uint32_t                                           bPlayOpenAnimation : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewLoaded
// [0x00020002] 
struct UOLUIFrontEnd_GamepadScreen_Console_execOnViewLoaded_Params
{
};

// Function OLGame.OLUIPopupScreen.FilterButtonInput
// [0x00020802] 
struct UOLUIPopupScreen_eventFilterButtonInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OLGame.OLUIPopupScreen.OnClose
// [0x00020000] 
struct UOLUIPopupScreen_execOnClose_Params
{
};

// Function OLGame.OLUIPopupScreen.Start
// [0x00024002] 
struct UOLUIPopupScreen_execStart_Params
{
	uint32_t                                           StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
