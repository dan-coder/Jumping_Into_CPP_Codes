// This program is design to perform DNS queries (SOA, MX & A) using dig.
// The dig program must be present in the OS for this program to work.
// dig can be installed by issuing apt-get install dig or yum install dig or apt install dig

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string domains[25]; // to store 26 domains
	
	for (int i = 0; i < 25; i++)
	{
		cout << "Enter domain: " << i << endl;
		cin >> domains[i];
	}
	system("clear");
	cout << endl << "Performing DNS queries (SOA, MX, CNAME & A)" << endl << endl;

	for (int i = 0; i < 25; i++)
	{
		cout << "Domain: " << domains[i] << endl;
		string command1 = "dig +trace -t SOA " + domains[i] + " | grep 'IN' | grep 'SOA'";
		string command2 = "dig +trace -t MX " + domains[i] + " | grep 'IN' | grep 'MX'";
		string command3 = "dig +trace -t CNAME " + domains[i] + " | grep 'IN' | grep 'CNAME'";
		string command4 = "dig +trace -t A " + domains[i] + " | grep 'IN' | grep 'A'";
		system(command1.c_str());
		system(command2.c_str());
		system(command3.c_str());
		system(command4.c_str());
		cout << endl;
	}
}
