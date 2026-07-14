#include <iostream>
using namespace std;

class BankAccount{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNumber, int initialbalance){
        accountNumber = accNumber;
        balance = initialbalance;
    }

    double getbalance() const {
        return balance;
    }

    void deposit(double amount){
        if(amount > 0){
            balance += amount;
        }else{
            cout << "Invalid Amount" << endl;
        }
    }

    void withdraw(double amount) {
        if(amount > 0 && amount <= balance){
            balance -= amount;
        }else {
            cout << "Invalid withdrawn amount" << endl;
        }
    }
};

int main(){
    BankAccount myaccount("98245249", 100000);
    cout << "Initial Balance: " << myaccount.getbalance() << endl;

    myaccount.deposit(20000);
    cout << "Balance after deposit: " << myaccount.getbalance() << endl;

    myaccount.withdraw(10000);
    cout << "Final Balance after withdrawal: " << myaccount.getbalance() << endl;

    return 0;
}
