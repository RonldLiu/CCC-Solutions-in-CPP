#include <bits/stdc++.h>

using namespace std;

int t;
int c;
char grid[21][21];
bool visited[21][21];
int stepsTook[21][21];
int x, y;
int cx, cy;
int MinStep;

bool valid(int tx, int ty) {
    if (tx < 0 || ty < 0 || tx >= x || ty >= y) return false;
    if (grid[tx][ty] == '*') return false;
    if (!visited[tx][ty]) return true;
    if (stepsTook[tx][ty] > c) {
        stepsTook[tx][ty] = c;
        return true;
    }
    return false;
}

void doAll() {
    if (cx == x - 1 && cy == y - 1) MinStep = min(MinStep, c);
    if (grid[cx][cy] == '+') {
        if (valid(cx + 1, cy)) {
            cx++;
            c++;
            visited[cx][cy] = true;
            doAll();
            c--;
            cx--;
        }
        if (valid(cx, cy + 1)) {
            cy++;
            c++;
            visited[cx][cy] = true;
            doAll();
            c--;
            cy--;
        }
        if (valid(cx - 1, cy)) {
            cx--;
            c++;
            visited[cx][cy] = true;
            doAll();
            c--;
            cx++;
        }
        if (valid(cx, cy - 1)) {
            cy--;
            c++;
            visited[cx][cy] = true;
            doAll();
            c--;
            cy++;
        }
    } else if (grid[cx][cy] == '|') {
        if (valid(cx + 1, cy)) {
            cx++;
            c++;
            visited[cx][cy] = true;
            doAll();
            c--;
            cx--;
        }
        if (valid(cx - 1, cy)) {
            cx--;
            c++;
            visited[cx][cy] = true;
            doAll();
            c--;
            cx++;
        }
    } else if (grid[cx][cy] == '-') {
        if (valid(cx, cy + 1)) {
            cy++;
            c++;
            visited[cx][cy] = true;
            doAll();
            c--;
            cy--;
        }
        if (valid(cx, cy - 1)) {
            cy--;
            c++;
            visited[cx][cy] = true;
            doAll();
            c--;
            cy++;
        }
    }
}

int main() {
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cx = 0;
        cy = 0;
        c = 1;
        MinStep = INT_MAX;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                cin >> grid[i][j];
                visited[i][j] = false;
                stepsTook[i][j] = INT_MAX;
            }
        }
        stepsTook[0][0] = 1;
        visited[0][0] = true;
        doAll();
        if (MinStep != INT_MAX) cout << MinStep << endl;
        else cout << -1 << endl;
    }
}