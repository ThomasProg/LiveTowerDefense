// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "C_Attackers.generated.h"

UCLASS()
class LIVETOWERDEFENSE_API AC_Attackers : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AC_Attackers();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
