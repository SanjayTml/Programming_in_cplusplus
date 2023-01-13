// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"

using namespace std; 

//defining constructors
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

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) :
    RegularPolygon(n,nx,ny,4)
{
    width = nwidth;
    height = nheight;
}

Square::Square(const string& n, double nx, double ny, double nside) :
    Rectangle(n,nx,ny,nside,nside)
{
    length = nside;
}

//defining setters
void Shape::setName(string n){
    name = n;
}

void RegularPolygon::setEdge(int nl){
    EdgesNumber = nl;
}

void Circle::setRadius(double r){
    Radius = r;
}

void Rectangle::setHeight(double nheight){
    height = nheight;
}

void Rectangle::setWidth(double nwidth){
    width = nwidth;
}

void Square::setLength(double nside){
    length = nside;
}

//defining getters
string Shape::getName(){
    return name;
}

double CenteredShape::getX(){
    return x;
}

double CenteredShape::getY(){
    return y;
}

int RegularPolygon::getEdge(){
    return EdgesNumber;
}

double Circle::getRadius(){
    return Radius;
}

double Rectangle::getWidth(){
    return width;
}

double Rectangle::getHeight(){
    return height;
}

double Square::getLength(){
    return length;
}

//defining methods

void CenteredShape::move(double nx, double ny){
    x = nx;
    y = ny;
}

double Circle::perimeter(){
    return 2*3.142*Radius;
}

double Circle::area(){
    return 3.142*Radius*Radius;
}

double Rectangle::perimeter(){
    return 2*(width+height);
}

double Rectangle::area(){
    return width*height;
}

double Square::perimeter(){
    return 2*length;
}

double Square::area(){
    return length*length;
}