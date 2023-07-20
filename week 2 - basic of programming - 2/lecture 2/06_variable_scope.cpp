#include<iostream>
using namespace std;

int raja = 420;

int main(){

    // variable scoping

    // declaration
    int a;

    // initialisation
    int b = 5;

    // updation
    b=10;
    cout << raja << endl;

    if(true){
        int b=15;
        cout << b << endl;
        cout << raja << endl;

    }

    cout << b << endl;


}