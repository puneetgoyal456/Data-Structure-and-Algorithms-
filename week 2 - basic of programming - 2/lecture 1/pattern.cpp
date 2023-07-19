#include<iostream>
using namespace std;

int main(){

    // 1. full pyramid
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *

    // int n;
    // cout << "Enter the value of n" << endl;
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


    // 2. inverted full pyramid
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;

    // for(int row=1;row<=n;row++){
    //     for(int space=1;space<=row-1;space++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=(n-row+1);col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // numeric full pyramid
    //     1
    //    232
    //   34543
    //  4567654
    // 567898765

    // int n;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int space=1;space<=n-row;space++){
    //         cout << " ";
    //     }
    //     for(int col=row;col<=(2*row-1);col++){
    //         cout << col;
    //     }
    //     for(int col=(2*row-2);col>=row;col--){
    //         cout << col;
    //     }
    //     cout << endl;
    // }


    // numeric hollow pyramid
    //     1
    //    1 2
    //   1   3
    //  1     4
    // 1 2 3 4 5

    // int n;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int space=1;space<=n-row;space++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=row;col++){
    //         if(col==1 || row==n || col==row){
    //             cout << col << " ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }



    // 3. solid diamond
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    // int n;
    // cout << "Enter the value of n" << endl;
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
    // for(int row=1;row<=n;row++){
    //     for(int space=1;space<=row-1;space++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=(n-row+1);col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // 4. hollow diamond
    //     *
    //    * *
    //   *   *
    //  *     *
    // *       *
    // *       *
    //  *     *
    //   *   *
    //    * *
    //     *

    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int i=1;i<=n-row;i++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=row;col++){
    //         if(col==1 || col==row){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for(int row=1;row<=n;row++){
    //     for(int space=1;space<=row-1;space++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=(n-row+1);col++){
    //         if(col==1 || col==(n-row+1)){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    // 5. flipped solid diamond
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********

    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;
    // // upper part
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=(n-row+1);col++){
    //         cout << "*";
    //     }
    //     for(int space=1;space<=(2*row-2);space++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=(n-row+1);col++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // // lower part
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=row;col++){
    //         cout << "*";
    //     }
    //     for(int space=1;space<=(2*n-2*row);space++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=row;col++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    // fancy pattern #1
    // 3
    // 44
    // 555
    // 6666
    // 555
    // 44
    // 3

    // int n;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=row;col++){
    //         cout << row+2;
    //     }
    //     cout << endl;
    // }
    // for(int row=1;row<n;row++){
    //     for(int col=1;col<=n-row;col++){
    //         cout << n-row+2;
    //     }
    //     cout << endl;
    // }


    // 6. fancy pattern #2
    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    // 4*4*4*4
    // 3*3*3
    // 2*2
    // 1

    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=row;col++){
    //         if(row==1 || col==row){
    //             cout << row;
    //         }
    //         else{
    //             cout << row << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=(n-row+1);col++){
    //         if(row==n || col==(n-row+1)){
    //             cout << n-row+1;
    //         }
    //         else{
    //             cout << n-row+1 << "*";
    //         }
    //     }
    //     cout << endl;
    // }


    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=row;col++){
    //         cout << row;
    //         if(col!=row){
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=(n-row+1);col++){
    //         cout << n-row+1;
    //         if(col!=n-row+1){
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }


    // 7. alphabet palindrome pyramid
    // A
    // A B A 
    // A B C B A 
    // A B C D C B A
    // A B C D E D C B A

    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     char ch;
    //     for(int col=1;col<=row+1;col++){
    //         ch = 'A'+col-1;
    //         cout << ch;
    //     }
    //     for(int col=row-1;col>=1;col--){
    //         ch = 'A'+col-1;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }



    // HOMEWORK

    // 1.SOLID SQUARE
    // *****
    // *****
    // *****
    // *****
    // *****
    // *****

    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=n;col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // 1.HOLLOW SQUARE
    // *****
    // *   *
    // *   *
    // *   *
    // *   *
    // *****

    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=n;col++){
    //         if(row==1 || row==n || col==1 || col==n){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    // 3. hollow inverted half pyramid
    // ******
    // *   *
    // *  *
    // * *
    // * 

    // int n;
    // cout << "Enter the cvalue of n" << endl;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=(n-row+1);col++){
    //         if(row==1 || col==1 || col==n-row+1){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }


    // 4. hollow full pyramid
    //     *
    //    * *
    //   *   *
    //  *     *
    // * * * * *

    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;

    // for(int row=1;row<=n;row++){
    //     for(int i=1;i<=n-row;i++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=row;col++){
    //         if(row==n || col==1 || col==row){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    // 5. numeric hollow half pyramid
    // 1
    // 1 2 
    // 1   3 
    // 1     4
    // 1 2 3 4 5

    // int n;
    // cout << "Enter the cvalue of n" << endl;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=row;col++){
    //         if(row==n || col==1 || col==row){
    //             cout << col << " ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }



    // 6. numeric hollow inverted half pyramid
    // 1 2 3 4 5
    // 1     4
    // 1   3 
    // 1 2 
    // 1

    // int n;
    // cout << "Enter the cvalue of n" << endl;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int col=row;col<=n;col++){
    //         if(row==1 || col==n || col==row){
    //             cout << col;
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }


    // 7. numeric palindrome equilateral pyramid
    //     1
    //    121
    //   12321
    //  1234321
    // 123454321

    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int space=1;space<=n-row;space++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=row;col++){
    //         cout << col;
    //     }
    //     for(int col=row-1;col>=1;col--){
    //         cout << col;
    //     }
    //     cout << endl;
    // }


    // 8. fancy pattern #1
    // ********1********
    // *******2*2*******
    // ******3*3*3******
    // *****4*4*4*4*****
    // ****5*5*5*5*5****

    // int n;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int star1=1;star1<=n+3-row+1;star1++){
    //         cout << "*";
    //     }
    //     for(int col=1;col<=row;col++){
    //         cout << row;
    //         if(col!=row){
    //             cout << "*";
    //         }
    //     }
    //     for(int star2=1;star2<=n+3-row+1;star2++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    // 9. solid half diamond
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *

    // int n;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=row;col++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for(int row=1;row<n;row++){
    //     for(int col=row;col<n;col++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    
    

    // 12. floyd's triangle pattern
    // 1
    // 2  3  
    // 4  5  6  
    // 7  8  9  10 
    // 11 12 13 14 15 
    // 16 17 18 19 20 21
    // 22 23 24 25 26 27 28

    // int n;
    // cin >> n;
    // int count=1;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=row;col++){
    //         cout << count++;
    //     }
    //     cout << endl;
    // }

    

    // 14. butterfly pattern
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *

    // int n;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=row;col++){
    //         cout << "*";
    //     }
    //     for(int space=1;space<=(2*n-2*row);space++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=row;col++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=n-row+1;col++){
    //         cout << "*";
    //     }
    //     for(int space=1;space<=(2*row-2);space++){
    //         cout << " ";
    //     }
    //     for(int col=1;col<=n-row+1;col++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }



    // 13. pascal traingle pattern
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1
    // 1 5 1010 5 1
    // 1 6 152015 6 1

    // int n;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     int C = 1;
    //     for(int col=1;col<=row;col++){
    //         cout << C << " ";
    //         C = C*(row-col)/col;
    //     }
    //     cout << endl;
    // }

// ---------------------------------------REMAINING-----------------------------------

//     10. fancy pattern #3
//     *
//     *1*
//     *121*
//     *12321*
//     *121*
//     *1*
//     *

    // int n;
    // cin >> n;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=2*row-1;col++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for(int row=1;row<n;row++){
    //     for(int col=1;col<=2*row-1;col++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // 11. fancy pattern #2
    // 1
    // 2*3
    // 4*5*6
    // 7*8*9*10
    // 7*8*9*10
    // 4*5*6
    // 2*3
    // 1
    
    // int n;
    // cin >> n;
    // int count=1;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=row;col++){
    //         cout << count++;
    //         if(col!=row){
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    // int start =count-n;
    // for(int row=1;row<=n;row++){
    //     int k=start;
    //     for(int col=1;col<=n-row+1;col++){
    //         cout << k++;
    //         if(col!=n-row+1){
    //             cout << "*";
    //         }
    //     }
    //     start = start-n-row+2;
    //     cout << endl;
    // }

    
    
    



}