#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int X,Y,N;
    cin >> X >> Y >> N;

    if (X*3 < Y) {
        cout << X*N << endl;
    } else {
        cout << X*(N%3) + Y*(N/3) << endl;
    } 
    
    return 0;
}