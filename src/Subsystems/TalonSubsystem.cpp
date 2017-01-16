#include "TalonSubsystem.h"
#include "../RobotMap.h"

std::unique_ptr<TalonSubsystem> TalonSubsystem::self;

TalonSubsystem::TalonSubsystem()
: Subsystem("TalonSubsystem")
, talon(kTalonID)
, vision(kVisionID ){

}

void TalonSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void TalonSubsystem::Set(double value) {
  talon.Set(value);
}

TalonSubsystem& TalonSubsystem::getInstance() {
  if (! self) {
    self = std::unique_ptr<TalonSubsystem>(new TalonSubsystem);
  }
  return *self;
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
