#include <iostream>
#include <ctime>
//#include <random>
using namespace std;

int main()
{
	
	//default_random_engine engine(time(0));
	//uniform_int_distribution<unsigned int> randomInt (1, 100);
	//int secretNumber = randomInt(engine);
	
	srand( time(0) );
	int secretNumber = rand() % 100 + 1;
	
	cout << "secretNumber is: " << secretNumber<< endl;
	system("pause");
	 
}