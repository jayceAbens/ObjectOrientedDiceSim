#ifndef DIE_H // ensures header file is loaded only once
#define DIE_H

using namespace std;

class die
{
public:
	// Constructor
	// Precondition:	N/A
	// Postcondition:	default values for faces and number of dice are set
	die();

	// Sets the number of faces for the die/dice to have
	// Precondition:	Constructor has been called
	// Postcondition:	face count is stored
	// Arguments:		int faces_ : face count of dice
	void setFaceCount(int faceCount_) { faceCount = faceCount_; };


	// Sets the number of dice to be rolled
	// Precondition:	Constructor has been called
	// Postcondition:	number of dice is stored
	// Arguments:		int dieCount_ : number of dice in roll
	void setDieCount(int dieCount_) { dieCount = dieCount_; }

	// Dice are rolled, a pointer to an array of results is returned.
	// Precondition:	Constructor has been called, values for faceCount and dieCount are set
	// Postcondition:	Random numbers are generated 1 through faceCount, stored in array result[], and a pointer to result[] is returned 
	// Arguments:		none
	int* rollDice();

	// Sums the results of dice in previous roll, convenient if individual dice values are not needed
	// Precondition:	rollDice() has been called
	// Postcondition:	sum of all elements in result[] array is returned
	// Arguments:		none
	// int getRollTotal();


private:
	int dieCount;	// number of dice rolled
	int faceCount;		// number of faces on the die
};

#endif
