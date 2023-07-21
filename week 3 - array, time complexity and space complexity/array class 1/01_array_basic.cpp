#include<iostream>
using namespace std;

int main(){

    // array declare
    // int arr[7];
    // cout << arr << endl;
    // cout << &arr << endl;
    // cout << "Array decalre successfully" << endl;

    // int arr[53];
    // char arr[106];
    // bool arr[23];

    // array initialise
    // int arr[]={2,3,4,6,7};
    // int brr[5]={2,4,6,8,10};
    // int crr[10]={2,4,6,8,10};
    // error
    // int drr[4]={2,4,6,8,10};

    // cout << "Array decalre successfully" << endl;

    // int arr[4]={1,3,5,7};
    // char arr[10]={'a','b','c'};

    // int arr[]={1,3,5,7,9};

    // cout << arr[4] << endl;

    // printing all values
    // for(int i=0;i<5;i++){
    //     cout << arr[i] << " ";
    // }

    // int arr[10];
    // cout << "Enter the input value in array" << endl;
    // // taking input in array
    // for(int i=0;i<10;i++){
    //     cin >> arr[i];
    // }

    // // printing
    // cout << "Printing the value of array" << endl;
    // for(int i=0;i<10;i++){
    //     cout << arr[i] << " ";
    // }


    // CLASS QUESTIONS 

    // int arr[5];
    // // taking input in array
    // for(int i=0;i<5;i++){
    //     cin >> arr[i];
    // }

    // // printing the elements in array
    // for(int i=0;i<5;i++){
    //     cout << 2 * arr[i] << " ";
    // }

    // int arr[]={1,3,5,7,9};
    // for(int i=0;i<5;i++){
    //     arr[i]=1;
    // }

    // for(int i=0;i<5;i++){
    //     cout << arr[i] << " ";
    // }


    // int arr[10]={1,2};

    // for(int i=0;i<10;i++){
    //     cout << arr[i] << " ";
    // }

    // int arr[10];
    
    // for(int i=0;i<10;i++){
    //     cout << arr[i] << " ";
    // }

    // int arr[10]={0};
    
    // for(int i=0;i<10;i++){
    //     cout << arr[i] << " ";
    // }

    // initialisation complete array with 1
    int arr[10]={1};  // nhai hua

    // using memset function
    memset(arr,1,sizeof(arr));
    
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }



    return 0;
}