#ifndef DrivingWithJoystick_H
#define DrivingWithJoystick_H

#include "../CommandBase.h"
#include "WPILib.h"

class DrivingWithJoystick: public Command
{
public:
	DrivingWithJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif

//Note: this file links the joystick from the OI Trigger to the DriveTrain Subsystem
