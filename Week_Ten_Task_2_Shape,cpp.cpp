#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Shape *shapePtr;

    Circle circle1;
    Rectangle rectangle1;
    Triangle triangle1;

    cout << "=== Shape Drawing System ===" << endl;

    shapePtr = &circle1;
    shapePtr->draw();

    shapePtr = &rectangle1;
    shapePtr->draw();

    shapePtr = &triangle1;
    shapePtr->draw();

    return 0;
}
