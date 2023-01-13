/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a9_p9
*/

//Getting libraries
#include <iostream>

using namespace std;

void subtract_max(int* &a,int n){
    int high = a[0];
    for(int j=1;j<n;j++){
        if(a[j]>high){
            high=a[j];
        }
    }
    for(int j=0;j<n;j++){
        a[j]=a[j]-high;
    }
}

void deallocate(int* a){
    delete a;
}

int main(){
    int n;
    cout << "Input no. of values:" << endl;
    cin >> n;
    signed int *a= new int[n];
    if(!a){
        cout << "Memory Allocation Error." << endl;
    }
    cout << "Enter Values:" << endl;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    //calling function
    subtract_max(a,n);

    cout << "After Subtraction:" << endl;
    for(int i=0;i<n;i++){
        cout << a[i] << endl;
    }

    //memory deallocating function
    deallocate(a);

    return 0;
}
