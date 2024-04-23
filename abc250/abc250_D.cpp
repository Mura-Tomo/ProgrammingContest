#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long long N;
    cin >> N;

    vector<long long> prime;
    vector<bool> is_prime(1000001);
    for (int i=0; i<=1000000; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;
    for (int i=0; i<1000000; i++) {
        if (is_prime[i]) {
            prime.push_back(i);
            for (int j=2*i; j<=1000000; j+=i) {
                is_prime[j] = false;
            }
        }  
    }

    long long count = 0;
    double est = 1;
    for (int i=0; i<3440; i++) {
        for (int j=i+1; j<prime.size(); j++) {
            est = (prime[j]*prime[j]*prime[j]);
            est *= prime[i];
            if (est > 1e18) {
                break;
            }
            if (prime[i] > N) {
                break;
            }
            if (prime[i] * prime[j] * prime[j] * prime[j] <= N ) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}