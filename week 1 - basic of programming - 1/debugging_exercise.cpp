#include<iostream>
using namespace std;


// 1. The below code snippet has some errors. Let’s debug it and make it compile & run successfully.

// int main() {
// 	int i=0;
// 	i=i+1;
// 	cout<<i;
// 	/*print i *///i=i+1
// 	cout<<++i;
// }


// 2. Below code should print the sum of ‘i’ and ‘j’.

// int main() {
// 	short i=2300, j=4322;
// 	cout<<"i+j="<<-(i+j);
// }


// 3. Find perimeter of a rectangle.

// int main() {
// 	float l, b;
// 	int P = 2*(l+b);
// 	printf("Perimeter=", P);
// }


// 4. Print solid square pattern.

// int main() {
//     int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++j) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// 5. Check given number is Prime or not.

// int main(){
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//     for(int i=2;i<n;i++){
//         if(n%i == 0){
//             isPrime = false;
//             break;
//         }
//     }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;
// }


// 6. Print Numeric Hollow Inverted Half Pyramid (Click the hyper link to understand the output)

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;++i){
//         for(int j=i;j<=n;j++){
//             if(j==i || j==n || i==1){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


// 7. Print following pattern.
//     1
//    232
//   34543
//  4567654
// 567898765

// int main() {
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n-i;j++) {
//         printf("  ");
//         }
//         for (int j=i;j<=((2*i)-1);j++) {
//         printf("%d ",j);
//         }
//         for (int j=((i*2)-2);j>=i;j--) {
//         printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 8. Print hollow full pyramid pattern.

//     *
//    * *
//   *   *
//  *     *
// * * * * *

// int main(){
//     int n;
//     cin>>n;
//     for (int i=1; i<=n; ++i) {
//         for (int j=1; j<=n-i; ++j) {
//             cout << " ";
//         }
//         for(int k=1;k<=i;k++){
//             if(i==1 || i==n || k==1 || k==i){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout<<endl;
//     }
// }




int main(){
    int n;
    cin>>n;
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=n-i; ++j) {
            cout << " ";
        }
        for(int k=1;k<=(2*i-1);k++){
            if(k==1 || k==(2*i-1) || i==n){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout<<endl;
    }
}