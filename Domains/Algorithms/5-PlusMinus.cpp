#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    double pos = 0;
    double neg = 0;
    double zero = 0;
    double fract;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
        if (arr[arr_i] < 0) {
            neg += 1;
        }
        if (arr[arr_i] == 0) {
            zero += 1;
        }
        if (arr[arr_i] > 0) {
            pos += 1;
        }
    }

    cout << setprecision(6) << fixed;
    cout << pos/n << endl;
    cout << neg/n << endl;
    cout << zero/n << endl;
    return 0;
}
