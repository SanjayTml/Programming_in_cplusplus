#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

//subclass Circle under Area
class Circle : public Area {
	public:
		//comstructor
		Circle(const char *n, double a);
		~Circle();
		//method for area calculations
		double calcArea() const;
		//perimeter calculater
		double calcPer() const;
	private:
		//property
		double radius;
};

#endif
