#include<iostream>
using namespace std;
#include<string.h>

class date
{
 int dd,mm,yy;
 public:
 void show();	
 date(int,int,int);
 date(date &);
};

date::date(date& d_new)
{
	dd=d_new.dd;
	mm=d_new.mm;
	yy=18;
}
date::date(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
}
void date::show()
{
	cout<<"date is:"<<dd<<"/"<<mm<<"/"<<yy<<endl;
}

int main()
{
	date d(8,8,17);
	d.show();
	date d1(d);
	d1.show();
}
