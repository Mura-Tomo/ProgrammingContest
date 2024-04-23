#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i=0; i<N; i++) {
        cin >> S[i];
    }

    for (int i=0; i<N-5; i++) {
        for (int j=0; j<N; j++) {
            int tate = 0;
            for (int k=0; k<6; k++) {
                if (S[i+k][j] == '#') {
                    tate++;
                }
            }
            if (tate >= 4) {
                cout << "Yes" << endl;
                exit(0);
            }
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N-5; j++) {
            int yoko = 0;
            for (int k=0; k<6; k++) {
                if (S[i][j+k] == '#') {
                    yoko++;
                }
            }
            if (yoko >= 4) {
                cout << "Yes" << endl;
                exit(0);
            }
        }
    }


    for (int i=0; i<N-5; i++) {
        for (int j=0; j<N-5; j++) {
            int naname1 = 0;
            int naname2 = 0;
            for (int k=0; k<6; k++) {
                if (S[i+k][j+k] == '#') {
                    naname1++;
                }
                if (S[i+5-k][j+k] == '#') {
                    naname2++;
                }
            }
            if (naname1 >= 4 || naname2 >= 4) {
                cout << "Yes" << endl;
                exit(0);
            }
        }
    }

    cout << "No" << endl;

    return 0;
}