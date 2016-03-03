#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printStep (int s, int t);

int main(){
    int n;
    cin >> n;
    for (int x = n; x > -1; x--) {
        printStep(x, n);
    }
    return 0;
}

void printStep (int s, int t) {
    if (s == t) {
        return;
    } else {    
        string S(t, '#');
        for (int i=0; i<s; i++) {
            S[i]=' ';
        }
        cout << S << endl;
    }
    return;
}
