#ifndef _SQUARE_H
#define _SQUARE_H
#include "Area.h"

//subclass Square under Area
class Square : public Area {
	public:
		//constructor
		Square(const char *n, double a);
		~Square();
		//method for area
		double calcArea() const;
		//method for perimeter calc
		double calcPer() const;
	private:
		//properties
		double length;
};

#endif
