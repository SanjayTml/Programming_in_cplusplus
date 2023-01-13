#include <iostream>
#include "City.h"

//Defining Setter Methods
void City::setName(std::string& newname) {
	name = newname;
}

void City::setInhabitants(int newinhabitants) {
	inhabitants = newinhabitants;
}

void City::setMayor(std::string newmayor) {
	mayor = newmayor;
}

void City::setArea(double newarea) {
	area = newarea;
}

//Defining Getter Methods
std::string City::getName(){
    return name;
}

int City::getInhabitants() {
	return inhabitants;
}

std::string City::getMayor() {
	return mayor;
}

double City::getArea() {
	return area;
}
