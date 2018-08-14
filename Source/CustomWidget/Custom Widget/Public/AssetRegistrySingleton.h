// Copyright 2017 Micho Todorovich, all rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AssetRegistrySingleton.generated.h"

class IAssetRegistry;

UCLASS()
class CUSTOMWIDGET_API UAssetRegistrySingleton : public UObject
{
	GENERATED_BODY()

public:
	//UAssetRegistrySingleton(const FObjectInitializer& ObjectInitializer);

	UFUNCTION()
	static UAssetRegistrySingleton* Instance();

	static IAssetRegistry* GetAssetRegistry();

private:
	static UAssetRegistrySingleton* _instance;
	IAssetRegistry* _assetRegistry;
};