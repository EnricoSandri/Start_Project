// Fill out your copyright notice in the Desription page of Project Settings.


#include "Survival_Game/Player/SurvivalGameCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/cameraComponent.h"


// Sets default values
ASurvivalGameCharacter::ASurvivalGameCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	springArm = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	springArm->SetupAttachment(GetMesh(), FName("CameraSocket"));
	springArm->TargetArmLength = 0.0f;

	camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	camera->SetupAttachment(springArm);
	camera->bUsePawnControlRotation = true;

	helmetMesh = CreateDefaultSubobject<USkeletalMeshComponent>("helmetMesh");
	helmetMesh->SetupAttachment(GetMesh());
	helmetMesh->SetMasterPoseComponent(GetMesh());

	chestMesh = CreateDefaultSubobject<USkeletalMeshComponent>("chestMesh");
	chestMesh->SetupAttachment(GetMesh());
	chestMesh->SetMasterPoseComponent(GetMesh());

	legMesh = CreateDefaultSubobject<USkeletalMeshComponent>("legMesh");
	legMesh->SetupAttachment(GetMesh());
	legMesh->SetMasterPoseComponent(GetMesh());

	vestMesh = CreateDefaultSubobject<USkeletalMeshComponent>("vestMesh");
	vestMesh->SetupAttachment(GetMesh());
	vestMesh->SetMasterPoseComponent(GetMesh());

	feetmesh = CreateDefaultSubobject<USkeletalMeshComponent>("feetmesh");
	feetmesh->SetupAttachment(GetMesh());
	feetmesh->SetMasterPoseComponent(GetMesh());

	handsMesh = CreateDefaultSubobject<USkeletalMeshComponent>("handsMesh");
	handsMesh->SetupAttachment(GetMesh());
	handsMesh->SetMasterPoseComponent(GetMesh());

	backpackMesh = CreateDefaultSubobject<USkeletalMeshComponent>("backpackMesh");
	backpackMesh->SetupAttachment(GetMesh());
	backpackMesh->SetMasterPoseComponent(GetMesh());


}

// Called when the game starts or when spawned
void ASurvivalGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASurvivalGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASurvivalGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

