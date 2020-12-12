#include <bits/stdc++.h>

using namespace std;

string q;
int x;
string a[20];
string b[20];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> a[i] >> b[i];
    }
    cin >> q;
    string ans = "";
    while (q.length() > 0) {
        for (int i = 0; i < x; i++) {
            if (q.find(b[i]) == 0) {
                ans += a[i];
                q = q.substr(b[i].length(), q.length() - b[i].length());
                break;
            }
        }
    }
    cout << ans;
    return 0;
}