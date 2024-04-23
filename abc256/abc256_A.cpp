#include <iostream>
using namespace std;

int main (void) {
    int N;
    cin >> N;

    long long a = 2;
    if (N == 0) {
        cout << 1 << endl;
    } else {
        for (int i=0; i<N-1; i++) {
            a = a*2;
        }
        cout << a << endl;
    }

    return 0;
}