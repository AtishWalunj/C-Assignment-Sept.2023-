#include<iostream>
using namespace std;
int main()
{
/*	int m1,m2,m3,m4,m5;
	cout<<"enter the marks of five student";
	cin>>m1>>m2>>m3>>m4>>m5;
	float avg=float(m1+m2+m3+m4+m5)/5;
	cout<<"avg of five student"<<avg<<endl;
	return 0;*/
	int m[5];
	int i;
	int sum=0;
	cout<<"enter the marks of student\n";
	for(i=0;i<5;i++)
	{
		cin>>m[i];
		
		sum= sum+m[i];
	}
    float avg=float(sum)/5;
    cout<<"avg of five student"<<avg<<endl;
    return 0;
}
