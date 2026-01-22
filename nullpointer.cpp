/*
why null pointer is used:

to show that a pointer is not pointing to any variable
to avoid garbage values
to prevent accidental access to memory
it will not return anything
*/

#include <iostream>
using namespace std;

int main(){
    int *p = nullptr;
    if (p==nullptr)
    cout<<"pointer is null";

    return 0;
}