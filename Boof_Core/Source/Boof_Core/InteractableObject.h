// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableObject.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EObjectType : uint8 //List of object types
{
	Dildo 	UMETA(DisplayName = "Dildo"),
	Fleshlight 	UMETA(DisplayName = "Fleshlight"),
	Viewport UMETA(DisplayName = "Viewport"),
};	

UCLASS()

class BOOF_CORE_API AInteractableObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableObject();

	UPROPERTY(BlueprintReadWrite)
	EObjectType objectType;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
