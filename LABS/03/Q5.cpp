#include <iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 100;

class StationaryShop {
private:
    struct Item {
        string name;
        double price;
    };

    Item inventory[MAX_ITEMS];
    int itemCount;

public:
    // Constructor
    StationaryShop() : itemCount(0) {}

    // Function to add an item and its price
    void addItem(const string& itemName, double itemPrice) {
        if (itemCount < MAX_ITEMS) {
            inventory[itemCount].name = itemName;
            inventory[itemCount].price = itemPrice;
            cout << "Item added successfully: " <<itemName<< " (Price: $" << itemPrice << ")" <<endl;
            itemCount++;
        } else {
            cout<< "Shop inventory is full. Cannot add more items."<<endl;
        }
    }

    // Function to display all items
    void displayItems() const {
        if (itemCount == 0) {
            cout<< "No items available in the shop."<<endl;
        } else {
            cout<< "Items available in the shop:"<<endl;
            for (int i = 0; i < itemCount; ++i) {
                cout<< i + 1<< ". " << inventory[i].name<< " - $" << inventory[i].price<<endl;
            }
        }
    }

    // Function to modify the price of an item
    void modifyPrice(int index, double newPrice) {
        if (index >= 1 && index <= itemCount) {
            inventory[index - 1].price = newPrice;
            cout<< "Price of "<<inventory[index - 1].name<< " updated to $"<<newPrice << endl;
        } else {
            cout<<"Invalid item index!"<<endl;
        }
    }

    // Function to generate a receipt
    void generateReceipt(const int purchases[], const int quantities[], int purchaseCount) const {
        double total = 0;
        cout << "\nReceipt:" << endl;
        for (int i = 0; i < purchaseCount; ++i) {
            int index= purchases[i] - 1;
            if (index>= 0 && index< itemCount) {
                cout<< inventory[index].name<< " x " << quantities[i]<< " - $"<<inventory[index].price * quantities[i]<<endl;
                total +=inventory[index].price * quantities[i];
            }
        }
        cout << "Total: $"<< total<<endl;
    }
};

int main() {
    StationaryShop shop;
    int choice;
    string itemName;
    double price;
    int index;
    const int MAX_PURCHASES = 10;
    int purchases[MAX_PURCHASES];
    int quantities[MAX_PURCHASES];
    int purchaseCount = 0;

    cout<<"Welcome to the Stationary Shop!" << endl;

    while (true) {
        cout<< "\nShop Menu:"<<endl;
        cout<< "1. Add item and price"<<endl;
        cout<< "2. Display items"<<endl;
        cout<< "3. Modify price"<<endl;
        cout<< "4. Generate receipt"<<endl;
        cout<< "5. Exit"<<endl;
        cout<< "Enter your choice: ";
        cin>>choice;

        switch (choice) {
            case 1:
                cout<< "Enter item name: ";
                cin>> itemName;
                cout<< "Enter item price: ";
                cin>> price;
                shop.addItem(itemName, price);
                break;
            case 2:
                shop.displayItems();
                break;
            case 3:
                cout<< "Enter item index to modify price: ";
                cin>>index;
                cout << "Enter new price: ";
                cin>> price;
                shop.modifyPrice(index, price);
                break;
            case 4:
                cout<< "Enter purchased items (item index and quantity):" <<endl;
                cout<< "Enter 0 at the end to generate receipt." <<endl;
                while (true) {
                    cout<< "Enter item index: ";
                    cin>> index;
                    if (index == 0) {
                        break;
                    }
                    cout << "Enter quantity: ";
                    cin >> quantities[purchaseCount];
                    purchases[purchaseCount++] = index;
                }
                shop.generateReceipt(purchases, quantities, purchaseCount);
                break;
            case 5:
                cout<< "Exiting program. Goodbye!"<<endl;
                return 0;
            default:
                cout<< "Invalid choice. Please try again."<<endl;
        }
    }

    return 0;
}
