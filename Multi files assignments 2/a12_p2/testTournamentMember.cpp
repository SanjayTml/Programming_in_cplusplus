/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a12_p2
*/


#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(){
    //initializing variables
    char fn[36] = "John";
    char ln[36] = "Doe";
    char dob[36] = "1996-02-18";

    //creating TournamentMembers
    TournamentMember t1;
    TournamentMember t2(fn,ln,dob,15,522000);
    TournamentMember t3;
    t3 = TournamentMember(t2);

    //output
    cout << "You have created:\n";
    t1.printall();
    cout << "---------\n";
    t2.printall();

    cout << "\n...Changing location...\n";
    t1.changeLocation("Boston");

    cout << "\n...Location Changed...\n";
    t2.printall();
    return 0;
}