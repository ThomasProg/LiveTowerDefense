// Fill out your copyright notice in the Description page of Project Settings.

#include "C_Towers.h"



// Sets default values
AC_Towers::AC_Towers()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_Towers::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_Towers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AC_Towers::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

