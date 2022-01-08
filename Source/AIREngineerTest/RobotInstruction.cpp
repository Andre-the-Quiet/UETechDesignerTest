// Copyright Epic Games, Inc. All Rights Reserved.
#include "RobotInstruction.h"
#include "Robot.h"
URobotInstruction::URobotInstruction()
{

}

bool URobotInstruction::ExecuteInstruction()
{
	return BP_ExecuteInstruction();
}

