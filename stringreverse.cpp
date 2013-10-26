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
	for (iter = sv.cend()-1; iter != sv.cbegin()-1; iter--) cout << *iter << endl;
	cout << distance(sv.cbegin(), iter);

}
