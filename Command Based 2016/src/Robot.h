/*
 * Robot.h
 *
 *  Created on: Jan 20, 2016
 *      Author: Caleb
 */

#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_

#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/Autonomous.h"

#include "CommandBase.h"

class Robot: public IterativeRobot {
public:
private:
	Autonomous autonomousCommand;
	SendableChooser *chooser;
	LiveWindow *lw = LiveWindow::GetInstance();

	void RobotInit();
	void DisabledInit();
	void DisabledPeriodic();
	void AutonomousInit();
	void AutonomousPeriodic();
	void TeleopInit();
	void TeleopPeriodic();
	void TestPeriodic();
};

#endif /* SRC_ROBOT_H_ */
