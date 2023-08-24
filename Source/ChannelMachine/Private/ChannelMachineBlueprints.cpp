// Fill out your copyright notice in the Description page of Project Settings.


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