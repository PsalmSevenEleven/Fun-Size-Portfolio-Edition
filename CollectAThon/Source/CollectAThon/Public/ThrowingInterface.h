// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ThrowingInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UThrowingInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class COLLECTATHON_API IThrowingInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Throwing")
		UClass* GetProjectileClass();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Throwing")
		void SetActorClass(TSubclassOf<AActor> NewClass);
};
