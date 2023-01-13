#include <iostream>
#include "Rectangle.h"

//constructor
Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
    std::cout << "[ ]- Rectangle Constructed -[ ]\n";
}

//destructor
Rectangle::~Rectangle() {
    std::cout << "-- Rectangle Destroyed --\n";
}

//area calculator
double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...\n";
	return length*width;
}

double Rectangle::calcPer() const {
	std::cout << "Per of Rectangle = ";
	return 2*(length+width);
}
