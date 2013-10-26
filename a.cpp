#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "hello\n";
	}
};

class B
{
public: 
	B()
	{
		//i++;
		cout << "world\n";
	}
};

class C: public B, public A
{
public:
	//explicit C() : B(1)
	C()
	{
		cout << "I said: \n";
	}

};

int main()
{
	//A a(1);
	//B b;
 	C c;	
        
}	

