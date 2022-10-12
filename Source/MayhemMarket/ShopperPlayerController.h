// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShopperPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MAYHEMMARKET_API AShopperPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;

public:
	
	virtual void GameHasEnded(class AActor* EndGameFocus = nullptr, bool bIsWinner = false) override;

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> HUDScreenClass;

	UPROPERTY()
	UUserWidget* HUDScreen;

};
