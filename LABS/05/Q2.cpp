#include <iostream>
using namespace std;

class LoanHelper {
private:
    const float interestRate = 0.005; // 0.5%
    float loanAmount;
    int numberOfMonths;
    float monthlyPayment;

public:
    LoanHelper() {
        loanAmount =0.0;
        numberOfMonths = 0;
        monthlyPayment= 0.0;
    }

    void setLoanAmount(float amount) {
        loanAmount=amount;
    }

    void setNumberOfMonths(int months) {
        numberOfMonths =months;
    }

    void calculateMonthlyPayment() {
        monthlyPayment =(loanAmount / numberOfMonths) +((loanAmount / numberOfMonths) * interestRate);
    }

    void displayPaymentInfo() {
        cout<<"You have to pay "<<monthlyPayment << " every month for " << numberOfMonths << " months to repay your loan" << endl;
    }
};

int main() {
    LoanHelper loanHelper;
    loanHelper.setLoanAmount(45000);
    loanHelper.setNumberOfMonths(11);
    loanHelper.calculateMonthlyPayment();
    loanHelper.displayPaymentInfo();

    return 0;
}
