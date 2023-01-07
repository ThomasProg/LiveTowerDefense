// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "mainActors/C_A_Attackers.h"
#include "mainActors/C_A_Parcels.h"
#include "S_Structures.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FeachPlayerParcels
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<AC_A_Parcels*> ParcelsRef;
};

USTRUCT(BlueprintType)
struct FeachPlayerAttackers
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<AC_A_Attackers*> AttackersRef;
};


UCLASS()
class LIVETOWERDEFENSE_API US_Structures : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

};
