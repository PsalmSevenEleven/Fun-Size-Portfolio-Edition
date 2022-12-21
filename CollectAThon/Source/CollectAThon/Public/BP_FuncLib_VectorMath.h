// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "BP_FuncLib_VectorMath.generated.h"

/**
 * 
 */
UCLASS()
class COLLECTATHON_API UBP_FuncLib_VectorMath : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
		UFUNCTION(BlueprintPure, Category = "Custom 3D Vector Operations")
		static float GetAngleBetweenVectors(FVector a, FVector b, FVector vertex);
		UFUNCTION(BlueprintPure, Category = "Custom 3D Vector Operations")
		static FVector VectorAtDistanceOnLine(FVector startPoint, FVector endPoint, float distance);
};
