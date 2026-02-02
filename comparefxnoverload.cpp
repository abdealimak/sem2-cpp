#include <iostream>
using namespace std;

class Compare {
public:
    int x;

    Compare(int a) : x(a) {}

    bool operator>(const Compare& other) const {
        return x > other.x;
    }
};

int main() {
    Compare a(15), b(10);

    if (a > b) {
        cout << "a is greater" << endl;
    } else {
        cout << "b is greater" << endl;
    }

    return 0;
}
