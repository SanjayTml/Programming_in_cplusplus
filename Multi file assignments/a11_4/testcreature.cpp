/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a11_p4
*/

#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{ 
    //creating objects and calling methods
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "Creating a derived creature.\n";
    lion l1(50,200);
    l1.run();
    l1.power();

    cout << "Creating another derived creature.\n";
    dinosaur d1(90,18.6);
    d1.run();
    d1.tallness();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "Creating another wizard.\n";
    Wizard w2;
    w2.run();
    w2.hover();

    //aotumatically destructs the constructor
    return 0;
} 