#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#define UNDEF   "-1"
#define THREE   "555"
#define FIVE    "33333"
#define SIX     "555555"
#define EIGHT   "55533333"
#define NINE    "555555555"
#define TEN     "3333333333"

using namespace std;

void lastTen(int n);

int main(){
    int t;
    int i;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        i = n;

        //      check if 1 - 10
        if (n < 11) {
            lastTen (n);
        } else {
            while (i > 10) {
                cout << "555";
                i -= 3;
            }
            lastTen(i);
        }

    }
    return 0;
}

void lastTen (int n) {

    switch (n) {
        case 3:
            cout << THREE << endl;
            break;
        case 5:
            cout << FIVE << endl;
            break;
        case 6:
            cout << SIX << endl;
            break;
        case 8:
            cout << EIGHT << endl;
            break;
        case 9:
            cout << NINE << endl;
            break;
        case 10:
            cout << TEN << endl;
            break;
        default:
            cout << UNDEF << endl;
            break;
    }
    return;
}
