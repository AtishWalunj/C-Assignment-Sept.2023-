#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int*b=&a;
	int **c=&b;
	cout<<a<<" "<<*b<<" "<<**c<<endl;
	char p='A';
	char*q=&p;
	char**r=&q;
	cout<<p<<" "<<*q<<" "<<**r<<endl;
	return 0;
}
