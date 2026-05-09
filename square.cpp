#include <iostream>
using namespace std;

double TriArea(double height = 4, double base = 2){
    double area;
    area = 0.5 * height * base;
    return area;
}
void Print(double result){
    cout << "Result = " << result << endl;
}
int main(){
    
    Print(TriArea());nothin
    Print(TriArea(2.0));
    Print(TriArea(0.5, 2.0));

}