#include <iostream>

using namespace std;

void recursiveSwap(int &num1, int &num2) {
    if (&num1 == &num2) {
        return; // same address
    }
    if (&num1 < &num2) {
        num1 ^= num2;
        num2 ^= num1;
        num1 ^= num2; // num1 address is less
    } else {
        num2 ^= num1;
        num1 ^= num2;
        num2 ^= num1; //num2 address is less
    }
}

int main() {
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
   cout << "Before swapping: number1 = " << number1 << ", number2 = " << number2 << endl;
    recursiveSwap(number1, number2); //function called
   cout << "After swapping: number1 = " << number1 << ", number2 = " << number2 << endl;
    
    return 0;
}
