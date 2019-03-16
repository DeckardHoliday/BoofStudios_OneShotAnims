// Fill out your copyright notice in the Description page of Project Settings.

#include "Boof_Player.h"


// Sets default values
ABoof_Player::ABoof_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Setup Defaults
	defaultMovementSpeed = 300;
	GetCharacterMovement()->MaxWalkSpeed = defaultMovementSpeed;
	cameraIndex = 0;
	canMove = true;
	canChangeCameras = true;

	//Setup default camera, collission, mesh
	defaultCollissionComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Default Collission"));
	defaultCollissionComponent->SetupAttachment(GetRootComponent());
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Default Camera"));
	FirstPersonCameraComponent->SetupAttachment(defaultCollissionComponent);
	defaultMesh = CreateDefaultSubobject<UMeshComponent>(TEXT("Mesh"));
	defaultMesh->SetupAttachment(defaultCollissionComponent);
}

// Called when the game starts or when spawned
void ABoof_Player::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void ABoof_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABoof_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//ADD CONTROL SCHEME AND BIND TO FUNCTIONS
	InputComponent->BindAxis("MoveForward", this, &ABoof_Player::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ABoof_Player::MoveRight);
	InputComponent->BindAxis("LookYaw", this, &ABoof_Player::LookYaw);
	InputComponent->BindAxis("LookPitch", this, &ABoof_Player::LookPitch);
	InputComponent->BindAxis("MoveUp", this, &ABoof_Player::MoveUp);
	InputComponent->BindAction("CycleCamera", IE_Pressed, this, &ABoof_Player::CycleCameraUp);
	InputComponent->BindAction("CycleCamera", IE_Pressed, this, &ABoof_Player::CycleCameraDown);
	InputComponent->BindAction("SelectCamera01", IE_Pressed, this, &ABoof_Player::SelectCamera01);
	InputComponent->BindAction("SelectCamera02", IE_Pressed, this, &ABoof_Player::SelectCamera02);
	InputComponent->BindAction("SelectCamera03", IE_Pressed, this, &ABoof_Player::SelectCamera03);
	InputComponent->BindAction("SelectCamera04", IE_Pressed, this, &ABoof_Player::SelectCamera04);
	InputComponent->BindAction("SelectCamera05", IE_Pressed, this, &ABoof_Player::SelectCamera05);
}


void ABoof_Player::MoveForward(float val) {

	if (canMove) {
		//Rotation(roll, yaw, pitch) -- setting roll and pitch to 0 keeps player moving on single plane
		FRotator Rotation(0, GetActorRotation().Yaw, 0);
		FVector Forward = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
		AddMovementInput(Forward, val);
	}

}

void ABoof_Player::MoveRight(float val) {

	if (canMove) {
		//allows player to sidestep left and right
		FRotator Rotation(0, GetActorRotation().Yaw, 0);
		FVector Right = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
		AddMovementInput(Right, val);
	}

}

void ABoof_Player::LookYaw(float val) {

	if (canMove) {
		//adds pitch values based off mouse X movement
		AddControllerYawInput(val);
	}

}

void ABoof_Player::LookPitch(float val) {

	if (canMove) {
		//adds pitch values based off mouse Y movement
		AddControllerPitchInput(val);
	}
}

void ABoof_Player::MoveUp(float val) {
	if (canMove) {
		FRotator Rotation(0, GetActorRotation().Yaw, 0);
		FVector Up = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Z);
		AddMovementInput(Up, val);
	}
}

void ABoof_Player::CycleCameraUp() {
	cameraIndex += 1;
	if (cameraIndex > 5) {
		cameraIndex = 1;
	}
}

void ABoof_Player::CycleCameraDown() {
	cameraIndex -= 1;
	if (cameraIndex < 1) {
		cameraIndex = 5;
	}
}


void ABoof_Player::SelectCamera01(){

}

void ABoof_Player::SelectCamera02(){

}

void ABoof_Player::SelectCamera03(){

}

void ABoof_Player::SelectCamera04() {

}
void ABoof_Player::SelectCamera05() {

}


