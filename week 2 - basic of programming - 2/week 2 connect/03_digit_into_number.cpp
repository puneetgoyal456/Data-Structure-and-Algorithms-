#include<iostream>
using namespace std;

int main(){

    int digit[]={1,2,3,5};
    int ans = 0;
    for(int i=0;i<4;i++){
        ans = ans*10+digit[i];
    }
    cout << ans << endl;

    return 0;
}