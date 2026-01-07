#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;

    (marks > 90) ? cout << "Grade A"
    : (marks >= 75 && marks <= 90) ? cout << "Grade B"
    : cout << "Grade C";

    return 0;
}
