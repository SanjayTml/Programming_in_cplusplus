/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a9_p5
*/

//Getting libraries
#include <iostream>
using namespace std;

int main() {
    string input,concate;
    bool result=true;

    //loop to get input and concatenate words
    while(result==true){
        concate=concate+input;
        getline(cin,input);
        if(input=="quit"){
            result=false;
        }
    }

    //printing concatenated string
    cout << concate << endl;

    return 0;
}
