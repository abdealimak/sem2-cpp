#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter number: ";
    cin>>a;
    int hun = a / 100;
    cout<<hun<<endl;
    int ten = a / 10 % 10;
    cout<<ten<<endl;
    int un = a % 10;
    cout<<un<<endl;

    int fact = 1, fact1 = 1, fact2 = 1;

    for (int i = 1; i <=hun; i++)
    {
        fact *= i;
    }
    cout<<fact;

    for (int i = 1; i <=ten; i++)
    {
        fact1 *= i;
    }
    cout<<fact1;

    for (int i = 1; i <=un; i++)
    {
        fact2 *= i;
    }
    cout<<fact2;

    (fact+fact1+fact2 == a) ? cout<<"strong" : cout<<"not strong";
    
}