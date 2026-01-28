#include <iostream>
using namespace std;

class Calculator {
    public:
        int add(int a , int b){
            return a + b;
        }
        float add(float a, float b){
            return a + b;
        }
};

int main(){
    Calculator c;
    cout<<c.add(10, 20)<<endl;
    cout<<c.add(5.5f, 6.3f)<<endl;
    return 0;
}