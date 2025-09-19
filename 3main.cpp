#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter ch: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase" << endl;
    } 
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    } 
    else {
        cout << "Not an alphabet" << endl;
    }

    return 0;
}
