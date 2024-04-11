#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265359;

// Base class Shape
class Shape {
public:
    virtual ~Shape() {}
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void displayProperties() const = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius_;

public:
    Circle(double r) : radius_(r) {}

    double area() const override {
        return PI * radius_ * radius_;
    }

    double perimeter() const override {
        return 2 * PI * radius_;
    }

    void displayProperties() const override {
        cout << "Properties of the Circle:" << endl;
        cout << "- Area: " << area() << endl;
        cout << "- Perimeter: " << perimeter() << endl;
        cout << "- Diameter: " << 2 * radius_ << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length_, width_;

public:
    Rectangle(double l, double w) : length_(l), width_(w) {}

    double area() const override {
        return length_ * width_;
    }

    double perimeter() const override {
        return 2 * (length_ + width_);
    }

    void displayProperties() const override {
        cout << "Properties of the Rectangle:" << endl;
        cout << "- Area: " << area() << endl;
        cout << "- Perimeter: " << perimeter() << endl;
        double diagonalSquared = length_ * length_ + width_ * width_;
        cout << "- Diagonal: " << diagonalSquared / 2 << endl;
    }
};

// Derived class Square
class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}

    void displayProperties() const override {
        cout << "Properties of the Square:" << endl;
        cout << "- Area: " << area() << endl;
        cout << "- Perimeter: " << perimeter() << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double side1_, side2_, side3_;

public:
    Triangle(double s1, double s2, double s3) : side1_(s1), side2_(s2), side3_(s3) {}

    double area() const override {
        double s = perimeter() / 2;
        return sqrt(s * (s - side1_) * (s - side2_) * (s - side3_));
    }

    double perimeter() const override {
        return side1_ + side2_ + side3_;
    }

    void displayProperties() const override {
        cout << "Properties of the Triangle:" << endl;
        cout << "- Area: " << area() << endl;
        cout << "- Perimeter: " << perimeter() << endl;
    }
};

int main() {
	cout << "Haris Ahmed 23k6005" << endl;
	
    cout<<"Welcome to the Geometrry Competition Calculator!" <<endl;

    string choice;
    do {
        cout <<"Please select a shape:"<<endl;
        cout <<"1. Circle\n2. Rectangle\n3. Square\n4. Triangle"<<endl;
        cout <<"Enter your choice: ";
        int shapeChoice;
        cin>> shapeChoice;

        switch (shapeChoice) {
            case 1:{
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                circle.displayProperties();
                break;
            }
            case 2: {
                double length, width;
                cout <<"Enter the length of the rectangle: ";
                cin >> length;
                cout <<"Enter the width of the rectangle: ";
                cin >> width;
                Rectangle rectangle(length, width);
                rectangle.displayProperties();
                break;
            }
            case 3: {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                square.displayProperties();
                break;
            }
            case 4: {
                double side1, side2, side3;
                cout <<"Enter the lengths of the three sides of the triangle:";
                cin >> side1 >> side2 >> side3;
                Triangle triangle(side1, side2, side3);
                triangle.displayProperties();
                break;
            }
            default:
                cout << "Invalid choice!" << endl;
                break;
        }

        cout << "Do you want to calculate properties for another shape? (yes/no): ";
        cin >> choice;
    } while (choice == "yes" || choice == "Yes");

    cout << "Thank you for using the Geometry Competition Calculator!" << endl;

    return 0;
}
