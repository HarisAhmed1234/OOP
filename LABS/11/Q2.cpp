#include <iostream>

using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;

public:
    Account(int accNum, double bal):accountNumber(accNum), balance(bal) {}

    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void calculateInterest() = 0;

    int getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }
};

class SavingsAccount:public Account {
private:
    double interestRate;

public:
    SavingsAccount(int accNum,double bal,double rate):Account(accNum, bal),interestRate(rate) {}

    void deposit(double amount) override {
        balance += amount;
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -=amount;
        } else {
            cout <<"Insufficient funds!!"<<endl;
        }
    }

    void calculateInterest() override {
        double interest=balance * interestRate / 100.0;
        balance +=interest;
        cout<<"Interest calculated: "<<interest<<endl;
    }
};

class CurrentAccount:public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(int accNum,double bal,double limit) : Account(accNum, bal),overdraftLimit(limit) {}

    void deposit(double amount) override {
        balance+=amount;
    }

    void withdraw(double amount) override {
        if (balance-amount >= -overdraftLimit) {
            balance -=amount;
        } else {
            cout<<"Exceeds overdraft limit!"<<endl;
        }
    }

    void calculateInterest() override {
        cout<<"No interest in current account."<<endl;
    }
};

int main() {
    SavingsAccount savings(101, 4000, 5.0);
    savings.deposit(1000);
    savings.withdraw(200);
    savings.calculateInterest();

    cout<<"Savings account balance: "<<savings.getBalance()<<endl;

    CurrentAccount current(102, 10000, 5000);
    current.deposit(2000);
    current.withdraw(5000);
    current.calculateInterest();

    cout<<"Current account balance: "<<current.getBalance()<<endl;

    return 0;
}
