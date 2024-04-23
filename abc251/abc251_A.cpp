#include <iostream>
using namespace std;

int main (void) {
    string S;
    cin >> S;

    if (S.length() == 1) {
        cout << S << S << S << S << S << S << endl;
    } else if (S.length() == 2) {
        cout << S << S << S << endl;
    } else {
        cout << S << S << endl;
    }

    return 0;
}