// Fill out your copyright notice in the Description page of Project Settings.

#include "StarWing.h"
#include "CubeBox.h"


// Sets default values
ACubeBox::ACubeBox()
{
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> BoxMesh;
		FConstructorStatics()
			: BoxMesh(TEXT("/Game/Geometry/Meshes/1M_Cube_Chamfer.1M_Cube_Chamfer"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	// Create static mesh component
	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxMesh0"));
	BoxMesh->SetStaticMesh(ConstructorStatics.BoxMesh.Get());
	RootComponent = BoxMesh;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACubeBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACubeBox::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

