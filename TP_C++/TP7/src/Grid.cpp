#include "Grid.h"

Grid::Grid()
{
    for(int i=0;i<10; i++){
        for(int j=0;j<10; j++){
            dataArrays[i][j]=0;
        }
    }
}

int Grid::getElement(int row, int column){
    return dataArrays[row][column];
}

void Grid::setElement(int row, int column, int newValue){
    dataArrays[row][column] = newValue ;
}


