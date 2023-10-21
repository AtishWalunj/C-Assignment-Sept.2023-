#include<iostream>
using  namespace std;
class A
{
	public:
		A()
		{
			cout<<"inside constructor of class A"<<endl;
		}
		~A()
		{
			cout<<"inside destructor of class A"<<endl;
		}
};

class B:public A
{
	public:
		B()
		{
			cout<<"inside constructor of class B"<<endl;
		}
		~B()
		{
			cout<<"inside destructor of class B"<<endl;
		}
};

class C: public A
{
	public:
		C()
		{
			cout<<"inside constructor of class C"<<endl;
		}
		~C()
		{
			cout<<"inside destructor of class C"<<endl;
		}
};

int main()
{
	B boj;
	C coj;

	
	return 0;
}
