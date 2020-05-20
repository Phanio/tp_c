#include <iostream>

using namespace std;

int main()
{
    double myArray[6] = {6.7, 7.9,12.3, 14.5, 1.5, 17.2};

    //accessing last element using array index
    double lastElement= myArray[5];
    //accessing last element using pointer
    lastElement= *(myArray+5);


    cout << lastElement << endl;
    return 0;
}
