#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            // target found, return index
            return mid;
        }
        else if(arr[mid]>target){
            // search in left
            end=mid-1;
        }
        else{   // arr[mid]<target
            // search in right
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    // element not found
    return -1;
}

int main(){

    int arr[]={2,4,6,8,10,12,16};
    int size = 7;
    int target = 2;

    int indexOfTarget = binarySearch(arr,size,target);
    
    if(indexOfTarget == -1){
        cout << "Target no Found" << endl;
    }
    else{
        cout << "Target Found at " << indexOfTarget << " index" << endl;
    }


    // using STL function

    vector<int> v{1,2,3,4,5,6};

    if(binary_search(v.begin(),v.end(),3)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }


    int a[7]={1,2,3,4,5,6,7};

    if(binary_search(a, a+7, 7)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }


    return 0;
}