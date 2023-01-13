/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a13_p2
*/


#include<cmath>
#include<iostream>
#include "Complex.h"

using namespace std;

//Empty Constructor
Complex::Complex(){
    real=0;
    img=0;
}

//Constructor with 2 parameters
Complex::Complex(double newReal,double newImg){
    real=newReal;
    img=newImg;
}

//Destructor
Complex::~Complex(){
}

//Setters
void Complex::setReal(double newReal){
    real=newReal;
}
void Complex::setImg(double newImg){
    img=newImg;
}

//Getters
double Complex::getReal(){
    return real;
}

double Complex::getImg(){
    return img;
}


//addition overloading of complex objects
Complex Complex::operator+(const Complex& obj){
    Complex result(real+obj.real,img+obj.img);
    return result;
}
//difference overloading of complex objects
Complex Complex::operator-(const Complex& obj){
    Complex result(real-obj.real,img-obj.img);
    return result;
}

//multiplication overloading of complex objects
Complex Complex::operator*(const Complex& obj){
    Complex result(real*obj.real,img*obj.img);
    return result;
}

//assignment overloading
Complex Complex::operator=(const Complex& obj){
    real = obj.real;
    img = obj.img;
    return *this;
}

//Service Methods Overloading
ostream& operator<<(ostream &out,const Complex &obj){
    if (obj.img){
        if (obj.img>0){
	        out<<obj.real<<"+"<<obj.img<<"i"<<endl;
        }
        else{
	        out<<obj.real<<obj.img<<"i"<<endl;
        }
    }
    else{
        out<<obj.real<<endl;
    }
    return out;
}

istream& operator>>(istream &in, Complex &obj){
    in >> obj.real >> obj.img;
    return in;
}