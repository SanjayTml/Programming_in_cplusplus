#include<fstream>
#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main() {
    //const int size=60;
    string file1;
    getline(cin, file1);
    //ifstream obj1;
    /*obj1.open(file1);
    if(!obj1){
        cout << "Unable to open file!\n";
    }*/
    char name[file1.length()-3], ext[4], c[]="copy";
    char *cstr = new char[file1.length() + 1];
    strcpy(cstr, file1.c_str());
    char *p = strchr(cstr, '.');
    while(p!=NULL){
        p--;
        strcpy(name,p);
    }
    p = strchr(cstr, '.');
    while(*p!='\0' || *p!='\n' || p!=NULL){
        strcpy(ext,p);
        p++;
    }
    char *cstr2 = new char[file1.length() + 6];
    strcpy(cstr2, name);
    strcpy(cstr2, c);
    strcpy(cstr2, ext);
    string file2(cstr2);
    //ofstream obj2;
    //obj2.open(file2);
    /*if(!obj2){
        cout << "Unable to create file!\n";
    }*/
    //file2 << file1.rdbuf();
    cout << file1;
    cout << "Copy Completed!\n";
    cout << file2;
    //file1.close();
    //file2.close();
    return 0;

}