#include <iostream>
#include "Person.h"

//Defining Constructors
Person::Person(){
	name = "Default_name";
	age = 0;
	country = "Default_country";
	height = 0;
}

Person::Person(const std::string newname,const int newage, const std::string newcountry,const double newheight){
	name = newname;
	age = newage;
	country = newcountry;
	height = newheight;
}

//Copy Constructor
Person::Person(Person &obj){
	name = obj.getName();
	age = obj.getAge();
	country = obj.getCountry();
	height = obj.getHeight();
}

//Defining Setter Methods
void Person::setName(std::string& newname) {
	name = newname;
}

void Person::setAge(int newage) {
	age = newage;
}

void Person::setCountry(std::string newcountry) {
	country = newcountry;
}

void Person::setHeight(double newheight) {
	height = newheight;
}

//Defining Getter Methods
std::string Person::getName(){
    return name;
}

int Person::getAge() {
	return age;
}

std::string Person::getCountry() {
	return country;
}

double Person::getHeight() {
	return height;
}

