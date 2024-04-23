#include <iostream>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    int A[N];
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    int koma[100];
    int P = 0;
    for (int i=0; i<100; i++) {
        koma[i] = -1;
    }
    for (int i=0; i<N; i++) {
        koma[i] = 0;
        for (int j=0; j<100; j++) {
            if (koma[j] >= 0) {
                koma[j] = koma[j] + A[i];
            }
        }
    }

    for (int i=0; i<100; i++) {
        if (koma[i] >= 4) {
            P++;
        }
    }

    cout << P << endl;

    return 0;
}