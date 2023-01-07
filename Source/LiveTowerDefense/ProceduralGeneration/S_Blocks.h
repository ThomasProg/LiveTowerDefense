// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "S_Blocks.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FBlock
{
public:

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool isBlock;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSubclassOf<AActor> actorClass;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		AActor* ref;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int32 flagDistance;

};

UCLASS()
class LIVETOWERDEFENSE_API US_Blocks : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
};
