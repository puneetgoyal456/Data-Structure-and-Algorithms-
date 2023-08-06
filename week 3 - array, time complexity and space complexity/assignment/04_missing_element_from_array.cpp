#include<iostream>
using namespace std;

void findMissing(int *a, int size){
    // visited Method
    for(int i=0;i<size;i++){
        int index = abs(a[i]);
        if(a[index-1]>0){
            a[index-1] *= -1;
        }
    }

    // for(int i=0;i<size;i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    for(int i=0;i<size;i++){
        if(a[i]>0){
            cout << i+1 << " ";
        }
    }
    cout <<endl;

}

int main(){

    int a[]={1,3,5,3,4};
    int n=sizeof(a)/sizeof(a[0]);

    findMissing(a,n);

    return 0;
}