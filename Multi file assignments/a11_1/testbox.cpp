/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a11_p1
*/

#include <iostream>
#include"Box.h"

using namespace std;

int main(){
    Box *userboxes;
    int n;
    double height,width,depth;
    cout << "Enter number of boxes: ";
    cin >> n;
    userboxes = new Box[2*n];  


    //getting dimensions of boxes
    for(int i=0; i<n; i++){
        cout << "Height: ";
        cin >> height;
        userboxes[i].setHeight(height);
        cout << "Width: ";
        cin >> width;
        userboxes[i].setWidth(width);
        cout << "Depth: ";
        cin >> depth;
        userboxes[i].setDepth(depth);
        userboxes[n+i]= Box (userboxes[i]); //calling copy constructor
    }





    //Printing volume
    for(int i=0; i<(2*n); i++){
        userboxes[i].print(i);
    }
    return 0;
}
