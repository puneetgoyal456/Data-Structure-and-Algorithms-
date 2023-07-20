#include<iostream>
#include<math.h>
using namespace std;

// DECIMAL TO BINARY

int main(){
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;

    int ans = 0;
    int i=0;
    while(num!=0){
        int bit  = num&1;
        ans = bit*pow(10,i++)+ans;
        num=num>>1;
    }
    cout << ans;
}



// BINARY TO DECIMAL

// int main(){
//     int num;
//     cin >> num;

//     int ans = 0;
//     int i=0;
//     while(num!=0){
//         int bit = num%10;
//         if(bit==1){
//             ans = ans+pow(2,i);
//         }
//         num/=10;
//         i++;
//     }
//     cout << ans << endl;;

// }