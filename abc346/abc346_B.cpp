#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int W, B;
    cin >> W >> B;

    int ans = 0;
    if (W == 0 && B == 1) {
        ans = 1;
    }
    if (W == 1 && B == 0) {
        ans = 1;
    }
    if (W == 2 && B == 0) {
        ans = 1;
    }
    string S = "wbwbwwbwbwbwwbwbwwbwbwbw";
    for (int i=0; i<24; i++) {
        for (int j=i; j<=24; j++) {
            int w=0, b=0;
            string tmp = S.substr(i, j-i);
            for (int k=0; k<tmp.length(); k++) {
                if (tmp[k] == 'w') {
                    w++;
                } else {
                    b++;
                }
            }
            if (W == w  && B == b) {
                ans = 1;
            }
            if (W == (w+14) && B == (b+10)) {
                ans = 1;
            }
            if (W == (w+28) && B == (b+20)) {
                ans = 1;
            }
            if (W == (w+42) && B == (b+30)) {
                ans = 1;
            }
            if (W == (w+56) && B == (b+40)) {
                ans = 1;
            }
            if (W == (w+70) && B == (b+50)) {
                ans = 1;
            }
            if (W == (w+84) && B == (b+60)) {
                ans = 1;
            }
            if (W == (w+98) && B == (b+70)) {
                ans = 1;
            }
            if (W == (w+112) && B == (b+80)) {
                ans = 1;
            }
        }
    }

    if (ans == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}