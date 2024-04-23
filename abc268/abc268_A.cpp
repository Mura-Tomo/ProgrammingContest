#include <bits/stdc++.h>
using namespace std;

int main (void) {
    vector<int> a(5);
    for (int i=0; i<5; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int count = 5;
    
    for (int i=0; i<4; i++) {
        if (a[i] == a[i+1]) {
            count--;
        }
    }

    cout << count << endl;

    return 0;
}