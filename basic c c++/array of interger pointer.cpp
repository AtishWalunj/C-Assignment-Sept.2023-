#include<iostream>
using namespace std;
int main()
{
	int ptr1[5];
	int*ptr2[5];
	cout<<"enter the five number\n";
	for(int i=0;i<=4;i++)
	{
		cin>>ptr1[i];
	}
	for(int i=0;i<=4;i++)
	{
		ptr2[i]=&ptr1[i];
	}
	cout<<"the value are\n";
	for(int i=0;i<=4;i++)
	{
		cout<<*ptr2[i]<<endl;
	}
	cout<<"size of (ptr1)"<<sizeof(ptr1)<<endl;
	cout<<"size of (*ptr2)"<<sizeof(*ptr2)<<endl;
	
}
