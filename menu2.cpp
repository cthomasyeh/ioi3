// Menu Chooser
// Demonstrates the switch statement

#include <iostream>
using namespace std;

int main() 
{
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";

	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch (choice)
	{
		case 1: 
			cout << "You choose Easy \n";
			break;	
		case 2:
			cout << "You choose Normal \n";
			break;
		case 3:
			cout << "You choose Hard \n";
			break;
		default:
			cout << "You choose incorrectly\n";
	}
        system("pause");
}
