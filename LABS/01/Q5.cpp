#include <iostream>

using namespace std;

struct Event {
    string eventName;
    string date;
    string venue;
    string organizer;
};

void displayEvent(const Event& event) {
    cout << "Event Name: " << event.eventName << endl;
    cout << "Date: " << event.date << endl;
    cout << "Venue: " << event.venue << endl;
    cout << "Organizer: " << event.organizer << endl;
    cout << "------------------------" << endl;
}

int main() {
    int totalEvents;

    // Prompt the user to input the total number of events
    cout << "Enter the total number of events to manage: ";
    cin >> totalEvents;

    // Dynamically allocate an array of Event structures
    Event* events = new Event[totalEvents];

    // Input details for each event
    for (int i = 0; i < totalEvents; ++i) {
        cin.ignore();  // Clear the input buffer
        cout << "Enter details for Event " << i + 1 << ":" << endl;

        cout << "Event Name: ";
        getline(cin, events[i].eventName);

        cout << "Date: ";
        getline(cin, events[i].date);

        cout << "Venue: ";
        getline(cin, events[i].venue);

        cout << "Organizer: ";
        getline(cin, events[i].organizer);

        cout << endl;
    }

    // Display all events
    cout << "All Events:" << endl;
    for (int i = 0; i < totalEvents; ++i) {
        displayEvent(events[i]);
    }

    // Search events based on a specific date
    string searchDate;
    cout << "Enter date to search events: ";
    cin >> searchDate;

    cout << "Events on " << searchDate << ":" << endl;
    for (int i = 0; i < totalEvents; ++i) {
        if (events[i].date == searchDate) {
            displayEvent(events[i]);
        }
    }

    // Free dynamically allocated memory
    delete[] events;

    return 0;
}
