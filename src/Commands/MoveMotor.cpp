#include "MoveMotor.h"

MoveMotor::MoveMotor()
{
	Requires(motor);
}

void MoveMotor::Execute()
{
	motor->setSpeed(oi->getJoystick()->GetY());
}

bool MoveMotor::IsFinished()
{
	return false;
}

void MoveMotor::Initialize()
{
}

void MoveMotor::End()
{

}

void MoveMotor::Interrupted()
{
}
