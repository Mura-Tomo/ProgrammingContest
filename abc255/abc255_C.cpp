#include <iostream>
using namespace std;

int main (void) {
    long long X,A,D,N;
    cin >> X >> A >> D >> N;

    long long Z;
    if (D == 0) {
        cout << abs(X-A) << endl;
    } else if (D > 0) {
        Z = (X-A)/D + 1;
        if (Z <= 0) {
            cout << abs(X-A) << endl;
        } else if (Z >= N) {
            cout << abs(X-(A+(N-1)*D)) << endl;
        } else if (abs(X-(A+(Z-1)*D)) <= abs(X-(A+Z*D))) {
            cout << abs(X-(A+(Z-1)*D)) << endl;
        } else {
            cout << abs(X-(A+Z*D)) << endl;
        }
    } else {
        Z = (X-A)/D + 1;
        if (Z <= 0) {
            cout << abs(X-A) << endl;
        } else if (Z >= N) {
            cout << abs(X-(A+(N-1)*D)) << endl;
        } else if (abs(X-(A+(Z-1)*D)) <= abs(X-(A+Z*D))) {
            cout << abs(X-(A+(Z-1)*D)) << endl;
        } else {
            cout << abs(X-(A+Z*D)) << endl;
        }
    }

    return 0;
}