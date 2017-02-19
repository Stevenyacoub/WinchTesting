#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "Commands/PositionControl.h"
#include "Subsystems/Winch.h"
#include "RobotMap.h"
using namespace frc;
// Initialize a single static instance of all of your subsystems to NULL
//SingleMotor* CommandBase::motor = NULL;
std::unique_ptr<OI> CommandBase::oi;
Winch* CommandBase::winch = nullptr;


CommandBase::CommandBase(const std::string &name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	//winch.reset(new Winch(WINCH_PDP_PORT, WINCH_CAN_ID));
	//motor = new SingleMotor();
	winch = new Winch(WINCH_PDP_PORT, WINCH_CAN_ID);
	oi = std::make_unique<OI>();
}
