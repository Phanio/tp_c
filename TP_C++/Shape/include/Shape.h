#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include "Circle.h"

class Shape
{
    public:
        Shape(int capacity);
        Shape(const Shape& RHS);
        ~Shape();
        void addCircle(Circle c);
        Circle* const getCircles();
        int const getNumberOfCircles();
        void print();

    private:
        Circle* circles;
        int numberOfCircles;
        int capacity;

};

#endif // SHAPE_H
