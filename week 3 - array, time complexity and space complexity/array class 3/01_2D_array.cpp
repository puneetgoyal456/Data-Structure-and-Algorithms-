#include<iostream>
using namespace std;

int main(){

    // declare 2D array
    int arr[3][3];

    // initialisation
    int brr[3][3]={
        {1,2,3},
        {4,5,6},
        {2,4,8}};

    cout << brr[2][2] << endl;
    cout << brr[0][2] << endl;
    cout << brr[2][0] << endl;
    cout << brr[1][0] << endl;
    cout << brr[1][1] << endl;
    cout << brr[1][2] << endl;


    cout << "Printing Row Wise" << endl;
    // row-wise print
    // outer loop
    for(int i=0;i<3;i++){
        // for every row, we need to print the value in each column
        for(int j=0;j<3;j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Printing Column Wise" << endl;
    // col-wise print
    // outer loop
    for(int i=0;i<3;i++){
        // for every row, we need to print the value in each column
        for(int j=0;j<3;j++){
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;



    int arr[4][3];
    int rows=4;
    int cols=3;
    // input
    // row-wise input
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> arr[i][j];
        }
    }

    cout << "Printing Row Wise" << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    int arr[3][3];
    int rows=3;
    int cols=3;
    // input
    // col-wise input
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> arr[j][i];
        }
    }

    cout << "Printing Row Wise" << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}