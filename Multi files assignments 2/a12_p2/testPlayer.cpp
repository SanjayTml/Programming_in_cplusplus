/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a12_p3
*/


#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(){
    //initializing variables
    char fn[36] = "Galer";
    char ln[36] = "Chin";
    char dob[36] = "1996-02-18";

    //creating Players
    Player p1;
    Player p2(fn,ln,dob,2,522000,7,"Forward",14,"Right");
    Player p3;
    p3 = Player(p2);

    //output
    cout << "You have created:\n";
    p1.printplayer();
    cout << "---------\n";
    p2.printplayer();
    cout << "--------------\n";
    p3.printplayer();

    cout << "\n...Changing location for all players...\n";
    p1.changeLocation("Hamburg");
    p2.changeLocation("Hamburg");
    p3.changeLocation("Hamburg");

    cout << "...Increasing goals for player 3...\n";
    p3.incgoals();

    cout << "\n New Result: \n";
    p1.printplayer();
    cout << "---------\n";
    p2.printplayer();
    cout << "--------------\n";
    p3.printplayer();
    
    return 0;
}