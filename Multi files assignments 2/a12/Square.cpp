#include <iostream>
#include "Square.h"

//constructor
Square::Square(const char *n, double a) : Area(n) {
    length = a;
    std::cout << "[ ]- Square Constructed -[ ]\n";
}

//destructor
Square::~Square() {
    std::cout << "-- Square Destroyed --\n";
}

//area calculator
double Square::calcArea() const {
	std::cout << "calcArea of Square...\n";
	return length*length;
}

double Square::calcPer() const {
	std::cout << "Per of Square = ";
	return 4*length;
}
