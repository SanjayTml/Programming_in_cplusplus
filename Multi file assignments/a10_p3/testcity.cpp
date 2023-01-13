
/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a10_p3
*/

#include <iostream>
#include <cstdlib>
#include "City.h"

int main(int argc, char** argv)
{
    //Creating three city objects
	City Bremen,Paris,London;

	std::string name, mayor;
	int inhabitants;
	double area;

    //Getting input from user for each city
	std::cout << std::endl << "Please enter data for Bremen: " << std::endl;
	name = "Bremen";
	Bremen.setName(name);
	//c.setName(name);
	std::cout << "No. of Inhabitants: ";
	std::cin >> inhabitants;
	Bremen.setInhabitants(inhabitants);

    std::cout << "Mayor: ";
    getchar();
	getline(std::cin,mayor);
	Bremen.setMayor(mayor);

	std::cout << "Area: ";
	std::cin >> area;
	Bremen.setArea(area);


	std::cout << std::endl << "Please enter data for Paris: " << std::endl;
	name = "Paris";
	Paris.setName(name);
	//c.setName(name);
	std::cout << "No. of Inhabitants: ";
	std::cin >> inhabitants;
	Paris.setInhabitants(inhabitants);

    std::cout << "Mayor: ";
    getchar();
	getline(std::cin,mayor);
	Paris.setMayor(mayor);

	std::cout << "Area: ";
	std::cin >> area;
	Paris.setArea(area);


	std::cout << std::endl << "Please enter data for London: " << std::endl;
	name = "London";
	London.setName(name);
	//c.setName(name);
	std::cout << "No. of Inhabitants: ";
	std::cin >> inhabitants;
	London.setInhabitants(inhabitants);

    std::cout << "Mayor: ";
    getchar();
	getline(std::cin,mayor);
	London.setMayor(mayor);

	std::cout << "Area: ";
	std::cin >> area;
	London.setArea(area);

    //Getting the details of city and printing it
	std::cout << "\n" << "You have created:" << std::endl;
	std::cout << "\n" << Bremen.getName() << " has " << Bremen.getInhabitants();
	std::cout << " number of inhabitants governed by the mayor, " << Bremen.getMayor() << std::endl;
	std::cout << "The area is " << Bremen.getArea() << std::endl;

	std::cout << Paris.getName() << " has " << Paris.getInhabitants();
	std::cout << " number of inhabitants governed by the mayor, " << Paris.getMayor() << std::endl;
	std::cout << "The area is " << Paris.getArea() << std::endl;

	std::cout << London.getName() << " has " << London.getInhabitants();
	std::cout << " number of inhabitants governed by the mayor, " << London.getMayor() << std::endl;
	std::cout << "The area is " << London.getArea() << std::endl;

    return 0;
}

