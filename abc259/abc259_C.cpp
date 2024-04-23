#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string S, T;
    cin >> S >> T;

    vector<pair<string, int>> A(S.length());
    vector<pair<string, int>> B(T.length());
    for (int i=0; i<S.length(); i++) {
        A[i].second = 0;
    }
    for (int i=0; i<T.length(); i++) {
        B[i].second = 0;
    }
    int j = 0;
    for (int i=0; i<S.length(); i++) {
        if (S[i+1] == S[i]) {
            A[j].second++;
        } else {
            A[j].first = S[i];
            A[j].second++;
            j++;
        }
    }
    j = 0;
    for (int i=0; i<T.length(); i++) {
        if (T[i+1] == T[i]) {
            B[j].second++;
        } else {
            B[j].first = T[i];
            B[j].second++;
            j++;
        }
    }

    if (S.length() > T.length()) {
        cout << "No" << endl;
    } else {
        for (int i=0; i<S.length(); i++) {
            if (A[i].second == 1 && B[i].second != 1) {
                cout << "No" << endl;
                exit(0);
            } else if (A[i].second > B[i].second) {
                cout << "No" << endl;
                exit(0);
            } else if (A[i].second == 0 && B[i].second != 0) {
                cout << "No" << endl;
                exit(0);
            } else if (A[i].second != 0 && B[i].second == 0) {
                cout << "No" << endl;
                exit(0);
            } else if (A[i].first != B[i].first) {
                cout << "No" << endl;
                exit(0);
            }
        }
        cout << "Yes" << endl;
    }
    
    return 0;
}