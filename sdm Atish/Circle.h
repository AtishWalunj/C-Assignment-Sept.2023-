#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
	int Radius;
	public:
		Circle();
		Circle(int r);
		void Display();
		~Circle();
	protected:
};

#endif
