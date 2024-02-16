#include <iostream>
#include <string>

using namespace std;

class BoardMarker {
    string brand;
    string shade;
    bool refill;
    bool inkStatus;
    
public:
    BoardMarker(string Brand, string Shade, bool Fill, bool InkStatus) 
        : brand(Brand), shade(Shade), refill(Fill), inkStatus(InkStatus) {}

    string getBrand() const {
        return brand;
    }
    string getShade() const {
        return shade;
    }
    string getRefill() const {
        return refill ? "Yes" : "No";
    }
    bool getInkStatus() const {
        return inkStatus;
    }
    void setBrand(const string& Brand) {
        brand = Brand;
    }
    void setShade(const string& Shade) {
        shade = Shade;
    }
    void setRefill(bool Fill) {
        refill = Fill;
    }
    void setInk(bool InkStatus) {
        inkStatus = InkStatus;
    }
};

int main() {
    string Brand, Shade;
    bool Fill, InkStatus;
    
    cout<< "Enter Brand: ";
    getline(cin, Brand);
    
    cout <<"Enter Shade: ";
    getline(cin, Shade);
    
    cout<< "Enter refill status (1 for true, 0 for false): ";
    cin>> Fill;
    
    cout<< "Enter ink status (1 for true, 0 for false): ";
    cin>> InkStatus;
    
   
    BoardMarker B1(Brand, Shade, Fill, InkStatus);
    
    cout<< "Brand: "<< B1.getBrand()<<endl;
    cout<< "Shade: "<<B1.getShade()<<endl;
    cout<< "Refill status: "<<B1.getRefill()<<endl;
    cout<< "Ink status: "<< B1.getInkStatus()<<endl;

    return 0;
}

