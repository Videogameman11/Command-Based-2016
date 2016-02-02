#include "Autonomous.h"
/* #include "Command1.h"
 * #include "Command2.h"
 *
 * Examples of .h files
 */

#include <iostream>

Autonomous::Autonomous() :  CommandGroup("Autonomous") {
	/* AddSequential(new Command1());
	 * AddSequential(new Command2())
	 *
	 * Examples for calling autonomous commands
	 * (each sequential command requires a file)
	 */
}
