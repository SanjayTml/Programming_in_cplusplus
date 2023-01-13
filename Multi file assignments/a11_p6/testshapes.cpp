/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a11_p6
*/

#include <iostream>
#include "Shapes.h"

int main(int argc, char** argv) {
  //creating instances of classes
  Circle c("New circle", 3, 4, 7);
  Rectangle r("New Rectagle", 1, 1, 3, 4);
  Square s("New Square", 1,1,5);

  //printing the properties of instances
  std::cout << "You have created:\n";
  std::cout << "\n" << c.getName() << " with center at " << c.getX() << "," << c.getY();
  std::cout << "\nIt's perimeter is " << c.perimeter() << " and area is " << c.area() << std::endl;
  
  std::cout << "\n" << r.getName() << " with center at " << r.getX() << "," << r.getY();
  std::cout << "\nIt's perimeter is " << r.perimeter() << " and area is " << r.area() << std::endl;
  
  std::cout << "\n" << s.getName() << " with center at " << s.getX() << "," << s.getY();
  std::cout << "\nIt's perimeter is " << s.perimeter() << " and area is " << s.area() << std::endl;
}
