#include "SingleMotor.h"
#include "../RobotMap.h"
#include "../Commands/MoveMotor.h"

SingleMotor::SingleMotor() :
		Subsystem("SingleMotor"), motor(new CANTalon(MOTORPORT))
{
	// TODO make toggleable brake/coast using button
	motor->SetControlMode(CANSpeedController::kPercentVbus);
	motor->ConfigLimitMode(CANSpeedController::kLimitMode_SrxDisableSwitchInputs);
}

void SingleMotor::InitDefaultCommand()
{
	SetDefaultCommand(new MoveMotor());
}

void SingleMotor::setSpeed(double value)
{
	motor->Set(value);
}

double SingleMotor::getVoltage()
{
	return motor->GetBusVoltage();
}
double SingleMotor::getCurrent()
{
	return motor->GetOutputCurrent();
}
double SingleMotor::getSpeed()
{
	return motor->GetSpeed();
}
