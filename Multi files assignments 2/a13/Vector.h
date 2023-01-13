//CH-230-B
//a11_p7.cpp
//Aarshika Singh
//aa.singh@jacobs-university.de
#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include<iostream>
using namespace std;
class Vector
{
    private:
        int size;
        double* ptr;
        //Declaring the attricutes
    public:
        void set(int,double);
        //setter method
        int getsize();
        double getptr(int);
        //getter method
        Vector();
        Vector(int);
        Vector(const Vector&);
        //Constructors
        ~Vector();
        //Destructors
        void print();
        //Print function
        double norm();
        Vector add(const Vector) const;
        Vector difference(const Vector)const;
        Vector scalar(const Vector)const;
        //Declaring computation methods
        Vector operator+(Vector &);
        Vector operator*(Vector &);        
        friend std::ostream& operator<<(std::ostream& os,const Vector& v);
	    friend std::istream& operator>>(std::istream& is, Vector& v);
};
//Declaring a class


#endif // VECTOR_H_INCLUDED
