#include<iostream>
using namespace std;

// int main(){

//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//             if(col==1 || row==n || col==row){
//                 cout << col << " ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }


// int main(){
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     for(int row=1;row<=n;row++){
//         for(int col=row;col<=n;col++){
//             if(col==n || row==1 || col==row){
//                 cout << col << " ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;

// }


// int main(){
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     for(int row=1;row<=n;row++){
//         for(int space=1;space<=n-row;space++){
//             cout << " ";
//         }
//         for(int col=1;col<=row;col++){
//             cout << col;
//         }
//         for(int col=row-1;col>=1;col--){
//             cout << col;
//         }
//         cout << endl;
//     }

//     return 0;

// }


// int main(){
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int row=1;row<n;row++){
//         for(int col=1;col<=n-row;col++){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;

// }


// int main(){
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     for(int row=1;row<=n;row++){
//         for(int star=1;star<=n+3-row+1;star++){
//             cout << "*";
//         }
//         for(int col=1;col<=row;col++){
//             cout << col;
//             if(row!=col){
//                 cout << "*";
//             }
//         }
//         for(int star=1;star<=n+3-row+1;star++){
//             cout << "*";
//         }
//         cout << endl;
//     }
    
//     return 0;

// }


// int main(){
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     int count=1;
//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//             cout << count++;
//             if(row!=col){
//                 cout << "*";
//             }
//         }
//         cout << endl;
//     }
//     int m=n;
//     count=count-m;
//     m--;
//     int start = count;
//     for(int row=1;row<=n;row++){
//         int k=start;
//         for(int col=row;col<=n;col++){
//             cout << k++;
//             if(col!=n){
//                 cout << "*";
//             }
//         }
//         start = start-m;
//         m--;
//         cout << endl;
//     }
    
//     return 0;

// }


// int main(){
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     for(int row=1;row<=n;row++){
//         if(row==1){
//             cout << "*";
//         }
//         else{
//             cout << "*";
//             for(int col=1;col<=row-1;col++){
//             cout << col;
//             }
//             for(int col=row-2;col>=1;col--){
//                 cout << col;
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int row=1;row<n;row++){
//         if(row==n-1){
//             cout << "*";
//         }
//         else{
//             cout << "*";
//             for(int col=1;col<=n-row-1;col++){
//             cout << col;
//             }
//             for(int col=n-row-2;col>=1;col--){
//                 cout << col;
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
    
//     return 0;

// }


// int main(){

//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     int count=1;
//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//             cout << count++ << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// int main(){

//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     for(int row=1;row<=n;row++){
//         int C=1;
//         for(int col=1;col<=row;col++){
//             cout << C << " ";
//             C=C*(row-col)/col;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// int main(){

//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//             cout << "*";
//         }
//         for(int space=1;space<=2*n-2*row;space++){
//             cout << " ";
//         }
//         for(int col=1;col<=row;col++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=n-row+1;col++){
//             cout << "*";
//         }
//         for(int space=1;space<=2*row-2;space++){
//             cout << " ";
//         }
//         for(int col=1;col<=n-row+1;col++){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }
