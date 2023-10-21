// call by referance
#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a,b;
	cout<<"enter the values of a and b\n";
	cin>>a>>b;
	cout<<"before swappimg a and b:"<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"after swapping a and b:"<<a<<" "<<b<<endl;
	return 0;
	
}
void swap(int& p,int& q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"after swapping a and b:"<<p<<" "<<q<<endl;
}
