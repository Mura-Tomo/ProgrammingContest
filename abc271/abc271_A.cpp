#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;

    int a = N % 16;
    int b = (N / 16) % 16;

    if (b == 10) {
        cout << 'A';
    } else if (b == 11) {
        cout << 'B';
    } else if (b == 12) {
        cout << 'C';
    } else if (b == 13) {
        cout << 'D';
    } else if (b == 14) {
        cout << 'E';
    } else if (b == 15) {
        cout << 'F';
    } else {
        cout << b;
    }

    if (a == 10) {
        cout << 'A' << endl;
    } else if (a == 11) {
        cout << 'B' << endl;
    } else if (a == 12) {
        cout << 'C' << endl;
    } else if (a == 13) {
        cout << 'D' << endl;
    } else if (a == 14) {
        cout << 'E' << endl;
    } else if (a == 15) {
        cout << 'F' << endl;
    } else {
        cout << a << endl;
    }

    return 0;
}