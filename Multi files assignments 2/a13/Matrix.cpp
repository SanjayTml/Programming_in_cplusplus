#include<iostream>
#include "Matrix.h"
#include <fstream>

void Matrix::set(int r,int c,int value)
{
    matrix[r][c]=value;
    //std::cout << matrix[r][c];
}
// int Matrix::getrow()
// {
//     return row;
// }
// int Matrix::getcolumn()
// {
//     return column;
// }
// int Matrix::getdata(int r,int c)
// {
//     return matrix[r][c];
// }

Matrix::Matrix()
{

}

Matrix::Matrix(int r, int c)
{
    row = r;
    column = c;
    matrix = new int*[r];
    for(int i=0;i<r;i++)
    {
        matrix[r]=new int[c];
    }

}

Matrix::~Matrix()
{
    std::cout<<"Destroying...";
    delete[] matrix;
}

/*Matrix Matrix::operator*(Matrix &m)
{
    if(row == m.column)
    {   for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                m.matrix[i][j]=matrix[i][j]*m.matrix[i][j];
            }
        }
    }
    else
    {
        std::cout<<"Not possible";
    }
    return m;
    
}
Matrix Matrix::operator+(Matrix &m)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            m.matrix[i][j]=matrix[i][j]+m.matrix[i][j];
        }
    }
    return m;
}*/
std::ostream& operator<<(std::ostream& os,const Matrix& m)
{
	for(int i=0;i<m.row;i++)
    {
        for(int j=0;j<m.column;j++)
        {
            os<<m.matrix[i][j]<<" "<<std::endl;
        }
    }
	return os;
}
//Overloading the << operator

std::istream& operator >> (std::istream& is, Matrix& m)
{
	is>>m.row>>m.column;
    for(int i=0;i<m.row;i++)
    {
        for(int j=0;j<m.column;j++)
        {
            is>>m.matrix[i][j];
        }
    }
	return is;
}
