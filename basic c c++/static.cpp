#include<iostream>
using namespace std;
int show();
int main()
{
cout<<"showvalue"<<show()<<endl;
cout<<"showvalue"<<show()<<endl;
cout<<"showvalue"<<show()<<endl;
}
int show()
{
	static int x=0;
	cout<<x<<endl;
	x++;
	return x;
}
