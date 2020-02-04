#include <iostream>
#include <cassert>
#include <cmath>

// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 1
// Author:  Dr. Mohammad El-Ramly
// by : Muaath Hasan ID:20170411




using namespace std;

struct matrix
{
    int* data;
    int row, col;
};

void createMatrix (int row, int col, int num[], matrix& mat);

matrix operator+  (matrix mat1, matrix mat2);
matrix operator-  (matrix mat1, matrix mat2);
matrix operator*  (matrix mat1, matrix mat2);
matrix operator+  (matrix mat1, int scalar);
matrix operator-  (matrix mat1, int scalar);
matrix operator*  (matrix mat1, int scalar);
matrix operator+= (matrix& mat1, matrix mat2);
matrix operator-= (matrix& mat1, matrix mat2);
matrix operator+= (matrix& mat1, int scalar);
matrix operator-= (matrix& mat1, int scalar);
void   operator++ (matrix& mat);
void   operator-- (matrix& mat);
istream& operator>> (istream& in, matrix& mat);
ostream& operator<< (ostream& out, matrix mat);
bool   operator== (matrix mat1, matrix mat2);
bool   operator!= (matrix mat1, matrix mat2);
bool   isSquare   (matrix mat);
bool   isSymetric (matrix mat);
bool   isIdentity (matrix mat);
matrix transpose(matrix mat);


int main()
{
    int data1 [] = {1,2,3,4,5,6,7,8};
    int data2 [] = {1,4,9,16,25,36,49,64,81};
    int data3 [] = {10,100,10,100,10,100,10,100};
    int data4 [] = {1,2,1,2,3,2,1,2,1};
    int data5 [] = {1,0,0,0,1,0,0,0,1};

    matrix mat1, mat2, mat3,mat4,mat5,mat6;
    createMatrix (4, 2, data1, mat1);
    createMatrix (2, 3, data2, mat2);
    createMatrix (4, 2, data3, mat3);
    createMatrix (3, 3, data4, mat5);
    createMatrix (3, 3, data5, mat6);



    cout <<"Create Mat4  :"<< endl;
    cin>>mat4;
    cout <<"Mat 1 is :"<< endl <<  mat1 << endl;
    cout <<"Mat 2 is :"<< endl << mat2 << endl;
    cout <<"Mat 3 is :"<< endl << mat3 << endl;
    cout <<"Mat 4 is :"<< endl << mat4 << endl;

    cout <<"Mat1 + mat3 is :"<< endl << (mat1 + mat3) << endl << endl;
    cout <<"Mat3 + mat3 is :"<< endl << (mat3 + mat3) << endl << endl;

    ++mat1;
    cout <<"++Mat1 is :"<< endl << mat1 << endl;

    mat1+= mat3 += mat3;
    cout <<" mat1+= mat3 += mat3 is :"<< endl <<"mat1 is :"<< endl <<  mat1 << endl;
    cout <<"mat2 is :"<< endl << mat2 << endl;
    cout <<"mat3 is :"<< endl << mat3 << endl;



    // Add more examples of using matrix
    // .......


    return 0;
}


void createMatrix (int row, int col, int num[], matrix& mat)
{
    mat.row = row;
    mat.col = col;
    mat.data = new int [row * col];
    for (int i = 0; i < row * col; i++)
        mat.data [i] = num [i];
}

matrix operator+ (matrix mat1, matrix mat2)
{
    assert ((mat1.col==mat2.col) && (mat1.row==mat2.row));

    matrix mat;
    mat.col=mat1.col;
    mat.row=mat1.row;
    mat.data = new int [mat.col * mat.row];
    for (int i=0; i<mat.col * mat.row; i++)
    {
        mat.data[i]= mat1.data[i]+mat2.data[i];
    }
    return mat;
}

matrix operator- (matrix mat1, matrix mat2)
{
    assert ((mat1.col==mat2.col) && (mat1.row==mat2.row));

    matrix mat;
    mat.col=mat1.col;
    mat.row=mat1.row;
    mat.data = new int [mat.col * mat.row];
    for (int i=0; i<mat.col * mat.row; i++)
    {
        mat.data[i]= mat1.data[i]-mat2.data[i];
    }
    return mat;
}

matrix operator*  (matrix mat1, matrix mat2)
{
    assert ((mat1.col==mat2.col) && (mat1.row==mat2.row));

    matrix mat;
    mat.col=mat1.col;
    mat.row=mat1.row;
    mat.data = new int [mat.col * mat.row];
    for (int i=0; i<mat.col * mat.row; i++)
    {
        mat.data[i]= mat1.data[i] * mat2.data[i];
    }
    return mat;
}

matrix operator+  (matrix mat1, int scalar)
{
    matrix mat;
    mat.col=mat1.col;
    mat.row=mat1.row;
    mat.data = new int [mat.col * mat.row];
    for (int i=0; i<mat.col * mat.row; i++)
    {
        mat.data[i]= mat1.data[i] + scalar;
    }
    return mat;
}

