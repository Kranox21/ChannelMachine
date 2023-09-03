//Copyright (c) 2023 ashton3ddesigns. 
// This code is licensed under the MIT License. https://github.com/Kranox21/ChannelMachine/blob/main/LICENSE

#include "ChannelMachineCommands.h"

#define LOCTEXT_NAMESPACE "FChannelMachineModule"

void FChannelMachineCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "ChannelMachine", "Launch Channel Machine Editor", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
