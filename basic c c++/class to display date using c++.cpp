#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public: 
	void acceptParam(int,int,int);
	    
		void getData()
		{
			cout<<"accept date:\n";
			cin>>dd>>mm>>yy;
		
		}
		void display()
		{
			cout<<"output date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		
		void setDate(int r)
		{
			dd=r;
		}
		int getDate()
		{
			return dd;
		}
};

void date::acceptParam(int d,int m,int y)
{
		dd=d;
		mm=m;
		yy=y;
} 

int main()
{
	date c1;
	cout<<"size of object c1 is:"<<sizeof(c1)<<endl;
	c1.getData();
	c1.display();
	date c2;
	c2.acceptParam(10,2,2001);
	c2.display();
	c2.setDate(20);
	c2.display();
	cout<<"modified real Part is:"<<c2.getDate()<<endl;
	return 0;
 } 
 
