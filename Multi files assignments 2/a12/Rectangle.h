#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

//subclass Rectangle under Area
class Rectangle : public Area {
	public:
		//constructor
		Rectangle(const char *n, double a, double b);
		~Rectangle();
		//method for area
		double calcArea() const;
		//method for perimeter calc
		double calcPer() const;
	private:
		//properties
		double length;
		double width;
};

#endif
