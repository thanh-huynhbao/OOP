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
    Vector w(5);
    Vector t(5);
    v.print();
    v.random();
    v.print();
    cout << v.norm(2) << endl;
    cout << v.norm(p_INF) << endl;
    w.random();
    t.zeros();
    t.print();
    cout << "Size: " << t.getSize() << endl;
    cout << A(0,0) << endl;
    A(0,0) = 5;    
    cout << A(0,0) << endl;
    // t = v + w;
    cout << "Print v: ";
    v.print();
    cout << "Print w: ";
    w.print();
    cout << "Print t: ";
    (v+w).print();
    t = v+w;
    t.print();

}