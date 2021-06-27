// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SurvivalGameCharacter.generated.h"

USTRUCT()
struct FInteractionData
{
	GENERATED_BODY()
		
	FInteractionData()
	{
		viewedInteractionComponent = nullptr;
		lastInteractionChechTime = 0.0f;
		bInteractHeld = false;
	}

	UPROPERTY()
		class UInteractionComponent* viewedInteractionComponent;
	UPROPERTY()
		float lastInteractionChechTime;
	UPROPERTY()
		bool bInteractHeld;
};

UCLASS()
class SURVIVAL_GAME_API ASurvivalGameCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASurvivalGameCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* springArm;

	UPROPERTY(EditAnywhere, Category = "Camera")
		class UCameraComponent* camera;

	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* helmetMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* chestMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* legMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* vestMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* feetmesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* handsMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* backpackMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
		float sprintSpeed;

	UPROPERTY()
		float walkSpeed;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
		bool bSprinting;

	bool CanSprint() const;

	void StartSprinting();
	void StopSprinting();

	void SetSprinting(const bool bNewSprinting);

protected:
	
	void MoveForward(float val);
	void MoveRight(float val);
	void LookUp(float val);
	void Turn(float val);
	void StartCrouching();
	void StopCrouching();

	// Interaction variables
protected:

	UPROPERTY(EditDefaultsOnly, Category = "Interaction")
		float interactionCheckFrequence;
	UPROPERTY(EditDefaultsOnly, Category = "Interaction")
		float interactionCheckDistance;

	UPROPERTY()
		FInteractionData interactionData;

	FTimerHandle timeHandle_Interact;

	void PerformInteractionCheck();
	void CouldNotFindInteraction();
	void FoundNewInteraction(UInteractionComponent* interactable);
	void BeginInteract();
	void EndInteract();
	void Interact();

	FORCEINLINE class UInteractionComponent* GetInteractable() const
	{
		return interactionData.viewedInteractionComponent;
	}

public:
	bool IsInteracting() const;
	float GetRemainingInteractionTime() const;
};
