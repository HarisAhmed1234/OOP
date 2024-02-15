#include <iostream>
#include <string>

using namespace std;

class Weekdays {
private:
    string days[7];
    int currDay;

public:
    Weekdays() {
        days[0] = "Sunday"; days[1] = "Monday"; days[2] = "Tuesday"; 
        days[3] = "Wednesday"; days[4] = "Thursday"; days[5] = "Friday"; 
        days[6] = "Saturday";
        currDay = 0;
    }

    Weekdays(int currentDay) {
        *this = Weekdays();
        if (currentDay > 6)
            currDay = currentDay % 7;
        else
            currDay = currentDay;
    }

    string getCurrentDay() {
        return days[currDay];
    }

    string getNextDay() {
        return days[(currDay + 1) % 7];
    }

    string getPreviousDay() {
        return days[(currDay - 1 + 7) % 7];
    }

    string getNthDayFromToday(int n) {
        return days[(currDay + n) % 7];
    }
};

int main() {
    int currentDay;
    cout << "Enter the current day (0 for Sunday, 1 for Monday, ..., 6 for Saturday): ";
    cin >> currentDay;

    Weekdays obj(currentDay);

    cout << "Current Day: " << obj.getCurrentDay() << endl;
    cout << "Next Day: " << obj.getNextDay() << endl;
    cout << "Previous Day: " << obj.getPreviousDay() << endl;

    int n;
    cout << "Enter the value of n for nth day from today: ";
    cin >> n;
    cout << "Nth Day from Today (" << n << "): " << obj.getNthDayFromToday(n) << endl;

    return 0;
}
