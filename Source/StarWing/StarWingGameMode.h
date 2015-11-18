// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "StarWingGameMode.generated.h"

UCLASS(minimalapi)
class AStarWingGameMode : public AGameMode
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	UPROPERTY()
	class UUserWidget* CurrentWidget;

	UPROPERTY(VisibleAnywhere)
	int32 Time = 2000;

public:
	AStarWingGameMode();

	void BeginPlay();

	void Tick(float DeltaTime);

	UFUNCTION(BlueprintPure, Category = "Time")
	int32 GetTime();

	UFUNCTION(Category = "Time")
	void AddTime(int32 AddedTime);
};



