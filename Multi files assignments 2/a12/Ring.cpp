#include <iostream>
#include <cmath>
#include "Ring.h"

//constructor
Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
	std::cout << "##- Ring Constructed -##\n";
}

//destructor
Ring::~Ring() {
	std::cout << "--Ring destroyed--" << std::endl;
}

//area calculator for ring
double Ring::calcArea() const {
	std::cout << "calcArea of Ring...\n";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

//perimeter calculator
double Ring::calcPer() const {
	std::cout << "Per of Ring + ";
	return (Circle::calcPer()+(2 * innerradius * M_PI));
}