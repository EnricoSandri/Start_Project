// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Items/Item.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	SURVIVAL_GAME_API UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UEnum* Z_Construct_UEnum_Survival_Game_EItemRearity();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Survival_Game, nullptr, "OnItemModified__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EItemRearity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Survival_Game_EItemRearity, Z_Construct_UPackage__Script_Survival_Game(), TEXT("EItemRearity"));
		}
		return Singleton;
	}
	template<> SURVIVAL_GAME_API UEnum* StaticEnum<EItemRearity>()
	{
		return EItemRearity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemRearity(EItemRearity_StaticEnum, TEXT("/Script/Survival_Game"), TEXT("EItemRearity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Survival_Game_EItemRearity_Hash() { return 2309236534U; }
	UEnum* Z_Construct_UEnum_Survival_Game_EItemRearity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Survival_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemRearity"), 0, Get_Z_Construct_UEnum_Survival_Game_EItemRearity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemRearity::IR_Common", (int64)EItemRearity::IR_Common },
				{ "EItemRearity::IR_UnCommon", (int64)EItemRearity::IR_UnCommon },
				{ "EItemRearity::IR_Rare", (int64)EItemRearity::IR_Rare },
				{ "EItemRearity::IR_VeryRare", (int64)EItemRearity::IR_VeryRare },
				{ "EItemRearity::IR_Legendary", (int64)EItemRearity::IR_Legendary },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IR_Common.displayName", "Common" },
				{ "IR_Common.Name", "EItemRearity::IR_Common" },
				{ "IR_Legendary.displayName", "Legendary" },
				{ "IR_Legendary.Name", "EItemRearity::IR_Legendary" },
				{ "IR_Rare.displayName", "Rare" },
				{ "IR_Rare.Name", "EItemRearity::IR_Rare" },
				{ "IR_UnCommon.displayName", "UnCommon" },
				{ "IR_UnCommon.Name", "EItemRearity::IR_UnCommon" },
				{ "IR_VeryRare.displayName", "VeryRare" },
				{ "IR_VeryRare.Name", "EItemRearity::IR_VeryRare" },
				{ "ModuleRelativePath", "Items/Item.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Survival_Game,
				nullptr,
				"EItemRearity",
				"EItemRearity",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UItem::StaticRegisterNativesUItem()
	{
	}
	UClass* Z_Construct_UClass_UItem_NoRegister()
	{
		return UItem::StaticClass();
	}
	struct Z_Construct_UClass_UItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Items/Item.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItem_Statics::ClassParams = {
		&UItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItem, 360106250);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UItem>()
	{
		return UItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItem(Z_Construct_UClass_UItem, &UItem::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
