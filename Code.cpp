#include <iostream>
#include <cmath>

// Base class
class Shape {
protected:
    std::string name;
public:
    Shape(const std::string& shapeName) : name(shapeName) {}

    // Virtual method for area (polymorphism)
    virtual double area() const = 0;

    // Method to display the shape name and area
    void display() const {
        std::cout << "Shape: " << name << ", Area: " << area() << std::endl;
    }

    virtual ~Shape() = default; // Virtual destructor
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : Shape("Circle"), radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : Shape("Rectangle"), width(w), height(h) {}

    double area() const override {
        return width * height;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : Shape("Triangle"), base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape* shapes[] = {
        new Circle(5.0),
        new Rectangle(4.0, 6.0),
        new Triangle(3.0, 7.0)
    };

    for (Shape* shape : shapes) {
        shape->display();
        delete shape; // Clean up
    }

    return 0;
}
