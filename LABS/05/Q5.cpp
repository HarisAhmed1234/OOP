#include<iostream>
using namespace std;

class Engine {
public:
    string engineModel;
    string engineYear;
    
    Engine(string model, string year) {
        engineModel= model;
        engineYear =year;
    }
};

class Tyre {
public:
    string tyreType;
    string tyreNumber;
    
    Tyre(string type, string number) {
        tyreType=type;
        tyreNumber=number;
    }
};

class Headlights {
public:
    string headlightsModel;
    string headlightsType;
    
    Headlights(string model, string type) {
        headlightsModel=model;
        headlightsType=type;
    }
};

class Steering {
public:
    string steeringModel;
    string steeringType;
    
    Steering(string model, string type) {
        steeringModel= model;
        steeringType =type;
    }
};

class Car {
private:
    Engine* engine;
    Tyre* tyre;
    Headlights* headlights;
    Steering* steering;
    
public:
    int carId;
    string carModel;
    
    Car(int id, string model, Engine* e, Tyre* t, Headlights* h, Steering* s) {
        carId =id;
        carModel= model;
        engine=e;
        tyre =t;
        headlights= h;
        steering= s;
    }
    
    void display() {
        cout << "Car ID: " << carId<<endl;
        cout << "Car Model: " <<carModel << endl;
        cout << "Engine Model: " << engine->engineModel<< endl;
        cout << "Engine Year: " << engine->engineYear <<endl;
        cout << "Tyre Type: " << tyre->tyreType <<endl;
        cout << "Tyre Number: " <<tyre->tyreNumber<< endl;
        cout << "Headlights Model: " <<headlights->headlightsModel<< endl;
        cout << "Headlights Type: " << headlights->headlightsType <<endl;
        cout << "Steering Model: " <<steering->steeringModel <<endl;
        cout << "Steering Type: " <<steering->steeringType<< endl;
    }
};

int main() {
    Engine engine("22v8", "2024");
    Tyre tyre("offroad", "23xl");
    Headlights headlights("2024", "highbeam");
    Steering steering("power", "power2");
    Car car(1, "2024",&engine,&tyre,&headlights,&steering);
    car.display();

    return 0;
}
