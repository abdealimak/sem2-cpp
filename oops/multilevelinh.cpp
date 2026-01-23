#include <iostream>
using namespace std;

class Student{
    public:
        int roll = 1;
};

class Marks: public Student{
    public:
        float m1,m2,m3;
    void getmarks(){
    cout<<"enter marks for cs: ";
    cin>>m1;
    cout<<"enter marks for os: ";
    cin>>m2;
    cout<<"enter marks for db: ";
    cin>>m3;
    }

};

class Result: public Marks{
    public:
        void display(){
            getmarks();
            float results;
            results = ((m1+m2+m3)/30)*100;
            cout<<"roll no: "<<roll<<endl;
            cout<<"Results: "<<results<<"%"<<endl;
        }
};

int main(){
    
    Result S1;
    S1.display();

    return 0;

}
