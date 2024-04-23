#include <iostream>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    int P[N-1];
    for (int i=0; i<N-1; i++) {
        cin >> P[i]; 
    }

    int tmp = N;
    int count = 0;
    while (tmp != 1) {
        tmp = P[tmp-2];
        count++;
    }

    cout << count << endl;

    return 0;
}