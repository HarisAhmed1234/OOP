#include <iostream>
#include <string>

using namespace std;

class Office {
private:
    string officeLocation;
    int seatingCapacity;
    string officeFurniture[3];

public:
    Office() : officeLocation("Unknown"), seatingCapacity(0), officeFurniture{"", "", ""} {}

    // Parameterized constructor 
    Office(const string& location, int capacity, const string& furniture1 = "", const string& furniture2 = "", const string& furniture3 = "")
    : officeLocation(location), seatingCapacity(capacity) {
        officeFurniture[0] = furniture1;
        officeFurniture[1] = furniture2;
        officeFurniture[2] = furniture3;
    }

    // Method to display 
    void display() const {
        cout<< "Office Location: "<<officeLocation << endl;
        cout <<"Seating Capacity:"<<seatingCapacity << endl;
        cout<< "Office Furniture:";
        for (int i = 0; i < 3; ++i) {
            cout << officeFurniture[i];
            if (i < 2 && officeFurniture[i + 1] != "") {
                cout<< ", ";
            }
        }
        cout<<endl;
    }
};

int main() {
    Office office1; // Default constructor
    Office office2("Downtown", 45, "Table", "Chair"); 
    Office office3("Suburb", 15);
    // Display information for ech
    cout<<"Office 1 Information:"<<endl;
    office1.display();
    cout << endl;

    cout<<"Office 2 Information:"<<endl;
    office2.display();
    cout<<endl;

    cout<< "Office 3 Information:"<<endl;
    office3.display();
    cout<<endl;

    return 0;
}