matrix operator-  (matrix mat1, int scalar)
{
    matrix mat;
    mat.col=mat1.col;
    mat.row=mat1.row;
    mat.data = new int [mat.col * mat.row];
    for (int i=0; i<mat.col * mat.row; i++)
    {
        mat.data[i]= mat1.data[i] - scalar;
    }
    return mat;
}

matrix operator*  (matrix mat1, int scalar)
{
    matrix mat;
    mat.col=mat1.col;
    mat.row=mat1.row;
    mat.data = new int [mat.col * mat.row];
    for (int i=0; i<mat.col * mat.row; i++)
    {
        mat.data[i]= mat1.data[i] * scalar;
    }
    return mat;
}

matrix operator+= (matrix& mat1, matrix mat2)
{
    assert ((mat1.col*mat1.row) == (mat2.col*mat2.row));

    for (int i=0; i<mat1.col * mat1.row; i++)
    {
        mat1.data[i]+= mat2.data[i];
    }
    return mat1;
}

matrix operator-= (matrix& mat1, matrix mat2)
{
    assert ((mat1.col*mat1.row) == (mat2.col*mat2.row));

    for (int i=0; i<mat1.col * mat1.row; i++)
    {
        mat1.data[i]-= mat2.data[i];
    }
    return mat1;
}

matrix operator+= (matrix& mat1, int scalar)
{
    matrix mat;
    mat.col=mat1.col;
    mat.row=mat1.row;
    mat.data = new int [mat.col * mat.row];
    for (int i=0; i<mat.col * mat.row; i++)
    {
        mat.data[i] = (mat1.data[i] += scalar);
    }
    return mat;
}

matrix operator-= (matrix& mat1, int scalar)
{
    matrix mat;
    mat.col=mat1.col;
    mat.row=mat1.row;
    mat.data = new int [mat.col * mat.row];
    for (int i=0; i<mat.col * mat.row; i++)
    {
        mat.data[i] = (mat1.data[i] -= scalar);
    }
    return mat;
}

void   operator++ (matrix& mat)
{

    for (int i=0; i<mat.col * mat.row; i++)
    {
        mat.data[i]++;
    }
}
void   operator++ (matrix& mat,int)
{

    for (int i=0; i<mat.col * mat.row; i++)
    {
        ++mat.data[i];
    }
}

void   operator-- (matrix& mat)
{

    for (int i=0; i<mat.col * mat.row; i++)
    {
        mat.data[i]--;
    }
}

istream& operator>> (istream& in, matrix& mat)
{
    cout<<"Enter the row : ";
    in>>mat.row;
    cout<<"Enter the col : ";
    in>>mat.col;

    mat.data = new int [mat.col*mat.row];

    for (int i=0; i<mat.col*mat.row; i++)
    {
        in>>mat.data[i];
    }
    return in;
}

ostream& operator<< (ostream& out, matrix mat)
{
    for (int i=0; i<mat.row; i++)
    {
        for (int j=0; j<mat.col; j++)
        {
            out<<mat.data[(mat.col * i) + j]<<"   ";
        }
        cout<<endl;
    }
    return out;
}

bool   operator== (matrix mat1, matrix mat2)
{
    assert ((mat1.col*mat1.row) == (mat2.col*mat2.row));

    for (int i=0; i<mat1.col * mat1.row; i++)
    {
        if (mat1.data[i] == mat2.data[i])
        {
            return true;
        }
    }
}

bool   operator!= (matrix mat1, matrix mat2)
{
    assert ((mat1.col*mat1.row) == (mat2.col*mat2.row));

    for (int i=0; i<mat1.col * mat1.row; i++)
    {
        if (mat1.data[i] != mat2.data[i])
        {
            return true;
        }
    }
}

bool isSquare (matrix mat)
{
    int n;
    bool squre = true;

    for (int i=0; i<(mat.col*mat.row) ; i++)
    {
        n = sqrt(mat.data[i]);
        squre = (n*n == mat.data[i]);
        if (squre == 0)
        {
            break;
        }
    }
    return squre;
}

bool isSymetric (matrix mat)
{
    if(mat.col != mat.row)
    {
        return false;
    }
    else
    {
        for(int i=0; i<mat.row*mat.col; i++)
        {
            if (transpose(mat).data[i] == mat.data[i])
            {
                if (false)
                {
                    return false;
                    break;
                }
                else
                {
                    return true;
                }
            }
        }
    }
}

bool isIdentity (matrix mat)
{
    assert (mat.col==mat.row);
    for(int i=0; i<mat.row*mat.col; i+=mat.col+1)
    {
        for(int j=1; j<mat.row*mat.col; (j==i)? j=i+1:j++)
        {
            if((mat.data[i]==1) && (mat.data[j]==0))
            {
                return true;
            }
            else
            {
                return false;
                break;
            }
        }
    }
}

matrix transpose(matrix mat)
{
    assert (mat.col==mat.row);

    matrix mat1;
    mat1.col = mat.row;
    mat1.row = mat.col;
    mat1.data = new int [mat1.col*mat1.row];

    int coun=0;
    for(int i=0; i<mat1.row; i++)
    {
        for(int j=0; j<mat1.col; j++)
        {
            mat1.data[i + j * 3] = mat.data[coun];
            coun++;
        }
    }
    return mat1;
}
