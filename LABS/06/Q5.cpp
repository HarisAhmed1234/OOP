#include <iostream>
#include <string>

using namespace std;

const int MAX_COURSES = 10;

class Course {
private:
    string courseCode;
    string courseName;
    int creditHours;

public:
    Course() : courseCode(""), courseName(""), creditHours(0) {}

    Course(const string& code, const string& name, int hours) : courseCode(code), courseName(name), creditHours(hours) {}

    string getCourseCode() const {
        return courseCode;
    }

    string getCourseName() const {
        return courseName;
    }

    int getCreditHours() const {
        return creditHours;
    }
};

class Student {
private:
    string studentID;
    string studentName;
    Course enrolledCourses[MAX_COURSES];
    int numCourses;

public:
    Student(const string& id, const string& name) : studentID(id), studentName(name), numCourses(0) {
        // Initialize each Course object in the enrolledCourses array
        for (int i = 0; i < MAX_COURSES; ++i) {
            enrolledCourses[i] = Course("", "", 0);
        }
    }

    void enroll(const Course& course) {
        if (numCourses < MAX_COURSES) {
            enrolledCourses[numCourses++] = course;
        } else {
            cout << "Maximum number of courses reached!" << endl;
        }
    }

    void drop(const Course& course) {
        for (int i = 0; i < numCourses; ++i) {
            if (enrolledCourses[i].getCourseCode() == course.getCourseCode()) {
                enrolledCourses[i] = enrolledCourses[numCourses - 1];
                numCourses--;
                return;
            }
        }
        cout << "Course not found in enrolled courses." << endl;
    }

    int getTotalCreditHours() const {
        int totalCreditHours = 0;
        for (int i = 0; i < numCourses; ++i) {
            totalCreditHours += enrolledCourses[i].getCreditHours();
        }
        return totalCreditHours;
    }

    void displayEnrolledCourses() const {
        cout << "Enrolled Courses for Student " << studentID << " - " << studentName << ":\n";
        for (int i = 0; i < numCourses; ++i) {
            cout << "Course Code: " << enrolledCourses[i].getCourseCode() << endl;
            cout << "Course Name: " << enrolledCourses[i].getCourseName() << endl;
            cout << "Credit Hours: " << enrolledCourses[i].getCreditHours() << endl;
            cout << endl;
        }
    }
};

int main() {
    cout<<"-Haris Ahmed BsAi 23k6005-"<<endl;
    cout<<endl;
    Student student("23k6005", "Haris Ahmed");

    Course course1("CS1002", "Object-oriented Programming", 3);
    Course course2("MT1003", "Multivariable Calculus", 4);
    Course course3("AP1001", "Applied Physics", 3);

    student.enroll(course1);
    student.enroll(course2);
    student.enroll(course3);

    student.displayEnrolledCourses();

    Course course4("IRS2003", "Islamic Studies", 3);
    student.enroll(course4);

    Course course5("DL1004", "Digital Logic Design", 4);
    student.drop(course5);

    cout << "\nAfter changing courses:\n";
    student.displayEnrolledCourses();

    cout << "Total Credit Hours: " << student.getTotalCreditHours() << endl;

    return 0;
}
