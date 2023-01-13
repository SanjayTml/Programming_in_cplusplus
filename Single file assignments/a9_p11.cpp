/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a9_p11
*/

//Getting libraries
#include <iostream>
#include <cstring>
using namespace std;

//function to check palindrome words
bool isPalindrome(string s){
    string newstring;
    long unsigned int k=s.size();
    for(long unsigned int j=1;j<=k;j++){
        newstring = newstring + s[k-j];
    }
    if(newstring==s){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    bool res;
    string input,name;

    cout  << "Enter your name:" << endl;

    //getting name
    getline(cin,name);

    //loop of the game, checking palindrome
    while(1){
        cout << "\nEnter a word:" <<endl;
        cin >> input;

        //calling the function
        res=isPalindrome(input);

        if(res==true){
            cout << input << " is a palindrome word." << endl;
        }
        else if(input=="exit"){
            cout << "BYE BYE!" << endl;
            break;
        }
        else if(res==false){
            cout << input << " is not a palindrome word." << endl;
        }
    }
    return 0;
}
