#include <iostream>
#include <string>

using namespace std;

class WaterBottle{
private:
    int capacity_L;
    int capacity_ml;
    string color;
    string company;

public:
    int getcapacity_L() const {
        return capacity_L;
    }

    int getcapacity_ml() const {
        return capacity_ml;
    }

    string getcolor() const {
        return color;
    }

    string getcompany() const {
        return company;
    }

    void setcapacity_L(int L){
        if (L >= 0) {
            capacity_L =L;
            capacity_ml =L * 1000; // Update millilitres when litres are set
        } else {
            cout << "Capacity cannot be negative. Setting capacity to 0.\n";
            capacity_L = 0;
            capacity_ml = 0;
        }
    }

    void setcapacity_ml(int ml){
        if (ml>= 0) {
            capacity_ml = ml;
            capacity_L = ml / 1000; // Update litres when millilitres are set
        } else {
            cout<< "Capacity cannot be negative. Setting capacity to 0.\n";
            capacity_L = 0;
            capacity_ml = 0;
        }
    }

    void setcolor(const string& clr){
        color =clr;
    }

    void setcomp(const string& cmp){
        company =cmp;
    }
};

int main(){
    int L, ml;
    string clr, cmp;

    cout<< "Enter the capacity in litres: ";
    cin>> L;

    cout <<"Enter the capacity in millilitres: ";
    cin >>ml;

    cout << "Enter the color: ";
    cin.ignore();
    getline(cin, clr);

    cout<< "Enter company name: ";
    getline(cin, cmp);

    WaterBottle b1;

    b1.setcapacity_L(L);
    b1.setcolor(clr);
    b1.setcomp(cmp);

    cout<< "\nDetails of the water bottle:\n";
    cout << "Litres: " << b1.getcapacity_L() <<endl;
    cout << "Millilitres: " << b1.getcapacity_ml() << endl;
    cout<< "Color: " << b1.getcolor() <<endl;
    cout << "Company: " << b1.getcompany() <<endl;

    return 0;
}
