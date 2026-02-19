#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

/*
=========================================================
    BASE CLASS : EMPLOYEE
    Contribution : YATHARTH
=========================================================
*/

class Employee {
protected:
    int empId;
    string name;
    double basicSalary;

public:
    Employee() {
        basicSalary = 0;
    }

    virtual void input() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    virtual double calculateSalary() = 0;
    virtual void displayPayslip() = 0;
    virtual void saveToFile() = 0;

    virtual ~Employee() {}
};

/*
=========================================================
    DERIVED CLASS : PERMANENT EMPLOYEE
    Contribution : RUTUJA
=========================================================
*/

class PermanentEmployee : public Employee {
    double hra, da, tax, netSalary;

public:
    double calculateSalary() override {
        hra = 0.20 * basicSalary;
        da  = 0.10 * basicSalary;
        tax = 0.05 * basicSalary;
        netSalary = basicSalary + hra + da - tax;
        return netSalary;
    }

    void displayPayslip() override {
        cout << "\n----- PERMANENT EMPLOYEE PAYSLIP -----\n";
        cout << "ID           : " << empId << endl;
        cout << "Name         : " << name << endl;
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "HRA          : " << hra << endl;
        cout << "DA           : " << da << endl;
        cout << "Tax          : " << tax << endl;
        cout << "Net Salary   : " << netSalary << endl;
        cout << "------------------------------------\n";
    }

    void saveToFile() override {
        ofstream file("employees.txt", ios::app);
        file << empId << "|" << name << "|"
            << basicSalary << "|" << calculateSalary()
            << "|Permanent\n";
        file.close();
    }
};

/*
=========================================================
    DERIVED CLASS : PART-TIME EMPLOYEE
    Contribution : Abdeali
=========================================================
*/

class PartTimeEmployee : public Employee {
    int hoursWorked;
    double ratePerHour, netSalary;

public:
    void input() override {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Employee Name: ";
        getline(cin, name);

        basicSalary = 0;   // explicitly initialized

        cout << "Enter Hours Worked: ";
        cin >> hoursWorked;

        cout << "Enter Rate per Hour: ";
        cin >> ratePerHour;
    }

    double calculateSalary() override {
        netSalary = hoursWorked * ratePerHour;
        return netSalary;
    }

    void displayPayslip() override {
        cout << "\n----- PART-TIME EMPLOYEE PAYSLIP -----\n";
        cout << "ID            : " << empId << endl;
        cout << "Name          : " << name << endl;
        cout << "Hours Worked  : " << hoursWorked << endl;
        cout << "Rate / Hour   : " << ratePerHour << endl;
        cout << "Net Salary    : " << netSalary << endl;
        cout << "------------------------------------\n";
    }

    void saveToFile() override {
        ofstream file("employees.txt", ios::app);
        file << empId << "|" << name << "|"
            << basicSalary << "|" << calculateSalary()
            << "|PartTime\n";
        file.close();
    }
};

/*
=========================================================
    DERIVED CLASS : CONTRACT EMPLOYEE
    Contribution : Abdeali
=========================================================
*/

class ContractEmployee : public Employee {
    double contractAmount, netSalary;

public:
    void input() override {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Employee Name: ";
        getline(cin, name);

        basicSalary = 0;   // explicitly initialized

        cout << "Enter Contract Amount: ";
        cin >> contractAmount;
    }

    double calculateSalary() override {
        netSalary = contractAmount;
        return netSalary;
    }

    void displayPayslip() override {
        cout << "\n----- CONTRACT EMPLOYEE PAYSLIP -----\n";
        cout << "ID              : " << empId << endl;
        cout << "Name            : " << name << endl;
        cout << "Contract Amount : " << netSalary << endl;
        cout << "------------------------------------\n";
    }

    void saveToFile() override {
        ofstream file("employees.txt", ios::app);
        file << empId << "|" << name << "|"
            << basicSalary << "|" << calculateSalary()
            << "|Contract\n";
        file.close();
    }
};

/* 
=========================================================
    FILE HANDLING MODULE
    Contribution : AAYUSH
========================================================= 
*/

void displayAllEmployees() {
    ifstream file("employees.txt");
    string line;

    cout << "\n===== ALL EMPLOYEE RECORDS =====\n";

    if (!file) {
        cout << "No records found.\n";
        return;
    }

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

void removeEmployee() {
    int removeId;
    cout << "Enter Employee ID to remove: ";
    cin >> removeId;

    ifstream file("employees.txt");
    ofstream temp("temp.txt");

    string line;
    bool found = false;

    while (getline(file, line)) {
        int id = stoi(line.substr(0, line.find('|')));
        if (id != removeId) {
            temp << line << endl;
        } else {
            found = true;
        }
    }

    file.close();
    temp.close();

    remove("employees.txt");
    rename("temp.txt", "employees.txt");

    if (found)
        cout << "Employee removed successfully.\n";
    else
        cout << "Employee not found.\n";
}

/* 
=========================================================
    MAIN MENU & SYSTEM INTEGRATION
    Contribution : Abdeali
=========================================================
*/

int main() {
    int choice;
    Employee* emp = nullptr;

    do {
        cout << "\n===== EMPLOYEE PAYROLL SYSTEM =====\n";
        cout << "1. Add Permanent Employee\n";
        cout << "2. Add Part-Time Employee\n";
        cout << "3. Add Contract Employee\n";
        cout << "4. Display All Employees\n";
        cout << "5. Remove Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            emp = new PermanentEmployee();
            emp->input();
            emp->calculateSalary();
            emp->displayPayslip();
            emp->saveToFile();
            delete emp;
            break;

        case 2:
            emp = new PartTimeEmployee();
            emp->input();
            emp->calculateSalary();
            emp->displayPayslip();
            emp->saveToFile();
            delete emp;
            break;

        case 3:
            emp = new ContractEmployee();
            emp->input();
            emp->calculateSalary();
            emp->displayPayslip();
            emp->saveToFile();
            delete emp;
            break;

        case 4:
            displayAllEmployees();
            break;

        case 5:
            removeEmployee();
            break;

        case 6:
            cout << "Exiting Payroll System...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
