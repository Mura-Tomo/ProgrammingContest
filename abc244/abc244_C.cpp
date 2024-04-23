#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;

    vector<int> a(2*N+1);
    for (int i=0; i<2*N+1; i++) {
        a[i] = 0;
    }

    int tmp;
    for (int i=0; i<=N; i++) {
        for (int j=0; j<2*N+1; j++) {
            if (a[j] == 0) {
                cout << j+1 << endl;
                a[j] = 1;
                break;
            }
        }
        cin >> tmp;
        if (tmp == 0) {
            exit(0);
        }
        a[tmp-1] = 1;
        
    }
    
    return 0;
}