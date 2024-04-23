#include <iostream>
using namespace std;

int main (void) {
    int K;
    cin >> K;

    int b = 0;
    
    b = K % 60;
    if ( K >= 0 && K < 10) {
        cout << "21:0" << b << endl;
    } else if (K >= 10 && K < 60) {
        cout << "21:" << b << endl;
    } else if (K >= 60 && K < 70) {
        cout << "22:0" << b << endl;
    } else {
        cout << "22:" << b << endl;
    }

    return 0;
}