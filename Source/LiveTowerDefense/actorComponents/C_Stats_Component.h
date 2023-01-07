// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "GameFramework/Actor.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "C_Stats_Component.generated.h"

USTRUCT(BlueprintType)
struct FStats_0
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float life;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float armor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float attack;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LIVETOWERDEFENSE_API UC_Stats_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UC_Stats_Component();

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere)
	FStats_0 stats_Actu;
	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere)
	FStats_0 stats_Max;

	//UFUNCTION(BlueprintCallable)
	//	void ActualizeStat();
};
