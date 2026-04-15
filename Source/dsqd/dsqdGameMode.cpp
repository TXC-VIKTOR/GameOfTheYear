// Copyright Epic Games, Inc. All Rights Reserved.

#include "dsqdGameMode.h"
#include "dsqdCharacter.h"

AdsqdGameMode::AdsqdGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AdsqdCharacter::StaticClass();	
}
