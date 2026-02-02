#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived show()" << endl;
    }
};

int main() {
    Base* b;
    Derived d;

    b = &d;
    b->show();   // runtime decision
    return 0;
}
