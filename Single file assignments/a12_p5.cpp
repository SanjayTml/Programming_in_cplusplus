/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a12_p5
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//defining functions
string randColor() {
    string Color[] = {"RED", "BLACK", "VIOLET", "BLUE"};
    int randomNumber;
    // init random number generator
    srand(static_cast<unsigned int>(time(0)));
    randomNumber = rand()%4;
    return Color[randomNumber];
}

string randColor2() {
    string Color[] = {"RED", "BLACK", "VIOLET", "BLUE"};
    int randomNumber;
    // random number generator using nanoseconds
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((time_t)ts.tv_nsec);
    randomNumber = rand()%4;
    return Color[randomNumber];
}

int main()
{
    int count = 0;
    string mycolor;
    cout << "\n...Random Generation method 1...\n";
    while (count < 15) {
        mycolor = randColor();
        cout << mycolor << endl;
        count++;
    }
    cout << "\n...Random Generation method 2...\n";
    count = 0;
    while (count < 15) {
        mycolor = randColor2();
        cout << mycolor << endl;
        count++;
    }
    return 0;
}
