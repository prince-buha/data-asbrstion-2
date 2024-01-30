/*
1. WAP to perform some basic mathematical operations
using Abstract class such like:
- area of circle
- area of triangle
- area of rectangle
- use one single pure virtual function named
calculate() to perform all above operations


Area of circle: 78.5
Area of triangle: 12
Area of rectangle: 21

*/

#include <iostream>
using namespace std;

class Shape {
    public:
        virtual float calculateArea() = 0;
};

class Circle : public Shape {
    private:
        float radius;
    public:
        Circle(float r) {
            radius = r;
        }
        float calculateArea() {
            return 3.14 * radius * radius;
        }
};

class Triangle : public Shape {
    private:
        float base, height;
    public:
        Triangle(float b, float h) {
            base = b;
            height = h;
        }
        float calculateArea() {
            return 0.5 * base * height;
        }
};

class Rectangle : public Shape {
    private:
        float length, breadth;
    public:
        Rectangle(float l, float b) {
            length = l;
            breadth = b;
        }
        float calculateArea() {
            return length * breadth;
        }
};

int main() {
    Shape* shape;
    Circle circle(5);
    Triangle triangle(4, 6);
    Rectangle rectangle(3, 7);

    shape = &circle;
    cout << "Area of circle: " << shape->calculateArea() << endl;

    shape = &triangle;
    cout << "Area of triangle: " << shape->calculateArea() << endl;

    shape = &rectangle;
    cout << "Area of rectangle: " << shape->calculateArea() << endl;

    return 0;
}
