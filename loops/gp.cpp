#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number:";
    cin>>n;
    //1,2,4,8,16,32.....n
    int a=112;
    for(int i=1; i<=n; i++){
            cout<< a <<endl;
            a=a*2;
    }
}