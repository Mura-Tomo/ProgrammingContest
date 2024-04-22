#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> X(N), Y(N);
    for(int i=0; i<N; i++) {
        cin >> X[i] >> Y[i];
    }

    vector<vector<double>> d(N, vector<double>(N));
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            d[i][j] = sqrt((X[i]-X[j])*(X[i]-X[j]) + (Y[i]-Y[j])*(Y[i]-Y[j]));
        }
    }

    for (int i=0; i<N; i++) {
        double max = 0.0;
        int ans = 0;
        for (int j=0; j<N; j++) {
            if (d[i][j] > max) {
                max = d[i][j];
                ans = j+1;    
            }        
        }
        cout << ans << endl;
    }

    return 0;
}