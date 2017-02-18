#include "WinchSpeedPID.h"

WinchSpeedPID::WinchSpeedPID() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Winch);
	 // TODO:: Find joystick port
	 Joystick* winchMove = new Joystick(5);
	 _talon->SetControlMode(CANSpeedController::kPercentVbus);
	 _talon->SetFeedbackDevice(CANTalon::CtreMagEncoder_Relative);
	 // _talon->ConfigLimitMode(CANSpeedController::kLimitMode_SrxDisableSwitchInputs);
	 correctionValue = 0.5;

}

// Called just before this Command runs the first time
void WinchSpeedPID::Initialize()
{
	_talon->SetF(0.0); // TODO: Set F constant through testing
	_talon->SetP(0.1); // TODO: Set P constant through testing
	_talon->SetI(0.0); // TODO: Set I constant through testing
	_talon->SetD(0.0); // TODO: Set D constant through testing
	 // TODO: set correctionValue through testing
	setPoint = (_talon->GetPosition() - correctionValue);

}

// Called repeatedly when this Command is scheduled to run
void WinchSpeedPID::Execute()
{
	currentPoint = _talon->GetPosition();
	distFromSetPoint = (setPoint - currentPoint);
	targetPositionRotations = (distFromSetPoint / 5.655);
	_talon->Set(targetPositionRotations);
}

// Make this return true when this Command no longer needs to run execute()
bool WinchSpeedPID::IsFinished()
{
	if(_lastButton1 == true)
	{
		return true;
	}
	return false;
}

void WinchSpeedPID::End()
{

}

void WinchSpeedPID::Interrupted()
{

}
