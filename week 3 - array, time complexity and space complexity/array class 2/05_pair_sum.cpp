#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> a{10,20,40,60,70};
    int sum=80;

    for(int i=0;i<a.size();i++){
        int element=a[i];
        for(int j=i+1;j<a.size();j++){
            if(element+a[j]==sum){
                cout << "Pair Found " << element << "," << a[j] << endl;
            }
        }
    }

    return 0;
}