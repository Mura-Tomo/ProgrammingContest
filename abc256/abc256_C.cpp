#include <iostream>
using namespace std;

int main (void) {
    int h1,h2,h3,w1,w2,w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;

    int a1,b1,c1,a2,b2,c2,a3,b3,c3;
    int count = 0;

    for (int i=1; i<=h1-2; i++) {
        for (int j=1; j<=h1-i-1; j++) {
            for (int k=1; k<=h2-2; k++) {
                for (int l=1; l<=h2-k-1; l++) {
                    for (int m=1; m<=h3-2; m++) {
                        for (int n=1; n<=h3-m-1; n++) {
                            a1 = i; b1 = j; c1 = h1-i-j;
                            a2 = k; b2 = l; c2 = h2-k-l;
                            a3 = m; b3 = n; c3 = h3-m-n;
                            if (a1+a2+a3==w1 && b1+b2+b3==w2 && c1+c2+c3==w3) {
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}