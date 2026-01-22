#include <iostream>
using namespace std;

void Area() {
    int n;
    cout << "choose an option (1: Area of Triangle) (2: Area of Circle) (3: Area of Rectangle) = ";
    cin >> n;

    switch (n) {

        case 1: {
            int h, b;
            float areaoft;

            cout << "enter height in cm = ";
            cin >> h;
            cout << "enter base in cm = ";
            cin >> b;

            areaoft = 0.5 * h * b;
            cout << "area = " << areaoft;
            break;
        }

        case 2: {
            int r;
            float areaofc;

            cout << "enter radius = ";
            cin >> r;

            areaofc = 3.14 * r * r;
            cout << "area = " << areaofc;
            break;
        }

        case 3: {
            int height, base;
            int areaofr;

            cout << "enter height in cm = ";
            cin >> height;
            cout << "enter base in cm = ";
            cin >> base;

            areaofr = height * base;
            cout << "area = " << areaofr;
            break;
        }

        default:
            cout << "wrong input";
    }
}

int main() {
    Area();
    return 0;
}
