#include <iostream>

// note the use of function prototypes
bool isDivisible (int number, int divisor);
bool isPrime (int number);

using namespace std;

int main()
{
	for (int i = 0; i < 100; i++)
	{
		if ( isPrime(i) )
		{
			cout << i << endl;
		}
	}
}

bool isPrime(int number)
{
	for (int i = 2; i < number; i++)
	{
		return false;
	}
	return true;
}

bool isDivisible(int number, int divisor)
{
	// the modulus symbol (%) will give you the reminder
	// while the division symbol (/) will give you the quotient
	return number % divisor == 0;
	// if the number is divisble then is not a prime
}