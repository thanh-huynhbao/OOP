#include "vector.h"
#include <cmath>
#include <iostream>
using namespace std;
int* allocate(const int sizeV1){
    int* V1;
    V1 = new int [sizeV1]; return V1;
}
void random(int* V1, const int sizeV1){
    for(int i = 0; i < sizeV1; ++i){
        V1[i] = (int) (1 + rand() % 10);
    }
}

void zeros(int* W, const int sizeW){
    for(int i = 0; i < sizeW; ++i){
        W[i] = 0;
    }
}

void add(int* V1, const int sizeV1, int* V2, const int sizeV2, int* W, const int sizeW){
    for(int i = 0; i < sizeV1; ++i){
        for(int j = 0; j < sizeV2; ++j){
            W[i] = V1[i] + V2[i];
        }
    }
}

void printVector(int* V1, const int sizeV1){
    cout << "Print nha!" << endl;
    for(int i = 0; i < sizeV1; ++i){
        cout << V1[i] << ", ";
    }
    cout << endl;
}

void mult(int** M5, const int rM5, const int cM5, int* W, const int sizeW, int* T, const int sizeT){
        for(int i = 0; i < sizeT; ++i){
            T[i] = 0;
            for(int k = 0; k < cM5; ++k){
                T[i] = T[i] + M5[i][k] * W[k];
            
        }
    }
}

void deallocate(int* V1){
    delete[] V1;
}


