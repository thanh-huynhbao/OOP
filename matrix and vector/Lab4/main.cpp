#include <iostream>
#include "matrix.h"
#include "vector.h"
using namespace std;

int main(){
    const int p_INF = 100000;
    double alphha = 0;

    Matrix A(5,4);
    A.print();
    A.random();// B(5,4), C(5,4), D(4,5), E(5,5);
    A.print();

    Vector v(5);
    v.print();
    v.random();
    v.print();
}