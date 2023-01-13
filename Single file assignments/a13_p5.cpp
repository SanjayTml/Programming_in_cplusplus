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
  A() { x = 0; }
  A(int i) { x = i; }           //added content
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C: virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/*  Problem:: The compiler shows errors saying "use of deleted function ‘D::D()’" and
    "no matching function for call to ‘A::A()’". This is because class D has no arguments
    and looks for the empty constructor of the parent class which is not well-defined.
    
    Solution:: The problem can be solved by adding an empty constructor to the parent
    class A or calling a parametric constructor from class D.*/