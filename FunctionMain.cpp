#include <iostream>
#include "FunctionDeclare.h"

extern double RecArea(double side1, double side2);

using namespace std;
int main(){
    // double h(3.0), b(6.0);
    Print(TriArea((double) 2.0, (double)5.0));
    // Print(RecArea(h, b));
    return 0;
}