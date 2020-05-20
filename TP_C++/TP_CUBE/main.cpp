#include <iostream>
#include "RectangularCube.h"

using namespace std;

int main()
{
    RectangularCube r1; // object created with no-argument constructor
    RectangularCube r2 = RectangularCube(5, 3, 4); // object created using constructor with arguments
    double v1 = r1.volume(); // return volume of the object r1
    double v2 = r2.volume(); // return volume of the object r2

    double s1 = r1.surfaceArea(); // return surface area of the object r1
    double s2 = r2.surfaceArea(); // return surface area of the object r2

    cout << "The volume of the object r1 is: " << v1 << endl;
    cout << "The volume of the object r2 is: " << v2 << endl;
    cout << "The surface area of the object r1 is: " << s1 << endl;
    cout << "The surface area of the object r2 is: " << s2 << endl;
    //set functions on object r1 to change the value of one of the sides
    r1.setLength(6);
    v1 = r1.volume(); // return the new volume of the object r1
    s1 = r1.surfaceArea(); // return the new surface area of the object r1
    cout << "The new volume of the object r1 is: " << v1 << endl;
    cout << "The new surface area of the object r1 is: " << s1 << endl;
    r1 = RectangularCube();
    cout << "The volume is: " << r1.volume() << endl;
    cout << "The surface area is: " << r1.surfaceArea() << endl;
    return 0;
}
