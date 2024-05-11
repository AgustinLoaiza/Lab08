// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab08GameMode.h"
#include "Lab08Pawn.h"

ALab08GameMode::ALab08GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ALab08Pawn::StaticClass();
}

