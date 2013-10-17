// Menu Chooser
// Demonstrates the switch statement

#include <iostream>
using namespace std;

int main() 
{
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n";
	cout << "4 - Exit\n\n";

	int choice=0;
	while (choice != 4) 
	{
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
		case 4:
			break;
		default:
			cout << "You choose incorrectly\n";
		}
	}
        system("pause");
}
