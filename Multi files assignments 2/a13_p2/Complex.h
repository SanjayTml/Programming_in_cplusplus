#include<iostream>

using namespace std;

class Complex {
    private:
        double real;
        double img;
    public:
        Complex(double real, double img=0);
        Complex();
        ~Complex();

        //setters
        void setReal(double newReal);
        void setImg(double newImg);

        //getters
        double getReal();
        double getImg();

        //operators overloading
        Complex operator+(const Complex&);
        Complex operator-(const Complex&);
        Complex operator*(const Complex&);
        Complex operator=(const Complex&);

        friend ostream &operator<<(ostream&, const Complex&);
        friend istream &operator>>(istream&, Complex&);
};