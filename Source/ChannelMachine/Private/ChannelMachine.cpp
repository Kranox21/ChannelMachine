// Copyright 2023 ashton3ddesigns All rights reserved.

#include "ChannelMachine.h"
#include "ChannelMachineStyle.h"
#include "ChannelMachineCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "EditorUtilitySubsystem.h"
#include "EditorAssetLibrary.h"




static const FName ChannelMachineTabName("ChannelMachine");

#define LOCTEXT_NAMESPACE "FChannelMachineModule"

void FChannelMachineModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FChannelMachineStyle::Initialize();
	FChannelMachineStyle::ReloadTextures();

	FChannelMachineCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FChannelMachineCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FChannelMachineModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FChannelMachineModule::RegisterMenus));
}

void FChannelMachineModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FChannelMachineStyle::Shutdown();

	FChannelMachineCommands::Unregister();
}

///ChannelMachine/ChannelMachine.ChannelMachine

void FChannelMachineModule::PluginButtonClicked()
{
	UObject* Blueprint = UEditorAssetLibrary::LoadAsset(FString(TEXT("EditorUtilityWidgetBlueprint'/ChannelMachine/ChannelMachine.ChannelMachine'")));
	if (IsValid(Blueprint)) {
		UEditorUtilityWidgetBlueprint* EditorWidget = Cast<UEditorUtilityWidgetBlueprint>(Blueprint);
		if (IsValid(EditorWidget)) {
			UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
			EditorUtilitySubsystem->SpawnAndRegisterTab(EditorWidget);
		}
	}
}

void FChannelMachineModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Tools");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("Tools");
			Section.AddMenuEntryWithCommandList(FChannelMachineCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("ChannelMachinePlugin");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FChannelMachineCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FChannelMachineModule, ChannelMachine)