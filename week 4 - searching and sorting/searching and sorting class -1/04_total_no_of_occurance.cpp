#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int firstOccurance(vector<int> v, int target){
    int start = 0;
    int end = v.size()-1;
    int mid = start + (end-start)/2;
    int ans=-1;

    while(start<=end){
        if(v[mid]==target){
            // ans store and then search in left
            ans = mid;
            end=mid-1;
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

    int indexOfFirstOcc = firstOccurance(v,target);
    int indexOfLastOcc = lastOccurance(v,target);
    int totalNoOfOcc = indexOfLastOcc - indexOfFirstOcc +1;
    cout << "Total no of Occurance is " << totalNoOfOcc << endl;


    // using STL function

    auto firstOcc = lower_bound(v.begin(),v.end(),target);
    auto lastOcc = upper_bound(v.begin(),v.end(),target);

    int ans = lastOcc - firstOcc + 1;
    cout << ans << endl;

    
    return 0;
}