#include<iostream>
#include<vector>
using namespace std;

int main(){

    // create vector
    vector<int> arr;

    // int ans = (sizeof(arr)/sizeof(int));
    // cout << ans << endl;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);

    // print
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // remove / delete
    arr.pop_back();

    // print
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> brr(10);
    cout << "Size of brr " << brr.size() << endl;
    cout << "Capacity of brr " << brr.capacity() << endl;

    // print
    for(int i=0;i<brr.size();i++){
        cout << brr[i] << " ";
    }
    cout << endl;

    // initialise vector with 101
    vector<int> crr(10,101);

    // print
    for(int i=0;i<crr.size();i++){
        cout << crr[i] << " ";
    }
    cout << endl;

    // create dynamic array
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;

    vector<int> drr(n);

    // initialisating with values
    vector<int> err{10,20,30,40};
    // print
    for(int i=0;i<err.size();i++){
        cout << err[i] << " ";
    }
    cout << endl;

    cout << "Vector err is Empty or not " << err.empty() << endl;

    vector<int>frr;
    cout << "Vector frr is Empty or not " << frr.empty() << endl;


    return 0;
}