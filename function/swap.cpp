#include <iostream>
using namespace std;
//int main (){
  //  int a ,b;
    //cin>>a>>b;
    ///int temp=a;
    //a=b;
    ///b=te;
    //cout <<a<<" "<<b;
//}
int swap(int a , int b){
    int temp =a;
    a=b;
    b=temp;
      return;
}
int main (){
    int a ,b;
    cin>>a>>b;
    swap(a,b);
    cout <<a<<" "<<b;
}
//using function dont swap because of  create a new variable
