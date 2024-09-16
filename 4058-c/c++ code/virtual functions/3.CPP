#include <iostream>


class BankAccount {
protected:
    double balance;

public:

    BankAccount() : balance(0) {}

   
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;

    
    double getBalance() const {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
public:
    
    void deposit(double amount) override {
        balance += amount;
        std::cout << "Deposited " << amount << " into Savings Account." << std::endl;
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn " << amount << " from Savings Account." << std::endl;
        } else {
            std::cout << "Insufficient balance in Savings Account." << std::endl;
        }
    }
};

class CurrentAccount : public BankAccount {
public:
   
    void deposit(double amount) override {
        balance += amount;
        std::cout << "Deposited " << amount << " into Current Account." << std::endl;
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn " << amount << " from Current Account." << std::endl;
        } else {
            std::cout << "Insufficient balance in Current Account." << std::endl;
        }
    }
};

int main() {
 
    SavingsAccount savingsAccount;
    std::cout << "Initial balance in Savings Account: " << savingsAccount.getBalance() << std::endl;
    savingsAccount.deposit(1000);
    std::cout << "Balance after deposit: " << savingsAccount.getBalance() << std::endl;
    savingsAccount.withdraw(500);
    std::cout << "Balance after withdrawal: " << savingsAccount.getBalance() << std::endl;

    CurrentAccount currentAccount;
    std::cout << "\nInitial balance in Current Account: " << currentAccount.getBalance() << std::endl;
    currentAccount.deposit(2000);
    std::cout << "Balance after deposit: " << currentAccount.getBalance() << std::endl;
    currentAccount.withdraw(2500);
    std::cout << "Balance after withdrawal: " << currentAccount.getBalance() << std::endl;

    return 0;
}