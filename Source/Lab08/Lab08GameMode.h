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

protected:
	virtual void BeginPlay() override;

public:

	void Tick(float DeltaTime) override;

public:

	UPROPERTY(VisibleAnywhere, Category="GameMode")
	class ALab08Pawn* Jugador; // Pawn object
	UPROPERTY(VisibleAnywhere, Category = "GameMode") 
	class AExplosiveAdapter* Adaptador; // Adapter object
};



