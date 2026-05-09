#include "matrix.h"
#include <cmath>
#include <iostream>
using namespace std;
int** allocate(const int rM, const int cM){
    int **A;
    A = new int* [rM];
    for(int i = 0; i < rM; ++i){
        A[i] = new int [cM];
    }
    return A;
}
void ramdom(int** M, const int rM, const int cM){
    for(int i = 0; i < rM; ++i){
        for(int j = 0;j < cM; ++j){
            M[i][j] = (int)(1 + rand() % 10);
        }
    }
}

void zeros(int** M, const int rM, const int cM){
    for(int i = 0; i < rM; ++i){
        for(int j = 0;j < cM; ++j){
            M[i][j] = 0;
        }
    }
}

void add(int** M1, const int rM1, const int cM1, int** M2, const int rM2, const int cM2, int** M3, const int rM3, const int cM3){
    for(int i = 0; i < rM1; ++i){
        for(int j = 0;j < cM1; ++j){
            M3[i][j] = M1[i][j] + M2[i][j];
        }
    }
}

void printMatrix(int** C, const int rC, const int cC){
    cout << "Print nha!"<<endl;
    for(int i = 0; i < rC; ++i){
        for(int j = 0; j < cC; ++j){
            cout<<C[i][j]<<", ";
        }
        cout << endl;
    }
}

void mult(int** M1, const int rM1, const int cM1, int** M4, const int rM4, const int cM4, int** M5, const int rM5, const int cM5){
    for(int i = 0; i < rM5; ++i){
        for(int j = 0;j < cM5; ++j){
            M5[i][j] = 0;
            for(int k = 0; k < cM1; ++k){
                M5[i][j] = M5[i][j] + M1[i][k] * M4[k][j];
            }
        }
    }
}

void deallocate(int** M, const int rM){
    for(int i = 0; i < rM; ++i){
        delete[] M[i];
    }
    delete[] M;
}