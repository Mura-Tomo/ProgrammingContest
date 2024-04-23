#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int A, B;
    cin >> A >> B;

    vector<int> T(3);
    vector<int> U(3);
    if (A == 0) {
        T[0] = 0;
        T[1] = 0;
        T[2] = 0;
    } else if (A == 1) {
        T[0] = 1;
        T[1] = 0;
        T[2] = 0;
    } else if (A == 2) {
        T[0] = 0;
        T[1] = 1;
        T[2] = 0;
    } else if (A == 3) {
        T[0] = 1;
        T[1] = 1;
        T[2] = 0;
    } else if (A == 4) {
        T[0] = 0;
        T[1] = 0;
        T[2] = 1;
    } else if (A == 5) {
        T[0] = 1;
        T[1] = 0;
        T[2] = 1;
    } else if (A == 6) {
        T[0] = 0;
        T[1] = 1;
        T[2] = 1;
    } else if (A == 7) {
        T[0] = 1;
        T[1] = 1;
        T[2] = 1;
    }
    if (B == 0) {
        U[0] = 0;
        U[1] = 0;
        U[2] = 0;
    } else if (B == 1) {
        U[0] = 1;
        U[1] = 0;
        U[2] = 0;
    } else if (B == 2) {
        U[0] = 0;
        U[1] = 1;
        U[2] = 0;
    } else if (B == 3) {
        U[0] = 1;
        U[1] = 1;
        U[2] = 0;
    } else if (B == 4) {
        U[0] = 0;
        U[1] = 0;
        U[2] = 1;
    } else if (B == 5) {
        U[0] = 1;
        U[1] = 0;
        U[2] = 1;
    } else if (B == 6) {
        U[0] = 0;
        U[1] = 1;
        U[2] = 1;
    } else if (B == 7) {
        U[0] = 1;
        U[1] = 1;
        U[2] = 1;
    }

    int ans = 0;
    if (T[0] == 1 || U[0] == 1) {
        ans += 1;
    }
    if (T[1] == 1 || U[1] == 1) {
        ans += 2;
    }
    if (T[2] == 1 || U[2] == 1) {
        ans += 4;
    }

    cout << ans << endl;
    
    return 0;
}