#include <iostream>
#include "die.h"

using namespace std;

int main()
{
	die die1;

	die1.setDieCount(4);
	die1.setFaceCount(8);

	int* rollResult = new int[2];
	
	rollResult = die1.rollDice();

	for (int i = 0; i < 4; i++)
	{
		cout << "Die " << 1 << " = " << rollResult[i] << endl;
	}

	return 0;
}