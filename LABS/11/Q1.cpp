#include <iostream>

using namespace std;

class Convert {
protected:
    float val1;
    float val2;
public:
    Convert(float v1):val1(v1),val2(0.0) {}
    
    virtual void compute() = 0;
};

class LitersToGallons:public Convert {
public:
    LitersToGallons(float v1) :Convert(v1) {}
    
    void compute() override {
        val2=val1 / 3.78541;
        cout<<"Resultt: " <<val1<<" liters equals "<<val2 << " gallons." <<endl;
    }
};

class FahrenheitToCelsius:public Convert {
public:
    FahrenheitToCelsius(float v1):Convert(v1) {}
    
    void compute() override {
        val2 = (val1 - 32) *5/9;
        cout<<"Result: "<<val1<<" Fahrenheit equals "<<val2<<" Celsius." <<endl;
    }
};

int main() {
    Convert *convert1 = new LitersToGallons(4);
    convert1->compute();

    Convert *convert2 = new FahrenheitToCelsius(70);
    convert2->compute();

    delete convert1;
    delete convert2;

    return 0;
}
