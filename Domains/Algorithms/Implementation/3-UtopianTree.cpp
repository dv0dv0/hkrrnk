#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n, x;
        cin >> n;

        if (n == 0) {
            cout << 1 << endl;
        } else if ( n % 2 == 0 ) {
            n += 1;
            x = pow(2, ((n+1)/2)) - 1;
            cout << x << endl;
        } else {
            x = 2 * (pow(2, ((n+1)/2)) - 1);
            cout << x << endl;
        }
    }
    return 0;
}
