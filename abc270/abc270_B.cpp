#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    if (0 <= X && X <= Y && Y <= Z) {
        cout << X << endl;
    } else if (0 <= X && X <= Z && Z <= Y) {
        cout << X << endl;
    } else if (X <= 0 && 0 <= Y && Y <= Z) {
        cout << -X << endl;
    } else if (X <= 0 && 0 <= Z && Z <= Y) {
        cout << -X << endl;
    } else if (Y <= 0 && 0 <= X && X <= Z) {
        cout << X << endl;
    } else if (Y <= 0 && 0 <= Z && Z <= X) {
        cout << X << endl;
    } else if (Z <= 0 && 0 <= X && X <= Y) {
        cout << X << endl;
    } else if (Z <= 0 && 0 <= Y && Y <= X) {
        cout << X - Z - Z << endl;
    } else if (0 <= Y && Y <= Z && Z <= X) {
        cout << -1 << endl;
    } else if (0 <= Y && Y <= X && X <= Z) {
        cout << -1 << endl;
    } else if (0 <= Z && Z <= X && X <= Y) {
        cout << X << endl;
    } else if (0 <= Z && Z <= Y && Y <= X) {
        cout << X << endl;
    } else if (X <= Y && Y <= Z && Z <= 0) {
        cout << -X << endl;
    } else if (X <= Z && Z <= Y && Y <= 0) {
        cout << -1 << endl;
    } else if (Y <= X && X <= Z && Z <= 0) {
        cout << -X << endl;
    } else if (Y <= Z && Z <= X && X <= 0) {
        cout << -X << endl;
    } else if (Z <= X && X <= Y && Y <= 0) {
        cout << -1 << endl;
    } else if (Z <= Y && Y <= X && X <= 0) {
        cout << -X << endl;
    } else if (X <= Y && Y <= 0 && 0 <= Z) {
        cout << Z - X + Z << endl;
    } else if (Y <= X && X <= 0 && 0 <= Z) {
        cout << -X << endl;
    } else if (X <= Z && Z <= 0 && 0 <= Y) {
        cout << -X << endl;
    } else if (Y <= Z && Z <= 0 && 0 <= X) {
        cout << X << endl;
    } else if (Z <= X && X <= 0 && 0 <= Y) {
        cout << -X << endl;
    } else if (Z <= Y && Y <= 0 && 0 <= X) {
        cout << X << endl;
    }

    return 0;
}