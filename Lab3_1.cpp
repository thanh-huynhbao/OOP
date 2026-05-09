#include <iostream>
using namespace std;

double func1(double x){
    return x * x;
}

double func2(double& x){
    double y;
    y = x * x;
    return y;
}

void func3(double& x, double y){
    x = 100.;
    y = x * x;
}

void func4(double& x, double& y){
    x = 100.;
    y = x * x;
}

void func5(double x, double* y){
    *y = x * x;
}

int main(){
    double x = 10.0;
    double y = 0;
    double* py = &y;
    cout << x << endl;
    cout << func1(x) << endl;
    cout << func2(x) << endl;
    cout << y << endl;
    func3(x, y);
    cout << y << endl;
    func4(x, y);
    cout << y << endl;
    func5(x, py);
    cout << *py << endl;
    return 0;
}