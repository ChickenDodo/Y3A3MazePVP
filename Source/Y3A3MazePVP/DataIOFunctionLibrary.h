// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataIOFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class Y3A3MAZEPVP_API UDataIOFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable)
	static bool LoadStringFromFile(FString FileName, FString& LoadedString);
};
