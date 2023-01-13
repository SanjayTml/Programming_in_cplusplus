/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a9_p8
*/

//Getting libraries
#include <iostream>

using namespace std;

//Defining functions
//swap ints
void swapping(int &a, int &b){
    int another=a;
    a=b;
    b=another;
}

//swap floats
void swapping(float &a, float &b){
    float another=a;
    a=b;
    b=another;
}

//swap char pointers
void swapping(const char *&a,const char *&b){
    const char *another=a;
    a=b;
    b=another;
}

int main(void) {

    int a=7, b=15;
    float x=3.5, y=9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    //before swapping
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    //calling functions
    swapping(a,b);
    swapping(x,y);
    swapping(str1,str2);

    //after swapping
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}
