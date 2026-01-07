#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"enter first number: ";
    cin>>a;

    cout<<"enter sec number: ";
    cin>>b;

    cout<<"enter third number: ";
    cin>>c;

int max = (a > b && a > c) ? a : (b > c ? b : c);
cout<<"largest number is: "<<max;
}