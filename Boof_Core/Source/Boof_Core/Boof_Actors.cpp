// Fill out your copyright notice in the Description page of Project Settings.

#include "Boof_Actors.h"


// Sets default values
ABoof_Actors::ABoof_Actors()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//SetDefaults
	characterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh"));
	characterMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABoof_Actors::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoof_Actors::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

