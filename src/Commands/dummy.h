#ifndef dummy_H
#define dummy_H

#include "../CommandBase.h"

class dummy : public CommandBase {
public:
	dummy();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // dummy_H
