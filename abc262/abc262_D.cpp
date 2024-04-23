#include <iostream>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    int a[N];
    for (int i=0; i<N; i++) {
        cin >> a[i];
    }

    long long even = 0;
    for (int i=0; i<N; i++) {
        if (a[i] % 2 == 0) {
            even++;
        }
    }

    cout << even << endl;

    return 0;
}