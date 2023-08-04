// Fill out your copyright notice in the Description page of Project Settings.

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
	
};
