#ifndef ECLIPSE_H
#define ECLIPSE_H

#include "Shape.h"

class Eclipse : public Shape
{
	double len,height;
	public:
		Eclipse();
		Eclipse(double l,double h);
		void Display();
		~Eclipse();
	protected:
};

#endif
