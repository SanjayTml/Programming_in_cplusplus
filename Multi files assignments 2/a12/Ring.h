#ifndef _RING_H
#define _RING_H
#include "Circle.h"

//subclass Ring under Circle
class Ring : public Circle {
	public:
		//constructor
		Ring(const char *n, double outer, double inner);
		~Ring();
		//methods
		double calcArea() const;
		double calcPer() const;
	private:
		double innerradius;
};

#endif
