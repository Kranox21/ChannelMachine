//Copyright (c) 2023 ashton3ddesigns. 
// This code is licensed under the MIT License. https://github.com/Kranox21/ChannelMachine/blob/main/LICENSE


#include "ChannelMachineBlueprints.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "Engine/Texture.h"

void UChannelMachineBlueprints::SetContentBrowserPath(FString Path) 
{
    FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
    IContentBrowserSingleton& ContentBrowserSingleton = ContentBrowserModule.Get();
    ContentBrowserSingleton.SetSelectedPaths({ Path });
}

void UChannelMachineBlueprints::SetHasAlphaChannel(UTexture* Texture2D, bool State)
{
    Texture2D->CompressionNoAlpha = State;
    Texture2D->UpdateResource();
}