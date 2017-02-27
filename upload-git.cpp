#include <iostream>
#include <string>

using namespace std;

int main()
{
	string username, projectname, description, cmdPost, cmdAdd, cmdPush, answer;
	answer = "no";
	
	system("clear");
	cout << "Enter Github username: ";
	cin >> username;
	cout << "Enter Github project name: ";
	cin >> projectname;
	cout << "Enter project's description: ";
	cin >> description;


/*	cmdPost = "curl -u '" + username +
		"' https://api.github.com/user/repos -d " +
		"'{\"name\":\"" + projectname + "\",\"description\":\"" +
		description + "\"}'";

	// creating github repo from CLI
	system(cmdPost.c_str());
*/

	cout << " ";
	cout << "For files to be uploaded you should start a typical Github workflow.\n";
	cout << "You can do so by executing:\n";
	cout << "git init\n";
	cout << "git add\n";
	cout << "git commit\n";
	cout << "git remote add origin git@github.com:my_user/projectname.git\n";
	cout << "git push origin master\n";
	cout << endl;

	cout << "Do you want me to start a typical github workflow for you?: ";
	getline(cin, answer, '\n'); // for some reason my compiler is ignoring this instruction
	getline(cin, answer, '\n');

	while (answer == "yes" || answer == "Yes" || answer == "YES" || answer == "Y" || answer == "y")
	{
		// executing git workflow
		system("eval \"$(ssh-agent -s)\"");
		system("ssh-add -K ~/.ssh/*id_rsa");
		system("git init");	
		system("git add -A");
		system("git commit -am \"First commit\"");
		
		// define where to push
		// git remote add origin git@github.com:My_user/projectname.git
		cmdAdd = "git remote add origin git@github.com:" + username + "/" + projectname + ".git";

		// push local repo to Github
		// git push origin master
		cmdPush = "git push origin master";
		system(cmdAdd.c_str());
		system(cmdPush.c_str());
		cout << endl;
		cout << "Initial workflow completed!\n";
		break;
	}
	cout << endl;
	cout << "Enjoy!\n";
}
