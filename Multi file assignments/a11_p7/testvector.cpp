/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a11_p7
*/

#include <iostream>
#include <string>
#include"Vector.h"
using namespace std;

int main (int argc,char** argv){
    double* component1= new double[3]{2,4,6};
    
    //First Vector    
    Vector A;

    //Printing vector A 
    cout<<"Vector A : ";
    A.print();
    cout<<endl;

    //New Copied Vector B
    cout<<"Vector B : ";
    Vector B(A);
    B.print();
    cout<<endl;

    //New Vector C
    Vector C (3,component1);
    cout<<"Vector C : ";
    C.print();

    //Now Implementing the methods 
    cout<< "\n" <<endl;

    //Vector Norm
    cout<<"Norm of Vector A = ";
    cout<<A.norm()<<endl;
    cout<<endl;

    //Scalar Product
    cout<<"Scalar Product of Vector A & Vector C = ";
    cout<<A.sProduct(C)<<endl;
    cout<<endl;

    //Vector Sum
    cout<<"Sum of Vector A and Vector C = ";
    A.add(C).print();
    cout<<endl;

    //Vector Difference
    cout<<"Difference of Vector A and Vector C = ";
    A.sub(C).print();
    cout<<endl;
        
    return 0;
}