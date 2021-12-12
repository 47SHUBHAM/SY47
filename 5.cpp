#include <stdio.h>
#include <iostream>
 using namespace std;

//  int main(){
//      int a,b;
//      cout<<"enter the numbers  :";
//      cin>>a>>b;
//      char c;
//      cout<<"enter the case  :";
//      cin>>c;
//      switch(c){
//          case '+':
//          cout<<a+b;
//          break;
         
//          case '-':
//          cout<<a-b;
//          break;

//          case '*':
//          cout<<a*b;
//          break;

//          case '/':
//          cout<<a/b;
//          break;

//          default:
//          cout<<"come on baby try something else , don't be too shy";
//      }
//      return 0;
//  }


int main(){
    char alpha;
    cout<<"enter the alphabet"<<endl;
    cin>>alpha;
    switch(alpha){
        case 'a':
        cout<<"it is a vowel";
        break ;

        case 'e':
        cout<<"it is a vowel";
        break;

        case 'i':
        cout<<"it is a vowel";
        break;

        case 'o':
        cout<<"it is a vowel";
        break;

        case 'u':
        cout<<"it is a vowel";
        break;

        default:
        cout<<"it is a consonent";  
        break;
    }
    return 0;
}