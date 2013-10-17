// Menu Chooser
// Demonstrates the switch statement

#include <iostream>
using namespace std;

int main() 
{
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Hard\n\n";

	int choice;
	cout << "Choice: ";
	cin >> choice;

	if (choice == 1) cout << "You picked Easy.\n";
        if (choice == 2) cout << "You picked Hard.\n";
        system("pause");
}
