// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "GameFramework/Actor.h"
#include "C_A_Attackers.generated.h"

UCLASS()
class LIVETOWERDEFENSE_API AC_A_Attackers : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AC_A_Attackers();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere)
	FVector2D Direction;

};
