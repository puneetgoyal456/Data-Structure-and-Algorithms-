#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> a{10,20,30,40};
    int sum=80;

    for(int i=0;i<a.size();i++){
        int element1=a[i];
        for(int j=i+1;j<a.size();j++){
            int element2=a[j];
            for(int k=j+1;k<a.size();k++){
                int elememnt3=a[k];
                if(element1+element2+elememnt3==sum){
                    cout << "Triplet is " << element1 << "," << element2 << "," << elememnt3 << endl;
                }
            }
        }
    }

    return 0;
}