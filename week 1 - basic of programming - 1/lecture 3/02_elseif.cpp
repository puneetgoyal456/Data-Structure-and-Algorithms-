#include<iostream>
using namespace std;

int main(){

    int marks;
    cout << "Enter the marks" << endl;
    cin >> marks;

    // nested if-else

    // if(marks>=90){
    //     cout << "A grade" << endl;
    // }
    // else{
    //     if(marks>=80){
    //         cout << "B grade" << endl;
    //     }
    //     else{
    //         if(marks>=60){
    //             cout << "C grade" << endl;
    //         }
    //         else{
    //             if(marks>=40){
    //                 cout << "D grade" << endl;
    //             }
    //             else{
    //                 cout << "F grade" << endl;
    //             }
    //         }
    //     }
    // }


    // ladder if elseif else

    if(marks>=90){
        cout << "A grade" << endl;
    }
    else if(marks>=80){
        cout << "B grade" << endl;
    }
    else if(marks>=60){
        cout << "C grade" << endl;
    }
    else if(marks>=40){
        cout << "D grade" << endl;
    }
    else{
        cout << "F grade" << endl;
    }

}