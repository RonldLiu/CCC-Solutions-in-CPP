#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, g, r, o, target, count = 0, minn = INT_MAX;
    cin >> p >> g >> r >> o >> target;
    for (int i = 0; i < target / p + 1; i++) {
        for (int j = 0; j < target / g + 1; j++) {
            for (int k = 0; k < target / r + 1; k++) {
                for (int l = 0; l < target / o + 1; l++) {
                    if (i * p + j * g + k * r + l * o == target) {
                        cout << "# of PINK is " << i << " # of GREEN is " << j << " # of RED is " << k
                             << " # of ORANGE is " << l << endl;
                        count++;
                        minn = min(minn, i + j + k + l);
                    }
                }
            }
        }
    }
    cout << "Total combinations is " << count << "." << endl;
    cout << "Minimum number of tickets to print is " << minn << "." << endl;
    return 0;
}