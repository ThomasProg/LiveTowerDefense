// Fill out your copyright notice in the Description page of Project Settings.

#include "C_Attackers.h"



// Sets default values
AC_Attackers::AC_Attackers()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_Attackers::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_Attackers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AC_Attackers::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

