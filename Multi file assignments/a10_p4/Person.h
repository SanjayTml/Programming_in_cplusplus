#include <string> // defines standard C++ string class

/* First C++ class */
class Person
{
private:  // data members are private
	std::string name;
	int age;
	std::string country;
	double height;

public: // business logic methods are public
	//Constructors
	Person();
	Person(const std::string,const int,const std::string,const double);
	Person(Person &obj);
	// setter methods
	void setName(std::string& newname);
	void setAge(int newage);
	void setCountry(std::string newcountry);
	void setHeight(double newheight);
	// getter method
	std::string getName();
	int getAge();
	std::string getCountry();
	double getHeight();
	// service method
	//void print();
};


