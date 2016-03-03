#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    string xtime;
    int hour;
    cin >> time;

    if (time[8] == 'P') {
        xtime=time.substr(0, 2);
        hour = atoi(time.c_str());
        if (hour == 12) {
            cout << time.substr(0, 8) << endl;
        } else {
            hour += 12;
            cout << hour << time.substr(2, 6) << endl;
        }
    } else {
        xtime=time.substr(0, 2);
        hour = atoi(time.c_str());
        if (hour == 12) {
           cout << "00" << time.substr(2, 6) << endl;
        } else {
        cout << time.substr(0, 8) << endl;
        }
    }

    return 0;
}
