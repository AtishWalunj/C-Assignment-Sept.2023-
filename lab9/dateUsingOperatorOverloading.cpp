#include<iostream>
using namespace std;

class Date2
{
	int day;
	int month;
	int year;
	public:
		Date2(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
		}
		friend void operator-(Date2&,int);
		friend void operator+(Date2&,int);
		void display()
		{
			cout<<"Date=\n"<<day<<"/"<<month<<"/"<<year;
		}
};

void operator-(Date2& x,int y)
{
	x.day=x.day-y;
	x.month=x.month-3;
	x.year=x.year-7;
	cout<<"Date=\n"<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
}

void operator+(Date2& x,int y)
{
	x.day=x.day+y;
	x.month=x.month+3;
	x.year=x.year+7;
	cout<<"Date=\n"<<x.day<<"/"<<x.month<<"/"<<x.year;
}
int main()
{
	int dd,mm,yy;
	
	cout<<"Enter the Day:\n";
	cin>>dd;
	cout<<"Enter the month:\n";
	cin>>mm;
	cout<<"Enter the Year:\n";
	cin>>yy;
	if(dd>=1&&dd<=31 && mm>=1&& mm<=12&&yy>=1)
	{
	Date2 d1(dd,mm,yy);
	d1-1;
	d1+1;
	}
	else
	cout<<"\n\n Please Enter the correct Date...\n\n\n\n";
	
}
