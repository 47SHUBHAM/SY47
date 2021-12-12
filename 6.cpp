#include <stdio.h>
#include <iostream>
 using namespace std;

//  for printing a rectange or a square with the help of stars

//  int main(){
//      int a;
//      cout<<"enter number of rows  :";
//      cin>>a;
//      int b;
//      cout<<"enter number of columns  :";
//      cin>>b;
//      for(int i=1 ; i<=a ; i++){
//          for(int j=1 ; j<=b ; j++){
//              cout<<"*";
//          }
//          cout<<endl;
//      }
//      return 0;
//  }

// for printing a hollow rec or square

// int main(){
//     int a;
//      cout<<"enter number of rows  :";
//      cin>>a;
//      int b;
//      cout<<"enter number of columns  :";
//      cin>>b;
//      for(int i=1 ; i<=a ; i++){
//          for(int j=1 ; j<=b ; j++){
//              if( i==1|| i==a || j==1 || j==b){
//              cout<<"*";
//          }
//          else{
//              cout<<" ";
//          }
//      }

//          cout<<endl;
//      }
//      return 0;
// }

// Print Half Pyramid Pattern using Stars

// int main(){
//     int a;
//     cout<<"enter the number  :";
//     cin>>a;
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"x";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Print inverted Half Pyramid Pattern using Stars

int main(){
    int a;
    cin>>a;
    for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}

// Print Half Pyramid Pattern using Stars 180 degree


// int main(){
//     int a;
//     cout<<"enter the number  :";
//     cin>>a;
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=a;j++){
//             if(j<=a-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
