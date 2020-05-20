#include "Shape.h"
#include "Circle.h"

Shape::Shape(int capacity)
{
    Shape::capacity = capacity;
    circles = new Circle[capacity];
    numberOfCircles = 0;

}
Shape::Shape(const Shape &RHS)
{
    std::cout<<"Copy constructor executing\n" ;
    numberOfCircles = RHS.numberOfCircles;
    capacity = RHS.capacity;
    circles  = RHS.circles ;
}

Circle* const Shape::getCircles()
{
    return circles;
}

void Shape::addCircle(Circle c)
{
    circles[numberOfCircles]= c;
    numberOfCircles++;
}
int const Shape::getNumberOfCircles()
{
    return numberOfCircles;
}
void Shape::print()
{
    for(int i=0; i<capacity; i++)
    {
        std::cout<<"Circle " << i+1 << ", ray ="<<circles[i].getRay() << std::endl ;
    }
}

Shape::~Shape()
{
    delete circles;
}
