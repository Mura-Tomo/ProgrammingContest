#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    vector<int> num(2*N + 2);
    num[0] = 0;
    num[1] = 0;
    int number = 2;
    for (int i=0; i<N; i++) {
        num[number] = num[A[i]] + 1;
        num[number+1] = num[A[i]] + 1;
        number += 2;
    }
    for (int i=0; i<2*N+1; i++) {
        cout << num[i+1] << endl;
    }
    
    return 0;
}