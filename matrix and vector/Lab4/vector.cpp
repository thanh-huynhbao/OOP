#include <iostream>
#include "vector.h"
using namespace std;

Vector::Vector(const int& sizeV_){
    sizeV = sizeV_;
    allocate();
}

Vector::~Vector(){
    delete[] v;
}

void Vector::allocate(){
    v = new int [sizeV];
}


void Vector::random(){
    for(int i = 0; i < sizeV; ++i){
        v[i] = (int)(1 + rand() % 10);
    }
}

void Vector::print(){
    for(int i = 0; i < sizeV; ++i){
        cout << v[i] <<endl;
    }
}