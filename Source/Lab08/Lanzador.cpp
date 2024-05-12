// Fill out your copyright notice in the Description page of Project Settings.


#include "Lanzador.h"
#include "Lanzar.h"

// Sets default values
ALanzador::ALanzador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	// Create the mesh component
	MallaLanzador = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lanzador"));
	MallaLanzador->SetStaticMesh(ShipMesh.Object);
	MallaLanzador->SetupAttachment(RootComponent);

	RootComponent = MallaLanzador;
}

// Called when the game starts or when spawned
void ALanzador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALanzador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALanzador::SetLanzador(AActor* _Adaptador)
{
	LA = Cast<ILanzar>(_Adaptador);
	if (!LA)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("No se pudo hacer el cast del IIExplosiveShot")));
		return;
	}
}

void ALanzador::Lanzar()
{
	LA->Lanzar();
}

