/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a9_p10
*/

//Getting libraries
#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

//function to print skeleton of word
void printskel(string a){
    string newstring;
    for(long unsigned int j=0;j<a.size();j++){
        if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u')
        {
            cout << "_";    //replace vowel with underscore
        }
        else{
            cout << a[j];
        }
    }
}

int main() {
    int x,tries;
    string words[]={"computer","television","keyboard","laptop","mouse",
    "perseverance","communication","overseas",
    "momentum","landscape","dictionary","auspicious"};
    string input,name,randomword,ans;

    cout  << "Enter your name:" << endl;

    //getting name
    getline(cin,name);

    //loop of the game, guessing words
    while(1){
        tries=0;

        //picking a random word
        srand(static_cast<unsigned int>(time(0)));
        x = rand()%12;
        randomword = words[x];

        //calling the function
        printskel(randomword);

        while(1){
            cout << "\nGuess the word:" <<endl;
            cin >> input;
            tries++;
            if(randomword==input){
                cout << "Congratulations " << name << "! You got it correct in " << tries << " tries." << endl;
                cout << "Do you want to play again? (y/n):";
                cin >> ans;
                if(ans=="n" || ans=="quit"){
                    return 0;
                }
                break;
            }
            else if(input=="quit"){
                cout << "BYE BYE!" << endl;
                return 0;
            }
            else{
                cout << "Please Try Again!" << endl;
            }
        }
    }
    return 0;
}
