#include "OI.h"
/* #include "Commands/ExampleCommand.h"
 * Example .h file
 */
#include "Commands/Autonomous.h"

OI::OI()
{	// Process operator interface input here.

	joystick = new Joystick(0);

	Button1 = new JoystickButton(joystick, 1);
		/*Button1 -> WhenPressed(new ExampleCommand());
		* Example Command for buttons
		* Make sure to include the command's .h file
		*/
	Button2 = new JoystickButton(joystick, 2);

	Button3 = new JoystickButton(joystick, 3);
}

Joystick* OI::GetJoystick()
{
	return joystick;
}
