// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HUDInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHUDInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class COLLECTATHON_API IHUDInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Setup")
		void SetWIPI(ACPP_WIPICharacter* inWIPI);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "POV")
		void TToF();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "POV")
		void FToT();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Alerts")
		void HideTooltip();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Alerts")
		void ShowAlert();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Winding")
		void Wind();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Winding")
		void StopWinding();

};
