#include <iostream>
using namespace std;

int main (void) {
    int N,X;
    cin >> N >> X;
 
    char c;
    if (X % N == 0) {
        c = 'A' + X/N - 1;
    } else {
        c = 'A' + X/N;
    }

    cout << c << endl;

    return 0;
}