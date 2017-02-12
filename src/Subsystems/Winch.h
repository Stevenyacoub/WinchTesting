#ifndef Winch_H
#define Winch_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Winch: public Subsystem
{
private:
	TalonSRX* talonMotor;
	Encoder* distEncoder;
	PowerDistributionPanel pdp;
	int winchPortNumber;
	uint32_t canBUSID;

public:
	Winch(int portNumber,uint32_t canID);
	~Winch();
	double getDistance();
	double getRate();
	double getCurrent();
	void resetEncoder();
	void setSpeed(double s);
	void stopMotor ();
	void InitDefaultCommand();

};

#endif
