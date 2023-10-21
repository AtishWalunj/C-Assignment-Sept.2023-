#include "Eclipse.h"



#include <iostream>
using namespace std;

Eclipse::Eclipse()
{
}
Eclipse::Eclipse(double l,double h)
{
	len=l;
	height=h;
}
void Eclipse::Display()
{
	cout<<"\nArea of the Eclipse(pi*length*height):\n"<<len*height*3.142;
}

Eclipse::~Eclipse()
{
}
