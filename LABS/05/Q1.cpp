#include <iostream>
using namespace std;

class Square {
private:
    float sideLength;
    float area;
    static float totalArea;
    static float currentArea;

public:
    Square():sideLength(0.0),area(0.0) {}
    Square(float length) :sideLength(length) {}

    void calculateArea() {
        area= sideLength *sideLength;
        currentArea= area;
        cout<< "Area is: " <<area <<endl;
    }

    static void calculateTotalArea() {
        totalArea += currentArea;
        cout<<"Total area is: "<< totalArea<< endl;
    }

    float getArea() {
        return area;
    }

    float getTotalArea() {
        return totalArea;
    }

    float getSideLength() {
        return sideLength;
    }
};

float Square::totalArea =0.0;
float Square::currentArea =0.0;

int main() {
    Square obj1(4.2);
    obj1.calculateArea();
    obj1.calculateTotalArea();

    Square obj2(5.5);
    obj2.calculateArea();
    obj2.calculateTotalArea();

    Square obj3(6.6);
    obj3.calculateArea();
    obj3.calculateTotalArea();

    return 0;
}
