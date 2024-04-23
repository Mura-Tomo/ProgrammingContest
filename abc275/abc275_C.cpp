#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main (void) {
    vector<string> S(9);
    for (int i=0; i<9; i++) {
        cin >> S[i];
    }

    int count = 0;
    for (int a=1; a<=9; a++) {
        for (int b=1; b<=9; b++) {
            for (int c=1; c<=9; c++) {
                for (int d=1; d<=9; d++) {
                    for (int e=1; e<=9; e++) {
                        for (int f=1; f<=9; f++) {
                            for (int g=1; g<=9; g++) {
                                for (int h=1; h<=9; h++) {
                                    int d1 = (a-c)*(a-c) + (b-d)*(b-d);
                                    int d2 = (a-e)*(a-e) + (b-f)*(b-f);
                                    int d3 = (g-c)*(g-c) + (h-d)*(h-d);
                                    int d4 = (g-e)*(g-e) + (h-f)*(h-f);
                                    if (d1 == d2 && d2 == d3 && d3 == d4) {
                                        if (S[a-1][b-1] == '#' && S[c-1][d-1] == '#' && S[e-1][f-1] == '#' && S[g-1][h-1] == '#') {
                                            count++;
                                        }
                                    }
                                }
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