/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a12_p1
*/


#include <iostream>
#include "Shapes.h"

using namespace std;

int main(){
    //creating hexagons
    Hexagon h1("First Hexagon", 2,2, "blue",9);
    Hexagon h2("Second Hexagon", 3,3, "green",15);
    Hexagon h3;
    h3 = Hexagon(h2);
    //printing results
    cout << "The result is as:\n";
    h1.printName();
    cout << "Color = " << h1.getColor() << ", Side = " << h1.getSide() << endl;
    cout << "Perimeter = " << h1.perimeter() << ", Area = " << h1.area() << endl;
    cout << "-------------------------------------\n";
    h2.printName();
    cout << "Color = " << h2.getColor() << ", Side = " << h2.getSide() << endl;
    cout << "Perimeter = " << h2.perimeter() << ", Area = " << h2.area() << endl;
    cout << "-------------------------------------\n";
    h3.printName();
    cout << "Color = " << h3.getColor() << ", Side = " << h3.getSide() << endl;
    cout << "Perimeter = " << h3.perimeter() << ", Area = " << h3.area() << endl;
    return 0;
}