#include <iostream>

using namespace std;
extern double areaTri(const double& h, const double& b);
extern double areaRec(const double& w, const double& h);
extern double totalArea;
extern void printTotal();
int main(){
    double h = 5.0, b = 2.0;
    double w = 3.0; 
    double triArea, recArea;
    triArea = areaTri(h, b);
    recArea = areaRec(w, h);
    totalArea = triArea + recArea;

    cout << triArea << endl;
    cout << recArea << endl;
    printTotal();
}