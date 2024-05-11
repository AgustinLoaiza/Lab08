// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BalaCanon.generated.h"

UCLASS()
class LAB08_API ABalaCanon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABalaCanon();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BombaMesh;

protected:
	// Sets default values for this actor's properties
	float velocidad;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//metodos accesores
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	//metodos de la clase
	void Mover();
};
