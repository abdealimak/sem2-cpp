#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int main(){
    int sum = add(2,3);
    cout<<sum;
    return 0;
}