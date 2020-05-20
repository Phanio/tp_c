#include <iostream>
#include <vector>

using namespace std;
template<typename T>
void templateFunction(const vector<T> arrays);
int main()
{
    vector<int> arr1= {3,5,7,12};
    vector<double> arr2={3.6,5.9,7.5,12.5};
    vector<string> arr3={"me", "you", "name", "open", "size", "title"};

    templateFunction(arr1);
    templateFunction(arr2);
    templateFunction(arr3);
    return 0;
}

template<typename T>
void templateFunction(const vector<T> arrays)
{
    int sizeArr = arrays.size();
    for(int i =0; i< sizeArr; i=i+2)
    {
        cout<<arrays[i]<<" "<< arrays[i+1]<< endl;
    }
}
