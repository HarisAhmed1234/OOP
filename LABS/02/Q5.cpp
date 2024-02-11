#include <iostream>
#include <string>

using namespace std;

struct Product {
    int id;
    string name;
    double price;
    int quantity;
    string details;
};

void addProduct(Product products[], int& num, int id, string name, double price, int quantity, string details) {
    products[num] = {id, name, price, quantity, details};
    num++;
    cout << "Product added successfully!" << endl;
}

void displayProduct(const Product products[], int num, int id) {
    for (int i = 0; i < num; ++i) {
        if (products[i].id == id) {
            cout << "Product ID: " << products[i].id << endl;
            cout << "Name: " << products[i].name << endl;
            cout << "Price: $" << products[i].price << endl;
            cout << "Quantity in stock: " << products[i].quantity << endl;
            cout << "Details: " << products[i].details << endl;
            return;
        }
    }
    cout << "Product with ID " << id << " not found." << endl;
}

void updateProduct(Product products[], int num, int id, double newPrice, int newQuantity, string newDetails) {
    for (int i = 0; i < num; ++i) {
        if (products[i].id == id) {
            products[i].price = newPrice;
            products[i].quantity = newQuantity;
            products[i].details = newDetails;
            cout << "Product information updated successfully!" << endl;
            return;
        }
    }
    cout << "Product with ID " << id << " not found." << endl;
}

int main() {
    const int MAX_PRODUCTS = 100;
    Product products[MAX_PRODUCTS];
    int num = 0;

    int id, quantity;
    double price;
    string name, details;

    cout << "Enter product details:" << endl;
    cout << "ID: ";
    cin >> id;
    cout << "Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Price: $";
    cin >> price;
    cout << "Quantity: ";
    cin >> quantity;
    cout << "Details: ";
    cin.ignore();
    getline(cin, details);

    addProduct(products, num, id, name, price, quantity, details);

    int displayId;
    cout << "Enter product ID to display details: ";
    cin >> displayId;
    displayProduct(products, num, displayId);

    int updateId;
    double newPrice;
    int newQuantity;
    string newDetails;
    cout << "Enter product ID to update: ";
    cin >> updateId;
    cout << "Enter new price: $";
    cin >> newPrice;
    cout << "Enter new quantity: ";
    cin >> newQuantity;
    cout << "Enter new details: ";
    cin.ignore();
    getline(cin, newDetails);
    updateProduct(products, num, updateId, newPrice, newQuantity, newDetails);

    return 0;
}
