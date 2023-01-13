#include<iostream>
#include<fstream>
#include<string>
#include"Complex.h"

using namespace std;

int main(){
    //declaring variables
    Complex a,b;
    Complex sum,dif,prod;

    ifstream one, two;
    ofstream out;

    //opening files and getting input
    one.open("in1.txt", ios::in);
    if(!one.good()){
        cout << "Error Opening first File!\n";
    }
    one >> a;
    cout << "First Complex: " << a << endl;
    one.close();

    two.open("in2.txt", ios::in);
    if(!two.good()){
        cout << "Error Opening second File!\n";
    }
    two >> b;
    cout << "Second Complex: " << b << endl;
    two.close();

    //computing operations
    sum = a+b;
    dif = a-b;
    prod = a*b;

    //opening file for output
    out.open("output.txt", ios::out);
    if(!out.good()){
        cout << "Error Opening Output File!\n";
    }

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << dif << endl;
    cout << "Product = " << prod << endl;

    out << "Sum = " << sum << endl;
    out << "Difference = " << dif << endl;
    out << "Product = " << prod << endl;

    return 0;
}