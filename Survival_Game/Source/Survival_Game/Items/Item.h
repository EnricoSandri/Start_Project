// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"
[[[[[[[[[[[[[[[[[[[[]] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ] ]

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemModified);

UENUM(BlueprintType)
enum class EItemRearity : uint8
{
	IR_Common UMETA(displayName = "Common"),
	IR_UnCommon UMETA(displayName = "UnCommon"),
	IR_Rare UMETA(displayName = "Rare"),
	IR_VeryRare UMETA(displayName = "VeryRare"),
	IR_Legendary UMETA(displayName = "Legendary"),
};


UCLASS(Blueprintable, EditinlineNew, DefaultToInstanced)
class SURVIVAL_GAME_API UItem : public UObject
{
	GENERATED_BODY()

/*protected:
	virtual class UWorld* GetWorld() const override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& propertyChangedEvent) override;
#endif

public:

	UPROPERTY(Transient)
		class UWorld* world;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		class UStaticMesh* pickupMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		class UTexture2D* thumbnail;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		FText itemDisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (MultiLine = true))
		FText itemDescription;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		FText userAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		EItemRearity rearity;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (ClampMin = 0))
		float weight;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		bool bStackSize;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (ClampMin = 2, EditCondition = bStackable))
		int32 maxStacSize;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		TSubclassOf<class UItemTooltip> iteamTooltip;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (IUMin = 1, EditCondition = bStackable))
		int32 quantity;

	UPROPERTY(BlueprintAssignable)
		FOnItemModified onItemmodified;

	UPROPERTY()
		class UInventoryComponent* owniungInventory;

	UFUNCTION(BlueprintCallable, Category = "Item")
		void SetQuantity(const int32 newQuantity);

	UFUNCTION(BlueprintCallable, Category = "Item")
		FORCEINLINE int32 GetQuantity() const
	{
		return quantity;
	}

	UFUNCTION(BlueprintCallable, Category = "Item")
		FORCEINLINE	 int32 GetStackWieght() const
	{
		return quantity * weight;
	}

	UFUNCTION(BlueprintImplementableEvent)
		void OnUse(class ASurvivalGameCharacter* character);

	virtual void Use(ASurvivalGameCharacter* character);
	virtual void UseAddedTOInventory(ASurvivalGameCharacter* character); */
};
