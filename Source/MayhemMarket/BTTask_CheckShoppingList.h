// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_CheckShoppingList.generated.h"

/**
 * 
 */
UCLASS()
class MAYHEMMARKET_API UBTTask_CheckShoppingList : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:

	UBTTask_CheckShoppingList();
	
protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;


};
