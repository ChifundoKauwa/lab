// Triangle.h
#pragma once

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle();
        Triangle(double b, double h);
        ~Triangle();

        double getBase();
        void setBase(double b);

        double getHeight();
        void setHeight(double h);
    };
}
