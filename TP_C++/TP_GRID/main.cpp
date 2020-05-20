#include <iostream>
#include "Grid.h"

using namespace std;

int main()
{
    Grid g;
    cout << "The value in location (3,5) is: " << g.getElement(3,5) << endl;
    g.setElement(3,5,100);
    cout << "The new value in location (3,5) is: " << g.getElement(3,5) << endl;
    return 0;
}
