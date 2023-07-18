#include<iostream>
using namespace std;

int main(){

    // printing solid rectangle
    // * * * * *
    // * * * * *
    // * * * * *

    // for(int row=0;row<3;row++){
    //     for(int col=0;col<5;col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // printing solid square
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    // for(int row=0;row<5;row++){
    //     for(int col=0;col<5;col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // hollow rectangle
    // * * * * *
    // *       *
    // * * * * *

    // for(int row=0;row<3;row++){
    //     if(row==0 || row==2){
    //         for(int col=0;col<5;col++){
    //             cout << "* ";
    //         }
    //     }
    //     else{
    //         cout << "* ";
    //         for(int i=0;i<3;i++){
    //             cout << "  ";
    //         }
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int rowCount,colCount;
    // cin >> rowCount >> colCount;
    // for(int row=0;row<rowCount;row++){
    //     if(row==0 || row==rowCount-1){
    //         for(int col=0;col<colCount;col++){
    //             cout << "* ";
    //         }
    //     }
    //     else{
    //         cout << "* ";
    //         for(int i=0;i<colCount-2;i++){
    //             cout << "  ";
    //         }
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // half pyramid
    // *
    // **
    // ***
    // ****
    // *****

    // int n;
    // cin >> n;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // inverted half pyramid
    // *****
    // ****
    // ***
    // **
    // *

    // int n;
    // cin >> n;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<(n-row);col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // Numeric half pyramid
    // 1
    // 12
    // 123
    // 1234
    // 12345

    // int n;
    // cin >> n;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout << col+1;
    //     }
    //     cout << endl;
    // }


    // inverted numeric half pyramid
    // 12345
    // 1234
    // 123
    // 12
    // 1

    // int n;
    // cin >> n;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<(n-row);col++){
    //         cout << col+1;
    //     }
    //     cout << endl;
    // }


    // full pyramid
    //      *
    //     * *
    //    * * *
    //   * * * *
    //  * * * * *
    // * * * * * *

    // int n;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int i=1;i<=n-row;i++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=row;col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // inverted full pyramid
    // * * * * * *
    //  * * * * *
    //   * * * *
    //    * * *
    //     * *
    //      *

    // int n;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int i=1;i<=row-1;i++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=(n-row+1);col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }



}