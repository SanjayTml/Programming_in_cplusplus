/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a13_p7
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1;

    //assigning 8 to the vector using loop
    for(int i=0; i<20; i++){
        v1.push_back(8);
    }

    //catching out of range exception
    try{
        v1.at(21);
    } catch (const out_of_range &err) {
        cerr << err.what();
    }

    return 0;
}