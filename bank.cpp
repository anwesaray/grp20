#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to assign initial values
    BankAccount(string name, int accountNumber, string accountType, double balance = 0.0) {
        this->name = name;
        this->accountNumber = accountNumber;
        this->accountType = accountType;
        this->balance = balance;
    }

    // Method to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrawal successful. New balance: " << balance << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Method to display the name and balance
    void display() {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Create a bank account object with initial values
    BankAccount account("Alice Smith", 12345, "Checking", 1000.0);
    
    // Deposit an amount
    account.deposit(250.0);
    
    // Withdraw an amount
    account.withdraw(150.0);
    
    // Display the name and balance
    account.display();

    return 0;
}
