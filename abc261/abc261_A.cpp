#include <iostream>
using namespace std;

int main (void) {
    int L1,R1,L2,R2;
    cin >> L1 >> R1 >> L2 >> R2;

    if (R1 <= L2 || R2 <= L1) {
        cout << 0 << endl;
    } else if (L2 < R1 && R1 <= R2 && L1 <= L2) {
        cout << R1-L2 << endl;
    } else if (L2 < R1 && R2 < R1 && L1 <= L2) {
        cout << R2-L2 << endl;
    } else if (L1 < R2 && R2 <= R1 && L2 < L1) {
        cout << R2-L1 << endl;
    } else if (L1 < R2 && R1 < R2 && L2 < L1) {
        cout << R1-L1 << endl;
    }

    return 0;
}