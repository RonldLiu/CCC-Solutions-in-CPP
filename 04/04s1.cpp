#include <bits/stdc++.h>

using namespace std;

bool check(string a, string b) {
    if (a.length() <= b.length()) { //a -> b
        if (b.substr(0, a.length()) == a || b.substr(b.length() - a.length() , b.length()) == a) {
            return true;
        }
    }
    return false;
}

bool PreFixFree(string a, string b, string c) {
    if (check(a, b) || check(a, c) || check(b, a) || check(b, c) || check(c, a) || check(c, b)) {
        return true;
    }
    return false;
}

int main() {
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        string a, b, c;
        cin >> a >> b >> c;
        if (PreFixFree(a, b, c)) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}