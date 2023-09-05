// Copyright 2023 ashton3ddesigns All rights reserved.

#include "ChannelMachineCommands.h"

#define LOCTEXT_NAMESPACE "FChannelMachineModule"

void FChannelMachineCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "ChannelMachine", "Launch Channel Machine Editor", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
