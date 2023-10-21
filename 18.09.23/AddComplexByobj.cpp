#include<iostream>
using namespace std;
#include<string.h>


class complex {
	
	int real, img;
	public:
		void show()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		void get();
	complex add(complex& t)
{
	complex c3;
	c3.real=this->real+t.real;
	c3.img=this->img+t.img;
	return c3;
}
};

//complex::
void complex::get()
{
	cout<<"enter the value real and img. no:";
	cin>>real>>img;
}
int main()
{
	complex c1,c2;
	c1.get();
	c2.get();
	complex c4 =c1.add(c2);
	c4.show();
}
