#include <iostream>
#include "fraction.h"

using namespace std;

//constructors
Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    // Implement GCD of two numbers;
    if (b == 0) 
      return a; 
	return gcd(b, a % b);
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

//defining overloaded funcitons
ostream& operator<<(ostream& os, const Fraction& s){
    os << s.num << "/" << s.den;
    return os;
}

istream& operator>>(istream& is, Fraction& s){
    int nnum,denom;
    is >> nnum >> denom;
    //checking validity of denominator
    while(denom == 0){
        cout << "Input Error\n";
        cout << "Enter Denominator:\n";
        cin >> denom;
    }
    s.setNum(nnum);
    s.setDen(denom);
    return is;
}

Fraction Fraction::operator*(Fraction a){
    return Fraction(num*a.num,den*a.den);
}

Fraction Fraction::operator/(Fraction a){
    return Fraction(num*a.den,den*a.num);
}

bool Fraction::operator<(Fraction a){
    if(num/(float)den < a.num/(float)a.den){
        return true;
    }
    return false;
}

bool Fraction::operator>(Fraction a){
    if(num/(float)den > a.num/(float)a.den){
        return true;
    }
    return false;
}

Fraction Fraction::operator+(Fraction a){
    Fraction n;
    n.num=num*lcm(den,a.den)/den+a.num*lcm(den,a.den)/a.den;
    n.den=lcm(den,a.den);
    return n;
}

Fraction Fraction::operator-(Fraction a){
    Fraction n;
    n.num=num*lcm(den,a.den)/den-a.num*lcm(den,a.den)/a.den;
    n.den=lcm(den,a.den);
    return n;
}

void Fraction::operator=(Fraction a){
    num=a.num;
    den=a.den;
}