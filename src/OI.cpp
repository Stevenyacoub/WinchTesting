#include "OI.h"

OI::OI()
	: joystick(new Joystick(0))
{
}

Joystick* OI::getJoystick()
{
	return joystick;
}
