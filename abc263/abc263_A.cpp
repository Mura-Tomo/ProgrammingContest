#include <iostream>
using namespace std;

int main (void) {
    int A,B,C,D,E;
    cin >> A >> B >> C >> D >> E;

    if (A == B && B == C && D == E) {
        cout << "Yes" << endl;
    } else if (A == B && B == D && C == E) {
        cout << "Yes" << endl;
    }  else if (A == B && B == E && C == D) {
        cout << "Yes" << endl;
    } else if (A == C && C == D && B == E) {
        cout << "Yes" << endl;
    } else if (A == C && C == E && B == D) {
        cout << "Yes" << endl;
    } else if (A == D && D == E && B == C) {
        cout << "Yes" << endl;
    } else if (B == C && C == D && A == E) {
        cout << "Yes" << endl;
    } else if (B == C && C == E && A == D) {
        cout << "Yes" << endl;
    } else if (C == D && D == E && A == B) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;

}