#ifndef WinchSpeedPID_H
#define WinchSpeedPID_H

#include "../CommandBase.h"
#include "../Subsystems/Winch.h"
using namespace frc;

class WinchSpeedPID : public CommandBase {

private:
	Joystick* winchMove;
	CANTalon* _talon;
	bool _lastButton1;
	double targetPositionRotations;
	double currentPoint;
	double setPoint;
	double correctionValue;
	double moveValue;
	double distFromSetPoint;

public:
	WinchSpeedPID();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // WinchSpeedPID_H
