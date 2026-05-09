#include <iostream>
#include "FunctionDeclare.h"
using namespace std;

double TriArea(double height = 4.0, double base = 2.0){
    double area;
    area = 0.5 * height * base;
    return area;
}
void Print(double result){
    cout << "Result = " << result << endl;
}