// short circuiting checks with boolean

#include <iostream>

using namespace std;

int x;

int main()
{
	cout << "Please enter a number: \n";
	cin >> x;

	if ( x != 0 && 10 / x < 2 )
	{
		cout << "10 / " << x << " is less than 2\n";
	}
}