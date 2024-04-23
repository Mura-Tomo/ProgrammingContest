#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S;
    cin >> S;

    int a, b, c, d, e, f, g;
    if (S[6] == '0') {
        a = 0;
    } else {
        a = 1;
    }
    if (S[3] == '0') {
        b = 0;
    } else {
        b = 1;
    }
    if (S[7] == '0' && S[1] == '0') {
        c = 0;
    } else {
        c = 1;
    }
    if (S[0] == '0' && S[4] == '0') {
        d = 0;
    } else {
        d = 1;
    }
    if (S[2] == '0' && S[8] == '0') {
        e = 0;
    } else {
        e = 1;
    }
    if (S[5] == '0') {
        f = 0;
    } else {
        f = 1;
    }
    if (S[9] == '0') {
        g = 0;
    } else {
        g = 1;
    }

    if (S[0] == '1') {
        cout << "No" << endl;
        exit(0);
    } else {
        if (a == 1 && c == 1 && b == 0) {
            cout << "Yes" << endl;
            exit(0);
        } 
        if (a == 1 && d == 1) {
            if (b == 0 || c == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (a == 1 && e == 1) {
            if (b == 0 || c == 0 || d == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (a == 1 && f == 1) {
            if (b == 0 || c == 0 || d == 0 || e == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (a == 1 && g == 1) {
            if (b == 0 || c == 0 || d == 0 || e == 0 || f == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (b == 1 && d == 1) {
            if (c == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (b == 1 && e == 1) {
            if (c == 0 || d == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (b == 1 && f == 1) {
            if (c == 0 || d == 0 || e == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (b == 1 && g == 1) {
            if (c == 0 || d == 0 || e == 0 || f == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (c == 1 && e == 1) {
            if (d == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (c == 1 && f == 1) {
            if (d == 0 || e == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (c == 1 && g == 1) {
            if (d == 0 || e == 0 || f == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (d == 1 && f == 1) {
            if (e == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (d == 1 && g == 1) {
            if (e == 0 || f == 0) {
                cout << "Yes" << endl;
                exit(0);
            }
        } 
        if (e == 1 && g == 1 && f == 0) {
            cout << "Yes" << endl;
            exit(0);
        }
    }

    cout << "No" << endl;

    return 0;
}