#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int H1, W1;
    cin >> H1 >> W1;
    vector<vector<int>> A(H1, vector<int> (W1));
    for (int i=0; i<H1; i++) {
        for (int j=0; j<W1; j++) {
            cin >> A[i][j];
        }
    }
    int H2, W2;
    cin >> H2 >> W2;
    vector<vector<int>> B(H2, vector<int> (W2));
    for (int i=0; i<H2; i++) {
        for (int j=0; j<W2; j++) {
            cin >> B[i][j];
        }
    }

    
    return 0;
}