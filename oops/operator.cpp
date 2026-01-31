#include <iostream>
using namespace std;

class Number{
    public:
        int x;

        Number(int a){
            x = a;
        }

        Number operator + (Number obj){
            return Number(x + obj.x);
        }
};

int main(){
    Number n1(10), n2(20);
    Number n3 = n1 + n2;

    cout<<n3.x<<endl;
    return 0;
}