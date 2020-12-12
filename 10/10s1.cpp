#include <bits/stdc++.h>

using namespace std;

bool mySort(pair<int, string> a, pair<int, string> b) {
    if (a.first > b.first) {
        return true;
    } else if (a.first < b.first) {
        return false;
    } else if (a.second < b.second) {
        return true;
    } else if (a.second > b.second) {
        return false;
    }
}

int main() {
    int x;
    cin >> x;
    vector<pair<int, string>> a;
    for (int i = 0; i < x; i++) {
        string name;
        int R, S, D;
        cin >> name;
        cin >> R >> S >> D;
        a.push_back(make_pair(2 * R + 3 * S + D, name));
    }
    sort(a.begin(), a.end(), mySort);
    if (x == 0) {

    } else if (x == 1) {
        cout << a[0].second;
    } else {
        cout << a[0].second << endl;
        cout << a[1].second << endl;
    }
    return 0;
}