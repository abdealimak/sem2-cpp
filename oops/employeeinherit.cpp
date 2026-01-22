#include <iostream>
using namespace std;

class Employee
{
    public:
    int empId;
    void showId()
    {
        cout<<"Employee ID: "<< empId<< endl;
    }
};
class Salary : public Employee
{
    public:
    int salary;
    void showSalary()
    {
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    Salary firstEmployee;
    firstEmployee.empId = 201;
    firstEmployee.salary=30000;
    firstEmployee.showId();
    firstEmployee.showSalary();

}