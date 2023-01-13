/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a13_p4
*/

#include<iostream>
using namespace std;

//class definitions 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B()  { setX(10); }
};
 
class C: virtual public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/*  Problem:: The compiler shows an error saying "request for member ‘print’ is
    ambiguous d.print();" which means that the definition of print method for 
    class D is not fixed as there are two print methods derived to it from 
    classes B and C clashing one another.*/

/*  Solution:: This problem can be fixed by adding virtual to make a vitual
    inheritance which ensures only one copy of the base class members are
    inherited by the derived class.*/