#include <iostream>
using namespace std;

class Base{
    private:
    int b_private;
    protected:
    int b_protected;
    public:
    int b_public;
    Base() : b_private(1), b_protected(2), b_public(3) {}
};

class Derived: protected Base
{
    protected:
        int d_protected;
    public:
        int d_public;
        Derived() : d_protected(4), d_public(5) {}    
};

class DerivedofDerived : public Derived
{   
    
    public:
    void print()
        {
            cout << b_protected << endl;//2
            cout << b_public << endl;//3
            cout << d_protected << endl;//4
            cout << d_public << endl;
        }
};

int main(){
    DerivedofDerived obj;
    obj.b_public = 20; //error
    obj.d_public = 30;
    obj.print();
    return 0;
}