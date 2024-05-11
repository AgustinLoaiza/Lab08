// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Lab08Pawn.h"
#include "ExplosiveAdapter.h"
#include "Lab08GameMode.generated.h"

UCLASS(MinimalAPI)
class ALab08GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALab08GameMode();

	APawn* Jugador; // Pawn object
	AExplosiveAdapter* EA; // Adapter object 
protected:
	virtual void BeginPlay() override;

public:

	void Tick(float DeltaTime) override;


};



