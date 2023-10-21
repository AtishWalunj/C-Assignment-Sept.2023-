#include<iostream>
using namespace std;
int main()
{
	
	for(int i=1;i<=10;i++)
	{
		if(i==5)
		{
			continue;
			cout<<"5 has been omitted"<<endl;
		}
		cout<<i<<endl;
	}
	
	
	
	return 0;
}
