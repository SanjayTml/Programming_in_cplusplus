/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a12_p9
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
const int num_obj = 25;

//function to create random color
const char* randColor() {
    const char* Color[] = {"RED", "BLACK", "VIOLET", "BLUE", "YELLOW", "GREEN"};
    int randomNumber;
    randomNumber = rand()%6;
    return Color[randomNumber];
}

int main() {
	Area *list[num_obj];						// creating pointer array of object of Area class
	int index = 0, counter=0;								// initializing index
	double sum_area = 0.0;						// initializing sum of area
	double sum_per = 0.0;
  // init random number generator
  srand(static_cast<unsigned int>(time(0)));

  //loop to create random objects with random parameters
  while(counter<num_obj){
    const char* color = randColor();
    double num_a = rand()%95 + 6;
    double num_b = rand()%95 + 6;
    int robj = rand()%4;
    switch (robj){
			case 0 :
				list[counter] = new Rectangle(color,num_a,num_b);
				break;
			case 1 :
				list[counter]= new Square(color,num_a);
				break;
			case 2 :
				list[counter]= new Circle(color,num_a);
				break;
			case 3 : 
				//swapping values if the outside radius is smaller than the inside radius
				
				if (num_a<num_b){
					double temp=num_a;
					num_a=num_b;
					num_b=temp;
				}
				list[counter]= new Ring(color,num_a,num_b);
				break;
		}
    counter++;
  }
	while (index < num_obj) {					// Loop for going through every obj
		(list[index])->getColor();				
		double area = list[index]->calcArea();// Calculating area of every object
		double perimeter = list[index]->calcPer();// Calculating perimeter of every object
		cout << perimeter << endl;
		sum_per += perimeter;
		sum_area += area;
		index++;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// Prinitng total sum
	cout << "\nThe total perimeter is " << sum_per << endl;
	return 0;
}

/* 				--------------------- The Class Relations ----------------------

                                             +----+
                                             |Area+-----------------------------+
                                             +-+--+                             |
                                               |                                |
           +--+                                |                                |
           |              +--------------------+----------------+               |
           |              +                    +                +               |
           |            Circle               Square         Rectangle           |
Subclasses |              +                                                     |
           |              |                                                     |
           |              |                                                     |
           |              +                                                     |
           |            Ring                                                    |
           |                                                                    |  +-----+
           +--+                                area   <-------------------------+        |
                                                                                |        |
                                                                                |        |  Properties
                                                                                |        |
                                              color   <-------------------------+        |
                                                                                         |
                                                +                                  +-----+
                                                |
                                                |
                                                |
            +------------------+---------------------------------+---------------+
            |                  |                |                |               |
            |                  |                |                |               |
            |                  |                |                |               |
            |                  |                |                |               |
            +                  +                +                +               +
           Blue             Yellow            Green            Black           Violet

*/