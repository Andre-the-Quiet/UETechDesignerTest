// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Robot.generated.h"
DECLARE_DYNAMIC_DELEGATE_OneParam(FInstructionDelegate, float, seconds);

UCLASS()
class AIRENGINEERTEST_API ARobot : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARobot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
		FInstructionDelegate wait;
	UFUNCTION(BlueprintCallable, Category = "Instruction")
		void AssignDelegate(FInstructionDelegate instruction);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
