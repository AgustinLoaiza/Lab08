// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab08GameMode.h"
#include "Lab08Pawn.h"
#include "Kismet/GameplayStatics.h"
#include "ExplosiveAdapter.h"


ALab08GameMode::ALab08GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ALab08Pawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
}

void ALab08GameMode::BeginPlay()
{
	Super::BeginPlay();

	Jugador = GetWorld()->SpawnActor<ALab08Pawn>(ALab08Pawn::StaticClass(), FVector(-790.0f, 10.0f, 150.0f), FRotator::ZeroRotator); 
	Jugador=Cast<ALab08Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	Adaptador = GetWorld()->SpawnActor<AExplosiveAdapter>(AExplosiveAdapter::StaticClass(), FVector(0.0f, 0.0f, 0.0f), FRotator::ZeroRotator); 
	Jugador->SetBalaCanon(Adaptador); // Set the adapter object to the player object
	Jugador->Explosive(); // Call the adapter method
}

void ALab08GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

