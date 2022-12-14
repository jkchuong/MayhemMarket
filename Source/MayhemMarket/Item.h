// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UENUM()
enum class ItemEnum : uint8
{
  Detergent    UMETA(DisplayName = "Detergent"),
  Cake         UMETA(DisplayName = "Cake"),
  Coffee       UMETA(DisplayName = "Coffee"),
  Pizza		   UMETA(DisplayName = "Pizza"),
  Soda		   UMETA(DisplayName = "Soda"),
  Champagne    UMETA(DisplayName = "Champagne"),


  COUNT_MAX_ITEMS, // DON'T CHANGE THE DEFAULT NUMBER OF THE ABOVE. Used to count the number of items there are in the enum.
};


UCLASS()
class MAYHEMMARKET_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();
	AItem(ItemEnum itemEnum);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(EditDefaultsOnly, Category="Components")
	UStaticMeshComponent* ItemMesh;

public:

	UPROPERTY(EditAnywhere, Category="Item")
	ItemEnum ItemType{ItemEnum::Detergent};

	UPROPERTY(VisibleInstanceOnly)
	FString ItemName{};
};