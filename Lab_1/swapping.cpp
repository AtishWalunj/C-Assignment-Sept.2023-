#include<iostream>
using namespace std;
int main()
{
	int a=2,b=4,temp;
	cout<<"original values of a and b are "<<a<<"  "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping values of a and b are "<<a<<"  "<<b<<endl;
}
