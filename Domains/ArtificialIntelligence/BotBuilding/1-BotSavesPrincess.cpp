#include <iostream>
#include <vector>
using namespace std;

class Coords {
    int botx, boty, prinx, priny;


}

void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
}
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
