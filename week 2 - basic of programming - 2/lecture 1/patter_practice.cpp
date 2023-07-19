#include<iostream>
using namespace std;

int main(){


    // FANCY PATTERN #2(54 N0.)

    // 1
    // 2*3
    // 4*5*6
    // 7*8*9*10
    // 7*8*9*10
    // 4*5*6
    // 2*3
    // 1

    int n;
    cin >> n;
    int count=1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout << count++;
            if(col!=row){
                cout << "*";
            }
        }
        cout << endl;
    }
    int m=n;
    int start = count-m;
    m--;
    for(int row=1;row<=n;row++){
        int k=start;
        for(int col=1;col<=n-row+1;col++){
            cout << k++;
            if(col!=n-row+1){
                cout << "*";
            }
        }
        start = start-m;
        m--;
        cout << endl;
    }
    








}