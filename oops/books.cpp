#include <iostream>
using namespace std;

class Books
{
    public:
        int price;
        string name;

        void display(){
            cout<<"Price: "<<price<<" ₹"<<endl;
            cout<<"Book Name: "<<name;
        }
};
int main(){
    Books B1;
    B1.price=200;
    B1.name="Pokemon";
    B1.display();

    return 0;
}