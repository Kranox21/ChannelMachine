//Copyright (c) 2023 ashton3ddesigns. 
// This code is licensed under the MIT License. https://github.com/Kranox21/ChannelMachine/blob/main/LICENSE

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateStyle.h"

class FChannelMachineStyle
{
public:

	static void Initialize();

	static void Shutdown();

	/** reloads textures used by slate renderer */
	static void ReloadTextures();

	/** @return The Slate style set for the Shooter game */
	static const ISlateStyle& Get();

	static FName GetStyleSetName();

private:

	static TSharedRef< class FSlateStyleSet > Create();

private:

	static TSharedPtr< class FSlateStyleSet > StyleInstance;
};