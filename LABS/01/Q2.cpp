#include <iostream>

using namespace std;

int main() {
    int numberofstudents;
    cout << "Enter the number of students: ";
    cin >> numberofstudents;

    for (int i = 1; i <= numberofstudents; i++) {
        int math, english, science;
        cout << "For student " << i << ":" << endl;
        cout << "ENTER THE MARKS OF ENGLISH: ";
        cin >> english;
        cout << "ENTER THE MARKS OF MATH: ";
        cin >> math;
        cout << "ENTER THE MARKS OF SCIENCE: ";
        cin >> science;
        
        int total = math + english + science;
        cout << "Total marks: " << total << "/300" << endl;
        int average = total / 3;
        cout << "Average marks: " << average << endl;

        char grade;
        if (average >= 90) {
            grade = 'A';
        } else if (average >= 80) {
            grade = 'B';
        } else if (average >= 70) {
            grade = 'C';
        } else if (average >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        cout << "Grade: " << grade << endl;
    }

    return 0;
}
