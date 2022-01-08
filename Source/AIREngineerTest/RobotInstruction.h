// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RobotInstruction.generated.h"
class ARobot;
/*  */
UCLASS(Blueprintable)
class AIRENGINEERTEST_API URobotInstruction : public UObject
{
	GENERATED_BODY()

public:
	URobotInstruction();
	UFUNCTION(BlueprintCallable)
	virtual bool ExecuteInstruction();

	UFUNCTION(BlueprintImplementableEvent)
	bool BP_ExecuteInstruction();
protected:
	ARobot* mRobot;
	
	UFUNCTION(BlueprintCallable)
	ARobot* getRobot() { return mRobot; }

	UFUNCTION(BlueprintCallable)
	void setRobot(ARobot* robot) { mRobot = robot; }
};