#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick* operatorStick;
	Button* positionControl;
public:
	OI();
	~OI();
	Joystick* getOperatorStick();
	Button* activatePositionControl();
};

#endif
