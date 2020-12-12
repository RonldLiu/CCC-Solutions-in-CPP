#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c = 0;
    cin >> a >> b;
    for (int i = sqrt(a); i <= sqrt(b); i++) {
        for (int f = cbrt(a); f <= cbrt(b); f++) {
            if (pow(i, 2) == pow(f, 3)) {
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}