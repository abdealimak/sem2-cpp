#include <iostream>
using namespace std;

class Print {
    public:
        void print(char c){
            cout<<"character: "<<c<<endl;
        }
        void print(string s){
            cout<<"string: "<<s<<endl;
        }
};

int main(){
    Print p;
    p.print("A");
    p.print("Ali");
    return 0;
}