#include<iostream>
using namespace std;

int getEvenSum(int num){
    int sum = 0;
    for(int i=2;i<=num;i+=2){
        sum=sum+i;
    }
    return sum;
}

int main(){
    
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int ans = getEvenSum(n);
    cout << "Even sum upto " << n << " is " << ans << endl;
    
    return 0;

}