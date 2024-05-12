// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lanzar.h"
#include "LanzarAdapter.generated.h"

UCLASS()
class LAB08_API ALanzarAdapter : public AActor, public ILanzar
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALanzarAdapter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, Category = "Ball Adapter");
	class ABall* ball;

	void Lanzar() override;
};
