// Copyright 2023 ashton3ddesigns All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ChannelMachineBlueprints.generated.h"


/**
 * 
 */
UCLASS()
class CHANNELMACHINE_API UChannelMachineBlueprints : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Channel Machine Blueprints")
		static void SetContentBrowserPath(FString Path);

		UFUNCTION(BlueprintCallable, Category = "Channel Machine Blueprints")
		static void SetHasAlphaChannel(UTexture* Texture2D, bool CompressNoAlpha);

		UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Channel Machine Blueprints")
		static bool GetHasAlphaChannel(UTexture2D* Texture);
};
