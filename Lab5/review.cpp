#include <iostream>
using namespace std;

class Base{
    public:
    virtual void print() {cout << "This is BASE::print" << endl;
    }
};

class Derived_1 : public Base{
    public: 
    virtual void print(){cout << "This is DERIVED-1::print" << endl;}
};

class Derived_2 : public Base{
    public: 
    virtual void print(){cout << "This is DERIVED-2::print" << endl;}
};

int main(){
    Derived_1 d1_obj;
    Derived_2 d2_obj;

    Base *p;
    p = &d1_obj;
    p->print();
    p = &d2_obj;
    p->print();
    return 0;
}