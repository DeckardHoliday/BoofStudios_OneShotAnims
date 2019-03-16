// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Boof_Actors.generated.h"


UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EPositionPref : uint8 //Sexual position preferences
{
	Top 	UMETA(DisplayName = "Top"),
	Bottom 	UMETA(DisplayName = "Bottom"),
	Switch	UMETA(DisplayName = "Switch")
};

UCLASS()


class BOOF_CORE_API ABoof_Actors : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoof_Actors();

	//Public Vars

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
		EPositionPref PositionPreference;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Name)
		FName actorName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
		USkeletalMeshComponent* characterMesh;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
