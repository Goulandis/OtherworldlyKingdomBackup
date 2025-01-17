// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DazToUnrealDeveloper/Public/AnimGraphNode_DazMorphDriver.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_DazMorphDriver() {}
// Cross Module References
	DAZTOUNREALDEVELOPER_API UClass* Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_NoRegister();
	DAZTOUNREALDEVELOPER_API UClass* Z_Construct_UClass_UAnimGraphNode_DazMorphDriver();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_DazToUnrealDeveloper();
	DAZTOUNREALRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver();
// End Cross Module References
	void UAnimGraphNode_DazMorphDriver::StaticRegisterNativesUAnimGraphNode_DazMorphDriver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_DazMorphDriver);
	UClass* Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_NoRegister()
	{
		return UAnimGraphNode_DazMorphDriver::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DazToUnrealDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the 'source version' of a bone driven controller, which maps part of the state from one bone to another (e.g., 2 * source.x -> target.z)\n */" },
		{ "IncludePath", "AnimGraphNode_DazMorphDriver.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_DazMorphDriver.h" },
		{ "ToolTip", "This is the 'source version' of a bone driven controller, which maps part of the state from one bone to another (e.g., 2 * source.x -> target.z)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_DazMorphDriver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_DazMorphDriver, Node), Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::NewProp_Node_MetaData)) }; // 1011253830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_DazMorphDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::ClassParams = {
		&UAnimGraphNode_DazMorphDriver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_DazMorphDriver()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_DazMorphDriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_DazMorphDriver.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_DazMorphDriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_DazMorphDriver.OuterSingleton;
	}
	template<> DAZTOUNREALDEVELOPER_API UClass* StaticClass<UAnimGraphNode_DazMorphDriver>()
	{
		return UAnimGraphNode_DazMorphDriver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_DazMorphDriver);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_DazMorphDriver)
	struct Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealDeveloper_Public_AnimGraphNode_DazMorphDriver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealDeveloper_Public_AnimGraphNode_DazMorphDriver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_DazMorphDriver, UAnimGraphNode_DazMorphDriver::StaticClass, TEXT("UAnimGraphNode_DazMorphDriver"), &Z_Registration_Info_UClass_UAnimGraphNode_DazMorphDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_DazMorphDriver), 3351868243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealDeveloper_Public_AnimGraphNode_DazMorphDriver_h_3482657358(TEXT("/Script/DazToUnrealDeveloper"),
		Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealDeveloper_Public_AnimGraphNode_DazMorphDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealDeveloper_Public_AnimGraphNode_DazMorphDriver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
