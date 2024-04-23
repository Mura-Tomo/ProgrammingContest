#include <iostream>
using  namespace std;

int main (void) {
    int Y;
    cin >> Y;

    if (Y % 4 == 0) {
        cout << Y+2 << endl;
    } else if (Y % 4 == 1) {
        cout << Y+1 << endl;
    } else if (Y % 4 == 2) {
        cout << Y << endl;
    } else {
        cout << Y+3 << endl;
    }

    return 0;
}