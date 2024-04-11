#include <iostream>
#include <string>

using namespace std;

// Base class
class Employee {
protected:
    int employeeID_;
    string employeeName_;

public:
    // Constructor
    Employee(int id, const string& name) : employeeID_(id), employeeName_(name) {}

    // Virtual destructor
    virtual ~Employee() {}

    // Virtual function to calculate pay
    virtual double calculatePay() const {
        return 0.0; // Default implementation
    }

    // Virtual function to display details
    virtual void displayDetails() const {
        cout << "Employee ID: " << employeeID_ << ", Name: " << employeeName_;
    }
};

// Derived class for Full-time employees
class FullTimeEmployee : public Employee {
private:
    double monthlySalary_;

public:
    // Constructor
    FullTimeEmployee(int id, const string& name, double salary)
        : Employee(id, name), monthlySalary_(salary) {}

    // Override calculatePay method
    double calculatePay() const override {
        return monthlySalary_;
    }

    // Override displayDetails method
    void displayDetails() const override {
        Employee::displayDetails();
        cout << ", Type: Full-time, Monthly Salary: " << monthlySalary_ << endl;
    }
};

// Derived class for Part-time employees
class PartTimeEmployee : public Employee {
private:
    double hourlyWage_;
    double hoursWorked_;

public:
    // Constructor
    PartTimeEmployee(int id, const string& name, double wage, double hours)
        : Employee(id, name), hourlyWage_(wage), hoursWorked_(hours) {}

    // Override calculatePay method
    double calculatePay() const override {
        return hourlyWage_ * hoursWorked_;
    }

    // Override displayDetails method
    void displayDetails() const override {
        Employee::displayDetails();
        cout << ", Type: Part-time, Hourly Wage: " << hourlyWage_ << ", Hours Worked: " << hoursWorked_ << endl;
    }
};
int main() {
	cout << "Haris Ahmed 23k6005" << endl;
	
    cout << "Displaying Details:" << endl;
    FullTimeEmployee fullTimeEmp(101, "AAA", 5000);
    PartTimeEmployee partTimeEmp(102, "BBB", 15, 40);

    fullTimeEmp.displayDetails();
    partTimeEmp.displayDetails();

    cout << "\nCalculating Pay:" << endl;
    cout << "Full-time Employee Pay: $" << fullTimeEmp.calculatePay() << endl;
    cout << "Part-time Employee Pay: $" << partTimeEmp.calculatePay() << endl;

    // Using base class pointer to demonstrate early or static binding
    Employee* empPtr = &fullTimeEmp;
    cout << "\nUsing base class pointer to calculate Full-time Employee Pay: $"
         << empPtr->calculatePay() << endl;

    return 0;
}
