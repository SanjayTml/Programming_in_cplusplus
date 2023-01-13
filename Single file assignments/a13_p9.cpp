/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a13_p9
*/

#include <iostream>
#include <exception>
#include <string>
using namespace std;

class Motor
{
private:
public:
  Motor()
  {
    string message = "This motor has problems";
    cout << "Motor Constructor \n";
    throw message;
  }
};
class Car
{
private:
  Motor *motor;

public:
  Car()
  {
    try
    {
      cout << "Car Constructor \n";
      this->motor = new Motor();
    }
    catch (string e)
    {
      string message = "The car in this garage has problems with the motor";
      cout << "\nError: ";
      cerr << e << endl;
      throw message;
    }
  }
};

class Garage
{
private:
  Car *car;

public:
  Garage()
  {
    try
    {
      cout << "Garage Constructor\n";
      this->car = new Car();
    }
    catch (string e)
    {
      throw e;
    }
  }
};

// Main function
int main(int argc, char **argv)
{
  try
  {
    Garage a;
  }
  catch (string e)
  {
    cout << "\nError: ";
    cerr << e << endl;
  }

  return 0;
}