#include<iostream>
using namespace std;


// int main(){
//     int n;
//     cin >> n;
//     int sum=0;
//     for(int i=1;i<=n;++i){
//         sum+=i;
//     }
//     cout<<sum<<endl;
// 	return 0;
// }


// int main(){
//     int n;
//     cout << "Enter the number of rows : ";
//     cin >> n;
//     cout << " ";
//     for (int i=1; i<=n; i++){
//         for(int space=1;space<=n-i;space++){
//             cout << " ";
//         }
//         for (int j=1; j<=i; j++){
//             cout << j;
//         }

//     for (int j=i-1;j>=1;j--){
//             cout << j;
//         }
//         cout << endl;
//     }
// return 0;
// }



// int main() {
//   // size of the triangle
//   int size = 5;
//   // loop to print the pattern
//   for (int i = 0; i < size; i++) {
//     // print column
//     for (int j = 0; j < i; j++) {
//       cout << "*";
//     }
//     cout << "\n";
//   }
//   return 0;
// }


// int main() {
//   // size of the pyramid
//   int size;
//   cin>>size;
//   for (int i = 1; i <= size; i++) {
//     // print spaces
//     for (int j = 1; j <= i-1; j++) {
//       cout << " ";
//     }
//     // print stars
//     for (int k = 1; k <= 2*size-2*i+1; k++) {
//       cout << "*";
//     }
//     cout << "\n";
//   }
//   return 0;
// }


// int binaryToDecimal(int b){
//     int ans=0;
//     int c=0;
//     while(b){
//         ans=ans+(b % 10)* (1 << c++);
//         b/=10;
//     }
//     return ans;
// }
// int main(){
//     cout << binaryToDecimal(1010);
// }


// #include <iostream>
// using namespace std;

// int main() {
//     char oper;
//     float num1, num2;
//     cout << "Enter an operator (+, -, *, /): ";
//     cin >> oper;
//     cout << "Enter two numbers: " << endl;
//     cin >> num1 >> num2;

//     switch (oper) {
//         case '+' :
//             cout << num1 << " + " << num2 << " = " << num1 + num2;
//             break;
//         case '-' :
//             cout << num1 << " - " << num2 << " = " << num1 - num2;
//             break;
//         case '/' :
//             cout << num1 << " * " << num2 << " = " << num1 * num2;
//             break;
//         case '*' :
//             cout << num1 << " / " << num2 << " = " << num1 / num2;
//             break;
//         default:
//             // operator is doesn't match any case constant (+, -, *, /)
//             cout << "Error! The operator is not correct";
//             break;
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    // heart star pattern
    int size;
    cin>>size;

    for (int i = size / 2; i < size; i += 2) {
        // print first spaces
        for (int j = 1; j < size - i; j += 2) {
            cout << " ";
        }
        // print first stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        // print second spaces
        for (int j = 1; j <= size-i; j++) {
            cout << " ";
        }
        // print second stars
        for (int j = 1; j < i + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }

  // lower part
  // inverted pyramid
    for (int i = size; i > 0; i--) {
        for (int j = 0; j < size - i; j++) {
        cout << " ";
        }
        for (int j = 1; j < i * 2; j++) {
        cout << "*";
        }
        cout << "\n";
        }
    return 0;
}