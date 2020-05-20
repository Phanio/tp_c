#include <iostream>
#include "Shape.h"
#include "Circle.h"

using namespace std;

int main()
{
    Shape s1 = Shape(2);
    Circle c1, c2, c3,c4,c5,c6;
    c1.setRay(4);
    c2.setRay(6);
    s1.addCircle(c1);
    s1.addCircle(c2);
    s1.print();
    c3.setRay(7);
    c4.setRay(5);
    c5.setRay(3);
    Shape s2 = Shape(4);
    s2.addCircle(c3);
    s2.addCircle(c4);
    s2.addCircle(c5);
    s2.print();
    Shape s3 = Shape(s2);
    s3.print();
    c6.setRay(9);
    s2.addCircle(c6);
    s2.print();
    s3.print();
    return 0;
}
