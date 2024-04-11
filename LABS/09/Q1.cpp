#include <iostream>

using namespace std;

const double PI = 3.14159265359;

class Shape {
public:
	//func to calculate circle area
    double calculateAreaCircle(double radius) {
        return PI * radius * radius;
    }
	//func to calculate rectangle area
    double calculateAreaRectangle(double length, double width) {
        return length * width;
    }
	//func to calculate triamgle area
    double calculateAreaTriangle(double base, double height, int choice) {
        return 0.5 * base * height;
    }
	//func to calculate circle perimeter
    double calculatePerimeterCircle(double radius) {
        return 2 * PI * radius;
    }
	//func to calculate rectangle perimeter
    double calculatePerimeterRectangle(double length, double width) {
        return 2 * (length + width);
    }
	//func to calculate triamgle perimeter
    double calculatePerimeterTriangle(double side1, double side2, double side3) {
        return side1 + side2 + side3;
    }
};

int main() {
    cout << "Haris Ahmed 23k6005" << endl;

    Shape shape;

    cout << "Area of circle with radius 7: " << shape.calculateAreaCircle(7) << endl;
    cout << "Area of rectangle with length 9 and width 4: " << shape.calculateAreaRectangle(9, 4) << endl;
    cout << "Area of triangle with base 6 and height 12: " << shape.calculateAreaTriangle(6, 12, 1) << endl;

    cout << endl;

    cout << "Perimeter of circle with radius 7: " << shape.calculatePerimeterCircle(7) << endl;
    cout << "Perimeter of rectangle with length 9 and width 4: " << shape.calculatePerimeterRectangle(9, 4) << endl;
    cout << "Perimeter of triangle with sides 8, 15, and 17: " << shape.calculatePerimeterTriangle(8, 15, 17) << endl;

    return 0;
}
