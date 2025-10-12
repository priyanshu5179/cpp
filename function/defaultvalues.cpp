#include <iostream>
using namespace std;

void fun(int x=4, int y=5) {//when any default values not gives then show error 
    cout << x<<" "<<y;
    }
int main (){
    fun(6,7);
}
  