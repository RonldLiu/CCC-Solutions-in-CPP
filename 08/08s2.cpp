#include <bits/stdc++.h>

using namespace std;

int pennies(int r) {
    int count = 0;
    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= r; j++) {
            if (pow(i, 2) + pow(j, 2) <= pow(r, 2)) {
                count++;
            } else {
                break;
            }
        }
    }
    return (count * 2 - r - 1) * 2 - 2 * r - 1;
}

int main() {
    while (true) {
        int x;
        cin >> x;
        if (x == 0) {
            break;
        } else {
            cout << pennies(x) << endl;
        }
    }
    return 0;
}