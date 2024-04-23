#include <iostream>
using namespace std;

int main (void) {
    int a,b;
    cin >> a >> b;
    
    if (abs(a-b) == 1) {
        cout << "Yes" << endl;
    } else if (abs(a-b) == 9) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}