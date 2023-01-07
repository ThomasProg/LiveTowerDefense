// Fill out your copyright notice in the Description page of Project Settings.

#include "Chunk.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

// Sets default values
AChunk::AChunk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	scene = CreateDefaultSubobject<USceneComponent>(TEXT("scene"));
	this->SetRootComponent(scene);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("StaticMesh'/Game/Meshes/Shape_Cube.Shape_Cube'"));

	for (int y = 0; y < chunkLineElements.Y; y++)
	{
		for (int x = 0; x < chunkLineElements.X; x++)
		{
			meshes.Add(CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube Mesh")));
			meshes[x + y* chunkLineElements.X]->SetupAttachment(RootComponent);

			if (SphereVisualAsset.Succeeded())
			{
				meshes[x + y * chunkLineElements.X]->SetStaticMesh(SphereVisualAsset.Object);
				meshes[x + y * chunkLineElements.X]->SetRelativeLocation(FVector(blockSize.X*x, blockSize.Y*y, 0.0f));
				meshes[x + y * chunkLineElements.X]->SetWorldScale3D(FVector(1.0f));
			}
		}
	}

}

// Called when the game starts or when spawned
void AChunk::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChunk::GenerateBlocks()
{

}

void AChunk::GenerateDistance()
{

}