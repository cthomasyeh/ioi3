// Guess My Number
// The classic number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));  //seed random number generator
	int secretNumber = rand() % 100 + 1;  // random number between 1 and 100
	int tries = 0;
	int guess=101;
   
	cout << "\tWelcome to Guess My Number\n\n";
	cout << "\tGuess a number between 1 and 100:\n";

	while (guess != secretNumber)	
	{
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > secretNumber)
		{
			cout << "Too high!\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << "Too low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}

	} 

    system ("pause");
}