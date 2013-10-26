#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
	vector<string> sv(5);
	sv[0] = "this";
	sv[1] = "is";
	sv[2] = "a";
	sv[3] = "test";
	vector<string>::const_iterator iter;
	for (auto iter = sv.cbegin(); iter != sv.cend(); iter++) cout << *iter << endl;
	cout << distance(sv.cbegin(), iter);

}
