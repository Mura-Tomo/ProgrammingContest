#include <iostream>
using namespace std;

int main (void) {
    int N,sx,sy,tx,ty;
    cin >> N >> sx >> sy >> tx >> ty;
    int x[N];
    int y[N];
    int r[N];
    for (int i=0; i<N; i++) {
        cin >> x[i] << y[i] << r[i;]
    }

    double d;
    int koten[N][N];
    for (int i=0; i<N; i++) {
        for (int i=0; i<N; i++) {
            koten[i][j] = 0;
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            d = sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            if (d > r[i]+r[j]) {
                koten[i][j] = -1;
            } else if (d < abs(r[i]+r[j])) {
                koten[i][j] = -1;
            }
        }
    }

    
}