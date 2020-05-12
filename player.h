/*
 * 			In header files we includes all the declaration part
 * 			In Cpp files we includes declaration part
 */







#include <string>		// As we take String input  there fore we need to add String header file

class Player {

	public:
		Player();
		std::string name;		// instead of using namespace we use std in case of header files  to prevent slow down of our program
		int id;
		int runsScored;			/* Player  header involves all the characteristics (data member) a player have		*/
		int ballsPlayed;
		int ballsBowled;
		int runsGiven;
		int wicketsTaken;
};
