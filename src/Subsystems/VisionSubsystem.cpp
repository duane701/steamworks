#include "VisionSubsystem.h"
#include "../RobotMap.h"

static const int kVisionDeviceId = 0;

std::shared_ptr<VisionSubsystem> VisionSubsystem::self;

std::shared_ptr<VisionSubsystem> VisionSubsystem::getInstance() {
  if (! self) {
    self = std::shared_ptr<VisionSubsystem>(new VisionSubsystem());
  }
  return self;
}

VisionSubsystem::VisionSubsystem()
: Subsystem("VisionSubsystem")
, vision(kVisionDeviceId)
{

}

void VisionSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

int VisionSubsystem::GetDistanceInches() const {
  return vision.GetDistanceInches();
}
