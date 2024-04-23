#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i=0; i<H; i++) {
        cin >> S[i];
    }

    int count = 0;
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            if (S[i][j] == '#') {
                count++;
            } 
        }
    }

    cout << count << endl;

    return 0;
}