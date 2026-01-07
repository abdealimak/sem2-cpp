#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter number: ";
    cin>>a;
    int un = a % 10;
    cout<<un<<endl;
    int ten = a / 10 % 10;
    cout<<ten<<endl;
    int hun = a / 100;
    cout<<hun<<endl;
    
    cout<<un<<ten<<hun;
}