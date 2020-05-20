#include <iostream>
#include "RectangularCube.h"

using namespace std;

void printCube (RectangularCube rc);
int main()
{
    RectangularCube objectArrays[5];
    for(int i=0; i<5; i++)
    {
        RectangularCube r ;
        r.setLength(rand()%10+1);
        r.setWidth(rand()%10+1);
        r.setHeight(rand()%10+1);
        objectArrays[i] = r;
    }

     for(int i=0; i<5; i++)
    {
        printCube(objectArrays[i]);
    }
    return 0;
}

void printCube (RectangularCube rc)
{
    cout << "L = " <<rc.getLength()<<", W = "<< rc.getWidth() <<", H = "<< rc.getHeight() <<", V = "<< rc.volume() <<", A = " <<rc.surfaceArea() << endl;
}
