#include <iostream>
#include <string>
using namespace std;

const int MAX_ORDER_ITEMS =10;
const int MAX_MENU_ITEMS =10;

class MenuItem {
public:
    string name;
    double price;

    MenuItem() : name(""), price(0.0) {}

    MenuItem(const char itemName[], double itemPrice) : name(itemName), price(itemPrice) {}
};

class Menu {
private:
    MenuItem menuItems[MAX_MENU_ITEMS];
    int itemCount;

public:
    Menu() :itemCount(0) {}

    void addItem(const char itemName[], double itemPrice) {
        if (itemCount< MAX_MENU_ITEMS) {
            menuItems[itemCount]= MenuItem(itemName, itemPrice);
            itemCount++;
        }
        else {
            cout<< "Menu is full. Cannot add more items.\n";
        }
    }

    void displayMenu() const {
        cout << "Menu:\n";
        for (int i = 0; i< itemCount;++i) {
            cout <<menuItems[i].name << " - Rs" <<menuItems[i].price<<"\n";
        }
    }
};

class Payment {
public:
    double amount;

    Payment(double amt):amount(amt) {}
};

class Order {
private:
    MenuItem orderedItems[MAX_ORDER_ITEMS];
    Payment payment;
    int itemCount;

public:
    Order(const MenuItem items[], int count, const Payment &pay) : payment(pay), itemCount(count) {
        for (int i =0; i <itemCount;++i) {
            orderedItems[i] = items[i];
        }
    }

    void displayOrder() const {
        cout <<"Ordered Items:\n";
        for (int i = 0; i < itemCount; ++i) {
            cout << orderedItems[i].name<<" - Rs" <<orderedItems[i].price << "\n";
        }
        cout << "Total Amount: Rs"<<payment.amount << "\n";
    }
};

class Restaurant {
private:
    Menu menu;

public:
    Order placeOrder(const MenuItem items[], int itemCount, const Payment &payment) {
        return Order(items, itemCount, payment);
    }

    void addMenuItem(const char itemName[], double itemPrice) {
        menu.addItem(itemName, itemPrice);
    }

    void displayMenu() const {
        menu.displayMenu();
    }
};

int main() {
    Restaurant restaurant;

    restaurant.addMenuItem("Peri peri chiken", 1000);
    restaurant.addMenuItem("Karahi", 2000);
    restaurant.addMenuItem("Nihari", 2215);

    restaurant.displayMenu();

    MenuItem orderItems[MAX_ORDER_ITEMS];
    orderItems[0] =MenuItem("peri peri chicken", 1000);
    orderItems[1]= MenuItem("Karahi", 2000);
    Payment payment(3000);
    Order order(orderItems, 2, payment);

    order.displayOrder();

    return 0;
}
