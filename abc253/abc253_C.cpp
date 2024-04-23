#include <iostream>
#include <set>
using namespace std;

int main(void) {
    int Q;
    cin >> Q;
    int q[Q][3];
    for (int i=0; i<Q; i++) {
        cin >> q[i][0];
        if (q[i][0] == 1) {
            cin >> q[i][1];
            q[i][2] = 0;
        } else if (q[i][0] == 2) {
            cin >> q[i][1] >> q[i][2];
        } else {
            q[i][1] = 0;
            q[i][2] = 0;
        }
    }

    multiset<int> st;
    for (int i=0; i<Q; i++) {
        if (q[i][0] == 1) {
            st.insert(q[i][1]);
        } else if (q[i][0] == 2) {
            while (q[i][2]-- and st.find(q[i][1]) != st.end()) {
                st.erase(st.find(q[i][1]));
            }
        } else {
            cout << *(st.rbegin()) - *(st.begin()) << endl;
        }
    }

    return 0;
}