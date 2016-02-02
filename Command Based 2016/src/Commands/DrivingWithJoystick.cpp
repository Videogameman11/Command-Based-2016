#include "DrivingWithJoystick.h"

DrivingWithJoystick::DrivingWithJoystick()  :  Command("DrivingWithJoystick") {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(CommandBase::drivetrain.get());
}

// Called just before this Command runs the first time
void DrivingWithJoystick::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DrivingWithJoystick::Execute()
{
	CommandBase::drivetrain->ArcadeDrive(CommandBase::oi->GetJoystick());
}

// Make this return true when this Command no longer needs to run execute()
bool DrivingWithJoystick::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DrivingWithJoystick::End()
{
	CommandBase::drivetrain->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DrivingWithJoystick::Interrupted()
{
	End();
}
