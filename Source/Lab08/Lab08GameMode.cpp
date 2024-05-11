// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab08GameMode.h"
#include "Lab08Pawn.h"


ALab08GameMode::ALab08GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ALab08Pawn::StaticClass();
}

void ALab08GameMode::BeginPlay()
{
	Super::BeginPlay();

	Jugador=Cast<APawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	EA = GetWorld()->SpawnActor<AExplosiveAdapter>(AExplosiveAdapter::StaticClass()); 
	// Spawn the player
	Jugador->SetBalaCanon(EA); // Set the adapter object to the player object
	Jugador->Explosive(); // Call the adapter method
}

void ALab08GameMode::Tick(float DeltaTime)
{
}

