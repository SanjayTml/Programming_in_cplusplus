#include<fstream>
#include<iostream>
#include<cstring>
#include<string>
#include<filesystem>
#include<iterator>

using namespace std;

void insertion(string &string1, string &string2)
{
    int i=0;
    while(string1[i]!='.')
    {i++;}
    string1.insert(i,string2);
}

int main() {
    string buff;
    string file1,file2,co;
    co="_copy";
    getline(cin, file1);
    file2=file1;
    ifstream obj1;
    obj1.open(file1, ios::binary);
    if(!obj1){
        cout << "Unable to open file!\n";
    }
    insertion(file2,co);
    cout << file2;
    ofstream obj2;
    obj2.open(file2, ios::binary);
    obj2 << obj1.rdbuf();
    cout << "Copy Completed!\n";
    obj1.close();
    obj2.close();
    return 0;
}