// Fill out your copyright notice in the Description page of Project Settings.

#include "C_A_Attackers.h"
#include "UnrealNetwork.h"

// Sets default values
AC_A_Attackers::AC_A_Attackers(/*const class FPostConstructInitializeProperties& PCIP*/) //: Super(PCIP)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
}

void AC_A_Attackers::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AC_A_Attackers, Direction);
}

// Called when the game starts or when spawned
void AC_A_Attackers::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_A_Attackers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

