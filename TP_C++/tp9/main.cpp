#include <iostream>
#include <algorithm>

using namespace std;
int* mergeArrays(int* array1, int size1, int* array2, int size2);
int main()
{
    int a[] = {12,3,4,9,5};
    int  b[] = {23,55,122,444,90};;
    int* c;
    c = mergeArrays(a, 5,b,5);
    for(int i=0; i<10; i++)
    {
        cout << *(c+i)<<", ";
    }

    return 0;
}

int* mergeArrays(int* array1, int size1, int* array2, int size2)
{
    int sizeOfmerge = size1+size2;
    int* mergeArray =new int[sizeOfmerge];

    for( int i =0; i<size1; i++)
    {
        mergeArray[i]= array1[i] ;
    }
    int j=0;
    for(int  i =size1; i<sizeOfmerge; i++)
    {
        mergeArray[i]= array2[j];
        j++;
    }
    int currentMin, currentMinIndex;
    for( int i =0; i<sizeOfmerge; i++)
    {
        currentMin = mergeArray[i];
        currentMinIndex = i;

        for(int j =i+1; j<sizeOfmerge; j++)
        {
            if(currentMin>mergeArray[j])
            {
                currentMin = mergeArray[j];
                currentMinIndex = j;
            }
        }
        if(currentMinIndex!=i)
        {
            mergeArray[currentMinIndex]=mergeArray[i];
            mergeArray[i] = currentMin;
        }
    }
    return mergeArray;
}
