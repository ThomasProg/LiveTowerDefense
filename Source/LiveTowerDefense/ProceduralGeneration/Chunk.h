// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Chunk.generated.h"

USTRUCT(BlueprintType)
struct FBlocks
{
public:

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
		bool isBlock;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSubclassOf<AActor> actorClass;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		AActor* ref;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int32 flagDistance;

};

UCLASS()
class LIVETOWERDEFENSE_API AChunk : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChunk();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	USceneComponent* scene;
	TArray<UStaticMeshComponent*> meshes;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void GenerateBlocks();
	UFUNCTION(BlueprintCallable)
		void GenerateDistance();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FBlocks> blocks;	//0=vide, 1=block, >2=tour

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FIntVector chunkLineElements;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FIntVector blockSize;
};
