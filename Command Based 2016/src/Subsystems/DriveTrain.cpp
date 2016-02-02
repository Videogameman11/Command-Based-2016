#include "DriveTrain.h"
#include "Commands/DrivingWithJoystick.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain() :
		Subsystem("DriveTrain")
{
	vic1 = new Victor(0); //Frontleft motor
	vic2 = new Victor(1); //Frontright motor
	vic3 = new Victor(2); //Backleft motor
	vic4 = new Victor(3); //Backright motor

	joy = new Joystick(0);

	robodrive = new RobotDrive(vic1, vic2, vic3, vic4);

	robodrive->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);
	robodrive->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
	robodrive->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
	robodrive->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DrivingWithJoystick);
}

double DriveTrain::getThrottle(double val){
	 float throttle = joy->GetThrottle();
	 throttle++;
	 throttle = throttle *((1-val)/2);
	 throttle+= val;
	 return throttle;
}

void DriveTrain::ArcadeDrive(Joystick* joyst)
{
	float throttle = DriveTrain::getThrottle(.5);
		robodrive->ArcadeDrive(joyst->GetY()*throttle, joyst->GetTwist()*throttle, true);
}

void DriveTrain::Stop()
{
	robodrive->ArcadeDrive(0.0, 0.0);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
