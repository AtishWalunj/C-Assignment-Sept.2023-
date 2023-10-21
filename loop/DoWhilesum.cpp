#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum=0;
	
    
	do
	{
		cout<<"Enter the Number:\n";
		cin>>n;
		sum=sum+n;
		
	}while(n!=0);
	
	cout<<"sum of the the given Numbers:\n"<<sum;
	

}
