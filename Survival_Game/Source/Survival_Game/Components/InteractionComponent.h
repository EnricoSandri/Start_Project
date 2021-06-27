// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "InteractionComponent.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeginInteract, class ASurvivalGameCharacter*, character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndInteract, class ASurvivalGameCharacter*, character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeginFocus, class ASurvivalGameCharacter*, character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndFocus, class ASurvivalGameCharacter*, character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteract, class ASurvivalGameCharacter*, character);



UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SURVIVAL_GAME_API UInteractionComponent : public UWidgetComponent
{
	GENERATED_BODY()
	
protected:
	virtual void Deactivate() override;
	bool CanInteract(class ASurvivalGameCharacter* character) const;

	UPROPERTY()
		class ASurvivalGameCharacter* characterInteracting;

public:

	UInteractionComponent();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
		float interactionTime;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
		float interactionDistance;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
		FText interactionNameText;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
		FText interactionActionText;

	UFUNCTION(blueprintCallable, Category = "Interaction")
		void SetInteractionNameText(const FText& newNameText);
	UFUNCTION(blueprintCallable, Category = "Interaction")
		void SetInteractionActionText(const FText& newNameText);

	UPROPERTY(EditDefaultsOnly, BlueprintAssignable)
		FOnBeginInteract OnBeginInteract;
	UPROPERTY(EditDefaultsOnly, BlueprintAssignable)
		FOnEndInteract OnEndInteract;
	UPROPERTY(EditDefaultsOnly, BlueprintAssignable)
		FOnBeginFocus OnBeginFocus;
	UPROPERTY(EditDefaultsOnly, BlueprintAssignable)
		FOnEndFocus OnEndFocus;
	UPROPERTY(EditDefaultsOnly, BlueprintAssignable)
		FOnInteract OnInteract;

	void RefreshWidget();
	void BeginFocus(class ASurvivalGameCharacter* character);
	void EndFocus(class ASurvivalGameCharacter* character);
	void BeginInteract(class ASurvivalGameCharacter* character);
	void EndInteract(class ASurvivalGameCharacter* character);
	void Interact(class ASurvivalGameCharacter* character);
	
	UFUNCTION(BlueprintPure, Category = "Interaction")
		float GetInteractionPercentage();
};
