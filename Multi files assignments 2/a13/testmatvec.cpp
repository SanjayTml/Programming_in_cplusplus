#include<iostream>
#include<fstream>
#include "Matrix.h"
#include "Vector.h"
using namespace std;

int main()
{
    ifstream infile1,infile2;
    ofstream outfile1,outfile2;
    infile1.open("in1.txt");
    if(!infile1)
    {
        cerr<<"Failure...";
        exit(1);
    }
    int i;
    infile1>>i;
    Vector v(i);
    for(int j=0;j<i;j++)
    {
        double d;
        infile1>>d;
        v.set(j,d);
        
    }
    cout<<v;

    infile2.open("in2.txt");
    if(!infile2)
    {
        cerr<<"Failure...";
        exit(1);
    }
    int r,c;
    int data=1;
    infile2>>r>>c;
    cout << r << c;
    Matrix m(r,c);
    for(int k=0;k<r;k++)
    {
        for(int l=0;l<c;l++)
        {
            //infile2>>data;
            m.set(k,l,data);

        }
    }
    cout<<m;

    infile1.close();
    infile2.close();


}
