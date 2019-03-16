// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Components/MeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "InteractableObject.h"
#include "Boof_Player.generated.h"

UCLASS()
class BOOF_CORE_API ABoof_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABoof_Player();


	//MOVEMENT VARIABLES
	void MoveForward(float val);
	void MoveRight(float val);
	void LookYaw(float val);
	void LookPitch(float val);
	void MoveUp(float val);
	void SelectCamera01();
	void SelectCamera02();
	void SelectCamera03();
	void SelectCamera04();
	void SelectCamera05();
	void CycleCameraUp();
	void CycleCameraDown();
	float defaultMovementSpeed;


	//Interactable Vars
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<AInteractableObject*> interactables;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<AInteractableObject*> viewports;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool canMove;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	UPROPERTY(VisibleAnywhere)
		UCameraComponent* FirstPersonCameraComponent;
	UPROPERTY(VisibleAnywhere)
		UCapsuleComponent* defaultCollissionComponent;
	UPROPERTY(VisibleAnywhere)
		UMeshComponent* defaultMesh;


	int cameraIndex;
	int currentCameraIndex;
	bool canChangeCameras;
};
