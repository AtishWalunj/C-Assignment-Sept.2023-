#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
}
Rectangle::Rectangle(int l,int b){
	len=l;
	bre=b;
}
void Rectangle::Display()
{
	cout<<"\n"<<"area of Rectangle="<<len*bre<<endl;
}
Rectangle::~Rectangle()
{
}

