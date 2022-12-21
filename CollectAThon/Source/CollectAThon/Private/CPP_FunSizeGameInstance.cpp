// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_FunSizeGameInstance.h"

void UCPP_FunSizeGameInstance::Gamepad()
{
	KeyboardControl = false;
	GamepadDelegate.Broadcast();
}

void UCPP_FunSizeGameInstance::Keyboard()
{
	KeyboardControl = true;
	KeyboardDelegate.Broadcast();
}
