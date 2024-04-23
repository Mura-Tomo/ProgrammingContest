#include <iostream>
#include <string>
using namespace std;

int main (void) {
    int N,Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    int t[Q];
    int x[Q];
    for (int i=0; i<Q; i++) {
            cin >> t[i] >> x[i];
    }

    long long sum = 0;
    for (int i=0; i<Q; i++) {
        if (t[i] == 1) {
            sum += x[i];
        } else {
            long long ans = x[i]-1-sum;
            ans = ans % N;
            if (ans < 0) {
                ans = ans + N;
            }
            cout << S[ans] << endl;
        }
    }

    return 0;
}