#include <bits/stdc++.h>
using namespace std;

int main (void) {
    string s;
    cin >> s;

    char tmp;
    int count = 0;
    int a,t,c,o,d,e,r;
    a = s.find("a");
    for (int i=a; i>0; i--) {
        tmp = s[i]; 
        s[i] = s[i-1];
        s[i-1] = tmp;
        count++;
    }
    t = s.find("t");
    for (int i=t; i>1; i--) {
        tmp = s[i]; 
        s[i] = s[i-1];
        s[i-1] = tmp;
        count++;
    }
    c = s.find("c");
    for (int i=c; i>2; i--) {
        tmp = s[i]; 
        s[i] = s[i-1];
        s[i-1] = tmp;
        count++;
    }
    o = s.find("o");
    for (int i=o; i>3; i--) {
        tmp = s[i]; 
        s[i] = s[i-1];
        s[i-1] = tmp;
        count++;
    }
    d = s.find("d");
    for (int i=d; i>4; i--) {
        tmp = s[i]; 
        s[i] = s[i-1];
        s[i-1] = tmp;
        count++;
    }
    e = s.find("e");
    for (int i=e; i>5; i--) {
        tmp = s[i]; 
        s[i] = s[i-1];
        s[i-1] = tmp;
        count++;
    }
    cout << count << endl;

    return 0; 
}