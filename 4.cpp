#include <stdio.h>
#include <iostream>
using namespace std;

// // writing only odd numbers till the number n given by the user (using continue statement)

// // int main(){
// //     int a;
// //     cout<<"enter the numbber  ;";
// //     cin>>a;
// //     int b=0;
// //     for(int c;c<=a;c++){
// //         if(c%2==0){
// //             continue;
// //         }
// //         cout<<c<<endl;
// //     }
// //     return 0;
// // }

// int main(){
//     int a;
//     cout<<"enter the number  :";
//     cin>>a;
//     int b;
//     for(int b=2; b<a ; b++){
//         if(a%b==0){
//             cout<<"not a prime number";
//             break;
//         }
//         else{
//             cout<<"a prime number";
//             break;7
//         }
//     }
//     // if(b==a){
//     //         cout<<"it's a prime number";
//     //     }
//     return 0;
// }


// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int i;
//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         { // found a factor

//             cout << "Not a prime" << endl;
//             break;
//         }
//     }
//     if (i == n)
//     { 

//         cout << "Prime Number" << endl;
//     }

//     return 0;
// }

// writing all prime numbers btw a given range;

int main(){
    int a,b;
    cout <<"enter the numbers  ;";
    cin>>a>>b;
    for(int c=a ; c<=b ; c++){
        int i;
        for(i=2 ; i< c ; i++){
            if(c%i==0){
                break;
            }
            else{
                cout<<c<<endl;
                break;
            }
        }
        }
        return 0;
}
     
    

