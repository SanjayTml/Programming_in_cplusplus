/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a11_p3
*/

#include <iostream>

using namespace std;

//defininf class creature
class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

//defining methods
Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}

//defining derived classes
class lion : public Creature {
    private:
        int strength;
    public:
        lion();
        lion(int, int);
        ~lion();
        void power();
};

lion::lion(int d, int s){
    distance = d;
    strength = s;
}

void lion::power(){
    cout << "Power of " << strength << " bisceps\n";
}

lion::~lion(){
    cout << "lion class destructed\n";
}

class dinosaur : public Creature {
    private:
        double height;
    public:
        dinosaur();
        dinosaur(int, double);
        ~dinosaur();
        void tallness();
};

dinosaur::dinosaur(int d, double h){
    distance = d;
    height = h;
}

dinosaur::~dinosaur(){
    cout << "Dinosaur class destructed\n";
}

void dinosaur::tallness(){
    cout << "Height of " << height << " foots\n";
}

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

int main()
{ 
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

    return 0;
} 