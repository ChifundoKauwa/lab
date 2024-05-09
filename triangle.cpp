
#include "Triangle.h"
#include"area.h"
namespace shapes {
    Triangle::Triangle() : base(0.0), height(0.0) {}

    Triangle::Triangle(double b, double h) : base(b), height(h) {}

    Triangle::~Triangle() {}

    double Triangle::getBase() {
        return base;
    }

    void Triangle::setBase(double b) {
        base = b;
    }

    double Triangle::getHeight() {
        return height;
    }

    void Triangle::setHeight(double h) {
        height = h;
    }
}