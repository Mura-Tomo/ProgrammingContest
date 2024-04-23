#include <iostream>
using namespace std;

int main (void) {
    int N,M,X,T,D;
    cin >> N >> M >> X >> T >> D;

    if (M >= X) {
        cout << T << endl;
    } else if (M < X) {
        cout << T-(X-M)*D << endl;
    }

    return 0;
}