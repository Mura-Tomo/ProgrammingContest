#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int H, M;
    cin >> H >> M;

    int count = 0;
    while (count != 1) {
        int A, B, C, D;
        A = H / 10;
        B = H % 10;
        C = M / 10;
        D = M % 10;
        int X = A * 10 + C;
        int Y = B * 10 + D;
        if (X <= 23 && Y <= 59) {
            cout << H << " " << M << endl;
            count = 1;
        } 
        M++;
        if (M == 60) {
            if (H == 23) {
                H = 0, M = 0;
            } else {
                H++;
                M = 0;
            }
        }
    }

    return 0;
}