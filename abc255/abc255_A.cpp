#include <iostream>
using namespace std;

int main (void) {
    int R,C;
    cin >> R >> C;
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if (R == 1 && C == 1) {
        cout << a << endl; 
    } else if (R == 1 && C == 2) {
        cout << b << endl;
    } else if (R == 2 && C == 1) {
        cout << c << endl;
    } else { 
        cout << d << endl;
    }

    return 0;
}