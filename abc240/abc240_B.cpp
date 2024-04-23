#include <iostream>
#include <set>
using namespace std;

int main (void) {
    int N;
    cin >> N;
    int a[N];
    for (int i=0; i<N; i++) {
        cin >> a[i];
    }

    set<int> st;
    for (int i=0; i<N; i++) {
        st.insert(a[i]);
    }

    cout << st.size() << endl;

    return 0;
}