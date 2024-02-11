#include <iostream>
#include <string>

using namespace std;

// Define Register structure
struct Register {
    int courseId;
    string courseName;
};


struct Student : Register {
    int studentId;
    string firstName;
    string lastName;
    string cellNo;  
    string email;
};

int main() {
    const int numStudents = 5;
    Student students[numStudents];

   
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for Student " << i + 1 << ":" << endl;

        cout << "Course ID: ";
        cin >> students[i].courseId;

        cin.ignore();  

        cout << "Course Name: ";
        getline(cin, students[i].courseName);

        cout << "Student ID: ";
        cin >> students[i].studentId;

        cout << "First Name: ";
        cin >> students[i].firstName;

        cout << "Last Name: ";
        cin >> students[i].lastName;

        cout << "Cell Number: ";
        cin >> students[i].cellNo;

        cout << "Email: ";
        cin >> students[i].email;

        cout << endl;
    }

    // Display information for all 5 students
    cout << "Student Information:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << ":\n"
             << "Course ID: " << students[i].courseId << "\n"
             << "Course Name: " << students[i].courseName << "\n"
             << "Student ID: " << students[i].studentId << "\n"
             << "First Name: " << students[i].firstName << "\n"
             << "Last Name: " << students[i].lastName << "\n"
             << "Cell Number: " << students[i].cellNo << "\n"
             << "Email: " << students[i].email << "\n\n";
    }

    return 0;
}
