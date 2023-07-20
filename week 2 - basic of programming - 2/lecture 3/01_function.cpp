#include<iostream>
using namespace std;

void printName(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    for(int i=1;i<=n;i++){
        cout << "babbar" << endl;
    }
}

int main(){
    
    // function call
    printName();

    return 0;

}