#ifndef RECTANGULARCUBE_H
#define RECTANGULARCUBE_H


class RectangularCube
{
public:
    //no-argument constructor that sets all three sides to 1
    RectangularCube();
    //constructor with parameters to initialize the fields
    RectangularCube(double, double, double );

    //sets and gets for the fields implements as inline function
    double getLength(){return length;}
    void setLength(double l){ length = l;}
    double getWidth(){return width;}
    void setWidth(double w){width = w;}
    double getHeight(){return height;};
    void setHeight(double h){height = h;}
    double volume();
    double surfaceArea();

private:
    //declaration of fields
    double length, width, height;
};

#endif // RECTANGULARCUBE_H
