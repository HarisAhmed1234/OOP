#include <iostream>

using namespace std;

int calculateGCD(int a, int b) {
    if (b == 0)
        return a;
    return calculateGCD(b, a % b);
}

int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    return (a * b) / gcd;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is: " << calculateGCD(num1, num2) << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << calculateLCM(num1, num2) << endl;

    return 0;
}
