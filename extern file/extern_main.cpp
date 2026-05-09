#include <iostream>
using namespace std;


extern void mult(const double& x, const double c);
extern double x;
extern double y;
extern const double c;

int main(){
    {
        double x;
        x = 100.0;
    }
    cout << x << endl;
    mult(x, c);
    cout << y << endl;
    return 0;
}