#include <bits/stdc++.h>
using namespace std;

int main (void) {
    double Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;

    double x;
    x = ((Ay-Cy)*Ax/(Ax-Cx) - (By-Dy)*Bx/(Bx-Dx) - Ay + By) / ((Ay-Cy)/(Ax-Cx) - (By-Dy)/(Bx-Dx));

    if (Ax < x && x < Cx && Bx < x && x < Dx) {
        cout << "Yes" << endl;
        exit(0);
    } else if (Cx < x && x < Ax && Bx < x && x < Dx) {
        cout << "Yes" << endl;
        exit(0);
    } else if (Ax < x && x < Cx && Dx < x && x < Bx) {
        cout << "Yes" << endl;
        exit(0);
    } else if (Cx < x && x < Ax && Dx < x && x < Bx) {
        cout << "Yes" << endl;
        exit(0);
    }

    cout << "No" << endl;

    return 0;
}