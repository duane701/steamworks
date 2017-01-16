#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>

class ExampleSubsystem: public frc::Subsystem {
public:
	ExampleSubsystem();
	void InitDefaultCommand() override;

	static const int kTalonID = 27;
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
    std::shared_ptr<CANTalon> talon;
};

#endif  // EXAMPLE_SUBSYSTEM_H
