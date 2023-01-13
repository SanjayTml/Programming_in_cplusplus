
#include <iostream>
#include <cmath>
#include <cstring>
#include "TournamentMember.h"

using namespace std; 

//default
string TournamentMember::location = "Default_location";

//constructors
TournamentMember::TournamentMember(char *fn,char *ln, char *ndob, int nl, double nb){
    strcpy(firstname,fn);
    strcpy(lastname,ln);
    strcpy(dob,ndob);
    languages=nl;
    budget=nb;
    cout << "Parametric TournamentMember Executed\n";
}

TournamentMember::TournamentMember(){
    strcpy(firstname, "Default");
    strcpy(dob, "2000-01-01");
    languages = 1;
    cout << "Default TournamentMember Executed\n";
}

//copy constructors
TournamentMember::TournamentMember(const TournamentMember& obj){
    strcpy(firstname, obj.firstname);
    strcpy(lastname, obj.lastname);
    strcpy(dob, obj.dob);
    languages = obj.languages;
    budget = obj.budget;
    cout << "Tournament Member copied\n";
}

Player::Player(const Player& obj){
    strcpy(firstname, obj.firstname);
    strcpy(lastname, obj.lastname);
    strcpy(dob, obj.dob);
    languages = obj.languages;
    budget = obj.budget;
    num = obj.num;
    pos = obj.pos;
    goals = obj.goals;
    foot = obj.foot;
    cout << "Player copied\n";
}

//Player Constructors
Player::Player(char *fn, char *ln, char *ndob, int nl, double nb, int nnum, string npos, int ng, string nf):
    TournamentMember(fn,ln,ndob,nl,nb)
{
    num = nnum;
    pos = npos;
    goals = ng;
    foot = nf;
}

Player::~Player(){
    cout << "Player Destructed\n";
}

Player::Player():
    TournamentMember()
{
    num = 1;
    pos = "Default";
    goals = 0;
    foot = "Right";
    cout << "Default Player Constructed\n";
}

//Destructor
TournamentMember::~TournamentMember(){
    cout << "TournamentMember Destructed\n";
}

//methods
void TournamentMember::printall(){
    cout << firstname << " " << lastname << " born on " << dob;
    cout << "\n No. of languages = " << languages << " Location = " << location << endl;
}

void TournamentMember::changeLocation(string nl){
    location = nl;
}

void Player::printplayer(){
    cout << "Player:\n";
    printall();
    cout << "Number = " << num << " Position = " << pos << endl;
    cout << "Goals = " << goals << " Foot = " << foot << endl;
}

void Player::incgoals(){
    goals = goals + 1;
    cout << "Goals increased\n";
}

//Referee Constructors and methods
Referee::Referee(){
    yellowCardCount = 0;
    redCardCount = 0;
    cout << "Default Referee Created!\n";
}

Referee::Referee(char *fn,char *ln, char *ndob, int nl, double nb):
    TournamentMember(fn,ln,ndob,nl,nb)
{
    yellowCardCount = 0;
    redCardCount = 0;
    cout << "Parametric Referee Created!\n";
}

Referee::~Referee() {
    cout << "Referee destructed!\n";
}

bool Referee::addToYellowCardList(Player *p){
    for(int i=0;i<40;i++){
        if(p==yellowCardList[i]){
            yellowCardList[i]=NULL;
            yellowCardCount--;
            return addToRedCardList(p);
        }
    }
    //for the upper limit of the list
    if(yellowCardCount==40){
        return false;
    }
    yellowCardList[yellowCardCount]=p;
    yellowCardCount++;
    cout << "Player " << p->getFname() << " added to Yellow Card List\n";
    return true;
}

bool Referee::addToRedCardList(Player *p){
    for(int i=0;i<40;i++){
        if(p==redCardList[i]){
            return false;
        }
    }
    //for the upper limit of the list
    if(redCardCount==40){
        return false;
    }
    redCardList[redCardCount]=p;
    redCardCount++;
    cout << "Player " << p->getFname() << " added to Red Card List\n";
    return true;
}