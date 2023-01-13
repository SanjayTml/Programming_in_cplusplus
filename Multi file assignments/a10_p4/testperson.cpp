
/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a10_p3
*/

#include <iostream>
#include <cstdlib>
#include "Person.h"

int main(int argc, char** argv)
{
    //Creating six city objects
	Person p1,p2,p3;
	Person p4;
	Person p5("MyName", 21, "Denmark", 6.3);
	Person p6 = p5;

	std::string name, country;
	int age;
	double height;

    //Getting input from user for each city
	std::cout << std::endl << "Please enter data for a Person: " << std::endl;
	std::cout << "Name: ";
	getline(std::cin, name);
	p1.setName(name);
	//c.setName(name);
	std::cout << "Age: ";
	std::cin >> age;
	p1.setAge(age);

    std::cout << "Country: ";
    getchar();
	getline(std::cin,country);
	p1.setCountry(country);

	std::cout << "Height: ";
	std::cin >> height;
	p1.setHeight(height);


	std::cout << std::endl << "Please enter data for another Person: " << std::endl;
	getchar();
	std::cout << "Name: ";
	getline(std::cin, name);
	p2.setName(name);
	//c.setName(name);
	std::cout << "Age: ";
	std::cin >> age;
	p2.setAge(age);

    std::cout << "Country: ";
    getchar();
	getline(std::cin,country);
	p2.setCountry(country);

	std::cout << "Height: ";
	std::cin >> height;
	p2.setHeight(height);


	std::cout << std::endl << "Please enter data for another Person: " << std::endl;
	std::cout << "Name: ";
	getchar();
	getline(std::cin, name);
	p3.setName(name);
	//c.setName(name);
	std::cout << "Age: ";
	std::cin >> age;
	p3.setAge(age);

    std::cout << "Country: ";
    getchar();
	getline(std::cin,country);
	p3.setCountry(country);

	std::cout << "Height: ";
	std::cin >> height;
	p3.setHeight(height);

    //Getting the details of city and printing it
	std::cout << "\n" << "You have created:" << std::endl;
	std::cout << "\n" << p1.getName() << " is " << p1.getAge() << "years old.";
	std::cout << " S/he is from " << p1.getCountry() << std::endl;
	std::cout << " S/he is " << p1.getHeight() << " tall." << std::endl;

	std::cout << "\n" << p2.getName() << " is " << p2.getAge() << "years old.";
	std::cout << " S/he is from " << p2.getCountry() << std::endl;
	std::cout << " His/Her height is " << p2.getHeight() << std::endl;

	std::cout << "\n" << p3.getName() << " is " << p3.getAge() << "years old.";
	std::cout << " S/he is from " << p3.getCountry() << std::endl;
	std::cout << " His/Her height is " << p3.getHeight() << std::endl;

	//Printing Constructor Object Values
	std::cout << "\n" << "Using Constructors:" << std::endl;
	std::cout << "\n" << p4.getName() << " is " << p4.getAge() << "years old.";
	std::cout << " S/he is from " << p4.getCountry() << std::endl;
	std::cout << " S/he is " << p4.getHeight() << " tall." << std::endl;

	std::cout << "\n" << p5.getName() << " is " << p5.getAge() << "years old.";
	std::cout << " S/he is from " << p5.getCountry() << std::endl;
	std::cout << " His/Her height is " << p5.getHeight() << std::endl;

	std::cout << "\n" << p6.getName() << " is " << p6.getAge() << "years old.";
	std::cout << " S/he is from " << p6.getCountry() << std::endl;
	std::cout << " His/Her height is " << p6.getHeight() << std::endl;

    return 0;
}


