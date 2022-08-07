#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;

int main(){
	Human player1;
	Computer player2;
	Referee referee;
	cout << referee.refGame(player1, player2) <<endl;
	return 0;
}

