#include <iostream>

using namespace std;

int add (int x, int y)
{
	return x + y;
}

int main()
{
	int result = add(1,2);

	cout << "the result is: " << result << '\n';
	cout << "Adding 3 and 4 give us: " << add(3,4);
	cout << '\n';
}