#include <iostream>
#include <vector>

using namespace std;
vector<double> rowSum(vector<vector<double>> matrix);
int main()
{
    vector<vector<double>> matrix{{1, 2.5, 3, 5, 23},
        {4, 5, 6,8,24}, {7, 8, 9,34,12}, {10, 11, 12,50,9}};
    vector<double> result = rowSum(matrix);
    //display of the two dimension array
    for(int i=0; i<matrix.size(); i++)
    {

        for(int j=0; j<matrix[0].size(); j++)
        {
            cout  <<" "<< matrix[i][j];
        }
        cout <<" "<< endl;
    }
    //display of the result
    cout << endl;
    cout <<"[ ";
    for(int i=0; i<result.size(); i++)
    {
        cout <<result[i]<<" ";
    }
    cout <<"]"<< endl;
    return 0;
}

vector<double> rowSum(vector<vector<double>> matrix)
{
    vector<double> vect;
    double sum=0;
    for(int i=0; i<matrix.size(); i++)
    {
        sum = 0;
        for(int j=0; j<matrix[0].size(); j++)
        {
            sum+= matrix[i][j];
        }
        vect.push_back(sum);
    }
    return vect;
}
