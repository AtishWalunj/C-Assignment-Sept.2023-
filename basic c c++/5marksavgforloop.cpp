#include<iostream>
using namespace std;

int main(){
	int m1,m2,m3,m4,m5;
	for(int i=1;i<=5;i++)
	{
	cout<<"\nenter 5 Marks :\n";
	cin>>m1>>m2>>m3>>m4>>m5;
	int sum =m1+m2+m3+m4+m5;
	int avg = (float)sum/5;
	cout<<"avg of 5 marks of 5 students:"<<avg;
	}
return 0;	
	}

