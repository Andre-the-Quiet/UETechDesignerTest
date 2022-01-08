#include "MoveInstruction.h"
#include "Robot.h"
#include <GameFramework\PawnMovementComponent.h>
bool UMoveInstruction::ExecuteInstruction()
{
	if (!Super::ExecuteInstruction())
	{
		return false;
	}
	return true;
}