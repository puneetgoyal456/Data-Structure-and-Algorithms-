#include<iostream>
using namespace std;

float areaOfCircle(float rad){
    float area = 3.14 * rad * rad;
    return area;
}

bool isEven(int num){
    if(num%2==0){
        return true;
    }
    else{
        return false;
    }
}

int getFact(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

bool isPrime(int num){
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

// int main(){

//     float rad;
//     cout << "Enter the radius of circle" << endl;
//     cin >> rad;

//     float ans = areaOfCircle(rad);
//     cout << "Area of ciecle is : " << ans << endl;

//     return 0;
// }


// int main(){

//     int num;
//     cout << "Enter the value of num" << endl;
//     cin >> num;

//     if(isEven(num)){
//         cout << "No is Even" << endl;
//     }
//     else{
//         cout << "No is Odd" << endl;
//     }

//     return 0;
// }


// int main(){

//     int num;
//     cout << "Enter the value of num" << endl;
//     cin >> num;

//     int factorial = getFact(num);
//     cout << "Factorial of " << num << " is : " << factorial << endl;

//     return 0;
// }


// int main(){

//     int num;
//     cout << "Enter the value of num" << endl;
//     cin >> num;

//     if(isPrime(num)){
//         cout << "No is Prime" << endl;
//     }
//     else{
//         cout << "No is not Prime" << endl;
//     }

//     return 0;
// }


// int main(){

//     int num;
//     cout << "Enter the value of num" << endl;
//     cin >> num;

//     for(int i=0;i<=num;i++){
//         if(isPrime(i)){
//             cout << i << " " << endl;
//         }
//     }

//     return 0;
// }


