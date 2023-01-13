/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a12_p4
*/


#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(){
    //initializing variables
    char fn[36] = "John";
    char ln[36] = "Doe";
    char dob[36] = "1996-02-18";

    //creating players
    Player p1;
    Player p2(fn,ln,dob,2,522000,7,"Forward",14,"Right");
    Player p3;
    p3 = Player(p2);
    char nfname[]="Harry";
    p3.setFname(nfname);

    //output
    cout << "You have created:\n";
    p1.printplayer();
    cout << "---------\n";
    p2.printplayer();
    cout << "--------------\n";
    p3.printplayer();
    cout << "\n-----------------\n\n";

    //Constructor Refree
    char rfn[]="Alex";
    char rln[]="Mad";
    char rdob[]="1986-12-08"; 
    Referee r1(rfn,rln,rdob,5,14250);


    //Adding Card to the players 

    r1.addToYellowCardList(&p2);
    r1.addToYellowCardList(&p3); 

    //Yellow card to p2 again
    r1.addToYellowCardList(&p2);

    //Only Single Red card for p1
    r1.addToRedCardList(&p1);
    
    cout<<"----------------------------------\n"<<endl;
    cout<<"Referee Name :"<<r1.getFname()<<endl<<endl;
    cout<<"Number of Yellow Cards : "<<r1.getYellowCardCount()<<endl;
    cout<<"Number of  Red  Cards : "<<r1.getRedCardCount()<<endl;    
    cout<<"---------------------------------"<<endl;

    return 0;
}