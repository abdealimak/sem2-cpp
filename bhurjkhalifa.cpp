#include <iostream>
using namespace std;

int main(){
    int n=10;

    for(int i=5;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<" * * * * * ";
        }
        cout<<endl;
    }
}