// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RobotInstruction.generated.h"

/*  */
UCLASS(Blueprintable)
class AIRENGINEERTEST_API URobotInstruction : public UObject
{
	GENERATED_BODY()

public:
	URobotInstruction();

	UFUNCTION(BlueprintCallable)
		bool ExecuteInstruction();
protected:
	class ARobot* mRobot;

	UFUNCTION(BlueprintCallable)
	ARobot* getRobot() { return mRobot; }

	UFUNCTION(BlueprintCallable)
	void setRobot(ARobot* robot) { mRobot = robot; }
};