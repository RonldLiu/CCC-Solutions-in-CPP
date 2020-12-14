#include <bits/stdc++.h>

using namespace std;

string action;
int grid[2][2] = {{1, 2},
                  {3, 4}};

void flipX() {
    swap(grid[0][0], grid[0][1]);
    swap(grid[1][0], grid[1][1]);
}

void flipY() {
    swap(grid[0][0], grid[1][0]);
    swap(grid[0][1], grid[1][1]);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> action;
    for (char c:action) {
        if (c == 'V') flipX();
        else flipY();
    }
    cout << grid[0][0] << " " << grid[0][1] << "\n" << grid[1][0] << " " << grid[1][1];
    return 0;
}