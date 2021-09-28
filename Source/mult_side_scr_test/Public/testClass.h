// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "testClass.generated.h"

/**
 * 
 */
UCLASS()
class MULT_SIDE_SCR_TEST_API UtestClass : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		void Prt();
	int x;
	
};
