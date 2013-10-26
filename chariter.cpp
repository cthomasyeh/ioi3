#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

int main()
{
 	string s = "this is a test!";	
	for (string::iterator iter=s.begin(); iter != s.end(); iter++) cout << *iter;
	//cout << distance(s.cbegin(), iter);

}
