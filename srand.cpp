#include <cstdlib>
#include <ctime>

int main()
{
	// srand take a number and sets it as your seed
	// you just call srand just one, at the very start to generate 1st seed
	// the time function returns a number representing the current time
	srand(time (NULL)); // to generate a seed based on time
}