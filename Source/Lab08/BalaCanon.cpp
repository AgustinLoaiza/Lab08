// Fill out your copyright notice in the Description page of Project Settings.


#include "BalaCanon.h"

// Sets default values
ABalaCanon::ABalaCanon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	BombaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0")); 
	BombaMesh->SetStaticMesh(ProjectileMeshAsset.Object); 
	BombaMesh->SetupAttachment(RootComponent); 
	BombaMesh->SetWorldScale3D(FVector(3.0f, 3.0f, 3.0f)); // Cambia los valores para ajustar el tamaño según sea necesario 

	RootComponent = BombaMesh; 

	velocidad = 500.0f; 
}

// Called when the game starts or when spawned
void ABalaCanon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABalaCanon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover();
}

void ABalaCanon::Mover()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * velocidad * GetWorld()->GetDeltaSeconds(); 
	SetActorLocation(NewLocation); 
}

void ABalaCanon::range(float _RangeExplosive)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("BOOM"), _RangeExplosive));
}

