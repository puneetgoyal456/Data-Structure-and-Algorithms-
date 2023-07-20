#include<iostream>
using namespace std;

// void printNumber(int num){
//     cout << num << endl;
// }

int getSum(int a,int b){
    int result = a+b;
    return result;
}

int main(){

    // int a = 5;
    // printNumber(a);


    int a;
    cout << "Enter the value of a" << endl;
    cin >> a;

    int b;
    cout << "Enter the value of b" << endl;
    cin >> b;

    int sum = getSum(a,b);
    cout << "addition of a and b is : " << sum << endl;
}