    #include <iostream>
    
    class BankAccount {
    private:
        int accountNumber;
        double balance;
    
    public:
        void setAccountNumber(int newAccountNumber) {
            accountNumber = newAccountNumber;
        }
    
        int getAccountNumber() const {
            return accountNumber;
        }
    
        void setBalance(double newBalance) {
            balance = newBalance;
        }
    
        double getBalance() const {
            return balance;
        }
    };
    
    int main() {
        BankAccount account;
    
        account.setAccountNumber(123456);
        account.setBalance(1000.50);
    
        std::cout << "Account Number: " << account.getAccountNumber() << std::endl;
        std::cout << "Balance: " << account.getBalance() << std::endl;
    
        return 0;
    }