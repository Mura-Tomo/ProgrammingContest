#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int X, Y;
    cin >> X >> Y;

    int count = 0;
    if (X >= Y) {
        cout << 0 << endl;
    } else {
        while (X < Y) {
            X = X + 10;
            count++;
        }
        cout << count << endl;
    }
    
    return 0;
}