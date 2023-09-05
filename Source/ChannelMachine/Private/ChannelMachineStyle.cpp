// Copyright 2023 ashton3ddesigns All rights reserved.

#include "ChannelMachineStyle.h"
#include "ChannelMachine.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FChannelMachineStyle::StyleInstance = nullptr;

void FChannelMachineStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FChannelMachineStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FChannelMachineStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("ChannelMachineStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FChannelMachineStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("ChannelMachineStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("ChannelMachine")->GetBaseDir() / TEXT("Resources"));

	Style->Set("ChannelMachine.PluginAction", new IMAGE_BRUSH_SVG(TEXT("ChannelMachineIcon"), Icon20x20));
	return Style;
}

void FChannelMachineStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FChannelMachineStyle::Get()
{
	return *StyleInstance;
}
