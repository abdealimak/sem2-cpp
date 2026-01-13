#include <iostream>
using namespace std;

class Student
{
    public:
        int rollNo;
        string name;

        void display(){
            cout<<"Roll No: "<<rollNo<<endl;
            cout<<"Name: "<<name;
        }
};

int main(){
    Student S1; //object creation
    S1.rollNo=101;
    S1.name="Ali";
    S1.display();

    return 0;
}
