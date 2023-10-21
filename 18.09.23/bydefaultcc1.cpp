#include<iostream>
using namespace std;
#include<string.h>


class date{
	
	int dd, mm, yy;
	public:
		void show();
		date(int , int , int);
};

void date::show(){
	cout<<"date is: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
	
}
date::date(int d, int m, int y)
{
	dd=d;
	mm=m;
	yy=y;
	
 } 
int main()
{
	
	date d(8,8,17);
	d.show();
	date d1(d);
	d1.show();
 } 
