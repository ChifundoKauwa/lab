#include "circle.h"

namespace shapes {
    Circle::Circle() : radius(0.0) {}

    Circle::Circle(double r) : radius(r) {}

    Circle::~Circle() {}

    double Circle::getRadius(){
        return radius;
    }

    void Circle::setRadius(double r) {
        radius = r;
    }
}