#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number:";
    cin>>n;
    //4,7,10,13
    int a=4;
    for(int i=1; i<=n; i++){
            cout<< a <<endl;
            a=a+3;
    }
}