// Fill out your copyright notice in the Description page of Project Settings.

#include "StarWing.h"
#include "Ring.h"


// Sets default values
ARing::ARing()
{
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> RingMesh;
		FConstructorStatics()
			: RingMesh(TEXT("/Game/ring.ring"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	// Create static mesh component
	RingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RingMesh0"));
	RingMesh->SetStaticMesh(ConstructorStatics.RingMesh.Get());
	RootComponent = RingMesh;


 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARing::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARing::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

