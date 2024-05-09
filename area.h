
#pragma once
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
public:
    static double calculateSquareArea( shapes::Square square);
    static double calculateTriangleArea( shapes::Triangle triangle);
    static double calculateCircleArea(shapes::Circle circle);
};