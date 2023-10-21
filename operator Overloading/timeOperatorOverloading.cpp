#include<iostream>
using namespace std;

class Time
{
	int hr;
	int min;
	int sec;
	public:
		Time(int h,int m,int s)
		{
			hr=h;
			min=m;
			sec=s;
		}
		friend Time operator-(Time&,int);
		friend Time operator+(Time&,int);
		void display()
		{
			       cout<<"time:"<<hr<<":"<<min<<":"<<sec<<endl;
             }
};
Time operator-(Time &x,int y)
{
     x.hr= x.hr-y;
     x.min= x.min-y;
     x.sec= x.sec-y;
     return x;
}
Time operator+(Time &x,int y)
{
     x.hr= x.hr+y;
     x.min= x.min+y;
     x.sec= x.sec+y;
     return x;
}
int main()
{
    int hr,min,sec;
    cout<<"Enter hr:";
    cin>>hr;
    cout<<"Enter Min:";
    cin>>min;
    cout<<"Enter sec:";
    cin>>sec;
    
    Time t(hr,min,sec);
    t=t-1;
     t.display();
    t=t+1;
    t.display();
    
    return 0;
}
