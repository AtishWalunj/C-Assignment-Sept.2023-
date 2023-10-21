#include<iostream>
using namespace std;
int main()
{
	int base,exp,power=1;
	cout<<"enter base: ";
	cin>>base;
	cout<<"enter exp: ";
	cin>>exp;
	for(int i=1;i<=exp;i++)
	{
		power=power*base;
	}
	cout<<"value="<<power;
	
	return 0;
}
