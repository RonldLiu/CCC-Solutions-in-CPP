#include <bits/stdc++.h>

using namespace std;

int numStudents;
pair<int, int> friends[9999];

int solve(int from, int target, int orgin, int count) {
    if (from == orgin && count != -1) return -1;
    if (from == target) return count;
    for (int i = 0; i < numStudents; i++) {
        if (friends[i].first == from) return solve(friends[i].second, target, orgin, count + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> numStudents;
    for (int i = 0; i < numStudents; i++) {
        int a, b;
        cin >> a >> b;
        friends[i] = make_pair(a, b);
    }
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        int r = solve(a, b, a, -1);
        if (r == -1) cout << "No" << endl;
        else cout << "Yes " << r << endl;
    }
    return 0;
}