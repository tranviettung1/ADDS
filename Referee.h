#ifndef REFEREE
#define REFEREE
#include "Computer.h"
#include "Human.h"

class Referee{
	public:
		Referee();
		//~Referee()?
		char refGame(Human player1, Computer player2);
	private:
		char result;
};

#endif 
