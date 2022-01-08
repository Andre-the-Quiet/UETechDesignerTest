// Fill out your copyright notice in the Description page of Project Settings.


#include "Robot.h"
#include "RobotInstruction.h"
// Sets default values
ARobot::ARobot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


// Called when the game starts or when spawned
void ARobot::BeginPlay()
{
	Super::BeginPlay();
}

void ARobot::AssignDelegate(FInstructionDelegate instruction)
{
	wait = instruction;
	wait.ExecuteIfBound(3.0f);
}

// Called every frame
void ARobot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARobot::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

