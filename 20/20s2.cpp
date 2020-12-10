#include <bits/stdc++.h>

using namespace std;

int gridX, gridY;

vector<pair<int, int>> grid[1000001];
bool visited[1001][1001];

bool solve(int currentX, int currentY){
    if(visited[1][1]) return true;
    int target = currentX * currentY;
    for(pair<int, int> point:grid[target]){
        if(visited[point.first][point.second]) return false;
        visited[point.first][point.second] = true;
        if(solve(point.first, point.second)) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> gridX >> gridY;
    for(int i = 1; i <= gridX; i ++) {
        for (int j = 1; j <= gridY; j++) {
            int t;
            cin >> t;
            grid[t].emplace_back(i,j);
        }
    }
    if(solve(gridX, gridY)) cout << "yes";
    else cout << "no";
}