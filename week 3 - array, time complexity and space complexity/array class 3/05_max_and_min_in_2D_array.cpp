#include<iostream>
#include<climits>
using namespace std;

int getMin(int arr[][3], int rows, int cols){
    int mini=INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}

int getMax(int arr[][3], int rows, int cols){
    int maxi=INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}

int main(){

    int arr[3][3]={
        {5,6,9},
        {7,1,2},
        {4,3,12}
    };
    int rows=3;
    int cols=3;

    int maximumNumber = getMax(arr,rows,cols);
    int minimumNumber = getMin(arr,rows,cols);

    cout << "Maximum no in 2D array is " << maximumNumber << endl;
    cout << "Minimum no in 2D array is " << minimumNumber << endl;

    return 0;
}