#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a, b, c;
    a = n / 100;
    b = (n / 10) % 10;;
    c = n % 10;

    cout << a*100+b*10+c+b*100+c*10+a+c*100+a*10+b << endl;

    return 0;
}