// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PullableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPullableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class COLLECTATHON_API IPullableInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pullable")
		void Lock();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pullable")
		void Unlock();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pullable")
		void MoveTo();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pullable")
		void MoveAway();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pullable")
		void StopMoving();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pullable")
		FVector GetMagLoc();
};
