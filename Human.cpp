#include "Human.h"
#include <iostream>

Human::Human(){
	move = ' ';
}
Human::~Human(){

}
char Human::makeMove(){
	std::cout << "Enter move: " ;
	std::cin >> move;
	return move;
}
