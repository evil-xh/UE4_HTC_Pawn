// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "XhPawnControllerBPLibrary.h"
#include "XhPawnController.h"

UXhPawnControllerBPLibrary::UXhPawnControllerBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UXhPawnControllerBPLibrary::XhDelay(float Time)
{
	_sleep(Time * 1000);
}

