#include <iostream>
#include <iomanip>
using namespace std;
const int rows=3;
const int cols=3;
int calculateSum(int matrix[rows][cols]){
    int sum=0;
    for (int i=0;i<rows;++i)
        for (int j=0;j<cols;++j)
            sum+=matrix[i][j];
    return sum;}
int findMaxValue(int matrix[rows][cols]) {
    int maxVal=matrix[0][0];
    for (int i=0;i<rows;++i)
        for (int j=0;j<cols;++j)
            if (matrix[i][j]>maxVal)
                maxVal=matrix[i][j];
    return maxVal;}
int findMinValue(int matrix[rows][cols]){
    int minVal=matrix[0][0];
    for (int i=0;i<rows;++i)
        for (int j=0;j<cols;++j)
            if (matrix[i][j]<minVal)
                minVal=matrix[i][j];
    return minVal;}
int main(){
    int matrix[rows][cols]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int sum=calculateSum(matrix);
    cout<<setw(5)<<"Sum of all elements"<<sum<<endl;
    int maxVal = findMaxValue(matrix);
    cout<<"Maximum value"<<maxVal<<endl;
    int minVal=findMinValue(matrix);
    cout<<"Minimum value"<<minVal<<endl;
    return 0;
}

