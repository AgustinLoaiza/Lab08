// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Lab08Pawn.h"
#include "ExplosiveAdapter.h"
#include "Lanzador.h"
#include "Lab08GameMode.generated.h"

//class ALanzador;

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

	//Primer Adaptador
	UPROPERTY(VisibleAnywhere, Category="GameMode")
	class ALab08Pawn* Jugador; // Pawn object
	UPROPERTY(VisibleAnywhere, Category = "GameMode") 
	class AExplosiveAdapter* Adaptador; // Adapter object

	//Segundo Adaptador
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ALanzador* Lanzador;
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ALanzarAdapter* Adaptador02;
};



