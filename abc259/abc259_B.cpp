#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main (void) {
    int a,b,d;
    cin >> a >> b >> d;

    cout << fixed << setprecision(15) <<double(a*cos(d*M_PI/180.0)-b*sin(d*M_PI/180.0)) << " " << fixed << setprecision(15) << double(a*sin(d*M_PI/180.0)+b*cos(d*M_PI/180.0)) << endl;

    return 0;
}