// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Widgets/ItemTooltip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemTooltip() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItemTooltip_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItemTooltip();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
// End Cross Module References
	void UItemTooltip::StaticRegisterNativesUItemTooltip()
	{
	}
	UClass* Z_Construct_UClass_UItemTooltip_NoRegister()
	{
		return UItemTooltip::StaticClass();
	}
	struct Z_Construct_UClass_UItemTooltip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemTooltip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemTooltip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/ItemTooltip.h" },
		{ "ModuleRelativePath", "Widgets/ItemTooltip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemTooltip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemTooltip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemTooltip_Statics::ClassParams = {
		&UItemTooltip::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UItemTooltip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemTooltip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemTooltip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemTooltip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemTooltip, 1168338702);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UItemTooltip>()
	{
		return UItemTooltip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemTooltip(Z_Construct_UClass_UItemTooltip, &UItemTooltip::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UItemTooltip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemTooltip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
