/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a9_p6
*/

//Getting libraries
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int x,tries=0;
    string name;
    int input;

    cout  << "Enter your name:" << endl;

    //getting input
    getline(cin,name);

    //creating a random number
    srand(static_cast<unsigned int>(time(0)));
    x = rand()%100+1;

    //loop of the game, guessing numbers
    while(1){
        cout << "Guess a number between 1 and 100:" <<endl;
        cin >> input;
        tries++;
        if(x==input){
            cout << "Congratulations " << name << "! You got it correct in " << tries << " tries." << endl;
            break;
        }
        else if(x>input){
            cout << "Too low!" << endl;
        }
        else if(x<input){
            cout << "Too high!" << endl;
        }
    }

    return 0;
}
