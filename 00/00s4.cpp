#include <bits/stdc++.h>

using namespace std;

int target, strokes;
int stroke[32];
int dp[5281];

int main() {
    cin >> target >> strokes;
    for (int i = 0; i < 5281; i++) dp[i] = target + 1;
    for (int i = 0; i < strokes; i++) cin >> stroke[i];
    dp[0] = 0;
    for (int i = 1; i <= target; i++) {
        for (int j = 0; j < strokes; j++) {
            if (stroke[j] <= i) dp[i] = min(dp[i], dp[i - stroke[j]] + 1);
        }
    }
    if (dp[target] == target + 1) cout << "Roberta acknowledges defeat." << endl;
    else cout << "Roberta wins in " << dp[target] << " strokes." << endl;
}