#ifndef TalonCommand_H
#define TalonCommand_H

#include <Commands/Command.h>

class TalonCommand : frc::Command {
public:
	TalonCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // TalonCommand_H
