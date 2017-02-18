#include "dummy.h"
#include <iostream>

dummy::dummy() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void dummy::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void dummy::Execute() {
	std::cout<<"The thing you're testing works!";
}

// Make this return true when this Command no longer needs to run execute()
bool dummy::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void dummy::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void dummy::Interrupted() {

}
