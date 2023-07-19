// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChannelMachineCommands.h"

#define LOCTEXT_NAMESPACE "FChannelMachineModule"

void FChannelMachineCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "ChannelMachine", "Launch Channel Machine Editor", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
