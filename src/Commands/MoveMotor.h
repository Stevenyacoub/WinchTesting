#ifndef MoveMotor_H
#define MoveMotor_H

#include "../CommandBase.h"
#include "WPILib.h"

class MoveMotor: public CommandBase
{
public:
	MoveMotor();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
