#include<iostream>
using namespace std;

int main()
{
	int i, j, rows;
    cout << "Enter Inverted Right Triangle Star pattern Rows = ";
    cin >> rows;

    cout << "Inverted Right Angled Triangle Star Pattern\n"; 

    for(i = rows; i > 0; i--)
    {
        for(j = 0; j < i; j++)
		{
            cout << "*";
        }
        cout << "\n";
    }		
return 0;
}