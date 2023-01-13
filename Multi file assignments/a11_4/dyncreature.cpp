/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a11_p5
*/

#include <iostream>
#include <cstring>
#include "Creature.h"

using namespace std;

int main()
{ 
    string inp;
    //loop for creating objects and calling methods
    while(1){
        cout << "Please enter a word: ";
        getline(cin, inp);
        if(inp=="wizard"){
            cout << "\nCreating a Wizard.\n";
            Wizard *pointer;
            pointer = new Wizard;
            pointer->run();
            pointer->hover();
            delete pointer;
        }
        if(inp=="object1"){
            cout << "\nCreating a derived creature.\n";
            lion *pointer;
            pointer = new lion(50,200);
            pointer->run();
            pointer->power();
            delete pointer;
        }
        if(inp=="object2"){
            cout << "\nCreating another derived creature.\n";
            dinosaur *pointer;
            pointer = new dinosaur(90,18.6);
            pointer->run();
            pointer->tallness();
            delete pointer;
        }
        //loop breaking 
        if(inp=="quit"){
            cout << "See you!\n";
            break;
        }
        //automatically destructs the constructor
    }
    return 0;
} 