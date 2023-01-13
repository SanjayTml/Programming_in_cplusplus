/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a9_p4
*/

//Getting libraries
#include <iostream>
using namespace std;

float absol(float x){
    if(x<0){
        return -x;
    }
    else{
        return x;
    }
}

int main() {
    float x;
    //getting input
    cin >> x;
    //Calling function
    x=absol(x);
    cout << "The absolute value of x is " << x << endl;
    return 0;
}
