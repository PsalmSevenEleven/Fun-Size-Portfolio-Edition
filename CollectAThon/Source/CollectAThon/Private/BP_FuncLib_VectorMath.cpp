// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_FuncLib_VectorMath.h"

float UBP_FuncLib_VectorMath::GetAngleBetweenVectors(FVector a, FVector b, FVector vertex)
{
	FVector aPrime = a - vertex;
	FVector bPrime = b - vertex;
	float aLength = UKismetMathLibrary::VSize(aPrime);
	float bLength = UKismetMathLibrary::VSize(bPrime);
	float dot = UKismetMathLibrary::Dot_VectorVector(aPrime, bPrime);
	float ans = UKismetMathLibrary::DegAcos((dot / (aLength * bLength)));

	return float(ans);
	
}

FVector UBP_FuncLib_VectorMath::VectorAtDistanceOnLine(FVector startPoint, FVector endPoint, float distance)
{
	float alpha = distance / UKismetMathLibrary::Vector_Distance(startPoint, endPoint);
	FVector loc = UKismetMathLibrary::VLerp(startPoint, endPoint, alpha);
	return FVector(loc);
}

