// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosiveAdapter.h"
#include "BalaCanon.h"

// Sets default values
AExplosiveAdapter::AExplosiveAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExplosiveAdapter::BeginPlay()
{
	Super::BeginPlay();
	
	BC = GetWorld()->SpawnActor<ABalaCanon>(ABalaCanon::StaticClass(), FVector(-770.0f, 10.0f, 180.0f), FRotator::ZeroRotator);
}

// Called every frame
void AExplosiveAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AExplosiveAdapter::Explosive()
{
	if (!BC)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BC is null, no se spawneo a la clase extranjera"));
		return;
	}
	BC->Mover(); 
}


