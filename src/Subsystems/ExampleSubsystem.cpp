#include "ExampleSubsystem.h"

#include "../RobotMap.h"

ExampleSubsystem::ExampleSubsystem() :
    frc::Subsystem("ExampleSubsystem"),
    talon(new CANTalon(kTalonID))
{

}

void ExampleSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

