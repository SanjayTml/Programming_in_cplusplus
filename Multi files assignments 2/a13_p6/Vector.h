#include <iostream>

using namespace std;

class Vector
{
private:
  int size;
  double *component;

public:
  //Constructors
  Vector();
  Vector(int);
  Vector(int, double *&);

  //Destructor
  ~Vector();

  //Setter
  void setcomponent(int, double);

  //Getter
  int getsize() const;
  double *getcomponent() const;

  //Service Methods
  Vector operator+(const Vector &) const;
  Vector operator-(const Vector &) const;

  friend ostream &operator<<(ostream &, const Vector &);
  friend istream &operator>>(istream &, Vector &);
};