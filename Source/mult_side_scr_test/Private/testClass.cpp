// Fill out your copyright notice in the Description page of Project Settings.


#include "testClass.h"


void UtestClass::Prt()
{
	UEngine::AddOnScreenDebugMessage(1, 0, COLOR_YELLOW, "test", true,FVector2D::UnitVector);
}
