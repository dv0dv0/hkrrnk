#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    int ots;
    cin >> t;

//  loop per test case
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        ots = 0;
        cin >> n >> k;
        vector<int> a(n);

 //     loop per element in vector
        for(int a_i = 0;a_i < n;a_i++){
            cin >> a[a_i];

  //        if student on time      
            if (a[a_i] <= 0) {
                ots += 1;
            }

        }
        if (ots < k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    return 0;
}

