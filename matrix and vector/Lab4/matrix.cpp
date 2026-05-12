#include "matrix.h"
#include <iostream>
#include <cmath>
using namespace std;

Matrix::Matrix(const int& numRows_, const int& numCols_){
    numRows = numRows_;
    numCols = numCols_;
    allocate();
}
Matrix::~Matrix(){
    for(int i = 0; i < numRows; ++i){
        delete[] A[i];
    }
    delete[] A;
}
void Matrix::allocate(){
    A = new double* [numRows];
    for(int i = 0; i < numRows; ++i){
        A[i] = new double [numCols];
    }
}

void Matrix::random(){
    for(int i = 0; i < numRows; ++i){
        for(int j = 0; j < numCols; ++j){
            A[i][j] = (double)(1 + rand() % 10);
        }
    }
}

void Matrix::print(){
    for(int i = 0; i < numRows; ++i){
        for(int j = 0; j < numCols; ++j){
            cout << A[i][j] << ", ";
        }
        cout << endl;
    }
}
