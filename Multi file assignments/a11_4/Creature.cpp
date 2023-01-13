#include <iostream>
#include "Creature.h"
using namespace std;

//defining methods
Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}

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

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}