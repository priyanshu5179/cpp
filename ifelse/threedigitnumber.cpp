#include <iostream>
using namespace std;
int main (){
     int a,b,c;
     cout<<"enter a number";
     cin>>a;
     cout<<"enter b number";
     cin>>b;
     cout<<"enter c number";
     cin>>c;
     if (a>b && a>c){
        cout<<"a is greatest number";
     }
     if (b>a && b>c){
        cout<<"b is greatest number";
     }
     if (c>b && c>a){
        cout<<"c is greatest number";
     }
     else{
        cout<<"all are equal";
     }
    }