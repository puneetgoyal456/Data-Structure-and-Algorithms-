#include<iostream>
using namespace std;

void moveAllNegToLeft(int arr[], int size){
    int start=0;
    int end=size-1;

    while(start<=end){
        if(arr[start]<0){
            start++;
        }
        else if(arr[end]>0){
            end--;
        }
        else{
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
}

int main(){

    int arr[]={-1,2,-3,4,-5,6,0,-5,34,-7};
    int size=sizeof(arr)/sizeof(arr[0]);

    moveAllNegToLeft(arr,size);

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    return 0;
}