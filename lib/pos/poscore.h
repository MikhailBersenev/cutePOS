#ifndef POSCORE_H
#define POSCORE_H
#include <lib/utils/abstractstatemachine.h>
#include <lib/network/database/databaseconnection.h>

class posCore: public AbstractStateMachine
{
public:
	posCore();
	void reset() override;
	void procCommand(Command command) override;
private:
	enum State
	{
		State_Idle = 0,
		State_Wait,
		State_Sale,
		State_SaleComplete,
		State_AdminPanel,
	};
	State state;
	DatabaseConnection *databaseConnection;


	void gotoStateWait();
	void stateWaitCommand(Command command);
	void gotoStateSale();
	void stateSaleCommand(Command command);
	void gotoStateSaleComplete();
	void gotoStateAdminPanel();
	void stateAdminPanelCommand(Command command);


};

#endif // POSCORE_H
