// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Explosive.h"
#include "ExplosiveAdapter.generated.h"

UCLASS()
class LAB08_API AExplosiveAdapter : public AActor, public IExplosive
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExplosiveAdapter();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Bala Adapter")
	class ABalaCanon* BC;
public:
	void Explosive() override;
};
