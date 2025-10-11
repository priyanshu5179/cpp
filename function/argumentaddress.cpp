#include <iostream>
using namespace std;

void fun(int x, int y) {
    cout << "Address of x in fun: " << &x << endl;
    cout << "Address of y in fun: " << &y << endl;
}

int main() {
    int x = 3;
    int y = 4;
    fun(x, y);
    cout << "Address of x in main: " << &x << endl;
    cout << "Address of y in main: " << &y << endl;
    return 0;
}
