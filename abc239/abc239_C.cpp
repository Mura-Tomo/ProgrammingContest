#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long x1, y1, x2, y2;
    cin  >> x1 >> y1 >> x2 >> y2;

    long long cx, cy;
    cx = (x1+x2)/2;
    cy = (y1+y2)/2;

    for (int i=cx-1000; i<cx+1000; i++) {
        for (int j=cy-1000; j<cy+1000; j++) {
            if ((i-x1)*(i-x1) + (j-y1)*(j-y1) == 5 && (i-x2)*(i-x2) + (j-y2)*(j-y2) == 5) {
                cout << "Yes" << endl;
                exit(0);
            }
        }
    }

    cout << "No" << endl;

    return 0;
}