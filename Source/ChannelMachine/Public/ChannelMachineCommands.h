//Copyright (c) 2023 ashton3ddesigns. 
// This code is licensed under the MIT License. https://github.com/Kranox21/ChannelMachine/blob/main/LICENSE

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "ChannelMachineStyle.h"

class FChannelMachineCommands : public TCommands<FChannelMachineCommands>
{
public:

	FChannelMachineCommands()
		: TCommands<FChannelMachineCommands>(TEXT("ChannelMachine"), NSLOCTEXT("Contexts", "ChannelMachine", "ChannelMachine Plugin"), NAME_None, FChannelMachineStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
