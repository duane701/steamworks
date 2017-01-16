#ifndef TalonSubsystem_H
#define TalonSubsystem_H

#include <memory>
#include <Commands/Subsystem.h>
#include <CANTalon.h>

class TalonSubsystem : public Subsystem {
public:
  static TalonSubsystem& getInstance();

  void InitDefaultCommand();

  void Set(double value);
private:
  TalonSubsystem();

  static std::unique_ptr<TalonSubsystem> self;
  CANTalon talon;

  // Prevent copying
  TalonSubsystem(const TalonSubsystem&) = delete;
  TalonSubsystem& operator=(const TalonSubsystem&) = delete;
};

#endif  // TalonSubsystem_H
