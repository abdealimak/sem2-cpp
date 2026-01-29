#include <iostream>
using namespace std;

int main(){
    int a[2][2];
    int sum = 0;

    cout<<"enter elements of 2d array: \n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
            sum += a[i][j];
        }
    }
    cout<<"sum of elements = "<<sum;
    return 0;
}