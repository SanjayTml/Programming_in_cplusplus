//CH-230-B
//a11_p7.cpp
//Aarshika Singh
//aa.singh@jacobs-university.de
#include<iostream>
#include<cmath>
#include "Vector.h"
using namespace std;

void Vector::set(int sizepar,double ptrpar)
{
        ptr[sizepar]=ptrpar;
}
//Defining the setter method
int Vector::getsize()
{
    return size;
}
double Vector::getptr(int sizepar)
{
    return ptr[sizepar];
}
//Defining the getter method
Vector::Vector()
{
    size = 3;
    ptr = new double[3];
}
//Defining the Default constructor and setting
//the default size to 0
Vector::Vector(int i)
{
    size = i;
    ptr = new double[size];

}
//Defining the parametric constructor
Vector::Vector(const Vector& c)
{
    size = c.size;
    ptr = c.ptr;
}
//Defining the copy constructor
Vector::~Vector()
{
    delete []ptr;
}
//Defining the destructor
void Vector::print()
{
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

}
//Defining the print functions
//It prints the value of all the vectors 
//using a for loop
Vector Vector::add(const Vector v)const{
    for(int i=0;i<size;i++)
    {
        v.ptr[i]=ptr[i]+v.ptr[i];
    }
    return v;
}
//Defining the addition function
//It takes in a vector and returns a vector
//It adds value of the element of the array to 
//the element of the array of the given vector 
//using a for loop and returns the vector
Vector Vector::difference(const Vector v)const{
    for(int i=0;i<size;i++)
    {
        v.ptr[i]=v.ptr[i]-ptr[i];
    }
    return v;
}
//Defining the differenec function
//It takes in a vector and returns a vector
//It subtracts value of the element of the array from 
//the element of the array of the given vector 
//using a for loop and returns the vector
Vector Vector::scalar(const Vector v)const{
    for(int i=0;i<size;i++)
    {
        v.ptr[i]=(v.ptr[i])*ptr[i];
    }
    return v;
}
//Defining the scalar product function
//It takes in a vector and returns a vector
//It multiplies value of the element of the array to 
//the element of the array of the given vector 
//using a for loop and returns the vector
double Vector::norm()
{
    double sum =0;
    for(int i=0;i<size;i++)
    {
        sum = (sum+(ptr[i]*ptr[i]));
    }
    double sum2 = sqrt(sum);
    return sum2;
}
//The above function takes in nothing and returns a double
//It uses a double variable sum which is intialised to 0
//and adds the sum to the square of the elemnt of the array and 
//computes square root to calculate the norm
std::ostream& operator << (std::ostream& os,const Vector& v)
{
	for(int i=0;i<v.size;i++)
    {
        os<<v.ptr[i]<<" ";

    }
    std::cout<<std::endl;
	return os;
}
//Overloading the << operator

std::istream& operator >> (std::istream& is, Vector& v)
{
	is>>v.size;
    for(int i=0;i<v.size;i++)
    {
        double temp;
        is>>temp;
        v.set(v.size,temp);
    }
	return is;
}
Vector Vector::operator*(Vector &v)
{
    if(size == v.size)
    {   for(int i=0;i<size;i++)
        {
            v.ptr[i]=ptr[i]*v.ptr[i];
        }
    }
    else
    {
        std::cout<<"Not possible";
    }
    return v;
    
}
Vector Vector::operator+(Vector &v)
{
    for(int i=0;i<size;i++)
    {
        v.ptr[i]=ptr[i]+v.ptr[i];
    }
    return v;
}