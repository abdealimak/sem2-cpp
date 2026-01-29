#include <iostream>
using namespace std;

int main() {
    int a[2][3];
    int max;

    cout << "Enter elements:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    max = a[0][0];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    cout << "Largest element: " << max;
    return 0;
}
