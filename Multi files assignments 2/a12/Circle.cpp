#include <iostream>
#include <cmath>
#include "Circle.h"

//constructor
Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
	std::cout << "( )- Circle constructed -( )\n";
}

//destructor
Circle::~Circle() {
	std::cout << "-- Circle Destroyed --\n";
}

//area calculator
double Circle::calcArea() const {
	std::cout << "calcArea of Circle...\n";
	return radius * radius * M_PI;
}

//perimeter calculator
double Circle::calcPer() const {
	std::cout << "Per of Circle = ";
	return 2 * radius * M_PI;
}
