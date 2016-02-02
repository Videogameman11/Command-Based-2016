#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick* joystick;
	JoystickButton *Button1, *Button2, *Button3;

public:
	OI();
	Joystick* GetJoystick();
};

#endif
