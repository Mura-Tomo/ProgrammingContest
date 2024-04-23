#include <iostream>
using namespace std;

int main(void) {
    int H,W;
    cin >> H >> W;
    string S[H];
    for (int i=0; i<H; i++) {
        cin >> S[i];
    }

    int x1 = -1,y1 = -1,x2 = -1,y2 = -1;
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            if (S[i][j] == 'o' && x1 == -1 && y1 == -1) {
                x1 = i;
                y1 = j;
            } else if (S[i][j] == 'o' && x1 != -1 && y1 != -1) {
                x2 = i;
                y2 = j;
            }
        }
    }

    cout << abs(x1-x2) + abs(y1-y2) << endl;

    return 0;
}