#include <iostream>
#include <string>

using namespace std;

const int MAX_APPOINTMENTS = 100;

class Appointment {
private:
    string customerName;
    double appointmentCost;

public:
    Appointment() : customerName(""), appointmentCost(0) {}

    Appointment(const string& name, double cost) : customerName(name), appointmentCost(cost) {}

    string getCustomerName() const {
        return customerName;
    }

    double getAppointmentCost() const {
        return appointmentCost;
    }
};

class AppointmentManager {
private:
    Appointment appointmentList[MAX_APPOINTMENTS];
    int size;
    double totalEarnings;

public:
    AppointmentManager() : size(0), totalEarnings(0) {}

    void addAppointment(const string& name, double cost) {
        if (size < MAX_APPOINTMENTS) {
            appointmentList[size++] = Appointment(name, cost);
            totalEarnings += cost;
        } else {
            cout << "Maximum number of appointments reached!" << endl;
        }
    }

    double calculateAverageCost() const {
        if (size == 0) {
            return 0;
        }
        return totalEarnings / size;
    }

    void displayAppointments() const {
        for (int i = 0; i < size; ++i) {
            cout << "Appointment " << i + 1 << ":\n";
            cout << "Customer Name: " << appointmentList[i].getCustomerName() << endl;
            cout << "Appointment Cost: $" << appointmentList[i].getAppointmentCost() << endl;
            cout << endl;
        }
    }
};

int main() {
    AppointmentManager manager;

    // Add appointments
    manager.addAppointment("Haris", 1000.0);
    manager.addAppointment("Ali", 706.0);
    manager.addAppointment("Marium", 604.0);
    manager.displayAppointments();
    cout << "Average cost of appointments: $" << manager.calculateAverageCost() << endl;

    return 0;
}
