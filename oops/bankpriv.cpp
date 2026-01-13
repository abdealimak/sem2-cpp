#include <iostream>
using namespace std;

class BankAccount
{
    private:
        int balance;
    
    public:
        void setBalance(int b)
        {
            balance = b;
        }
        int getBalance()
        {
            cout<<balance<<"₹"<<endl;
            return balance;
        }
};
int main(){
    BankAccount acc;
    acc.setBalance(5000);
    acc.getBalance();

    return 0;
}