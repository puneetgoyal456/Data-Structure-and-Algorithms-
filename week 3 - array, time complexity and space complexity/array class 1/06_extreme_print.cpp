#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = 9;

    int left=0;
    int right = size-1;
    while(left<=right){
        if(left==right){
            cout << arr[left] << " ";
        }
        else{
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
        left++;
        right--;
    }

    return 0;
}