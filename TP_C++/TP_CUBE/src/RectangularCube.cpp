#include "RectangularCube.h"

//no-argument constructor that sets all three sides to 1
RectangularCube::RectangularCube()
{
    length = 1;
    width = 1;
    height = 1;
}
//constructor with parameters to initialize the fields
RectangularCube::RectangularCube(double l, double w, double h)
{
    length = l;
    width = w;
    height = h;
}

//method that return the volume of the rectangle cube
double RectangularCube::volume()
{
    return length*width*height;
}

//method that return the surface area of the rectangle cube
double RectangularCube::surfaceArea()
{
    return  2*length*width + 2*length*height + 2*width*height;
}

