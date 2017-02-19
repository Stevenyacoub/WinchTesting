#include "Winch.h"
#include "../RobotMap.h"
#include "WPILib.h"


Winch::Winch(int portNumber, uint32_t canID):
	Subsystem("Winch"),talonMotor(new TalonSRX(canID)),
	distEncoder(new Encoder(WINCH_ENCODER1 ,WINCH_ENCODER2)),
	winchPortNumber(portNumber),
	canBUSID(canID)
{
	distEncoder->SetDistancePerPulse(1.0);
}

Winch::~Winch()
{
   delete distEncoder;
   delete talonMotor;

}

void Winch::resetEncoder()
{
    distEncoder->Reset();
}

double Winch::getCurrent()
{
	double current = pdp.GetCurrent(winchPortNumber);
	return current;

}

double Winch::getDistance()
{
    // Average of both encoders (must negate to get proper direction)
    return distEncoder->GetDistance();

}

double Winch::getRate()
{

    return distEncoder->GetRate();

}

void Winch::setSpeed(double s)
{
    talonMotor->SetSpeed(s);

}

void Winch::stopMotor()
{
    talonMotor->SetSpeed(0);

}

void Winch::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
