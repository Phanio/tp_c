#ifndef GRID_H
#define GRID_H


class Grid
{
    public:
        Grid();
        int getElement(int row, int column);
        void setElement(int row, int column, int newValue);

    private:
        int dataArrays[10][10];

};

#endif // GRID_H
