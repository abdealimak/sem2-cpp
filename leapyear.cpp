#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "enter your year : ";
    cin>>year;

    ((year % 4 == 0 && year%100 != 0) || (year % 400==0)) ? cout<< "its a leap year" : cout<< "not a leap year";
}
