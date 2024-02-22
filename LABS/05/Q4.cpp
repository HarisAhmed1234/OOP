#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    int accNo;
    string accountHN;
    double bal;

public:
    BankAccount(int accNum, string accHN, double initBal) {
        accNo = accNum;
        accountHN = accHN;
        bal= initBal;
    }

    void deposit(double amnt) {
        if (amnt < 0) {
            cout<< "Invalid deposit amount. Deposit amount must be non-negative." << endl;
            return;
        }
        bal += amnt;
    }

    void withdraw(double amnt) {
        if (amnt < 0) {
            cout<< "Invalid withdrawal amount. Withdrawal amount must be non-negative." << endl;
            return;
        }
        if (bal >= amnt) {
            bal = bal - amnt;
            cout<< "Withdrawal successful Woohoo!" << endl;
        } else {
            cout<< "Insufficient funds. Earn more money, buddy!" << endl;
        }
    }

    void display() {
        cout <<"Account Details:"<<endl;
        cout<< "Account Number: " << accNo << endl;
        cout <<"Account Holder Name: "<< accountHN<<endl;
        cout <<"Balance: " << bal <<endl;
    }
};

int main() {
    BankAccount accounts[3] ={
        BankAccount(1021,"LIONEL MESSI", 0),
        BankAccount(1032, "CRISTIANO RONALDO", 330000),
        BankAccount(1098,"JOSE MOURINHO", 450000)
    };

    for (int i = 0; i < 3; i++) {
        accounts[i].display();
        cout << endl;
        accounts[i].deposit(0);
        cout << endl;
        accounts[i].withdraw(200);
        cout << endl;
        accounts[i].display();
        cout << endl;
    }
}
