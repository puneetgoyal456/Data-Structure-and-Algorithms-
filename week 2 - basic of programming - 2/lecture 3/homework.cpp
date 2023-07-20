#include<iostream>
using namespace std;

// float areaOfCircle(int radius){
//     float ans = 3.14 * radius * radius;
//     return ans;
// }

// bool evenOdd(int num){
//     if(num%2==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int getFact(int num){
//     int fact = 1;
//     for(int i=2;i<=num;i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// bool getPrime(int num){
//     for(int i=2;i<num;i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }

bool prime(int num){
    if(num==0 || num==1){
        return false;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    // int radius;
    // cout << "Enter the radius of circle" << endl;
    // cin >> radius;

    // float ans = areaOfCircle(radius);
    // cout << "Area of Circle is : " << ans << endl;


    // int num;
    // cout << "Enter the value of num" << endl;
    // cin >> num;

    // if(evenOdd(num)){
    //     cout << "Even" << endl;
    // }
    // else{
    //     cout << "Odd" << endl;
    // }

    
    // int num;
    // cout << "Enter the value of num" << endl;
    // cin >> num;

    // int ans = getFact(num);
    // cout << "factorial of " << num << " is " << ans << endl;


    // int num;
    // cout << "Enter the value of num" << endl;
    // cin >> num;

    // if(getPrime(num)){
    //     cout << "No is prime" << endl;
    // }
    // else{
    //     cout << "No is not prime" << endl;
    // }

    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;

    for(int i=0;i<=num;i++){
        if(prime(i)){
            cout << i << " ";
        }
    }

    return 0;
}