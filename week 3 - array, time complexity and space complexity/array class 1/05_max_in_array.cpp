#include<iostream>
#include<climits>
using namespace std;

int findMax(int arr[], int size){
    int maxi = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int findMini(int arr[], int size){
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
}

int main(){

    int arr[]={1,2,3,4,56,5,6,7,8,9};
    int size = 10;

    int maxi = findMax(arr,9);
    cout << "Maximum element in array " << maxi << endl;

    int mini = findMini(arr,9);
    cout << "Manimum element in array " << mini << endl;

    return 0;
}