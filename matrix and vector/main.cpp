#include <iostream>
#include <cassert>
#include "matrix.h"
#include "vector.h"
using namespace std;
int main(){
    
    // ==matrices
    int rA, cA;
    int rB, cB;
    int rC, cC;
    int rD, cD;
    int rE, cE;
    int **A, **B, **C, **D, **E;
    // from inputs 
    cout << "Input number row A and cols A: " << endl;
    cin >> rA >> cA;
    cout << "Input number row B and cols B: " << endl;
    cin >> rB >> cB;
    // compute size C = A + B 
    assert((rA ==rB)&&(cA==cB));
    rC = rA;
    cC = cA;
    //input cols D
    cout << "Input cols D: " << endl;
    cin >> cD;
    // compute size d, e 
    rD = cA;    
    rE = rA;
    cE = cD;
    // allocation
    A = allocate(rA, cA);
    B = allocate(rB, cB);
    C = allocate(rC, cC);
    D = allocate(rD, cD);
    E = allocate(rE, cE);

    ramdom(A, rA, cA);
    ramdom(B, rB, cB);
    ramdom(D, rD, cD);
    
    zeros(C, rC, cC);
    zeros(E, rE, cE);

    add(A, rA, cA, B, rB, cB, C, rC, cC);
    mult(A, rA, cA, D, rD, cD, E, rE, cE);
    printMatrix(A, rA, cA);
    printMatrix(B, rB, cB);
    printMatrix(C, rC, cC);
    printMatrix(D, rD, cD);
    printMatrix(E, rE, cE);

    int sizeV1, sizeV2, sizeW, sizeT;
    int* V1, * V2,* W,* T;

    sizeV1 = cE;
    sizeV2 = cE;
    sizeW = cE;
    sizeT = rE;

    V1 = allocate(sizeV1);
    V2 = allocate(sizeV2);
    W = allocate(sizeW);
    T = allocate(sizeT);
    
    random(V1, sizeV1);
    random(V2, sizeV2);

    zeros(W, sizeW);
    zeros(T, sizeT);

    add(V1, sizeV1, V2, sizeV2, W, sizeW);
    mult(E, rE, cE, W, sizeW, T, sizeT);
    printVector(V1, sizeV1);
    printVector(V2, sizeV2);
    printVector(W, sizeW);
    printVector(T, sizeT);

    deallocate(A, rA);
    deallocate(B, rB);
    deallocate(C, rC);
    deallocate(D, rD);
    deallocate(E, rE);
    deallocate(V1);
    deallocate(V2);
    deallocate(W);
    deallocate(T);

    printVector(V1, sizeV1);
    printVector(V2, sizeV2);
    printVector(W, sizeW);
    printVector(T, sizeT);

    printMatrix(A, rA, cA);
    printMatrix(B, rB, cB);
    printMatrix(C, rC, cC);
    printMatrix(D, rD, cD);
    printMatrix(E, rE, cE);

}