#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int H,W;
    cin >> H >> W;
    vector<string> G(H);
    for (int i=0; i<H; i++) {
        cin >> G[i];
    }

    int x=1, y=1;
    vector<vector<int>> Z(H, vector<int>(W));
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            Z[i][j] = 0;
        }
    } 
    while (x > 0 && y > 0  && x < W+1 && y < H+1) {
        if (Z[y-1][x-1] == 0) {
            Z[y-1][x-1] = 1;
        } else {
            cout << -1 << endl;
            exit(0);
        }
        if (G[y-1][x-1] == 'U') {
            y--;
        } else if (G[y-1][x-1] == 'D') {
            y++;
        } else if (G[y-1][x-1] == 'L') {
            x--;
        } else if (G[y-1][x-1] == 'R') {
            x++;
        }
        if (x == 0) {
            cout << y << " " << 1 << endl;
        } else if (y == 0) {
            cout << 1 << " " << x << endl;
        } else if (x == W+1) {
            cout << y << " " << W << endl;
        } else if (y == H+1) {
            cout << H << " " << x << endl;
        }
    }

    return 0;
}