#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	Victor *vic1, *vic2;
	Victor *vic3, *vic4;

	RobotDrive *robodrive;

	Joystick *joy;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	DriveTrain();
	void InitDefaultCommand();
	double getThrottle(double);
	void ArcadeDrive(Joystick* joyst);
	void Stop();
};

#endif
