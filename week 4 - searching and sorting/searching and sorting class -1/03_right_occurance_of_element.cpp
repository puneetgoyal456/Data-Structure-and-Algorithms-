#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lastOccurance(vector<int> v, int target){
    int start = 0;
    int end = v.size()-1;
    int mid = start + (end-start)/2;
    int ans=-1;

    while(start<=end){
        if(v[mid]==target){
            // ans store and then search in right
            ans = mid;
            start=mid+1;
        }
        else if(v[mid]<target){
            // search in right
            start=mid+1;
        }
        else{   // target<arr[mid]
            // search in left
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){

    vector<int> v{1,3,4,4,4,4,6,7};
    int target = 4;

    int indexOfLastOcc = lastOccurance(v,target);
    cout << "Last Occurance of the element is " << indexOfLastOcc << endl;


    // using STL function

    auto lastOcc = upper_bound(v.begin(),v.end(),target);
    cout << "last occurance of element is " << lastOcc-v.begin() << endl;
    
    return 0;
}