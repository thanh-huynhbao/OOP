#include <iostream>
#include <cmath>
#include <cassert>
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
        cout << v[i] << ", ";
    }
    cout << endl;
}

double Vector::norm(const int& power){
    double result = 0;
    for(int i = 0; i < sizeV; ++i){
        result = result + pow(v[i], power);
    }
    result = sqrt(result);
    return result;
}

void Vector::zeros(){
    for(int i = 0; i < sizeV; ++i){
        v[i] = 0;
    }
}

int Vector::getSize(){
    return sizeV;
}

int& Vector::operator() (const int& idx){
    return v[idx];
}

int Vector::operator() (const int& idx) const{
    return v[idx];
}

Vector Vector::operator+(const Vector& vec) const{
    assert(sizeV == vec.sizeV);
    Vector res(sizeV);
    for(int i =0; i < sizeV; ++i){
        res.v[i] = v[i] + vec.v[i];
    }
    // cout << vec.v[4];
    return res;
}
Vector& Vector::operator=(const Vector& vec){
    if(this == &vec) return *this;
    assert(sizeV == vec.sizeV);
    for(int i =0; i < sizeV; ++i){
        v[i] = vec.v[i];
    }
    return *this;
}