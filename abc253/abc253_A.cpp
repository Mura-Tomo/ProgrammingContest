#include <iostream>
using namespace std;

int main(void) {
    int a,b,c;
    cin >> a >> b >> c;

    if (a <= b && b <= c) {
        cout << "Yes" << endl;
    } else if (c <= b && b <= a) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}