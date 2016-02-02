#ifndef SRC_COMMANDS_AUTONOMOUS_H_
#define SRC_COMMANDS_AUTONOMOUS_H_

#include "Commands/CommandGroup.h"

class Autonomous: public CommandGroup {
public:
	Autonomous();
};

/* Link Sendable Chooser with Autonomous.cpp so different autonomous codes can be chosen
 * and link Sendable Chooser with Robot.cpp with SmartDashboard so the driver can see the choices
 */

#endif /* SRC_COMMANDS_AUTONOMOUS_H_ */
