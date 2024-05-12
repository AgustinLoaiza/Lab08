// Fill out your copyright notice in the Description page of Project Settings.


#include "LanzarAdapter.h"
#include "Ball.h"

// Sets default values
ALanzarAdapter::ALanzarAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALanzarAdapter::BeginPlay()
{
	Super::BeginPlay();
	
	ball = GetWorld()->SpawnActor<ABall>(ABall::StaticClass(), FVector(30.0f, 500.0f, 180.0f), FRotator::ZeroRotator);
}

// Called every frame
void ALanzarAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALanzarAdapter::Lanzar()
{
	if (!ball) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("No se pudo spawnear a la clase extranjera")));
		return;
	}
	ball->Launch();
}

