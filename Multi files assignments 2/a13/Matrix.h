#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include<iostream>
#include<fstream>
#include"Vector.h"

class Matrix
{
    public:
    int row,column,**matrix;
    public:
    // int getrow();
    // int getcolumn();
    // int getdata(int,int);
    Matrix();
    Matrix(int,int);
    ~Matrix();
    Matrix operator+(Matrix &);
    Matrix operator*(Matrix &);
    friend std::ostream& operator<<(std::ostream& os,const Matrix& m);
	friend std::istream& operator>>(std::istream& is, Matrix& m);
    void set(int,int,int);

};



#endif // MATRIX_H_INCLUDED
