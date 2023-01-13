/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a12_p7
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a,b;
    //getting inputs for fractions
    cout << "Enter a fraction, numerator and denominator:\n";
    cin >> a;
    cout << "Enter another fraction, numerator and denominator:\n";
    cin >> b;

    //computing and giving output
    cout << "Multiplication: ";
	cout << a*b << endl;
    cout << "Division: ";
    cout << a/b << endl; 
    cout << "Greater Fraction: ";
    if(a>b){
        cout << a << endl;
    }
    else if(a<b){
        cout << b << endl;
    }
    else
    {
        cout << "Both are equal!" << endl;
    }
    cout << "Sum: ";
    cout << a+b << endl;
    cout << "Difference: " << a-b << endl;
    
}