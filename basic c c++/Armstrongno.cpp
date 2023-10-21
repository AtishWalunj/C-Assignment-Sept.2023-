#include<iostream>
using namespace std;

int main()
{
	int x;
	int sum;

	int i;
	cout<<"Enter the number";
	cin>>i;
	int org=i;
	while( i!=0)
	{
		x=i%10;
		i=i/10;
		sum=sum+(x*x*x);
	}
	if(sum==org)
	{
		cout<<"Num. is Arm. Number"<<sum;
	
	}
	else
	{
		cout<<"number is not Arm. number";
	}
}

