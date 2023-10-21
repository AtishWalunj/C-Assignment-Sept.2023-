#include<iostream>
using namespace std;
int main()
{
	char* names[3]={"Atharva","sujit","omkar"};
	for(int i=0;i<=3;i++)
	{
		cout<<names[i]<<endl;
		cout<<(names+i)<<endl;
		cout<<*(names+i)<<endl;
		for(int j=0;j<=3;j++)
		{
		
		cout<<(*(names+2)+j)<<endl;
	}
	}
}
