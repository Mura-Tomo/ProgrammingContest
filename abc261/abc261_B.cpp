#include <iostream>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    char A[N][N];
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> A[i][j];
        }
    }

    int flag = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (A[i][j] == 'W' && A[j][i] == 'W') {
                flag = 1;
            } else if (A[i][j] == 'L' && A[j][i] == 'L') {
                flag = 1;
            } else if (A[i][j] == 'W' && A[j][i] == 'D') {
                flag = 1;
            } else if (A[i][j] == 'L' && A[j][i] == 'D') {
                flag = 1;
            } else if (A[i][j] == 'D' && A[j][i] == 'W') {
                flag = 1;
            } else if (A[i][j] == 'D' && A[j][i] == 'L') {
                flag = 1;
            }  
        }
    }

    if (flag == 0) {
        cout << "correct" << endl;
    } else {
        cout << "incorrect" << endl;
    }

    return 0;
}