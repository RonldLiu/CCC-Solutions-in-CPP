#include <bits/stdc++.h>

using namespace std;

int x;
double speed = INT_MIN;
pair<double, double> a[100000];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> x;
    for (int i = 0; i < x; i++) {
        double m, n;
        cin >> m >> n;
        a[i] = make_pair(m,n);
    }
    sort(a, a+x);
    for (int i = 0; i < x - 1; i++) speed = max(speed, abs(a[i + 1].second - a[i].second)/ (a[i + 1].first - a[i].first));
    cout << fixed << speed;
    return 0;
}