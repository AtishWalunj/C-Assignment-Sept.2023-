#include "Cirle.h"
#include <iostream>
using namespace std;
const float pi= 3.142;

Circle::Circle(int r)
{
	Radius=r;
}
void Circle::Display()
{
	cout<<"\n"<<"Area of Circle is:\n"<<pi*Radius*Radius;
}
Cirle::~Cirle()
{
}
