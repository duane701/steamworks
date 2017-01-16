#include "TalonCommand.h"
#include "../Subsystems/TalonSubsystem.h"

TalonCommand::TalonCommand() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());

  Requires(&TalonSubsystem::getInstance());

}

// Called just before this Command runs the first time
void TalonCommand::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TalonCommand::Execute() {
  TalonSubsystem::getInstance().Set(27.0);
}

// Make this return true when this Command no longer needs to run execute()
bool TalonCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TalonCommand::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TalonCommand::Interrupted() {

}
