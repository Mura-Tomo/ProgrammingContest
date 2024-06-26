#include <bits/stdc++.h>
using namespace std;

int par[MAX_N];
int rank[MAX_N];

void init(int n) {
    for (int i=0; i<n; i++) {
        par[i] = i;
        rank[i] = 0;
    }
}

int find (int x) {
    if (par[x] == x) {
        return x;
    } else {
        return par[x] = find(par[x]);
    }
}

void unite (int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) {
        return;
    }
    if (rank[x] < rank[y]) {
        par[x] = y;
    } else {
        par[y] = x;
        if (rank[x] == rank[y]) {
            rank[x]++;
        }
    }
}

bool same (int x, int y) {
    return find(x) == find(y);
}

int main (void) {
    int N;
    cin >> N;
    vector<int> X(N);
    vector<int> Y(N);
    for (int i=0; i<N; i++) {
        cin >> X[i] >> Y[i];
    }

    init(N);
    
    return 0;
}