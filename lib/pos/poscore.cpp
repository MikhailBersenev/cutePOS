#include "poscore.h"

posCore::posCore():
	state(State_Idle)
{
	databaseConnection = new DatabaseConnection();
}

void posCore::procCommand(Command command)
{
	switch (state) {
	State_

	}
}
