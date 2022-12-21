// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CPP_FunSizeGameInstance.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKeyboardDispatcher);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGamepadDispatcher);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInitDelegate);

UCLASS()
class COLLECTATHON_API UCPP_FunSizeGameInstance : public UGameInstance
{
	GENERATED_BODY()

		

public:

	

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Input")
		bool KeyboardControl;

	//save game variable here vvv



	UPROPERTY(BlueprintAssignable, Category = "Dispatchers")
		FKeyboardDispatcher KeyboardDelegate;

	UPROPERTY(BlueprintAssignable, Category = "Dispatchers")
		FGamepadDispatcher GamepadDelegate;
	

	UFUNCTION(BlueprintCallable, Category = "Input")
		void Gamepad();

	UFUNCTION(BlueprintCallable, Category = "Input")
		void Keyboard();
};
