#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int randRange (int low, int high)
{
	//return rand() % ( high - low + 1 ) + low; // gives you combinations from 1-10
	//return rand() % ( high - low + 11 ) + low; // gives you combinations from 1-20
	//return rand() % ( high - low + 91 ) + low; // gives you 1-100 combinations
	return rand() % ( high - low + 991 ) + low; // gives you 1,000 combinations
}

int main()
{
	// srand take a number and sets it as your seed
	// you just call srand just one, at the very start to generate 1st seed
	// the time function returns a number representing the current time
	srand(time (NULL)); // create seed number based on time
	for (int i = 0; i < 1000; ++i)
	{
		cout << randRange(1, 10) << '\n';
	}

// testing random seed
	int srand_seed = time (NULL);
	srand(srand_seed);
	cout << "Random seed (srand) based on time: " << srand_seed << '\n';

// testing static seed
/*	int srand_seed = 35434333;
	cout << "Static seed: " << srand_seed << '\n';
	srand(srand_seed);
*/
}