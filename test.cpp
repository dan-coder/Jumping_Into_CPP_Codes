#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
	string answer = "no";
	cout << "Do you want me to start a typical github workflow for you?: ";
	getline(cin, answer, '\n');

	while (answer == "yes" || answer == "Yes" || answer == "YES" || answer == "Y" || answer == "y")
	{
		// executing git workflow
		system("git init");	
		system("git add -A");
		system("git commit -am \"First commit\"");
		
		// define where to push
		// git remote add origin git@github.com:My_user/projectname.git
		cmdAdd = "git remote add origin git@github.com:" + username + "/" +
		projectname + ".git";

		// push local repo to Github
		// git push origin master
		cmdPush = "git push origin master";
		system(cmdAdd.c_str());
		system(cmdPush.c_str());
		cout << endl;
		cout << "Initial workflow completed!\n";
		break;
	}
}
