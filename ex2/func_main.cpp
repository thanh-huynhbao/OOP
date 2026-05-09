#include <iostream>

using namespace std;
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