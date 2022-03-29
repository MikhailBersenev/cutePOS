#ifndef ABSTRACTSTATEMACHINE_H
#define ABSTRACTSTATEMACHINE_H
typedef void (*Command)();

class AbstractStateMachine
{
public:
	AbstractStateMachine();
	virtual void reset() = 0;
	virtual void procCommand(Command command) = 0;

};

#endif // ABSTRACTSTATEMACHINE_H
