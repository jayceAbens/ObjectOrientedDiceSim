#include "die.h"
#include "time.h"
#include <cmath>

using namespace std;

// Constructor, assigns default values
die::die()
{
	faceCount = 6;
	dieCount = 1;
}

int* die::rollDice()
{
	int* result = new int[dieCount];

	srand(time(NULL));

	for (int i = 0; i < dieCount; i++)
	{
		result[i] = rand() % faceCount;
	}

	return result;
}
