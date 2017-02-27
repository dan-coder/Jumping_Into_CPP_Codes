#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
float NUM1,NUM2,NUM3,NUM4,NUM5,NUM6,NUM7,NUM8,Total1,Total2,Total3,Total4; 

using std::cout;
using std::setw;

system("clear");

cout <<"SUMA"; 
cout << setw(8) << "RESTA";
cout << setw(8) << "MULTI";
cout << setw(8) << "DIV\n";

cin >> NUM1;
cin >> setw(10) >> NUM2;
cin >> setw(10) >> NUM3;
cin >> setw(10) >> NUM4;
cin >> NUM5;
cin >> setw(10) >> NUM6;
cin >> setw(10) >> NUM7;
cin >> setw(10) >> NUM8;

Total1 = NUM1 + NUM5;
Total2 = NUM2 - NUM6;
Total3 = NUM3 * NUM7;
Total4 = NUM4 / NUM8;


cout <<"___"; 
cout << setw(8) << "___";
cout << setw(8) << "___";
cout << setw(8) << "___\n";



cout <<Total1; 
cout << setw(8) << Total2;
cout << setw(9) << Total3;
cout << setw(8) << Total4;
cout <<"    \n";
cout << endl;


return 0;

}