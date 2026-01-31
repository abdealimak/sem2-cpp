#include <iostream>
using namespace std;

class Bank {
public:
    string name = "Bank";
};

class SavingsAccount : virtual public Bank {};
class LoanAccount   : virtual public Bank {};

class CustomerAccount : public SavingsAccount, public LoanAccount {};

int main() {
    CustomerAccount c;
    cout << c.name;
    return 0;
}
