#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, z;
    int x = 0;
    int y = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
        for(int a_j = 0;a_j < n;a_j++){
            cin >> a[a_i][a_j];
            if (a_i == a_j) {
                x += a[a_i][a_j];
            }
            if ((a_i + a_j) == (n - 1)) {
                y += a[a_i][a_j];
            }
        }
    }
    z = abs(x - y);
    cout << z;
    return 0;
}
