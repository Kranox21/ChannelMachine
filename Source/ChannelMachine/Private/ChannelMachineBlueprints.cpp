// Copyright 2023 ashton3ddesigns All rights reserved.


#include "ChannelMachineBlueprints.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "Engine/Texture.h"
#include "Engine/Texture2D.h"

void UChannelMachineBlueprints::SetContentBrowserPath(FString Path) 
{
    FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
    IContentBrowserSingleton& ContentBrowserSingleton = ContentBrowserModule.Get();
    ContentBrowserSingleton.SetSelectedPaths({ Path });
}

void UChannelMachineBlueprints::SetHasAlphaChannel(UTexture* Texture2D, bool CompressNoAlpha)
{
    Texture2D->CompressionNoAlpha = CompressNoAlpha;
    Texture2D->UpdateResource();
}

bool UChannelMachineBlueprints::GetHasAlphaChannel(UTexture2D* Texture)
{
    if (Texture)
    {
        return Texture->HasAlphaChannel();
    }
    return false;
}