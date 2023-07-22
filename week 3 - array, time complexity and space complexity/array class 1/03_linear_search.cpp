#include<iostream>
using namespace std;

bool find(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = 9;

    int key;
    cout << "Enter the key to find" << endl;
    cin >> key;

    if(find(arr,5,key)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }

    return 0;
}