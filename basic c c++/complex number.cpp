#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		void getData()
		{
			cout<<"Accept real and imaginary values:\n";
			cin>>real>>img;
		
		}
		void display()
		{
			cout<<"Complex Number is:\n"<<real<<"+"<<img<<"i"<<endl;
		}
		void acceptParam(int,int);
		void setReal(int r)
		{
			real=r;
		}
		int getReal()
		{
			return real;
		}
};

void complex::acceptParam(int r,int i)
{
		real=r;
		img=i;
} 

int main()
{
	complex c1;
	cout<<"size of object c1 is:"<<sizeof(c1)<<endl;
	c1.getData();
	c1.display();
	complex c2;
	c2.acceptParam(10,2);
	c2.display();
	c2.setReal(20);
	c2.display();
	cout<<"modified real Part is:"<<c2.getReal()<<endl;
	return 0;
 } 
 
