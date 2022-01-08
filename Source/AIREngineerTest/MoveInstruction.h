// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RobotInstruction.h"
#include "MoveInstruction.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class AIRENGINEERTEST_API UMoveInstruction : public URobotInstruction
{
	GENERATED_BODY()
public:
	virtual bool ExecuteInstruction() override;
	
};
