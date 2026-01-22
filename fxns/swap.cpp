#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    cout << "enter 1st numb: ";
    cin >> a;
    cout << "enter 2nd numb: ";
    cin >> b;

    swap(a, b);

    cout << "After swap:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

/*  without using a 3rd variable:
a = a + b;
b = a - b;
a = a - b;*/