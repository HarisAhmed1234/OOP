#include<iostream>

using namespace std;

class BankAccount {
private:
    int accountId;
    double balance;
    int* transactionHistory;
    int numTransactions;

public:
    BankAccount(int accid, double balan, int* trshist, int trnum) {
        accountId = accid;
        balance = balan;
        numTransactions = trnum;
        transactionHistory = new int[numTransactions];
        for (int i = 0; i < numTransactions; ++i) {
            transactionHistory[i] = trshist[i];
        }
    }

    BankAccount(const BankAccount& other) : accountId(other.accountId), balance(other.balance), numTransactions(other.numTransactions) {
        transactionHistory = new int[numTransactions];
        for (int i = 0; i < numTransactions; ++i) {
            transactionHistory[i] = other.transactionHistory[i];
        }
    }

    ~BankAccount() {
        delete[] transactionHistory;
    }

    void display() {
        cout << "Account ID: " << accountId << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transaction History: ";
        for (int i = 0; i < numTransactions; i++) {
            cout << transactionHistory[i];
            if (i != numTransactions - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }

    void updateTransactionHistory(int* transactions, int numTrans) {
        double totalTransactions = 0.0;
        for (int i = 0; i < numTrans; ++i) {
            totalTransactions += transactions[i];
        }
        balance += totalTransactions;

        delete[] transactionHistory;

        numTransactions = numTrans;
        transactionHistory = new int[numTransactions];
        for (int i = 0; i < numTransactions; ++i) {
            transactionHistory[i] = transactions[i];
        }
    }
};

int main() {
    cout<<"-Haris Ahmed BsAi 23k6005-"<<endl;
    cout<<endl;
    int transactions1[] = {600, -500, 700};
    int numTrans1 = sizeof(transactions1) / sizeof(transactions1[0]);

    BankAccount account1(033222, 1000.0, transactions1, numTrans1);
    BankAccount account2 = account1;

    cout << "Original Account:" << endl;
    account1.display();
    cout << endl;

    cout << "Copied Account:" << endl;
    account2.display();
    cout << endl;

    int newTrans[] = {-200, 300};
    int numNewTrans = sizeof(newTrans) / sizeof(newTrans[0]);
    account1.updateTransactionHistory(newTrans, numNewTrans);

    cout << "Original Account after changing transaction history:" << endl;
    account1.display();
    cout << endl;

    return 0;
}

