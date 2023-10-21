#include<iostream>
using namespace std;
int add(int*,int*,int*);// call by address
int main()
{
	int a,b;
	int sum;
	cout<<"Enter the values of a and b:"<<endl;
	cin>>a>>b;
	cout<<"Before Addition values of a and b:"<<a<<","<<b<<endl;
	add(&a,&b,&sum);
	cout<<"After addition of a and b value is :"<<sum<<endl;
	
}

int add(int *p,int *q,int* s)
{
	
	*s=*p+*q;
	
	cout <<"addition in funtion by user defined:"<<*s<<endl;
	
	
}
