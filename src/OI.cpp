#include <Commands/PositionControl.h>
#include "OI.h"
//NOTE: That will be the command that autonomous will create

OI::OI()
	: operatorStick(new Joystick(0))
{
	new JoystickButton(operatorStick, 1);
	positionControl = new JoystickButton(operatorStick, 1);
	positionControl->WhenPressed(new PositionControl());
}

Joystick* OI::getOperatorStick()
{
	return operatorStick;
}

OI::~OI()
{
	delete operatorStick;
}

Button* OI::activatePositionControl()
{
	return positionControl;
}
