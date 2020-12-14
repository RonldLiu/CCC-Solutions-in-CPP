#include <bits/stdc++.h>

using namespace std;

int n;

string solve(int num) {
    int sum = 1;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) sum += i;
    }
    if (sum == num) return to_string(num) + " is a perfect number.";
    if (sum > num) return to_string(num) + " is an abundant number.";
    if (sum < num) return to_string(num) + " is a deficient number.";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        cout << solve(temp) << "\n";
    }
    return 0;
}