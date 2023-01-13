#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

//defining constructor
Area::Area(const char* n) {
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
}

//destructor
Area::~Area() {
	cout << "Area destructor called...........................\n";
}

//getter
void Area::getColor() const {
	cout << "\n" << color << ": ";
}
