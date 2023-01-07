// Fill out your copyright notice in the Description page of Project Settings.

#include "C_Stats_Component.h"
#include "UnrealNetwork.h"

// Sets default values for this component's properties
UC_Stats_Component::UC_Stats_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bReplicates = true;
	// ...
}

void UC_Stats_Component::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UC_Stats_Component, stats_Actu);
	DOREPLIFETIME(UC_Stats_Component, stats_Max);
}

// Called when the game starts
void UC_Stats_Component::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UC_Stats_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

