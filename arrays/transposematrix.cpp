#include <iostream>
using namespace std;

int main(){
    int a[2][3];
    cout<<"enter elements of matrix: \n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    cout<<"Transpose of matrix: \n";
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 2; i++){
            cout << a[i][j] <<" ";
        }
        cout<<endl;
    }
}
