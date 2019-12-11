// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XHPAWNCONTROLLER_XhPawnControllerBPLibrary_generated_h
#error "XhPawnControllerBPLibrary.generated.h already included, missing '#pragma once' in XhPawnControllerBPLibrary.h"
#endif
#define XHPAWNCONTROLLER_XhPawnControllerBPLibrary_generated_h

#define Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execXhDelay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UXhPawnControllerBPLibrary::XhDelay(Z_Param_Time); \
		P_NATIVE_END; \
	}


#define Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execXhDelay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UXhPawnControllerBPLibrary::XhDelay(Z_Param_Time); \
		P_NATIVE_END; \
	}


#define Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXhPawnControllerBPLibrary(); \
	friend struct Z_Construct_UClass_UXhPawnControllerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UXhPawnControllerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XhPawnController"), NO_API) \
	DECLARE_SERIALIZER(UXhPawnControllerBPLibrary)


#define Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUXhPawnControllerBPLibrary(); \
	friend struct Z_Construct_UClass_UXhPawnControllerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UXhPawnControllerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XhPawnController"), NO_API) \
	DECLARE_SERIALIZER(UXhPawnControllerBPLibrary)


#define Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXhPawnControllerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXhPawnControllerBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXhPawnControllerBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXhPawnControllerBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXhPawnControllerBPLibrary(UXhPawnControllerBPLibrary&&); \
	NO_API UXhPawnControllerBPLibrary(const UXhPawnControllerBPLibrary&); \
public:


#define Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXhPawnControllerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXhPawnControllerBPLibrary(UXhPawnControllerBPLibrary&&); \
	NO_API UXhPawnControllerBPLibrary(const UXhPawnControllerBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXhPawnControllerBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXhPawnControllerBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXhPawnControllerBPLibrary)


#define Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_25_PROLOG
#define Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_RPC_WRAPPERS \
	Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_INCLASS \
	Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class XhPawnControllerBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plugin_Plugins_XhPawnController_Source_XhPawnController_Public_XhPawnControllerBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
