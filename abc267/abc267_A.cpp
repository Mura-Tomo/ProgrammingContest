#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S;
    cin >> S;

    if (S == "Monday") {
        cout << 5 << endl;
    } else if (S == "Tuesday") {
        cout << 4 << endl;
    } else if (S == "Wednesday") {
        cout << 3 << endl;
    } else if (S == "Thursday") {
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }
    
    return 0;
}