#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

struct student
{
	string lastName;
	string firstName;
	int age;
	char gpa;
};

int main()
{
	ifstream ifs("students.txt");
	int n;
	ifs >> n;
	vector<student> v(n);
	vector<student>::iterator iter;
	student * sp;

	for (int i=0; i<n; i++)
	{
		ifs >> v[i].firstName >> v[i].lastName >> v[i].age >> v[i].gpa;
	}
	
	for (iter=v.begin(); iter!=v.end(); iter++)
		cout << (*iter).firstName << endl;

	for (int i=0; i<v.size(); i++)
		cout << v[i].firstName << endl;

	sp = &v[3];

	cout << sp->lastName << endl;;
	cout << (*sp).gpa << endl;

	int a= 100;
	int * b = &a;
	cout << *b << endl;
	cout << &a << endl;

	system("pause");

}