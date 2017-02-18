#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick* operatorStick;
public:
	OI();
	Joystick* getOperatorStick();
};

#endif
