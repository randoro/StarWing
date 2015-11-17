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

public:
	AStarWingGameMode();

	void BeginPlay();
};



