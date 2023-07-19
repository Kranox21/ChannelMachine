// Copyright Epic Games, Inc. All Rights Reserved.

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
