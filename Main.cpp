
#include <iostream>
#include <string>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;

int main() {
int choice;
    bool quit = false;

    while (!quit) {
        cout << "Select an option:" << endl;
        cout << "1. Calculate area of a square" << endl;
        cout << "2. Calculate area of a triangle" << endl;
        cout << "3. Calculate area of a circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin>>choice;

        if (choice == 1) {
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;

            shapes::Square square(side);
            double area = Area::calculateSquareArea(square);
            cout << "The area of the square is: " << area << endl;
        }
        else if (choice == 2) {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;

            shapes::Triangle triangle(base, height);
            double area = Area::calculateTriangleArea(triangle);
            cout << "The area of the triangle is: " << area << endl;
        }
        else if (choice == 3) {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;

            shapes::Circle circle(radius);
            double area = Area::calculateCircleArea(circle);
            cout << "The area of the circle is: " << area << endl;
        }
        else if (choice == 4) {
            quit = true;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }

        
    }

    return 0;
}