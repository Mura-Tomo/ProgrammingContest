#include <bits/stdc++.h>
using namespace std;

int main (void) {
    vector<string> S(10);
    for (int i=0; i<10; i++) {
        cin >> S[i];
    }

    int A = 0, B = 0, C = 0, D = 0;
    int count = 0;
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            if (S[i][j] == '#' && count == 0) {
                A = i+1; B = j+1;
                count++;
            } else if (S[i][j] == '#') {
                C = i+1; D = j+1;
                count++;
            }
        }
    }

    if (count == 1) {
        cout << A << " " << A << endl;
        cout << B << " " << B << endl;
    } else {
        cout << A << " " << C << endl;
        cout << B << " " << D << endl;
    }

    return 0;
}