#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int L,R;
    cin >> L >> R;

    const char *s = "atcoder";

    char d[100];
    strncpy(d,s+L-1,R-L+1);
    d[R-L+1] = '\0';
    printf("%s\n",d);

    return 0;
}