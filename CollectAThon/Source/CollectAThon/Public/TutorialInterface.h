// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TutorialInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTutorialInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class COLLECTATHON_API ITutorialInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Tutorial")
		void SetPlayer(ACPP_WIPICharacter* Player);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Tutorial")
		void StartTutorial();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Tutorial")
		void LookPassed();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Tutorial")
		void MovePassed();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Tutorial")
		void POVPassed();

	
};
