#include <iostream>
using namespace std;

class Number {
public:
    int x;

    Number(int a) {
        x = a;
    }

    Number& operator++() {
        ++x;
        return *this;
    }
};

int main() {
    Number n1(10);

    cout << n1.x << endl;
    ++n1;
    cout << n1.x << endl;

    return 0;
}
