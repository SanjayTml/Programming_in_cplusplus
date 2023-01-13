/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a12_p7
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>

using namespace std;

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
    void setNum(int n){ num = n;};
    void setDen(int d){ den = d;};
    int getNum(){ return num; };
    int getDen(){ return den; };

    //operator overloaded functions/methods
	friend ostream& operator << (ostream&,const Fraction&);
    friend istream& operator >> (istream&, Fraction&);
    Fraction operator*(Fraction);
    Fraction operator/(Fraction);
    bool operator<(Fraction);
    bool operator>(Fraction);
    Fraction operator+(Fraction);
    Fraction operator-(Fraction);
    void operator=(Fraction);
};


#endif /* FRACTION_H_ */