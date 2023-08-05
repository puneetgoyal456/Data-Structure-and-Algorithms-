#include<iostream>
using namespace std;

void printRowWiseSum(int arr[][3], int rows, int cols){
    cout << "Prinitng Row-wise sum" << endl;
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
        cout << sum << endl;
    }
}

int main(){

    int arr[3][3];
    int rows=3;
    int cols=3;

    // taking input in array
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> arr[i][j];
        }
    }

    cout << "Printing the element of 2D array" << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    printRowWiseSum(arr,rows,cols);

    return 0;
}