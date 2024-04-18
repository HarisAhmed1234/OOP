#include <iostream>
using namespace std;

class Shape {
private:
    float Area;

public:
    Shape(float area){
    	Area=area;
	} 

    Shape operator +(const Shape& shape2) {
        float sum = Area + shape2.Area;
        return Shape(sum);
    }

    void display() {
        cout<< Area << endl;
    }
};

int main() {
    float area1, area2;
    cout << "Enter area of shape 1: ";
    cin >> area1;
    Shape shape1(area1);

    cout << "Enter area of shape 2: ";
    cin >> area2;
    Shape shape2(area2);

    Shape shape3 = shape1 + shape2;

    cout << "Area of shape 1: ";
    shape1.display();
    cout << "Area of shape 2: ";
    shape2.display();
    cout << "The sum of both areas is: ";
    shape3.display();

    return 0;
}
