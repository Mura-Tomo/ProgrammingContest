#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N, x, y;
    cin >> N >> x >> y;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    vector<int> even;
    vector<int> odd;
    for (int i=0; i<N; i++) {
        if (i % 2 == 0) {
            even.push_back(A[i]);
        } else {
            odd.push_back(A[i]);
        }
    }

    vector<vector<int>> yoko(500, vector<int> (20020));
    yoko[0][10000+even[0]] = 1;
    for (int i=1; i<even.size(); i++) {
        for (int j=10; j<20000; j++) {
            if (yoko[i-1][j-even[i]] == 1 || yoko[i-1][j+even[i]] == 1) {
                yoko[i][j] = 1;
            }
        }
    }

    vector<vector<int>> tate(500, vector<int> (20020));
    tate[0][10000-odd[0]] = 1; tate[0][10000+odd[0]] = 1;
    for (int i=1; i<odd.size(); i++) {
        for (int j=10; j<20000; j++) {
            if (tate[i-1][j-odd[i]] == 1 || tate[i-1][j+odd[i]] == 1) {
                tate[i][j] = 1;
            }
        }
    }

    if (yoko[even.size()-1][x+10000] == 1 && tate[odd.size()-1][y+10000] == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}