#include <iostream>
using namespace std;

int main() {
    int a[2][3];
    int min;

    cout << "Enter elements:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    min = a[0][0];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
            }
        }
    }

    cout << "Smallest element: " << min;
    return 0;
}