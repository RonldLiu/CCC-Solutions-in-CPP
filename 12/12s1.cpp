#include <bits/stdc++.h>

using namespace std;

int n;
int counter = 0;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    if (n < 4) cout << 0;
    else {
        for (int i = n-1; i>2; i--) {
            for (int j = i-1; j > 1; j--) {
                for (int k = j-1; k >0; k--) {
                    counter++;
                }
            }
        }
        cout << counter;
    }
    return 0;
}