#include <iostream>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    int a[N];
    for (int i=0; i<N; i++) {
        cin >> a[i];
    }

    long long count1 = 0;
    for (int i=0; i<N; i++) {
        if (a[i] == i+1) {
            count1++;
        }
    }

    long long count2 = 0;
    for (int i=0; i<N; i++) {
        if (a[a[i]-1] == i+1 && a[i] != i+1) {
            count2++;
        }
    }

    cout <<  (count1*(count1-1)/2) + (count2/2) << endl;

    return 0;
}