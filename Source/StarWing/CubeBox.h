// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CubeBox.generated.h"

UCLASS()
class STARWING_API ACubeBox : public AActor
{
	GENERATED_BODY()

	/** StaticMesh component that will be the visuals for our cube actor */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BoxMesh;
	
public:	
	// Sets default values for this actor's properties
	ACubeBox();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
