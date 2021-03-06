// PLAYERUNKNOWN BATTLEGROUND'S ( EDITED BY PHYSXCORE, THANKS TO KN4CKER ) (3.7.19.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MainLobbyHUD_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainLobbyHUD.MainLobbyHUD_C.OnKey_LobbySystemMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UMainLobbyHUD_C::OnKey_LobbySystemMenu()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84800);

	UMainLobbyHUD_C_OnKey_LobbySystemMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainLobbyHUD_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84795);

	UMainLobbyHUD_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnPrepass_isShipping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::OnPrepass_isShipping(class UWidget* BoundWidget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84792);

	UMainLobbyHUD_C_OnPrepass_isShipping_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CleanUpNameTagWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::CleanUpNameTagWidget(int SlotIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84790);

	UMainLobbyHUD_C_CleanUpNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.SetupNameTagWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::SetupNameTagWidget(int SlotIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84788);

	UMainLobbyHUD_C_SetupNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.GetNameTagWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTslLobbyNameTagWidget*  Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::GetNameTagWidget(int SlotIndex, class UTslLobbyNameTagWidget** Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84784);

	UMainLobbyHUD_C_GetNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnDestroyCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::OnDestroyCharacter(int SlotIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84779);

	UMainLobbyHUD_C_OnDestroyCharacter_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnCreateCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::OnCreateCharacter(int SlotIndex)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84777);

	UMainLobbyHUD_C_OnCreateCharacter_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopupByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 WebPopupID                     (Parm, ZeroConstructor)

void UMainLobbyHUD_C::CloseWebPopupByID(const struct FString& WebPopupID)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84764);

	UMainLobbyHUD_C_CloseWebPopupByID_Params params;
	params.WebPopupID = WebPopupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.RemoveWebPopup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWebPopup_C*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::RemoveWebPopup(class UWebPopup_C* Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84761);

	UMainLobbyHUD_C_RemoveWebPopup_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.AddWebPopup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWebPopup_C*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::AddWebPopup(class UWebPopup_C* Widget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84758);

	UMainLobbyHUD_C_AddWebPopup_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CanShowWebPopup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PopupId                        (Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::CanShowWebPopup(const struct FString& PopupId, bool* Result)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84747);

	UMainLobbyHUD_C_CanShowWebPopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopupImpl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWebPopupParam          Param                          (Parm)

void UMainLobbyHUD_C::ShowWebPopupImpl(const struct FWebPopupParam& Param)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84732);

	UMainLobbyHUD_C_ShowWebPopupImpl_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.On_HorizontalBox_90_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::On_HorizontalBox_90_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84722);

	UMainLobbyHUD_C_On_HorizontalBox_90_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnReload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainLobbyHUD_C::OnReload()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84707);

	UMainLobbyHUD_C_OnReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.GetMainCoherentWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTWidget*     Browser                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::GetMainCoherentWidget(class UCoherentUIGTWidget** Browser)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84702);

	UMainLobbyHUD_C_GetMainCoherentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Browser != nullptr)
		*Browser = params.Browser;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnKey_SystemMenuOrEscape
// (Public, BlueprintCallable, BlueprintEvent)

void UMainLobbyHUD_C::OnKey_SystemMenuOrEscape()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84700);

	UMainLobbyHUD_C_OnKey_SystemMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.InitializeHUD
// (Public, BlueprintCallable, BlueprintEvent)

void UMainLobbyHUD_C::InitializeHUD()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84688);

	UMainLobbyHUD_C_InitializeHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainLobbyHUD_C::BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84687);

	UMainLobbyHUD_C_BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainLobbyHUD_C::BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84686);

	UMainLobbyHUD_C_BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainLobbyHUD_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84685);

	UMainLobbyHUD_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWebPopupParam          Param                          (ConstParm, Parm, OutParm, ReferenceParm)

void UMainLobbyHUD_C::ShowWebPopup(const struct FWebPopupParam& Param)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84683);

	UMainLobbyHUD_C_ShowWebPopup_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainLobbyHUD_C::Construct()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84682);

	UMainLobbyHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainLobbyHUD_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84681);

	UMainLobbyHUD_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainLobbyHUD_C::BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84680);

	UMainLobbyHUD_C_BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ExecuteUbergraph_MainLobbyHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::ExecuteUbergraph_MainLobbyHUD(int EntryPoint)
{
	static auto fn = UObject::GetObjectCasted<UFunction>(84668);

	UMainLobbyHUD_C_ExecuteUbergraph_MainLobbyHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
