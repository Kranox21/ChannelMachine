// Fill out your copyright notice in the Description page of Project Settings.


#include "ChannelMachineBlueprints.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"

void UChannelMachineBlueprints::SetContentBrowserPath(FString Path) 
{
    FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
    IContentBrowserSingleton& ContentBrowserSingleton = ContentBrowserModule.Get();
    ContentBrowserSingleton.SetSelectedPaths({ Path });
}