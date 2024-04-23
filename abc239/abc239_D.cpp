#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    for (int i=2; i*i<=n; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return n != 1;
}

int main (void) {
    int A,B,C,D;
    cin >> A >> B >> C >> D;

    int count;
    for (int i=A; i<=B; i++) {
        count = 0;
        for (int j=C; j<=D; j++) {
            if (is_prime(i+j) == 1) {
                count++;
            }
        }
        if (count == 0) {
            cout << "Takahashi" << endl;
            exit(0);
        }
    }

    cout << "Aoki" << endl;

    return 0;
}