#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long H;
    cin >> H;

    double answer;
    answer = sqrt(H*(12800000+H));

    printf("%.9f\n",answer);

    return 0;
}