/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a10_p9
*/

#include <iostream>
#include"Complex.h"

using namespace std;

int main(int argc,char** argv){
    //First complex instance
    Complex a(3,2);
    cout<<"First number : ";
    a.print();

    //Second complex instance
    Complex b(7,11);
    cout<<"Second number : ";
    b.print();
    cout<<endl;

    //conjugate of first instance
    cout<<"The conjugate of first number is ";
    a.conjugate().print();

    //Printing out the operations
    cout<<"The Sum is ";
    a.add(b).print();
    cout<<"The difference is ";
    a.sub(b).print();
    cout<<"The product is ";
    a.mul(b).print();

    return 0;
}
