#include <iostream>
using namespace std;

void deallocateVec(double v[]){
    delete[] v; cout << "Deallocated!"<<endl;
}

double* allocateVec(const int& numCols){
    double* v;
    v = new double[numCols];
    return v;
}

void add(const int& length, const double* v1, const double* v2, double* w){
    for(int i = 0; i < length; ++i)
    w[i] = v1[i] + v2[i];
}

void add(const double& alp1, const double& alp2 , double& beta){
    beta = alp1 + alp2;
}

void printVec(const int& length, const double w[]){
    for(int i = 0; i < length; ++i){
        cout << w[i] << ", ";
    }
    cout << endl;
}

int main(){
    int length(5);
    double alp1(10), alp2(20), beta;
    double *v1, *v2, *w;

    v1 = allocateVec(length);
    v2 = allocateVec(length);
    w = allocateVec(length);

    for(int i = 0; i < length; ++i){
        v1[i] = i;
        v2[i] = 2.0 * i;
    }

    add(alp1, alp2, beta);
    add(length, v1, v2, w);

    cout << beta << endl;
    printVec(length, w);

    deallocateVec(v1);
    deallocateVec(v2);
    deallocateVec(w);

    return 0;

}