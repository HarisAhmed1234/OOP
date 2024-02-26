#include <iostream>
#include <string>

using namespace std;

class Office {
private:
    string officeLocation;
    int seatingCapacity;
    string* officeFurniture; // Pointer to string for dma

public:
    // Parameterized constructor with dynamic allocation 
    Office(const string& location, int capacity, int furnitureSize)
        : officeLocation(location), seatingCapacity(capacity) {
        officeFurniture = new string[furnitureSize]; // Dma
    }

    // Destructor 
    ~Office() {
        delete[] officeFurniture; // Free dynamically allocated memory
    }

    // Method to set furnitue items
    void setFurniture(int index, const string& furnitureItem) {
        officeFurniture[index] = furnitureItem;
    }

    // Method forr disply office information
    void display() const {
        cout << "Office Location: " << officeLocation << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl;
        cout << "Office Furniture: ";
        for (int i = 0; i < 3; ++i) {
            cout << officeFurniture[i];
            if (i < 2 && !officeFurniture[i].empty()) {
                cout << ", ";
            }
        }
        cout << endl;
    }
};

int main() {
    // Dynamically allocate an Office object
    Office* officePtr = new Office("Downtown", 45, 3);

    // Setting furnitre itemss
    officePtr->setFurniture(0, "Table");
    officePtr->setFurniture(1, "Chair");
    officePtr->setFurniture(2, "Bookshelf");

    // Displaying
    officePtr->display();

    // Deallocate dynamically allocated object
    delete officePtr;

    return 0;
}
