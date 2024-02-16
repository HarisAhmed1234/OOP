#include <iostream>
#include <string>

using namespace std;

class Calendar {
private:
    int year;
    string months[12][31]; // 12 months, 31 days maximum

public:
    Calendar(int year) : year(year) {}

    void addTask(const string& taskDetails, int day, int month) {
        if (isValidDay(day) && isValidMonth(month)) {
            months[month - 1][day - 1] = taskDetails;
        } else {
            cout<<"Invalid month or day."<<endl;
        }
    }

    void removeTask(int day, int month) {
        if (isValidDay(day) && isValidMonth(month)) {
            months[month - 1][day - 1] = "";
            cout<< "Task removed successfully."<<endl;
        } else {
            cout<< "Invalid month or day."<<endl;
        }
    }

    void displayTasks() {
        for (int month = 0; month < 12; ++month) {
            for (int day = 0; day < 31; ++day) {
                if (!months[month][day].empty()) {
                    cout<< "Month: "<< month + 1<< ", Day: "<< day + 1<< ", Task: "<< months[month][day] << endl;
                }
            }
        }
    }

private:
    bool isValidMonth(int month) {
        return month>= 1 && month<= 12;
    }

    bool isValidDay(int day) {
        return day>= 1 && day<= 31;
    }
};

int main() {
    Calendar myCalendar(2024);
    int option;
    string taskDetails;
    int day, month;

    do {
        cout<<"\n1. Add a task\n2. Remove a task\n3. Display tasks\n4. Finish\n";
        cout<<"Enter your choice: ";
        cin>>option;

        switch (option) {
            case 1:
                cout<< "Enter task details, day, and month (separated by spaces): ";
                cin>> taskDetails >>day >>month;
                myCalendar.addTask(taskDetails, day, month);
                break;
            case 2:
                cout<< "Enter day and month to remove task: ";
                cin>>day >>month;
                myCalendar.removeTask(day, month);
                break;
            case 3:
                cout<< "Tasks:\n";
                myCalendar.displayTasks();
                break;
            case 4:
                cout<< "Exiting program.\n";
                break;
            default:
                cout<< "Invalid option. Please try again.\n";
        }
    } while (option!=4);

    return 0;
}
