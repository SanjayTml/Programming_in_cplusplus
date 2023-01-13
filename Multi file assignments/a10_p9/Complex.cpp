/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a10_p9
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

//Service Methods
void Complex::print(){
    if (img){
        if (img>0){
	  cout<<real<<"+"<<img<<"i"<<endl;
        }else{
	  cout<<real<<img<<"i"<<endl;
        }
    }else{
        cout<<real<<endl;
    }
}

//addition of complex objects
Complex Complex::add(Complex& obj){
    Complex result(real+obj.getReal(),img+obj.getImg());
    return result;
}
//difference of complex objects
Complex Complex::sub(Complex& obj){
    Complex result(real-obj.getReal(),img-obj.getImg());
    return result;
}

//multiplication of complex objects
Complex Complex::mul(Complex& obj){
    Complex result(real*obj.getReal(),img*obj.getImg());
    return result;
}

//conjugate of complex object
Complex Complex::conjugate(){
    Complex result(real,-img);
    return result;
}
