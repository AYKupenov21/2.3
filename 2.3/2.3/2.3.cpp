#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    string accountNumber;
    float balance;
public:
    BankAccount(string name, string accountNumber, float balance) {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;
    }
    void printAccount() {
        cout << "Name: " << name << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
    void deposit(float amount) {
        balance += amount;
    }
    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
        }
        else {
            cout << "Insufficient funds" << endl;
        }
    }
};
int main() {
    string name;
    string accountNumber;
    float balance;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter balance: ";
    cin >> balance;
    BankAccount BankAccount(name, accountNumber, balance);
    BankAccount.printAccount();
    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    BankAccount.deposit(amount);
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    BankAccount.withdraw(amount);
    BankAccount.printAccount();
}