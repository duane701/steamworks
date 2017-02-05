#ifndef VisionSubsystem_H
#define VisionSubsystem_H

#include <Commands/Subsystem.h>

#include "Devices/CANVision.h"

class VisionSubsystem : public frc::Subsystem {
private:
  static std::shared_ptr<VisionSubsystem> self;
  VisionSubsystem();

  CANVision vision;
public:
  static std::shared_ptr<VisionSubsystem> getInstance();

  void InitDefaultCommand();

  int GetDistanceInches() const;
};

#endif  // VisionSubsystem_H
