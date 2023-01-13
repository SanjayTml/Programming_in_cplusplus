/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a13_p3
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    //declaring variables
    int n;
    ifstream input1;
    ofstream output1;

    cout << "Enter no. of files: ";
    cin >> n;
    string name[n];
    
    //opening/creating file for output
    output1.open("concatn.txt", ios::binary);
    if(!output1.good()){
        cout << "Error Creating File!\n";
    }

    //loop to concatenate n files
    for(int i=0; i<n; i++){
        cout << "Enter file name with extension:" << endl;
        cin >> name[i];

        input1.open(name[i], ios::binary);
        if(!input1.good()){
            cout << "Error Opening File!\n";
        }

        output1 << input1.rdbuf() << "\n";

        input1.close();
    }

    cout << "Copy Completed!\n";
    output1.close();

    return 0;
}