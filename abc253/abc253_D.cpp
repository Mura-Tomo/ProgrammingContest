#include <bits/stdc++.h>
using namespace std;

int gcd(long long a, long long b) {
    if (a%b == 0) {
        return b;
    } else {
        return gcd(b, a%b);
    }
}

int main (void) {
    long long N, A, B;
    cin >> N >> A >> B;

    long long answer;
    answer = N*(N+1)/2;

    long long C = A*B / gcd(A, B);
    answer -= (N/A)*(A+A*(N/A))/2;
    if (A != B) {
        answer -= (N/B)*(B+B*(N/B))/2;
    }
    if (A != B) {
        answer += (N/C)*(C+C*(N/C))/2;
    }

    cout << answer << endl;
}