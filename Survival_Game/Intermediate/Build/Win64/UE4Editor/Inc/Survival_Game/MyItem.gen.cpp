// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Items/MyItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyItem() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UMyItem_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UMyItem();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
// End Cross Module References
	void UMyItem::StaticRegisterNativesUMyItem()
	{
	}
	UClass* Z_Construct_UClass_UMyItem_NoRegister()
	{
		return UMyItem::StaticClass();
	}
	struct Z_Construct_UClass_UMyItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/MyItem.h" },
		{ "ModuleRelativePath", "Items/MyItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyItem_Statics::ClassParams = {
		&UMyItem::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyItem, 181174182);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UMyItem>()
	{
		return UMyItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyItem(Z_Construct_UClass_UMyItem, &UMyItem::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UMyItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
