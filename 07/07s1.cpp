#include <bits/stdc++.h>

using namespace std;

bool isAllowed(int year, int month, int day) {
    if (year > 1989) {
        return false;
    } else if (year == 1989 && month > 2) {
        return false;
    } else if (year == 1989 && month == 2 && day > 27) {
        return false;
    }
    return true;
}

int main() {
    int x;
    cin >> x;
    int year[x];
    int month[x];
    int day[x];
    for (int i = 0; i < x; i++) {
        cin >> year[i] >> month[i] >> day[i];
    }
    for (int i = 0; i < x; i++) {
        if (isAllowed(year[i], month[i], day[i])) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}