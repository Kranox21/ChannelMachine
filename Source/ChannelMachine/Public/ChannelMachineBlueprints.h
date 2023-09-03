//Copyright (c) 2023 ashton3ddesigns. 
// This code is licensed under the MIT License. https://github.com/Kranox21/ChannelMachine/blob/main/LICENSE

#pragma once

#include "CoreMinimal.h"
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
		static void SetHasAlphaChannel(UTexture* Texture2D, bool False);
	
};
