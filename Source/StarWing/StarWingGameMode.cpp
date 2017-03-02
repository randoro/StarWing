// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "StarWing.h"
#include "StarWingGameMode.h"
#include "StarWingPawn.h"
#include "Blueprint/UserWidget.h" //"Runtime/UMG/Public/Blueprint/UserWidget.h"

AStarWingGameMode::AStarWingGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AStarWingPawn::StaticClass();
}

void AStarWingGameMode::BeginPlay()
{
	Super::BeginPlay();
	if (HUDWidgetClass)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
		
	}
}

void AStarWingGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Time--;
}

int32 AStarWingGameMode::GetTime() 
{
	return Time;
}

float AStarWingGameMode::GetHealth()
{
	return 0.5f;
}

void AStarWingGameMode::AddTime(int32 AddedTime) 
{
	Time += AddedTime;
}