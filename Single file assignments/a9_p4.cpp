/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a9_p4
*/

//Getting libraries
#include <iostream>
//#include <string>
using namespace std;

//Defining functions
int mycount(int a, int b){
    return b-a;
}

int mycount(char a, string b){
    int c=0;
    for(long unsigned int i=0;i<b.size();i++){
        if(b[i]==a){
            c++;
        }
    }
    return c;
}

int main() {
    int c,d;
    char a;
    string b;
    int result;
    //getting input
    cin>>c;
    cin>>d;
    cin>>a;
    getchar();
    getline(cin,b);

    //Calling function
    result = mycount(c,d);
    cout << result << endl;
    result = mycount(a,b);
    cout << result << endl;

    return 0;
}
