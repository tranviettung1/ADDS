#include "Referee.h"
#include "Computer.h"
#include "Human.h"


Referee::Referee(){
	result = ' ';
}

char Referee::refGame(Human player1, Computer player2){
	char moved = player1.makeMove();
	if ( moved == 'R'){
		result = 'T';
	}
	else if (moved == 'S'){
		result = 'L';
	}
    else if (moved == 'P'){
    	result = 'W';
	}
	return result;
}


