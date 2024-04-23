#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int R,C;
    cin >> R >> C;

    if (R == 1) {
        cout << "black" << endl;
    } else if (R == 2) {
        if (C == 1 || C == 15) {
            cout << "black" << endl;
        } else {
            cout << "white" << endl;
        }
    } else if (R == 3) {
        if (C == 2 || C == 14) {
            cout << "white" << endl;
        } else {
            cout << "black" << endl;
        }
    } else if (R == 4) {
        if (C == 1 || C == 3 || C == 13 || C == 15) {
            cout << "black" << endl;
        } else {
            cout << "white" << endl;
        }
    } else if (R == 5) {
        if (C == 2 || C == 4 || C == 12 || C == 14) {
            cout << "white" << endl;
        } else {
            cout << "black" << endl;
        }
    } else if (R == 6) {
        if (C == 1 || C == 3 || C == 5 || C == 11 || C == 13 || C == 15) {
            cout << "black" << endl;
        } else {
            cout << "white" << endl;
        }
    } else if (R == 7) {
        if (C == 2 || C == 4 || C == 6 || C == 10 || C == 12 || C == 14) {
            cout << "white" << endl;
        } else {
            cout << "black" << endl;
        }
    } else if (R == 8) {
        if (C == 2 || C == 4 || C == 6 || C == 8 || C == 10 || C == 12 || C == 14) {
            cout << "white" << endl;
        } else {
            cout << "black" << endl;
        }
    } else if (R == 9) {
        if (C == 2 || C == 4 || C == 6 || C == 10 || C == 12 || C == 14) {
            cout << "white" << endl;
        } else {
            cout << "black" << endl;
        }
    } else if (R == 10) {
        if (C == 1 || C == 3 || C == 5 || C == 11 || C == 13 || C == 15) {
            cout << "black" << endl;
        } else {
            cout << "white" << endl;
        }
    } else if (R == 11) {
        if (C == 2 || C == 4 || C == 12 || C == 14) {
            cout << "white" << endl;
        } else {
            cout << "black" << endl;
        }
    } else if (R == 12) {
        if (C == 1 || C == 3 || C == 13 || C == 15) {
            cout << "black" << endl;
        } else {
            cout << "white" << endl;
        }
    } else if (R == 13) {
        if (C == 2 || C == 14) {
            cout << "white" << endl;
        } else {
            cout << "black" << endl;
        }
    } else if (R == 14) {
        if (C == 1 || C == 15) {
            cout << "black" << endl;
        } else {
            cout << "white" << endl;
        }
    } else {
        cout << "black" << endl;
    }

    return 0;
}