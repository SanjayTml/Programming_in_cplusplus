/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a9_p7
*/

//Getting libraries
#include <iostream>
#include <cstring>
using namespace std;

//Defining functions
int myfirst(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]>0 && arr[i]%2==0){
            return arr[i];
        }
    }
    return -1;
}

double myfirst(double arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]<0 && (int)arr[i]==arr[i]){
            return arr[i];
        }
    }
    return -1.1;
}

char myfirst(char arr[], int n){
    char a;
    char *ptr=NULL;
    char cns[] = "bcdfghjklmnpqrstvwxyz";
    for(int i=0;i<n;i++){
        a=tolower(arr[i]);
        ptr=strchr(cns,a); //returns ptr to position of a in cns
        if(ptr!=NULL){
            return arr[i];
        }
    }
    return '0';
}

int main() {
    //initializing variables and arrays
    int n=5;
    int iarr[]={-2,-4,3,2,6};
    double darr[]={2.3,4,0,-6.6,-2};
    char carr[]={' ','!','a','e','d'};
    int ires;
    double dres;
    char cres;

    //Calling function
    ires=myfirst(iarr,n);
    dres=myfirst(darr,n);
    cres=myfirst(carr,n);

    //printing the values
    cout << ires << endl;
    cout << dres << endl;
    cout << cres << endl;

    return 0;
}
