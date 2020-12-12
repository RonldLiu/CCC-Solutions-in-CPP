#include <bits/stdc++.h>

using namespace std;

int maxR, maxC, cats;
int table[25][25];

int solve(int r, int c) {
    if (r > maxR - 1 || c > maxC - 1) return 0;
    if (table[r][c] != -1) return table[r][c];
    table[r][c] = solve(r + 1, c) + solve(r, c + 1);
    return table[r][c];
}

int main() {
    cin >> maxR >> maxC >> cats;
    memset(table, -1, sizeof(table));
    for (int i = 0; i < cats; i++) {
        int a, b;
        cin >> a >> b;
        table[a - 1][b - 1] = 0;
    }
    table[maxR - 1][maxC - 1] = 1;
    cout << solve(0, 0);
    return 0;
}