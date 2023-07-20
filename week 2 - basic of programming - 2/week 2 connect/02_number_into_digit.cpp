#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter the value of n" << endl;
    cin >> num;

    while(num!=0){
        int digit = num%10;
        cout << digit << endl;
        num/=10;
    }

    return 0;
}