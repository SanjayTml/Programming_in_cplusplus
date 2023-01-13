// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

//constructors
Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(){
    x=1;
    y=1;
    EdgesNumber = 0;
}

CenteredShape::CenteredShape(){

}

Shape::Shape(){}


Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Hexagon::Hexagon(const string& n,double nx, double ny, string nc, double ns) :
    RegularPolygon(n,nx,ny,6)
{
    color = nc;
    side = ns;
}

Hexagon::Hexagon() :
    RegularPolygon("Default_Hexagon",1,1,6)
{
    color = "Default_color";
    side = 1;
}

Hexagon::Hexagon(const Hexagon& obj){
    name = obj.name;
    x = obj.x;
    y = obj.y;
    EdgesNumber = obj.EdgesNumber;
    color = obj.color;
    side = obj.side;
}

Hexagon::~Hexagon(){

}

//setters
void Hexagon::setColor(string nc){
    color = nc;
}

void Hexagon::setSide(double ns){
    side = ns;
}

//getters
string Hexagon::getColor(){
    return color;
}

double Hexagon::getSide(){
    return side;
}

//methods
double Hexagon::perimeter(){
    return 8*side;
}

double Hexagon::area(){
    return 3*sqrt(3)/2.0*side*side;
}