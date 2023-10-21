#include "Circle.h"

#include <iostream>
using namespace std;

Circle::Circle()
{
}
Circle::Circle(int r)
{
	Radius=r;
}
void Circle::Display()
{
	cout<<"\nArea of the Circle:\n"<<Radius*Radius*3.142;
}
Circle::~Circle()
{
}
