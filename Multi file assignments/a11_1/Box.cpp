/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a11_p1
*/


#include<cmath>
#include<iostream>
#include "Box.h"

using namespace std;

//Empty Constructor
Box::Box(){
    height=0;
    width=0;
    depth=0;
}

//Constructor with 2 parameters
Box::Box(double newheight,double newwidth, double newdepth){
    height=newheight;
    width=newwidth;
    depth=newdepth;
}

//Copy Constructor
Box::Box(Box &obj){
    height=obj.getHeight();
    width=obj.getWidth();
    depth=obj.getDepth();
}

//Destructor
Box::~Box(){
}

//Setters
void Box::setHeight(double newheight){
    height=newheight;
}
void Box::setWidth(double newwidth){
    width=newwidth;
}
void Box::setDepth(double newdepth){
    depth=newdepth;
}

//Getters
double Box::getHeight(){
    return height;
}

double Box::getWidth(){
    return width;
}

double Box::getDepth(){
    return depth;
}

//Service Methods
void Box::print(int i){
    cout << "Volume of Box " << i << " is " << height*width*depth << endl;
}

//Calculating volume
/*double volume(){
    return getHeight()*getWidth()*getDepth();
}*/
