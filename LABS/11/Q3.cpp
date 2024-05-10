#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int speed;

public:
    Vehicle(const string& mk, const string& mdl, int spd):make(mk),model(mdl),speed(spd) {}

    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual void calculateFuelEfficiency() = 0;

    string getMake() const {
	return make; 
	}
    string getModel() const {
	return model; 
	}
    int getSpeed() const {
	return speed; 
	}
};

class Car:public Vehicle {
private:
    double fuelCapacity;

public:
    Car(const string& mk, const string& mdl, int spd, double fuelCap) :Vehicle(mk, mdl, spd),fuelCapacity(fuelCap) {}

    void accelerate()override {
        speed+= 10;
    }

    void brake()override {
        speed-=10;
        if (speed<0) speed=0;
    }

    void calculateFuelEfficiency()override {
        cout<<"Fuel efficiency for car: "<<fuelCapacity/10 << " mile per gallon." << endl;
    }
};

class Truck : public Vehicle {
private:
    int cargoCapacity;

public:
    Truck(const string& mk, const string& mdl, int spd, int cargoCap) : Vehicle(mk, mdl, spd), cargoCapacity(cargoCap) {}

    void accelerate() override{
        speed += 5;
    }

    void brake() override {
        speed-=5;
        if (speed<0)speed = 0;
    }

    void calculateFuelEfficiency() override {
        cout<<"Fuel efficiency for truck: " <<cargoCapacity / 5<<" mile per gallon." << endl;
    }
};

int main() {
    Car myCar("Toyota","Corolla",0,110);
    Truck myTruck("Suzuki", "Bolan", 0, 2300);

    myCar.accelerate();
    myTruck.accelerate();

    cout << "Car speed:: " << myCar.getSpeed() << " mph" << endl;
    cout << "Truck speed: " << myTruck.getSpeed() << " mph" << endl;
    
    myCar.calculateFuelEfficiency();
    myTruck.calculateFuelEfficiency();

    return 0;
}
