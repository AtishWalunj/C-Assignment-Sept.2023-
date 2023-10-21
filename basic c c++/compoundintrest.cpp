#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	int pri,rate,time;
	
	cout<<"enter the values of principle,rate and time:";
	
	
	cin>>pri>>rate>>time;
	float sum =(float) (pri* pow((1+rate/100),time));

	cout<<"value of sum: "<<sum<<endl;
	return 0;
}
